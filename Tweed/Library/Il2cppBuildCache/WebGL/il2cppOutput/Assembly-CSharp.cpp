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
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416;
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction>
struct IEnumerator_1_t5B9514E3D12F47B7EA1DA86A54C8BCD962D07630;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB;
// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>[]
struct Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.InputSystem.InputAction[]
struct InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73;
// UnityEngine.InputSystem.InputActionMap[]
struct InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580;
// UnityEngine.InputSystem.InputBinding[]
struct InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E;
// UnityEngine.InputSystem.InputControl[]
struct InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67;
// UnityEngine.InputSystem.InputControlScheme[]
struct InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533;
// UnityEngine.InputSystem.InputDevice[]
struct InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[]
struct DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E;
// CharacterController2D
struct CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A;
// CharacterInput
struct CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48;
// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E;
// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226;
// UnityEngine.InputSystem.InputActionState
struct InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UnityEngine.Experimental.Rendering.Universal.Light2D
struct Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF;
// LightingTask
struct LightingTask_tDDE3B2649698157708B5552518862B4053D44975;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// NetworkManager
struct NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// NutritionTask
struct NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// PlantManager
struct PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA;
// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// RoomManager
struct RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// TaskEnter
struct TaskEnter_t2A923415BDFA13E00EEF41301930ABC814D62FE3;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TriggerLightTask
struct TriggerLightTask_tF558497883F3635F15C52E3F84FDD830C02664FE;
// TriggerNutriTask
struct TriggerNutriTask_t816ECE7538DDB79BB8C73D322F27050078FC2AFE;
// TriggerWaterTask
struct TriggerWaterTask_tE61098CE10A3846C154FD6E0C2F5E192BBBC1891;
// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// WateringTask
struct WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690;
// CharacterController2D/BoolEvent
struct BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659;
// CharacterInput/IPlayerActions
struct IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9;
// RoomManager/<cycleIsOver>d__18
struct U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral192133D71494A4CA0994DD1D8C21D029CD3D3188;
IL2CPP_EXTERN_C String_t* _stringLiteral1BCA69AC7AE2261B8C62E8C523FBAF0853527187;
IL2CPP_EXTERN_C String_t* _stringLiteral26FC3835E7F0AB039D303C68C6CD7A2BA5237E46;
IL2CPP_EXTERN_C String_t* _stringLiteral276ECBDB922BA52FC83448ABC78E76E42421B150;
IL2CPP_EXTERN_C String_t* _stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2;
IL2CPP_EXTERN_C String_t* _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1;
IL2CPP_EXTERN_C String_t* _stringLiteral40346765A6347B0CFF06B8F6CCEDA9B1CC173C7B;
IL2CPP_EXTERN_C String_t* _stringLiteral4443244504A090DAB8C4BFAE24318E5FDA5C6DC7;
IL2CPP_EXTERN_C String_t* _stringLiteral54292B16AAF767794C392D4A7FFF2FB4A7901579;
IL2CPP_EXTERN_C String_t* _stringLiteral586825A85BD3ABBC2F448E88E81F8DFBBE3A1EC4;
IL2CPP_EXTERN_C String_t* _stringLiteral9D0A628233CAFA722586C12A8D62EFC841E9E8E4;
IL2CPP_EXTERN_C String_t* _stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F;
IL2CPP_EXTERN_C String_t* _stringLiteralACF223A25B988017970CFF5BD48021DA0E08D1C7;
IL2CPP_EXTERN_C String_t* _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539;
IL2CPP_EXTERN_C String_t* _stringLiteralB2865A84BFDD84373A85D2359FE558B031911F33;
IL2CPP_EXTERN_C String_t* _stringLiteralB2F6D327D59DE65144BD6F7CC4960CAFE87A21F7;
IL2CPP_EXTERN_C String_t* _stringLiteralB537BDDF2180BAC13CD1DF0E195832CCBB31AA4D;
IL2CPP_EXTERN_C String_t* _stringLiteralBA0AC58702C7BC7CA0BB328CEE642437EB1BCB24;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralE02FDE1306AAB0CF2E8F94B82700B99D1CDB0ED1;
IL2CPP_EXTERN_C String_t* _stringLiteralE5E208D8BE642C90B748592EF469D854CA6BDBD7;
IL2CPP_EXTERN_C String_t* _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11;
IL2CPP_EXTERN_C String_t* _stringLiteralFAF00C5055CB27DF30B3F69C3030B7EFA0B10CF4;
IL2CPP_EXTERN_C String_t* _stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisNetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_m8B96EC85EE35FAF3E6AB6C123D5D2A408DBAA8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ReadOnlyArray_1_get_Item_mEEBFFC408FF97F9B0BF28B951075C0EB9A178010_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CcycleIsOverU3Ed__18_System_Collections_IEnumerator_Reset_m6879B36C480C5C254BD6E68A36F657B8A96E1AD9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_com;
struct DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// CharacterInput
struct CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D  : public RuntimeObject
{
public:
	// UnityEngine.InputSystem.InputActionAsset CharacterInput::<asset>k__BackingField
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___U3CassetU3Ek__BackingField_0;
	// UnityEngine.InputSystem.InputActionMap CharacterInput::m_Player
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_Player_1;
	// CharacterInput/IPlayerActions CharacterInput::m_PlayerActionsCallbackInterface
	RuntimeObject* ___m_PlayerActionsCallbackInterface_2;
	// UnityEngine.InputSystem.InputAction CharacterInput::m_Player_Move
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_Player_Move_3;
	// System.Int32 CharacterInput::m_TouchScreenSchemeIndex
	int32_t ___m_TouchScreenSchemeIndex_4;

public:
	inline static int32_t get_offset_of_U3CassetU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D, ___U3CassetU3Ek__BackingField_0)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_U3CassetU3Ek__BackingField_0() const { return ___U3CassetU3Ek__BackingField_0; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_U3CassetU3Ek__BackingField_0() { return &___U3CassetU3Ek__BackingField_0; }
	inline void set_U3CassetU3Ek__BackingField_0(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___U3CassetU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CassetU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Player_1() { return static_cast<int32_t>(offsetof(CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D, ___m_Player_1)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_Player_1() const { return ___m_Player_1; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_Player_1() { return &___m_Player_1; }
	inline void set_m_Player_1(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_Player_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Player_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_PlayerActionsCallbackInterface_2() { return static_cast<int32_t>(offsetof(CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D, ___m_PlayerActionsCallbackInterface_2)); }
	inline RuntimeObject* get_m_PlayerActionsCallbackInterface_2() const { return ___m_PlayerActionsCallbackInterface_2; }
	inline RuntimeObject** get_address_of_m_PlayerActionsCallbackInterface_2() { return &___m_PlayerActionsCallbackInterface_2; }
	inline void set_m_PlayerActionsCallbackInterface_2(RuntimeObject* value)
	{
		___m_PlayerActionsCallbackInterface_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PlayerActionsCallbackInterface_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Player_Move_3() { return static_cast<int32_t>(offsetof(CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D, ___m_Player_Move_3)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_Player_Move_3() const { return ___m_Player_Move_3; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_Player_Move_3() { return &___m_Player_Move_3; }
	inline void set_m_Player_Move_3(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_Player_Move_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Player_Move_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_TouchScreenSchemeIndex_4() { return static_cast<int32_t>(offsetof(CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D, ___m_TouchScreenSchemeIndex_4)); }
	inline int32_t get_m_TouchScreenSchemeIndex_4() const { return ___m_TouchScreenSchemeIndex_4; }
	inline int32_t* get_address_of_m_TouchScreenSchemeIndex_4() { return &___m_TouchScreenSchemeIndex_4; }
	inline void set_m_TouchScreenSchemeIndex_4(int32_t value)
	{
		___m_TouchScreenSchemeIndex_4 = value;
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


// UnityEngine.Events.UnityEventBase
struct UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_Calls_0)); }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Calls_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PersistentCalls_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_2() { return static_cast<int32_t>(offsetof(UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB, ___m_CallsDirty_2)); }
	inline bool get_m_CallsDirty_2() const { return ___m_CallsDirty_2; }
	inline bool* get_address_of_m_CallsDirty_2() { return &___m_CallsDirty_2; }
	inline void set_m_CallsDirty_2(bool value)
	{
		___m_CallsDirty_2 = value;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>>
struct InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E 
{
public:
	// System.Int32 UnityEngine.InputSystem.Utilities.InlinedArray`1::length
	int32_t ___length_0;
	// TValue UnityEngine.InputSystem.Utilities.InlinedArray`1::firstValue
	Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___firstValue_1;
	// TValue[] UnityEngine.InputSystem.Utilities.InlinedArray`1::additionalValues
	Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* ___additionalValues_2;

public:
	inline static int32_t get_offset_of_length_0() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___length_0)); }
	inline int32_t get_length_0() const { return ___length_0; }
	inline int32_t* get_address_of_length_0() { return &___length_0; }
	inline void set_length_0(int32_t value)
	{
		___length_0 = value;
	}

	inline static int32_t get_offset_of_firstValue_1() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___firstValue_1)); }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * get_firstValue_1() const { return ___firstValue_1; }
	inline Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 ** get_address_of_firstValue_1() { return &___firstValue_1; }
	inline void set_firstValue_1(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * value)
	{
		___firstValue_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___firstValue_1), (void*)value);
	}

	inline static int32_t get_offset_of_additionalValues_2() { return static_cast<int32_t>(offsetof(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E, ___additionalValues_2)); }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* get_additionalValues_2() const { return ___additionalValues_2; }
	inline Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0** get_address_of_additionalValues_2() { return &___additionalValues_2; }
	inline void set_additionalValues_2(Action_1U5BU5D_t960376E04EEB1EB1830312AF536B2B78F2FF40B0* value)
	{
		___additionalValues_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___additionalValues_2), (void*)value);
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>
struct ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_Array_0)); }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* get_m_Array_0() const { return ___m_Array_0; }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>
struct ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3 
{
public:
	// TValue[] UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Array
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_Array_0;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_StartIndex
	int32_t ___m_StartIndex_1;
	// System.Int32 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1::m_Length
	int32_t ___m_Length_2;

public:
	inline static int32_t get_offset_of_m_Array_0() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_Array_0)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_Array_0() const { return ___m_Array_0; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_Array_0() { return &___m_Array_0; }
	inline void set_m_Array_0(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_Array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Array_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_StartIndex_1() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_StartIndex_1)); }
	inline int32_t get_m_StartIndex_1() const { return ___m_StartIndex_1; }
	inline int32_t* get_address_of_m_StartIndex_1() { return &___m_StartIndex_1; }
	inline void set_m_StartIndex_1(int32_t value)
	{
		___m_StartIndex_1 = value;
	}

	inline static int32_t get_offset_of_m_Length_2() { return static_cast<int32_t>(offsetof(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3, ___m_Length_2)); }
	inline int32_t get_m_Length_2() const { return ___m_Length_2; }
	inline int32_t* get_address_of_m_Length_2() { return &___m_Length_2; }
	inline void set_m_Length_2(int32_t value)
	{
		___m_Length_2 = value;
	}
};


// UnityEngine.Events.UnityEvent`1<System.Boolean>
struct UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
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


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
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

// UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A 
{
public:
	// System.String UnityEngine.InputSystem.InputControlScheme::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputControlScheme::m_BindingGroup
	String_t* ___m_BindingGroup_1;
	// UnityEngine.InputSystem.InputControlScheme/DeviceRequirement[] UnityEngine.InputSystem.InputControlScheme::m_DeviceRequirements
	DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* ___m_DeviceRequirements_2;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingGroup_1() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_BindingGroup_1)); }
	inline String_t* get_m_BindingGroup_1() const { return ___m_BindingGroup_1; }
	inline String_t** get_address_of_m_BindingGroup_1() { return &___m_BindingGroup_1; }
	inline void set_m_BindingGroup_1(String_t* value)
	{
		___m_BindingGroup_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingGroup_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_DeviceRequirements_2() { return static_cast<int32_t>(offsetof(InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A, ___m_DeviceRequirements_2)); }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* get_m_DeviceRequirements_2() const { return ___m_DeviceRequirements_2; }
	inline DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045** get_address_of_m_DeviceRequirements_2() { return &___m_DeviceRequirements_2; }
	inline void set_m_DeviceRequirements_2(DeviceRequirementU5BU5D_t78146FB21A5C410CBC1F66A8D380D1E95EB2C045* value)
	{
		___m_DeviceRequirements_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DeviceRequirements_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_pinvoke
{
	char* ___m_Name_0;
	char* ___m_BindingGroup_1;
	DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_pinvoke* ___m_DeviceRequirements_2;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputControlScheme
struct InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A_marshaled_com
{
	Il2CppChar* ___m_Name_0;
	Il2CppChar* ___m_BindingGroup_1;
	DeviceRequirement_t81B74F0AB5D81F4F19AB7A30E422908B6EF74ED3_marshaled_com* ___m_DeviceRequirements_2;
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
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


// UnityEngine.LayerMask
struct LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 
{
public:
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;

public:
	inline static int32_t get_offset_of_m_Mask_0() { return static_cast<int32_t>(offsetof(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8, ___m_Mask_0)); }
	inline int32_t get_m_Mask_0() const { return ___m_Mask_0; }
	inline int32_t* get_address_of_m_Mask_0() { return &___m_Mask_0; }
	inline void set_m_Mask_0(int32_t value)
	{
		___m_Mask_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
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


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// CharacterInput/PlayerActions
struct PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 
{
public:
	// CharacterInput CharacterInput/PlayerActions::m_Wrapper
	CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * ___m_Wrapper_0;

public:
	inline static int32_t get_offset_of_m_Wrapper_0() { return static_cast<int32_t>(offsetof(PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965, ___m_Wrapper_0)); }
	inline CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * get_m_Wrapper_0() const { return ___m_Wrapper_0; }
	inline CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D ** get_address_of_m_Wrapper_0() { return &___m_Wrapper_0; }
	inline void set_m_Wrapper_0(CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * value)
	{
		___m_Wrapper_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Wrapper_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of CharacterInput/PlayerActions
struct PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshaled_pinvoke
{
	CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * ___m_Wrapper_0;
};
// Native definition for COM marshalling of CharacterInput/PlayerActions
struct PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshaled_com
{
	CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * ___m_Wrapper_0;
};

// UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B 
{
public:
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputAction/CallbackContext::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	// System.Int32 UnityEngine.InputSystem.InputAction/CallbackContext::m_ActionIndex
	int32_t ___m_ActionIndex_1;

public:
	inline static int32_t get_offset_of_m_State_0() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_State_0)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_0() const { return ___m_State_0; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_0() { return &___m_State_0; }
	inline void set_m_State_0(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionIndex_1() { return static_cast<int32_t>(offsetof(CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B, ___m_ActionIndex_1)); }
	inline int32_t get_m_ActionIndex_1() const { return ___m_ActionIndex_1; }
	inline int32_t* get_address_of_m_ActionIndex_1() { return &___m_ActionIndex_1; }
	inline void set_m_ActionIndex_1(int32_t value)
	{
		___m_ActionIndex_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_pinvoke
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputAction/CallbackContext
struct CallbackContext_tFAD329A5B98475EEDBD898FFDA3378C44BC12E0B_marshaled_com
{
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_0;
	int32_t ___m_ActionIndex_1;
};

// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>
struct Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84 
{
public:
	// T System.Nullable`1::value
	ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84, ___value_0)); }
	inline ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  get_value_0() const { return ___value_0; }
	inline ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3 * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(ReadOnlyArray_1_tC2A9D9734263A6FE846489A365EBA3A952B9DDF3  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Array_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.BoundingSphere
struct BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709 
{
public:
	// UnityEngine.Vector3 UnityEngine.BoundingSphere::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// System.Single UnityEngine.BoundingSphere::radius
	float ___radius_1;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_radius_1() { return static_cast<int32_t>(offsetof(BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709, ___radius_1)); }
	inline float get_radius_1() const { return ___radius_1; }
	inline float* get_address_of_radius_1() { return &___radius_1; }
	inline void set_radius_1(float value)
	{
		___radius_1 = value;
	}
};


// UnityEngine.Bounds
struct Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
{
public:
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Extents_1;

public:
	inline static int32_t get_offset_of_m_Center_0() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Center_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_0() const { return ___m_Center_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_0() { return &___m_Center_0; }
	inline void set_m_Center_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_0 = value;
	}

	inline static int32_t get_offset_of_m_Extents_1() { return static_cast<int32_t>(offsetof(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37, ___m_Extents_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Extents_1() const { return ___m_Extents_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Extents_1() { return &___m_Extents_1; }
	inline void set_m_Extents_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Extents_1 = value;
	}
};


// UnityEngine.CollisionFlags
struct CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903 
{
public:
	// System.Int32 UnityEngine.CollisionFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CollisionFlags_t435530D092E80B20FFD0DA008B4F298BF224B903, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

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
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.InputSystem.InputActionType
struct InputActionType_t913CC58784CA34E9791C18B15436C791CD465901 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputActionType_t913CC58784CA34E9791C18B15436C791CD465901, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// TaskType
struct TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283 
{
public:
	// System.Int32 TaskType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// CharacterController2D/BoolEvent
struct BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659  : public UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding/Flags
struct Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5 
{
public:
	// System.Int32 UnityEngine.InputSystem.InputBinding/Flags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t96BD9B15406A59FB60DE4A1F11DF96FB70426BF5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.Light2D/LightType
struct LightType_t932AA0C9AE514928E47B04E01E108889E66CF5CD 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D/LightType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t932AA0C9AE514928E47B04E01E108889E66CF5CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.Light2D/PointLightQuality
struct PointLightQuality_t71B86FB9E127F9DD2550B2C774BCB9F9DB404C55 
{
public:
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D/PointLightQuality::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PointLightQuality_t71B86FB9E127F9DD2550B2C774BCB9F9DB404C55, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// PlantManager/State
struct State_tB47D4381D48E72F41376A59DE36A52282C39A5A7 
{
public:
	// System.Int32 PlantManager/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_tB47D4381D48E72F41376A59DE36A52282C39A5A7, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD 
{
public:
	// System.String UnityEngine.InputSystem.InputBinding::m_Name
	String_t* ___m_Name_2;
	// System.String UnityEngine.InputSystem.InputBinding::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputBinding::m_Path
	String_t* ___m_Path_4;
	// System.String UnityEngine.InputSystem.InputBinding::m_Interactions
	String_t* ___m_Interactions_5;
	// System.String UnityEngine.InputSystem.InputBinding::m_Processors
	String_t* ___m_Processors_6;
	// System.String UnityEngine.InputSystem.InputBinding::m_Groups
	String_t* ___m_Groups_7;
	// System.String UnityEngine.InputSystem.InputBinding::m_Action
	String_t* ___m_Action_8;
	// UnityEngine.InputSystem.InputBinding/Flags UnityEngine.InputSystem.InputBinding::m_Flags
	int32_t ___m_Flags_9;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverridePath
	String_t* ___m_OverridePath_10;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideInteractions
	String_t* ___m_OverrideInteractions_11;
	// System.String UnityEngine.InputSystem.InputBinding::m_OverrideProcessors
	String_t* ___m_OverrideProcessors_12;

public:
	inline static int32_t get_offset_of_m_Name_2() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Name_2)); }
	inline String_t* get_m_Name_2() const { return ___m_Name_2; }
	inline String_t** get_address_of_m_Name_2() { return &___m_Name_2; }
	inline void set_m_Name_2(String_t* value)
	{
		___m_Name_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Path_4() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Path_4)); }
	inline String_t* get_m_Path_4() const { return ___m_Path_4; }
	inline String_t** get_address_of_m_Path_4() { return &___m_Path_4; }
	inline void set_m_Path_4(String_t* value)
	{
		___m_Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_6() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Processors_6)); }
	inline String_t* get_m_Processors_6() const { return ___m_Processors_6; }
	inline String_t** get_address_of_m_Processors_6() { return &___m_Processors_6; }
	inline void set_m_Processors_6(String_t* value)
	{
		___m_Processors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Groups_7() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Groups_7)); }
	inline String_t* get_m_Groups_7() const { return ___m_Groups_7; }
	inline String_t** get_address_of_m_Groups_7() { return &___m_Groups_7; }
	inline void set_m_Groups_7(String_t* value)
	{
		___m_Groups_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Groups_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_Action_8() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Action_8)); }
	inline String_t* get_m_Action_8() const { return ___m_Action_8; }
	inline String_t** get_address_of_m_Action_8() { return &___m_Action_8; }
	inline void set_m_Action_8(String_t* value)
	{
		___m_Action_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Action_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_Flags_9() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_Flags_9)); }
	inline int32_t get_m_Flags_9() const { return ___m_Flags_9; }
	inline int32_t* get_address_of_m_Flags_9() { return &___m_Flags_9; }
	inline void set_m_Flags_9(int32_t value)
	{
		___m_Flags_9 = value;
	}

	inline static int32_t get_offset_of_m_OverridePath_10() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverridePath_10)); }
	inline String_t* get_m_OverridePath_10() const { return ___m_OverridePath_10; }
	inline String_t** get_address_of_m_OverridePath_10() { return &___m_OverridePath_10; }
	inline void set_m_OverridePath_10(String_t* value)
	{
		___m_OverridePath_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverridePath_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideInteractions_11() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideInteractions_11)); }
	inline String_t* get_m_OverrideInteractions_11() const { return ___m_OverrideInteractions_11; }
	inline String_t** get_address_of_m_OverrideInteractions_11() { return &___m_OverrideInteractions_11; }
	inline void set_m_OverrideInteractions_11(String_t* value)
	{
		___m_OverrideInteractions_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideInteractions_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideProcessors_12() { return static_cast<int32_t>(offsetof(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD, ___m_OverrideProcessors_12)); }
	inline String_t* get_m_OverrideProcessors_12() const { return ___m_OverrideProcessors_12; }
	inline String_t** get_address_of_m_OverrideProcessors_12() { return &___m_OverrideProcessors_12; }
	inline void set_m_OverrideProcessors_12(String_t* value)
	{
		___m_OverrideProcessors_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideProcessors_12), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_pinvoke
{
	char* ___m_Name_2;
	char* ___m_Id_3;
	char* ___m_Path_4;
	char* ___m_Interactions_5;
	char* ___m_Processors_6;
	char* ___m_Groups_7;
	char* ___m_Action_8;
	int32_t ___m_Flags_9;
	char* ___m_OverridePath_10;
	char* ___m_OverrideInteractions_11;
	char* ___m_OverrideProcessors_12;
};
// Native definition for COM marshalling of UnityEngine.InputSystem.InputBinding
struct InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD_marshaled_com
{
	Il2CppChar* ___m_Name_2;
	Il2CppChar* ___m_Id_3;
	Il2CppChar* ___m_Path_4;
	Il2CppChar* ___m_Interactions_5;
	Il2CppChar* ___m_Processors_6;
	Il2CppChar* ___m_Groups_7;
	Il2CppChar* ___m_Action_8;
	int32_t ___m_Flags_9;
	Il2CppChar* ___m_OverridePath_10;
	Il2CppChar* ___m_OverrideInteractions_11;
	Il2CppChar* ___m_OverrideProcessors_12;
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

// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// RoomManager/<cycleIsOver>d__18
struct U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D  : public RuntimeObject
{
public:
	// System.Int32 RoomManager/<cycleIsOver>d__18::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object RoomManager/<cycleIsOver>d__18::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Single RoomManager/<cycleIsOver>d__18::delayTime
	float ___delayTime_2;
	// TaskType RoomManager/<cycleIsOver>d__18::t
	int32_t ___t_3;
	// RoomManager RoomManager/<cycleIsOver>d__18::<>4__this
	RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * ___U3CU3E4__this_4;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_delayTime_2() { return static_cast<int32_t>(offsetof(U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D, ___delayTime_2)); }
	inline float get_delayTime_2() const { return ___delayTime_2; }
	inline float* get_address_of_delayTime_2() { return &___delayTime_2; }
	inline void set_delayTime_2(float value)
	{
		___delayTime_2 = value;
	}

	inline static int32_t get_offset_of_t_3() { return static_cast<int32_t>(offsetof(U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D, ___t_3)); }
	inline int32_t get_t_3() const { return ___t_3; }
	inline int32_t* get_address_of_t_3() { return &___t_3; }
	inline void set_t_3(int32_t value)
	{
		___t_3 = value;
	}

	inline static int32_t get_offset_of_U3CU3E4__this_4() { return static_cast<int32_t>(offsetof(U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D, ___U3CU3E4__this_4)); }
	inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * get_U3CU3E4__this_4() const { return ___U3CU3E4__this_4; }
	inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF ** get_address_of_U3CU3E4__this_4() { return &___U3CU3E4__this_4; }
	inline void set_U3CU3E4__this_4(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * value)
	{
		___U3CU3E4__this_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_4), (void*)value);
	}
};


// System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>
struct Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416  : public MulticastDelegate_t
{
public:

public:
};


// System.Nullable`1<UnityEngine.InputSystem.InputBinding>
struct Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 
{
public:
	// T System.Nullable`1::value
	InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___value_0)); }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  get_value_0() const { return ___value_0; }
	inline InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD * get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(InputBinding_t18B68FF9E7C08763BFC653E20E79B63389CF80CD  value)
	{
		___value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.CharacterController
struct CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.InputSystem.InputAction
struct InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputAction::m_Name
	String_t* ___m_Name_0;
	// UnityEngine.InputSystem.InputActionType UnityEngine.InputSystem.InputAction::m_Type
	int32_t ___m_Type_1;
	// System.String UnityEngine.InputSystem.InputAction::m_ExpectedControlType
	String_t* ___m_ExpectedControlType_2;
	// System.String UnityEngine.InputSystem.InputAction::m_Id
	String_t* ___m_Id_3;
	// System.String UnityEngine.InputSystem.InputAction::m_Processors
	String_t* ___m_Processors_4;
	// System.String UnityEngine.InputSystem.InputAction::m_Interactions
	String_t* ___m_Interactions_5;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputAction::m_SingletonActionBindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_SingletonActionBindings_6;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputAction::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_7;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsStartIndex
	int32_t ___m_BindingsStartIndex_8;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_BindingsCount
	int32_t ___m_BindingsCount_9;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlStartIndex
	int32_t ___m_ControlStartIndex_10;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ControlCount
	int32_t ___m_ControlCount_11;
	// System.Int32 UnityEngine.InputSystem.InputAction::m_ActionIndexInState
	int32_t ___m_ActionIndexInState_12;
	// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputAction::m_ActionMap
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * ___m_ActionMap_13;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnStarted
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnStarted_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnCanceled
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnCanceled_15;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputAction::m_OnPerformed
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_OnPerformed_16;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_1() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Type_1)); }
	inline int32_t get_m_Type_1() const { return ___m_Type_1; }
	inline int32_t* get_address_of_m_Type_1() { return &___m_Type_1; }
	inline void set_m_Type_1(int32_t value)
	{
		___m_Type_1 = value;
	}

	inline static int32_t get_offset_of_m_ExpectedControlType_2() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ExpectedControlType_2)); }
	inline String_t* get_m_ExpectedControlType_2() const { return ___m_ExpectedControlType_2; }
	inline String_t** get_address_of_m_ExpectedControlType_2() { return &___m_ExpectedControlType_2; }
	inline void set_m_ExpectedControlType_2(String_t* value)
	{
		___m_ExpectedControlType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExpectedControlType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_3() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Id_3)); }
	inline String_t* get_m_Id_3() const { return ___m_Id_3; }
	inline String_t** get_address_of_m_Id_3() { return &___m_Id_3; }
	inline void set_m_Id_3(String_t* value)
	{
		___m_Id_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Processors_4() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Processors_4)); }
	inline String_t* get_m_Processors_4() const { return ___m_Processors_4; }
	inline String_t** get_address_of_m_Processors_4() { return &___m_Processors_4; }
	inline void set_m_Processors_4(String_t* value)
	{
		___m_Processors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Processors_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactions_5() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_Interactions_5)); }
	inline String_t* get_m_Interactions_5() const { return ___m_Interactions_5; }
	inline String_t** get_address_of_m_Interactions_5() { return &___m_Interactions_5; }
	inline void set_m_Interactions_5(String_t* value)
	{
		___m_Interactions_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Interactions_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_SingletonActionBindings_6() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_SingletonActionBindings_6)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_SingletonActionBindings_6() const { return ___m_SingletonActionBindings_6; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_SingletonActionBindings_6() { return &___m_SingletonActionBindings_6; }
	inline void set_m_SingletonActionBindings_6(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_SingletonActionBindings_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonActionBindings_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_7() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingMask_7)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_7() const { return ___m_BindingMask_7; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_7() { return &___m_BindingMask_7; }
	inline void set_m_BindingMask_7(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_7))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_BindingsStartIndex_8() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsStartIndex_8)); }
	inline int32_t get_m_BindingsStartIndex_8() const { return ___m_BindingsStartIndex_8; }
	inline int32_t* get_address_of_m_BindingsStartIndex_8() { return &___m_BindingsStartIndex_8; }
	inline void set_m_BindingsStartIndex_8(int32_t value)
	{
		___m_BindingsStartIndex_8 = value;
	}

	inline static int32_t get_offset_of_m_BindingsCount_9() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_BindingsCount_9)); }
	inline int32_t get_m_BindingsCount_9() const { return ___m_BindingsCount_9; }
	inline int32_t* get_address_of_m_BindingsCount_9() { return &___m_BindingsCount_9; }
	inline void set_m_BindingsCount_9(int32_t value)
	{
		___m_BindingsCount_9 = value;
	}

	inline static int32_t get_offset_of_m_ControlStartIndex_10() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlStartIndex_10)); }
	inline int32_t get_m_ControlStartIndex_10() const { return ___m_ControlStartIndex_10; }
	inline int32_t* get_address_of_m_ControlStartIndex_10() { return &___m_ControlStartIndex_10; }
	inline void set_m_ControlStartIndex_10(int32_t value)
	{
		___m_ControlStartIndex_10 = value;
	}

	inline static int32_t get_offset_of_m_ControlCount_11() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ControlCount_11)); }
	inline int32_t get_m_ControlCount_11() const { return ___m_ControlCount_11; }
	inline int32_t* get_address_of_m_ControlCount_11() { return &___m_ControlCount_11; }
	inline void set_m_ControlCount_11(int32_t value)
	{
		___m_ControlCount_11 = value;
	}

	inline static int32_t get_offset_of_m_ActionIndexInState_12() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionIndexInState_12)); }
	inline int32_t get_m_ActionIndexInState_12() const { return ___m_ActionIndexInState_12; }
	inline int32_t* get_address_of_m_ActionIndexInState_12() { return &___m_ActionIndexInState_12; }
	inline void set_m_ActionIndexInState_12(int32_t value)
	{
		___m_ActionIndexInState_12 = value;
	}

	inline static int32_t get_offset_of_m_ActionMap_13() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_ActionMap_13)); }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * get_m_ActionMap_13() const { return ___m_ActionMap_13; }
	inline InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 ** get_address_of_m_ActionMap_13() { return &___m_ActionMap_13; }
	inline void set_m_ActionMap_13(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * value)
	{
		___m_ActionMap_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMap_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnStarted_14() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnStarted_14)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnStarted_14() const { return ___m_OnStarted_14; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnStarted_14() { return &___m_OnStarted_14; }
	inline void set_m_OnStarted_14(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnStarted_14 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnStarted_14))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnCanceled_15() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnCanceled_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnCanceled_15() const { return ___m_OnCanceled_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnCanceled_15() { return &___m_OnCanceled_15; }
	inline void set_m_OnCanceled_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnCanceled_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnCanceled_15))->___additionalValues_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_OnPerformed_16() { return static_cast<int32_t>(offsetof(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48, ___m_OnPerformed_16)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_OnPerformed_16() const { return ___m_OnPerformed_16; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_OnPerformed_16() { return &___m_OnPerformed_16; }
	inline void set_m_OnPerformed_16(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_OnPerformed_16 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_OnPerformed_16))->___additionalValues_2), (void*)NULL);
		#endif
	}
};


// UnityEngine.InputSystem.InputActionAsset
struct InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.InputSystem.InputActionMap[] UnityEngine.InputSystem.InputActionAsset::m_ActionMaps
	InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* ___m_ActionMaps_5;
	// UnityEngine.InputSystem.InputControlScheme[] UnityEngine.InputSystem.InputActionAsset::m_ControlSchemes
	InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* ___m_ControlSchemes_6;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionAsset::m_SharedStateForAllMaps
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_SharedStateForAllMaps_7;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_8;
	// System.Int32 UnityEngine.InputSystem.InputActionAsset::m_DevicesCount
	int32_t ___m_DevicesCount_9;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionAsset::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_10;

public:
	inline static int32_t get_offset_of_m_ActionMaps_5() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_ActionMaps_5)); }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* get_m_ActionMaps_5() const { return ___m_ActionMaps_5; }
	inline InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580** get_address_of_m_ActionMaps_5() { return &___m_ActionMaps_5; }
	inline void set_m_ActionMaps_5(InputActionMapU5BU5D_tEE6F572B03BE03B28C7B701C19AE4FD4D5D2E580* value)
	{
		___m_ActionMaps_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionMaps_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlSchemes_6() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_ControlSchemes_6)); }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* get_m_ControlSchemes_6() const { return ___m_ControlSchemes_6; }
	inline InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533** get_address_of_m_ControlSchemes_6() { return &___m_ControlSchemes_6; }
	inline void set_m_ControlSchemes_6(InputControlSchemeU5BU5D_tBB9AD9A13C02DA454ED64BB349DF13190E18B533* value)
	{
		___m_ControlSchemes_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlSchemes_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_SharedStateForAllMaps_7() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_SharedStateForAllMaps_7)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_SharedStateForAllMaps_7() const { return ___m_SharedStateForAllMaps_7; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_SharedStateForAllMaps_7() { return &___m_SharedStateForAllMaps_7; }
	inline void set_m_SharedStateForAllMaps_7(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_SharedStateForAllMaps_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SharedStateForAllMaps_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingMask_8() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_BindingMask_8)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_8() const { return ___m_BindingMask_8; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_8() { return &___m_BindingMask_8; }
	inline void set_m_BindingMask_8(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_8 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_8))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_9() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_DevicesCount_9)); }
	inline int32_t get_m_DevicesCount_9() const { return ___m_DevicesCount_9; }
	inline int32_t* get_address_of_m_DevicesCount_9() { return &___m_DevicesCount_9; }
	inline void set_m_DevicesCount_9(int32_t value)
	{
		___m_DevicesCount_9 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_10() { return static_cast<int32_t>(offsetof(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E, ___m_DevicesArray_10)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_10() const { return ___m_DevicesArray_10; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_10() { return &___m_DevicesArray_10; }
	inline void set_m_DevicesArray_10(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_10), (void*)value);
	}
};


// UnityEngine.InputSystem.InputActionMap
struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226  : public RuntimeObject
{
public:
	// System.String UnityEngine.InputSystem.InputActionMap::m_Name
	String_t* ___m_Name_0;
	// System.String UnityEngine.InputSystem.InputActionMap::m_Id
	String_t* ___m_Id_1;
	// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionMap::m_Asset
	InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * ___m_Asset_2;
	// UnityEngine.InputSystem.InputAction[] UnityEngine.InputSystem.InputActionMap::m_Actions
	InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* ___m_Actions_3;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_Bindings
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_Bindings_4;
	// UnityEngine.InputSystem.InputBinding[] UnityEngine.InputSystem.InputActionMap::m_BindingsForEachAction
	InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* ___m_BindingsForEachAction_5;
	// UnityEngine.InputSystem.InputControl[] UnityEngine.InputSystem.InputActionMap::m_ControlsForEachAction
	InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* ___m_ControlsForEachAction_6;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_EnabledActionsCount
	int32_t ___m_EnabledActionsCount_7;
	// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::m_SingletonAction
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___m_SingletonAction_8;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_MapIndexInState
	int32_t ___m_MapIndexInState_9;
	// UnityEngine.InputSystem.InputActionState UnityEngine.InputSystem.InputActionMap::m_State
	InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * ___m_State_10;
	// System.Boolean UnityEngine.InputSystem.InputActionMap::m_NeedToResolveBindings
	bool ___m_NeedToResolveBindings_11;
	// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionMap::m_BindingMask
	Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___m_BindingMask_12;
	// System.Int32 UnityEngine.InputSystem.InputActionMap::m_DevicesCount
	int32_t ___m_DevicesCount_13;
	// UnityEngine.InputSystem.InputDevice[] UnityEngine.InputSystem.InputActionMap::m_DevicesArray
	InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* ___m_DevicesArray_14;
	// UnityEngine.InputSystem.Utilities.InlinedArray`1<System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>> UnityEngine.InputSystem.InputActionMap::m_ActionCallbacks
	InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  ___m_ActionCallbacks_15;

public:
	inline static int32_t get_offset_of_m_Name_0() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Name_0)); }
	inline String_t* get_m_Name_0() const { return ___m_Name_0; }
	inline String_t** get_address_of_m_Name_0() { return &___m_Name_0; }
	inline void set_m_Name_0(String_t* value)
	{
		___m_Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Id_1() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Id_1)); }
	inline String_t* get_m_Id_1() const { return ___m_Id_1; }
	inline String_t** get_address_of_m_Id_1() { return &___m_Id_1; }
	inline void set_m_Id_1(String_t* value)
	{
		___m_Id_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Id_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_Asset_2() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Asset_2)); }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * get_m_Asset_2() const { return ___m_Asset_2; }
	inline InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E ** get_address_of_m_Asset_2() { return &___m_Asset_2; }
	inline void set_m_Asset_2(InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * value)
	{
		___m_Asset_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Actions_3() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Actions_3)); }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* get_m_Actions_3() const { return ___m_Actions_3; }
	inline InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73** get_address_of_m_Actions_3() { return &___m_Actions_3; }
	inline void set_m_Actions_3(InputActionU5BU5D_t612D1F4255E82373FD5E5514AD83FA50B21A6A73* value)
	{
		___m_Actions_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Actions_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_Bindings_4() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_Bindings_4)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_Bindings_4() const { return ___m_Bindings_4; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_Bindings_4() { return &___m_Bindings_4; }
	inline void set_m_Bindings_4(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_Bindings_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Bindings_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_BindingsForEachAction_5() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingsForEachAction_5)); }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* get_m_BindingsForEachAction_5() const { return ___m_BindingsForEachAction_5; }
	inline InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E** get_address_of_m_BindingsForEachAction_5() { return &___m_BindingsForEachAction_5; }
	inline void set_m_BindingsForEachAction_5(InputBindingU5BU5D_t3CCBD5F5A51F370BFD0A373A770C8720F2A6115E* value)
	{
		___m_BindingsForEachAction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BindingsForEachAction_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_ControlsForEachAction_6() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ControlsForEachAction_6)); }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* get_m_ControlsForEachAction_6() const { return ___m_ControlsForEachAction_6; }
	inline InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67** get_address_of_m_ControlsForEachAction_6() { return &___m_ControlsForEachAction_6; }
	inline void set_m_ControlsForEachAction_6(InputControlU5BU5D_t4668D8411829C981759512FED1506B20F902CA67* value)
	{
		___m_ControlsForEachAction_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ControlsForEachAction_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_EnabledActionsCount_7() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_EnabledActionsCount_7)); }
	inline int32_t get_m_EnabledActionsCount_7() const { return ___m_EnabledActionsCount_7; }
	inline int32_t* get_address_of_m_EnabledActionsCount_7() { return &___m_EnabledActionsCount_7; }
	inline void set_m_EnabledActionsCount_7(int32_t value)
	{
		___m_EnabledActionsCount_7 = value;
	}

	inline static int32_t get_offset_of_m_SingletonAction_8() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_SingletonAction_8)); }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * get_m_SingletonAction_8() const { return ___m_SingletonAction_8; }
	inline InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 ** get_address_of_m_SingletonAction_8() { return &___m_SingletonAction_8; }
	inline void set_m_SingletonAction_8(InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * value)
	{
		___m_SingletonAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SingletonAction_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_MapIndexInState_9() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_MapIndexInState_9)); }
	inline int32_t get_m_MapIndexInState_9() const { return ___m_MapIndexInState_9; }
	inline int32_t* get_address_of_m_MapIndexInState_9() { return &___m_MapIndexInState_9; }
	inline void set_m_MapIndexInState_9(int32_t value)
	{
		___m_MapIndexInState_9 = value;
	}

	inline static int32_t get_offset_of_m_State_10() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_State_10)); }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * get_m_State_10() const { return ___m_State_10; }
	inline InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C ** get_address_of_m_State_10() { return &___m_State_10; }
	inline void set_m_State_10(InputActionState_tE8F8D2439CDB9528D77707FB251FBE280C34664C * value)
	{
		___m_State_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_State_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_NeedToResolveBindings_11() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_NeedToResolveBindings_11)); }
	inline bool get_m_NeedToResolveBindings_11() const { return ___m_NeedToResolveBindings_11; }
	inline bool* get_address_of_m_NeedToResolveBindings_11() { return &___m_NeedToResolveBindings_11; }
	inline void set_m_NeedToResolveBindings_11(bool value)
	{
		___m_NeedToResolveBindings_11 = value;
	}

	inline static int32_t get_offset_of_m_BindingMask_12() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_BindingMask_12)); }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  get_m_BindingMask_12() const { return ___m_BindingMask_12; }
	inline Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104 * get_address_of_m_BindingMask_12() { return &___m_BindingMask_12; }
	inline void set_m_BindingMask_12(Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  value)
	{
		___m_BindingMask_12 = value;
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Name_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Id_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Path_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Interactions_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Processors_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Groups_7), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_Action_8), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverridePath_10), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideInteractions_11), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((&___m_BindingMask_12))->___value_0))->___m_OverrideProcessors_12), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_DevicesCount_13() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesCount_13)); }
	inline int32_t get_m_DevicesCount_13() const { return ___m_DevicesCount_13; }
	inline int32_t* get_address_of_m_DevicesCount_13() { return &___m_DevicesCount_13; }
	inline void set_m_DevicesCount_13(int32_t value)
	{
		___m_DevicesCount_13 = value;
	}

	inline static int32_t get_offset_of_m_DevicesArray_14() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_DevicesArray_14)); }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* get_m_DevicesArray_14() const { return ___m_DevicesArray_14; }
	inline InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2** get_address_of_m_DevicesArray_14() { return &___m_DevicesArray_14; }
	inline void set_m_DevicesArray_14(InputDeviceU5BU5D_t51F80AEE3E39E34077F38FD56C262347F180A2B2* value)
	{
		___m_DevicesArray_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DevicesArray_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionCallbacks_15() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226, ___m_ActionCallbacks_15)); }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  get_m_ActionCallbacks_15() const { return ___m_ActionCallbacks_15; }
	inline InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E * get_address_of_m_ActionCallbacks_15() { return &___m_ActionCallbacks_15; }
	inline void set_m_ActionCallbacks_15(InlinedArray_1_tD8F648109EC431FFA4D6E31DC56D88C27692A37E  value)
	{
		___m_ActionCallbacks_15 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___firstValue_1), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_ActionCallbacks_15))->___additionalValues_2), (void*)NULL);
		#endif
	}
};

struct InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields
{
public:
	// System.Int32 UnityEngine.InputSystem.InputActionMap::s_DeferBindingResolution
	int32_t ___s_DeferBindingResolution_16;

public:
	inline static int32_t get_offset_of_s_DeferBindingResolution_16() { return static_cast<int32_t>(offsetof(InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226_StaticFields, ___s_DeferBindingResolution_16)); }
	inline int32_t get_s_DeferBindingResolution_16() const { return ___s_DeferBindingResolution_16; }
	inline int32_t* get_address_of_s_DeferBindingResolution_16() { return &___s_DeferBindingResolution_16; }
	inline void set_s_DeferBindingResolution_16(int32_t value)
	{
		___s_DeferBindingResolution_16 = value;
	}
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// CharacterController2D
struct CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CharacterController2D::m_JumpForce
	float ___m_JumpForce_4;
	// System.Single CharacterController2D::m_CrouchSpeed
	float ___m_CrouchSpeed_5;
	// System.Single CharacterController2D::m_MovementSmoothing
	float ___m_MovementSmoothing_6;
	// System.Boolean CharacterController2D::m_AirControl
	bool ___m_AirControl_7;
	// UnityEngine.LayerMask CharacterController2D::m_WhatIsGround
	LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___m_WhatIsGround_8;
	// UnityEngine.Transform CharacterController2D::m_GroundCheck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_GroundCheck_9;
	// UnityEngine.Transform CharacterController2D::m_CeilingCheck
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_CeilingCheck_10;
	// UnityEngine.Collider2D CharacterController2D::m_CrouchDisableCollider
	Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___m_CrouchDisableCollider_11;
	// System.Boolean CharacterController2D::m_Grounded
	bool ___m_Grounded_13;
	// UnityEngine.Rigidbody2D CharacterController2D::m_Rigidbody2D
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___m_Rigidbody2D_15;
	// System.Boolean CharacterController2D::m_FacingRight
	bool ___m_FacingRight_16;
	// UnityEngine.Vector3 CharacterController2D::m_Velocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Velocity_17;
	// UnityEngine.Events.UnityEvent CharacterController2D::OnLandEvent
	UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * ___OnLandEvent_18;
	// CharacterController2D/BoolEvent CharacterController2D::OnCrouchEvent
	BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * ___OnCrouchEvent_19;
	// System.Boolean CharacterController2D::m_wasCrouching
	bool ___m_wasCrouching_20;

public:
	inline static int32_t get_offset_of_m_JumpForce_4() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_JumpForce_4)); }
	inline float get_m_JumpForce_4() const { return ___m_JumpForce_4; }
	inline float* get_address_of_m_JumpForce_4() { return &___m_JumpForce_4; }
	inline void set_m_JumpForce_4(float value)
	{
		___m_JumpForce_4 = value;
	}

	inline static int32_t get_offset_of_m_CrouchSpeed_5() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_CrouchSpeed_5)); }
	inline float get_m_CrouchSpeed_5() const { return ___m_CrouchSpeed_5; }
	inline float* get_address_of_m_CrouchSpeed_5() { return &___m_CrouchSpeed_5; }
	inline void set_m_CrouchSpeed_5(float value)
	{
		___m_CrouchSpeed_5 = value;
	}

	inline static int32_t get_offset_of_m_MovementSmoothing_6() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_MovementSmoothing_6)); }
	inline float get_m_MovementSmoothing_6() const { return ___m_MovementSmoothing_6; }
	inline float* get_address_of_m_MovementSmoothing_6() { return &___m_MovementSmoothing_6; }
	inline void set_m_MovementSmoothing_6(float value)
	{
		___m_MovementSmoothing_6 = value;
	}

	inline static int32_t get_offset_of_m_AirControl_7() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_AirControl_7)); }
	inline bool get_m_AirControl_7() const { return ___m_AirControl_7; }
	inline bool* get_address_of_m_AirControl_7() { return &___m_AirControl_7; }
	inline void set_m_AirControl_7(bool value)
	{
		___m_AirControl_7 = value;
	}

	inline static int32_t get_offset_of_m_WhatIsGround_8() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_WhatIsGround_8)); }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  get_m_WhatIsGround_8() const { return ___m_WhatIsGround_8; }
	inline LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8 * get_address_of_m_WhatIsGround_8() { return &___m_WhatIsGround_8; }
	inline void set_m_WhatIsGround_8(LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  value)
	{
		___m_WhatIsGround_8 = value;
	}

	inline static int32_t get_offset_of_m_GroundCheck_9() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_GroundCheck_9)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_GroundCheck_9() const { return ___m_GroundCheck_9; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_GroundCheck_9() { return &___m_GroundCheck_9; }
	inline void set_m_GroundCheck_9(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_GroundCheck_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GroundCheck_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_CeilingCheck_10() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_CeilingCheck_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_CeilingCheck_10() const { return ___m_CeilingCheck_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_CeilingCheck_10() { return &___m_CeilingCheck_10; }
	inline void set_m_CeilingCheck_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_CeilingCheck_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CeilingCheck_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_CrouchDisableCollider_11() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_CrouchDisableCollider_11)); }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * get_m_CrouchDisableCollider_11() const { return ___m_CrouchDisableCollider_11; }
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** get_address_of_m_CrouchDisableCollider_11() { return &___m_CrouchDisableCollider_11; }
	inline void set_m_CrouchDisableCollider_11(Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		___m_CrouchDisableCollider_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CrouchDisableCollider_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Grounded_13() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_Grounded_13)); }
	inline bool get_m_Grounded_13() const { return ___m_Grounded_13; }
	inline bool* get_address_of_m_Grounded_13() { return &___m_Grounded_13; }
	inline void set_m_Grounded_13(bool value)
	{
		___m_Grounded_13 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody2D_15() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_Rigidbody2D_15)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_m_Rigidbody2D_15() const { return ___m_Rigidbody2D_15; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_m_Rigidbody2D_15() { return &___m_Rigidbody2D_15; }
	inline void set_m_Rigidbody2D_15(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___m_Rigidbody2D_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody2D_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_FacingRight_16() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_FacingRight_16)); }
	inline bool get_m_FacingRight_16() const { return ___m_FacingRight_16; }
	inline bool* get_address_of_m_FacingRight_16() { return &___m_FacingRight_16; }
	inline void set_m_FacingRight_16(bool value)
	{
		___m_FacingRight_16 = value;
	}

	inline static int32_t get_offset_of_m_Velocity_17() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_Velocity_17)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Velocity_17() const { return ___m_Velocity_17; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Velocity_17() { return &___m_Velocity_17; }
	inline void set_m_Velocity_17(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Velocity_17 = value;
	}

	inline static int32_t get_offset_of_OnLandEvent_18() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___OnLandEvent_18)); }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * get_OnLandEvent_18() const { return ___OnLandEvent_18; }
	inline UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 ** get_address_of_OnLandEvent_18() { return &___OnLandEvent_18; }
	inline void set_OnLandEvent_18(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * value)
	{
		___OnLandEvent_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnLandEvent_18), (void*)value);
	}

	inline static int32_t get_offset_of_OnCrouchEvent_19() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___OnCrouchEvent_19)); }
	inline BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * get_OnCrouchEvent_19() const { return ___OnCrouchEvent_19; }
	inline BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 ** get_address_of_OnCrouchEvent_19() { return &___OnCrouchEvent_19; }
	inline void set_OnCrouchEvent_19(BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * value)
	{
		___OnCrouchEvent_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnCrouchEvent_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_wasCrouching_20() { return static_cast<int32_t>(offsetof(CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A, ___m_wasCrouching_20)); }
	inline bool get_m_wasCrouching_20() const { return ___m_wasCrouching_20; }
	inline bool* get_address_of_m_wasCrouching_20() { return &___m_wasCrouching_20; }
	inline void set_m_wasCrouching_20(bool value)
	{
		___m_wasCrouching_20 = value;
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// NetworkManager GameManager::NM
	NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * ___NM_4;
	// UnityEngine.GameObject GameManager::Grid
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Grid_5;
	// System.Int32 GameManager::numberOfTasksDone
	int32_t ___numberOfTasksDone_6;
	// System.Single GameManager::time
	float ___time_7;
	// System.Int32 GameManager::level
	int32_t ___level_8;

public:
	inline static int32_t get_offset_of_NM_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___NM_4)); }
	inline NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * get_NM_4() const { return ___NM_4; }
	inline NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 ** get_address_of_NM_4() { return &___NM_4; }
	inline void set_NM_4(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * value)
	{
		___NM_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NM_4), (void*)value);
	}

	inline static int32_t get_offset_of_Grid_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___Grid_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Grid_5() const { return ___Grid_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Grid_5() { return &___Grid_5; }
	inline void set_Grid_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Grid_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Grid_5), (void*)value);
	}

	inline static int32_t get_offset_of_numberOfTasksDone_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___numberOfTasksDone_6)); }
	inline int32_t get_numberOfTasksDone_6() const { return ___numberOfTasksDone_6; }
	inline int32_t* get_address_of_numberOfTasksDone_6() { return &___numberOfTasksDone_6; }
	inline void set_numberOfTasksDone_6(int32_t value)
	{
		___numberOfTasksDone_6 = value;
	}

	inline static int32_t get_offset_of_time_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___time_7)); }
	inline float get_time_7() const { return ___time_7; }
	inline float* get_address_of_time_7() { return &___time_7; }
	inline void set_time_7(float value)
	{
		___time_7 = value;
	}

	inline static int32_t get_offset_of_level_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___level_8)); }
	inline int32_t get_level_8() const { return ___level_8; }
	inline int32_t* get_address_of_level_8() { return &___level_8; }
	inline void set_level_8(int32_t value)
	{
		___level_8 = value;
	}
};


// UnityEngine.Experimental.Rendering.Universal.Light2D
struct Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Experimental.Rendering.Universal.Light2D/LightType UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightType
	int32_t ___m_LightType_4;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_BlendStyleIndex
	int32_t ___m_BlendStyleIndex_5;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_FalloffIntensity
	float ___m_FalloffIntensity_6;
	// UnityEngine.Color UnityEngine.Experimental.Rendering.Universal.Light2D::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_Intensity
	float ___m_Intensity_8;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightVolumeOpacity
	float ___m_LightVolumeOpacity_9;
	// System.Int32[] UnityEngine.Experimental.Rendering.Universal.Light2D::m_ApplyToSortingLayers
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___m_ApplyToSortingLayers_10;
	// UnityEngine.Sprite UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightCookieSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_LightCookieSprite_11;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Light2D::m_UseNormalMap
	bool ___m_UseNormalMap_12;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_LightOrder
	int32_t ___m_LightOrder_13;
	// System.Boolean UnityEngine.Experimental.Rendering.Universal.Light2D::m_AlphaBlendOnOverlap
	bool ___m_AlphaBlendOnOverlap_14;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShadowIntensity
	float ___m_ShadowIntensity_15;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShadowVolumeIntensity
	float ___m_ShadowVolumeIntensity_16;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousLightCookieSprite
	int32_t ___m_PreviousLightCookieSprite_17;
	// UnityEngine.Mesh UnityEngine.Experimental.Rendering.Universal.Light2D::m_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_Mesh_18;
	// UnityEngine.Bounds UnityEngine.Experimental.Rendering.Universal.Light2D::m_LocalBounds
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  ___m_LocalBounds_19;
	// UnityEngine.BoundingSphere UnityEngine.Experimental.Rendering.Universal.Light2D::<boundingSphere>k__BackingField
	BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709  ___U3CboundingSphereU3Ek__BackingField_20;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightInnerAngle
	float ___m_PointLightInnerAngle_21;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightOuterAngle
	float ___m_PointLightOuterAngle_22;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightInnerRadius
	float ___m_PointLightInnerRadius_23;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightOuterRadius
	float ___m_PointLightOuterRadius_24;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightDistance
	float ___m_PointLightDistance_25;
	// UnityEngine.Experimental.Rendering.Universal.Light2D/PointLightQuality UnityEngine.Experimental.Rendering.Universal.Light2D::m_PointLightQuality
	int32_t ___m_PointLightQuality_26;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricSides
	int32_t ___m_ShapeLightParametricSides_27;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricAngleOffset
	float ___m_ShapeLightParametricAngleOffset_28;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightParametricRadius
	float ___m_ShapeLightParametricRadius_29;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightFalloffSize
	float ___m_ShapeLightFalloffSize_30;
	// UnityEngine.Vector2 UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapeLightFalloffOffset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_ShapeLightFalloffOffset_31;
	// UnityEngine.Vector3[] UnityEngine.Experimental.Rendering.Universal.Light2D::m_ShapePath
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_ShapePath_32;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightFalloffSize
	float ___m_PreviousShapeLightFalloffSize_33;
	// System.Int32 UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricSides
	int32_t ___m_PreviousShapeLightParametricSides_34;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricAngleOffset
	float ___m_PreviousShapeLightParametricAngleOffset_35;
	// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::m_PreviousShapeLightParametricRadius
	float ___m_PreviousShapeLightParametricRadius_36;

public:
	inline static int32_t get_offset_of_m_LightType_4() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightType_4)); }
	inline int32_t get_m_LightType_4() const { return ___m_LightType_4; }
	inline int32_t* get_address_of_m_LightType_4() { return &___m_LightType_4; }
	inline void set_m_LightType_4(int32_t value)
	{
		___m_LightType_4 = value;
	}

	inline static int32_t get_offset_of_m_BlendStyleIndex_5() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_BlendStyleIndex_5)); }
	inline int32_t get_m_BlendStyleIndex_5() const { return ___m_BlendStyleIndex_5; }
	inline int32_t* get_address_of_m_BlendStyleIndex_5() { return &___m_BlendStyleIndex_5; }
	inline void set_m_BlendStyleIndex_5(int32_t value)
	{
		___m_BlendStyleIndex_5 = value;
	}

	inline static int32_t get_offset_of_m_FalloffIntensity_6() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_FalloffIntensity_6)); }
	inline float get_m_FalloffIntensity_6() const { return ___m_FalloffIntensity_6; }
	inline float* get_address_of_m_FalloffIntensity_6() { return &___m_FalloffIntensity_6; }
	inline void set_m_FalloffIntensity_6(float value)
	{
		___m_FalloffIntensity_6 = value;
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_Intensity_8() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Intensity_8)); }
	inline float get_m_Intensity_8() const { return ___m_Intensity_8; }
	inline float* get_address_of_m_Intensity_8() { return &___m_Intensity_8; }
	inline void set_m_Intensity_8(float value)
	{
		___m_Intensity_8 = value;
	}

	inline static int32_t get_offset_of_m_LightVolumeOpacity_9() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightVolumeOpacity_9)); }
	inline float get_m_LightVolumeOpacity_9() const { return ___m_LightVolumeOpacity_9; }
	inline float* get_address_of_m_LightVolumeOpacity_9() { return &___m_LightVolumeOpacity_9; }
	inline void set_m_LightVolumeOpacity_9(float value)
	{
		___m_LightVolumeOpacity_9 = value;
	}

	inline static int32_t get_offset_of_m_ApplyToSortingLayers_10() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ApplyToSortingLayers_10)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_m_ApplyToSortingLayers_10() const { return ___m_ApplyToSortingLayers_10; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_m_ApplyToSortingLayers_10() { return &___m_ApplyToSortingLayers_10; }
	inline void set_m_ApplyToSortingLayers_10(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___m_ApplyToSortingLayers_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ApplyToSortingLayers_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_LightCookieSprite_11() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightCookieSprite_11)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_LightCookieSprite_11() const { return ___m_LightCookieSprite_11; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_LightCookieSprite_11() { return &___m_LightCookieSprite_11; }
	inline void set_m_LightCookieSprite_11(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_LightCookieSprite_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LightCookieSprite_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_UseNormalMap_12() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_UseNormalMap_12)); }
	inline bool get_m_UseNormalMap_12() const { return ___m_UseNormalMap_12; }
	inline bool* get_address_of_m_UseNormalMap_12() { return &___m_UseNormalMap_12; }
	inline void set_m_UseNormalMap_12(bool value)
	{
		___m_UseNormalMap_12 = value;
	}

	inline static int32_t get_offset_of_m_LightOrder_13() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LightOrder_13)); }
	inline int32_t get_m_LightOrder_13() const { return ___m_LightOrder_13; }
	inline int32_t* get_address_of_m_LightOrder_13() { return &___m_LightOrder_13; }
	inline void set_m_LightOrder_13(int32_t value)
	{
		___m_LightOrder_13 = value;
	}

	inline static int32_t get_offset_of_m_AlphaBlendOnOverlap_14() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_AlphaBlendOnOverlap_14)); }
	inline bool get_m_AlphaBlendOnOverlap_14() const { return ___m_AlphaBlendOnOverlap_14; }
	inline bool* get_address_of_m_AlphaBlendOnOverlap_14() { return &___m_AlphaBlendOnOverlap_14; }
	inline void set_m_AlphaBlendOnOverlap_14(bool value)
	{
		___m_AlphaBlendOnOverlap_14 = value;
	}

	inline static int32_t get_offset_of_m_ShadowIntensity_15() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShadowIntensity_15)); }
	inline float get_m_ShadowIntensity_15() const { return ___m_ShadowIntensity_15; }
	inline float* get_address_of_m_ShadowIntensity_15() { return &___m_ShadowIntensity_15; }
	inline void set_m_ShadowIntensity_15(float value)
	{
		___m_ShadowIntensity_15 = value;
	}

	inline static int32_t get_offset_of_m_ShadowVolumeIntensity_16() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShadowVolumeIntensity_16)); }
	inline float get_m_ShadowVolumeIntensity_16() const { return ___m_ShadowVolumeIntensity_16; }
	inline float* get_address_of_m_ShadowVolumeIntensity_16() { return &___m_ShadowVolumeIntensity_16; }
	inline void set_m_ShadowVolumeIntensity_16(float value)
	{
		___m_ShadowVolumeIntensity_16 = value;
	}

	inline static int32_t get_offset_of_m_PreviousLightCookieSprite_17() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousLightCookieSprite_17)); }
	inline int32_t get_m_PreviousLightCookieSprite_17() const { return ___m_PreviousLightCookieSprite_17; }
	inline int32_t* get_address_of_m_PreviousLightCookieSprite_17() { return &___m_PreviousLightCookieSprite_17; }
	inline void set_m_PreviousLightCookieSprite_17(int32_t value)
	{
		___m_PreviousLightCookieSprite_17 = value;
	}

	inline static int32_t get_offset_of_m_Mesh_18() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_Mesh_18)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_Mesh_18() const { return ___m_Mesh_18; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_Mesh_18() { return &___m_Mesh_18; }
	inline void set_m_Mesh_18(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_Mesh_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Mesh_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_LocalBounds_19() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_LocalBounds_19)); }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  get_m_LocalBounds_19() const { return ___m_LocalBounds_19; }
	inline Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * get_address_of_m_LocalBounds_19() { return &___m_LocalBounds_19; }
	inline void set_m_LocalBounds_19(Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  value)
	{
		___m_LocalBounds_19 = value;
	}

	inline static int32_t get_offset_of_U3CboundingSphereU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___U3CboundingSphereU3Ek__BackingField_20)); }
	inline BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709  get_U3CboundingSphereU3Ek__BackingField_20() const { return ___U3CboundingSphereU3Ek__BackingField_20; }
	inline BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709 * get_address_of_U3CboundingSphereU3Ek__BackingField_20() { return &___U3CboundingSphereU3Ek__BackingField_20; }
	inline void set_U3CboundingSphereU3Ek__BackingField_20(BoundingSphere_t97CFF9ADC6DC8157DBA993251691A9868DAFF709  value)
	{
		___U3CboundingSphereU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_m_PointLightInnerAngle_21() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightInnerAngle_21)); }
	inline float get_m_PointLightInnerAngle_21() const { return ___m_PointLightInnerAngle_21; }
	inline float* get_address_of_m_PointLightInnerAngle_21() { return &___m_PointLightInnerAngle_21; }
	inline void set_m_PointLightInnerAngle_21(float value)
	{
		___m_PointLightInnerAngle_21 = value;
	}

	inline static int32_t get_offset_of_m_PointLightOuterAngle_22() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightOuterAngle_22)); }
	inline float get_m_PointLightOuterAngle_22() const { return ___m_PointLightOuterAngle_22; }
	inline float* get_address_of_m_PointLightOuterAngle_22() { return &___m_PointLightOuterAngle_22; }
	inline void set_m_PointLightOuterAngle_22(float value)
	{
		___m_PointLightOuterAngle_22 = value;
	}

	inline static int32_t get_offset_of_m_PointLightInnerRadius_23() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightInnerRadius_23)); }
	inline float get_m_PointLightInnerRadius_23() const { return ___m_PointLightInnerRadius_23; }
	inline float* get_address_of_m_PointLightInnerRadius_23() { return &___m_PointLightInnerRadius_23; }
	inline void set_m_PointLightInnerRadius_23(float value)
	{
		___m_PointLightInnerRadius_23 = value;
	}

	inline static int32_t get_offset_of_m_PointLightOuterRadius_24() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightOuterRadius_24)); }
	inline float get_m_PointLightOuterRadius_24() const { return ___m_PointLightOuterRadius_24; }
	inline float* get_address_of_m_PointLightOuterRadius_24() { return &___m_PointLightOuterRadius_24; }
	inline void set_m_PointLightOuterRadius_24(float value)
	{
		___m_PointLightOuterRadius_24 = value;
	}

	inline static int32_t get_offset_of_m_PointLightDistance_25() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightDistance_25)); }
	inline float get_m_PointLightDistance_25() const { return ___m_PointLightDistance_25; }
	inline float* get_address_of_m_PointLightDistance_25() { return &___m_PointLightDistance_25; }
	inline void set_m_PointLightDistance_25(float value)
	{
		___m_PointLightDistance_25 = value;
	}

	inline static int32_t get_offset_of_m_PointLightQuality_26() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PointLightQuality_26)); }
	inline int32_t get_m_PointLightQuality_26() const { return ___m_PointLightQuality_26; }
	inline int32_t* get_address_of_m_PointLightQuality_26() { return &___m_PointLightQuality_26; }
	inline void set_m_PointLightQuality_26(int32_t value)
	{
		___m_PointLightQuality_26 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricSides_27() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricSides_27)); }
	inline int32_t get_m_ShapeLightParametricSides_27() const { return ___m_ShapeLightParametricSides_27; }
	inline int32_t* get_address_of_m_ShapeLightParametricSides_27() { return &___m_ShapeLightParametricSides_27; }
	inline void set_m_ShapeLightParametricSides_27(int32_t value)
	{
		___m_ShapeLightParametricSides_27 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricAngleOffset_28() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricAngleOffset_28)); }
	inline float get_m_ShapeLightParametricAngleOffset_28() const { return ___m_ShapeLightParametricAngleOffset_28; }
	inline float* get_address_of_m_ShapeLightParametricAngleOffset_28() { return &___m_ShapeLightParametricAngleOffset_28; }
	inline void set_m_ShapeLightParametricAngleOffset_28(float value)
	{
		___m_ShapeLightParametricAngleOffset_28 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightParametricRadius_29() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightParametricRadius_29)); }
	inline float get_m_ShapeLightParametricRadius_29() const { return ___m_ShapeLightParametricRadius_29; }
	inline float* get_address_of_m_ShapeLightParametricRadius_29() { return &___m_ShapeLightParametricRadius_29; }
	inline void set_m_ShapeLightParametricRadius_29(float value)
	{
		___m_ShapeLightParametricRadius_29 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightFalloffSize_30() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightFalloffSize_30)); }
	inline float get_m_ShapeLightFalloffSize_30() const { return ___m_ShapeLightFalloffSize_30; }
	inline float* get_address_of_m_ShapeLightFalloffSize_30() { return &___m_ShapeLightFalloffSize_30; }
	inline void set_m_ShapeLightFalloffSize_30(float value)
	{
		___m_ShapeLightFalloffSize_30 = value;
	}

	inline static int32_t get_offset_of_m_ShapeLightFalloffOffset_31() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapeLightFalloffOffset_31)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_ShapeLightFalloffOffset_31() const { return ___m_ShapeLightFalloffOffset_31; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_ShapeLightFalloffOffset_31() { return &___m_ShapeLightFalloffOffset_31; }
	inline void set_m_ShapeLightFalloffOffset_31(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_ShapeLightFalloffOffset_31 = value;
	}

	inline static int32_t get_offset_of_m_ShapePath_32() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_ShapePath_32)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_ShapePath_32() const { return ___m_ShapePath_32; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_ShapePath_32() { return &___m_ShapePath_32; }
	inline void set_m_ShapePath_32(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_ShapePath_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ShapePath_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightFalloffSize_33() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightFalloffSize_33)); }
	inline float get_m_PreviousShapeLightFalloffSize_33() const { return ___m_PreviousShapeLightFalloffSize_33; }
	inline float* get_address_of_m_PreviousShapeLightFalloffSize_33() { return &___m_PreviousShapeLightFalloffSize_33; }
	inline void set_m_PreviousShapeLightFalloffSize_33(float value)
	{
		___m_PreviousShapeLightFalloffSize_33 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricSides_34() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricSides_34)); }
	inline int32_t get_m_PreviousShapeLightParametricSides_34() const { return ___m_PreviousShapeLightParametricSides_34; }
	inline int32_t* get_address_of_m_PreviousShapeLightParametricSides_34() { return &___m_PreviousShapeLightParametricSides_34; }
	inline void set_m_PreviousShapeLightParametricSides_34(int32_t value)
	{
		___m_PreviousShapeLightParametricSides_34 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricAngleOffset_35() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricAngleOffset_35)); }
	inline float get_m_PreviousShapeLightParametricAngleOffset_35() const { return ___m_PreviousShapeLightParametricAngleOffset_35; }
	inline float* get_address_of_m_PreviousShapeLightParametricAngleOffset_35() { return &___m_PreviousShapeLightParametricAngleOffset_35; }
	inline void set_m_PreviousShapeLightParametricAngleOffset_35(float value)
	{
		___m_PreviousShapeLightParametricAngleOffset_35 = value;
	}

	inline static int32_t get_offset_of_m_PreviousShapeLightParametricRadius_36() { return static_cast<int32_t>(offsetof(Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF, ___m_PreviousShapeLightParametricRadius_36)); }
	inline float get_m_PreviousShapeLightParametricRadius_36() const { return ___m_PreviousShapeLightParametricRadius_36; }
	inline float* get_address_of_m_PreviousShapeLightParametricRadius_36() { return &___m_PreviousShapeLightParametricRadius_36; }
	inline void set_m_PreviousShapeLightParametricRadius_36(float value)
	{
		___m_PreviousShapeLightParametricRadius_36 = value;
	}
};


// LightingTask
struct LightingTask_tDDE3B2649698157708B5552518862B4053D44975  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager LightingTask::GM
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___GM_4;
	// RoomManager LightingTask::RM
	RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * ___RM_5;
	// UnityEngine.GameObject LightingTask::results
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___results_6;
	// System.Int32 LightingTask::goalDuration
	int32_t ___goalDuration_7;
	// System.Single LightingTask::Duration
	float ___Duration_8;
	// UnityEngine.UI.Slider LightingTask::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_9;
	// TaskType LightingTask::taskType
	int32_t ___taskType_10;

public:
	inline static int32_t get_offset_of_GM_4() { return static_cast<int32_t>(offsetof(LightingTask_tDDE3B2649698157708B5552518862B4053D44975, ___GM_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_GM_4() const { return ___GM_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_GM_4() { return &___GM_4; }
	inline void set_GM_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___GM_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GM_4), (void*)value);
	}

	inline static int32_t get_offset_of_RM_5() { return static_cast<int32_t>(offsetof(LightingTask_tDDE3B2649698157708B5552518862B4053D44975, ___RM_5)); }
	inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * get_RM_5() const { return ___RM_5; }
	inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF ** get_address_of_RM_5() { return &___RM_5; }
	inline void set_RM_5(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * value)
	{
		___RM_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RM_5), (void*)value);
	}

	inline static int32_t get_offset_of_results_6() { return static_cast<int32_t>(offsetof(LightingTask_tDDE3B2649698157708B5552518862B4053D44975, ___results_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_results_6() const { return ___results_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_results_6() { return &___results_6; }
	inline void set_results_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___results_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___results_6), (void*)value);
	}

	inline static int32_t get_offset_of_goalDuration_7() { return static_cast<int32_t>(offsetof(LightingTask_tDDE3B2649698157708B5552518862B4053D44975, ___goalDuration_7)); }
	inline int32_t get_goalDuration_7() const { return ___goalDuration_7; }
	inline int32_t* get_address_of_goalDuration_7() { return &___goalDuration_7; }
	inline void set_goalDuration_7(int32_t value)
	{
		___goalDuration_7 = value;
	}

	inline static int32_t get_offset_of_Duration_8() { return static_cast<int32_t>(offsetof(LightingTask_tDDE3B2649698157708B5552518862B4053D44975, ___Duration_8)); }
	inline float get_Duration_8() const { return ___Duration_8; }
	inline float* get_address_of_Duration_8() { return &___Duration_8; }
	inline void set_Duration_8(float value)
	{
		___Duration_8 = value;
	}

	inline static int32_t get_offset_of_slider_9() { return static_cast<int32_t>(offsetof(LightingTask_tDDE3B2649698157708B5552518862B4053D44975, ___slider_9)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_9() const { return ___slider_9; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_9() { return &___slider_9; }
	inline void set_slider_9(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_9), (void*)value);
	}

	inline static int32_t get_offset_of_taskType_10() { return static_cast<int32_t>(offsetof(LightingTask_tDDE3B2649698157708B5552518862B4053D44975, ___taskType_10)); }
	inline int32_t get_taskType_10() const { return ___taskType_10; }
	inline int32_t* get_address_of_taskType_10() { return &___taskType_10; }
	inline void set_taskType_10(int32_t value)
	{
		___taskType_10 = value;
	}
};


// NetworkManager
struct NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String NetworkManager::init_URL
	String_t* ___init_URL_4;

public:
	inline static int32_t get_offset_of_init_URL_4() { return static_cast<int32_t>(offsetof(NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606, ___init_URL_4)); }
	inline String_t* get_init_URL_4() const { return ___init_URL_4; }
	inline String_t** get_address_of_init_URL_4() { return &___init_URL_4; }
	inline void set_init_URL_4(String_t* value)
	{
		___init_URL_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___init_URL_4), (void*)value);
	}
};


// NutritionTask
struct NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 NutritionTask::goalLever
	int32_t ___goalLever_4;
	// UnityEngine.GameObject NutritionTask::results
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___results_5;
	// RoomManager NutritionTask::RM
	RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * ___RM_6;
	// System.Single NutritionTask::duration
	float ___duration_7;
	// TaskType NutritionTask::taskType
	int32_t ___taskType_8;
	// UnityEngine.GameObject NutritionTask::l1
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___l1_9;
	// UnityEngine.Animator NutritionTask::l1_anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___l1_anim_10;
	// UnityEngine.GameObject NutritionTask::l3
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___l3_11;
	// UnityEngine.Animator NutritionTask::l2_anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___l2_anim_12;
	// UnityEngine.GameObject NutritionTask::l2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___l2_13;
	// UnityEngine.Animator NutritionTask::l3_anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___l3_anim_14;

public:
	inline static int32_t get_offset_of_goalLever_4() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___goalLever_4)); }
	inline int32_t get_goalLever_4() const { return ___goalLever_4; }
	inline int32_t* get_address_of_goalLever_4() { return &___goalLever_4; }
	inline void set_goalLever_4(int32_t value)
	{
		___goalLever_4 = value;
	}

	inline static int32_t get_offset_of_results_5() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___results_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_results_5() const { return ___results_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_results_5() { return &___results_5; }
	inline void set_results_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___results_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___results_5), (void*)value);
	}

	inline static int32_t get_offset_of_RM_6() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___RM_6)); }
	inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * get_RM_6() const { return ___RM_6; }
	inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF ** get_address_of_RM_6() { return &___RM_6; }
	inline void set_RM_6(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * value)
	{
		___RM_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RM_6), (void*)value);
	}

	inline static int32_t get_offset_of_duration_7() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___duration_7)); }
	inline float get_duration_7() const { return ___duration_7; }
	inline float* get_address_of_duration_7() { return &___duration_7; }
	inline void set_duration_7(float value)
	{
		___duration_7 = value;
	}

	inline static int32_t get_offset_of_taskType_8() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___taskType_8)); }
	inline int32_t get_taskType_8() const { return ___taskType_8; }
	inline int32_t* get_address_of_taskType_8() { return &___taskType_8; }
	inline void set_taskType_8(int32_t value)
	{
		___taskType_8 = value;
	}

	inline static int32_t get_offset_of_l1_9() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___l1_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_l1_9() const { return ___l1_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_l1_9() { return &___l1_9; }
	inline void set_l1_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___l1_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l1_9), (void*)value);
	}

	inline static int32_t get_offset_of_l1_anim_10() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___l1_anim_10)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_l1_anim_10() const { return ___l1_anim_10; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_l1_anim_10() { return &___l1_anim_10; }
	inline void set_l1_anim_10(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___l1_anim_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l1_anim_10), (void*)value);
	}

	inline static int32_t get_offset_of_l3_11() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___l3_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_l3_11() const { return ___l3_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_l3_11() { return &___l3_11; }
	inline void set_l3_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___l3_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l3_11), (void*)value);
	}

	inline static int32_t get_offset_of_l2_anim_12() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___l2_anim_12)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_l2_anim_12() const { return ___l2_anim_12; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_l2_anim_12() { return &___l2_anim_12; }
	inline void set_l2_anim_12(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___l2_anim_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l2_anim_12), (void*)value);
	}

	inline static int32_t get_offset_of_l2_13() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___l2_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_l2_13() const { return ___l2_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_l2_13() { return &___l2_13; }
	inline void set_l2_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___l2_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l2_13), (void*)value);
	}

	inline static int32_t get_offset_of_l3_anim_14() { return static_cast<int32_t>(offsetof(NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915, ___l3_anim_14)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_l3_anim_14() const { return ___l3_anim_14; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_l3_anim_14() { return &___l3_anim_14; }
	inline void set_l3_anim_14(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___l3_anim_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___l3_anim_14), (void*)value);
	}
};


// PlantManager
struct PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// GameManager PlantManager::GM
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___GM_4;
	// PlantManager/State PlantManager::state
	int32_t ___state_5;
	// System.Boolean PlantManager::inWaterCycle
	bool ___inWaterCycle_6;
	// System.Boolean PlantManager::inLightCycle
	bool ___inLightCycle_7;
	// System.Boolean PlantManager::inNuteriCycle
	bool ___inNuteriCycle_8;
	// System.Boolean PlantManager::needWater
	bool ___needWater_9;
	// System.Boolean PlantManager::needNutrition
	bool ___needNutrition_10;
	// System.Boolean PlantManager::needLight
	bool ___needLight_11;
	// System.Single PlantManager::healthBar
	float ___healthBar_12;
	// System.Single PlantManager::waterBar
	float ___waterBar_13;
	// System.Single PlantManager::nutriBar
	float ___nutriBar_14;
	// System.Single PlantManager::lightBar
	float ___lightBar_15;
	// System.Single PlantManager::maxWaterBar
	float ___maxWaterBar_16;
	// System.Single PlantManager::maxNutriBar
	float ___maxNutriBar_17;
	// System.Single PlantManager::maxLightBar
	float ___maxLightBar_18;

public:
	inline static int32_t get_offset_of_GM_4() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___GM_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_GM_4() const { return ___GM_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_GM_4() { return &___GM_4; }
	inline void set_GM_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___GM_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GM_4), (void*)value);
	}

	inline static int32_t get_offset_of_state_5() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___state_5)); }
	inline int32_t get_state_5() const { return ___state_5; }
	inline int32_t* get_address_of_state_5() { return &___state_5; }
	inline void set_state_5(int32_t value)
	{
		___state_5 = value;
	}

	inline static int32_t get_offset_of_inWaterCycle_6() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___inWaterCycle_6)); }
	inline bool get_inWaterCycle_6() const { return ___inWaterCycle_6; }
	inline bool* get_address_of_inWaterCycle_6() { return &___inWaterCycle_6; }
	inline void set_inWaterCycle_6(bool value)
	{
		___inWaterCycle_6 = value;
	}

	inline static int32_t get_offset_of_inLightCycle_7() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___inLightCycle_7)); }
	inline bool get_inLightCycle_7() const { return ___inLightCycle_7; }
	inline bool* get_address_of_inLightCycle_7() { return &___inLightCycle_7; }
	inline void set_inLightCycle_7(bool value)
	{
		___inLightCycle_7 = value;
	}

	inline static int32_t get_offset_of_inNuteriCycle_8() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___inNuteriCycle_8)); }
	inline bool get_inNuteriCycle_8() const { return ___inNuteriCycle_8; }
	inline bool* get_address_of_inNuteriCycle_8() { return &___inNuteriCycle_8; }
	inline void set_inNuteriCycle_8(bool value)
	{
		___inNuteriCycle_8 = value;
	}

	inline static int32_t get_offset_of_needWater_9() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___needWater_9)); }
	inline bool get_needWater_9() const { return ___needWater_9; }
	inline bool* get_address_of_needWater_9() { return &___needWater_9; }
	inline void set_needWater_9(bool value)
	{
		___needWater_9 = value;
	}

	inline static int32_t get_offset_of_needNutrition_10() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___needNutrition_10)); }
	inline bool get_needNutrition_10() const { return ___needNutrition_10; }
	inline bool* get_address_of_needNutrition_10() { return &___needNutrition_10; }
	inline void set_needNutrition_10(bool value)
	{
		___needNutrition_10 = value;
	}

	inline static int32_t get_offset_of_needLight_11() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___needLight_11)); }
	inline bool get_needLight_11() const { return ___needLight_11; }
	inline bool* get_address_of_needLight_11() { return &___needLight_11; }
	inline void set_needLight_11(bool value)
	{
		___needLight_11 = value;
	}

	inline static int32_t get_offset_of_healthBar_12() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___healthBar_12)); }
	inline float get_healthBar_12() const { return ___healthBar_12; }
	inline float* get_address_of_healthBar_12() { return &___healthBar_12; }
	inline void set_healthBar_12(float value)
	{
		___healthBar_12 = value;
	}

	inline static int32_t get_offset_of_waterBar_13() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___waterBar_13)); }
	inline float get_waterBar_13() const { return ___waterBar_13; }
	inline float* get_address_of_waterBar_13() { return &___waterBar_13; }
	inline void set_waterBar_13(float value)
	{
		___waterBar_13 = value;
	}

	inline static int32_t get_offset_of_nutriBar_14() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___nutriBar_14)); }
	inline float get_nutriBar_14() const { return ___nutriBar_14; }
	inline float* get_address_of_nutriBar_14() { return &___nutriBar_14; }
	inline void set_nutriBar_14(float value)
	{
		___nutriBar_14 = value;
	}

	inline static int32_t get_offset_of_lightBar_15() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___lightBar_15)); }
	inline float get_lightBar_15() const { return ___lightBar_15; }
	inline float* get_address_of_lightBar_15() { return &___lightBar_15; }
	inline void set_lightBar_15(float value)
	{
		___lightBar_15 = value;
	}

	inline static int32_t get_offset_of_maxWaterBar_16() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___maxWaterBar_16)); }
	inline float get_maxWaterBar_16() const { return ___maxWaterBar_16; }
	inline float* get_address_of_maxWaterBar_16() { return &___maxWaterBar_16; }
	inline void set_maxWaterBar_16(float value)
	{
		___maxWaterBar_16 = value;
	}

	inline static int32_t get_offset_of_maxNutriBar_17() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___maxNutriBar_17)); }
	inline float get_maxNutriBar_17() const { return ___maxNutriBar_17; }
	inline float* get_address_of_maxNutriBar_17() { return &___maxNutriBar_17; }
	inline void set_maxNutriBar_17(float value)
	{
		___maxNutriBar_17 = value;
	}

	inline static int32_t get_offset_of_maxLightBar_18() { return static_cast<int32_t>(offsetof(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA, ___maxLightBar_18)); }
	inline float get_maxLightBar_18() const { return ___maxLightBar_18; }
	inline float* get_address_of_maxLightBar_18() { return &___maxLightBar_18; }
	inline void set_maxLightBar_18(float value)
	{
		___maxLightBar_18 = value;
	}
};


// PlayerMovement
struct PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// CharacterInput PlayerMovement::playerInput
	CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * ___playerInput_4;
	// UnityEngine.CharacterController PlayerMovement::controller
	CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * ___controller_5;
	// System.Single PlayerMovement::playerSpeed
	float ___playerSpeed_6;
	// UnityEngine.GameObject PlayerMovement::character
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character_7;

public:
	inline static int32_t get_offset_of_playerInput_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___playerInput_4)); }
	inline CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * get_playerInput_4() const { return ___playerInput_4; }
	inline CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D ** get_address_of_playerInput_4() { return &___playerInput_4; }
	inline void set_playerInput_4(CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * value)
	{
		___playerInput_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerInput_4), (void*)value);
	}

	inline static int32_t get_offset_of_controller_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___controller_5)); }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * get_controller_5() const { return ___controller_5; }
	inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E ** get_address_of_controller_5() { return &___controller_5; }
	inline void set_controller_5(CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * value)
	{
		___controller_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___controller_5), (void*)value);
	}

	inline static int32_t get_offset_of_playerSpeed_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___playerSpeed_6)); }
	inline float get_playerSpeed_6() const { return ___playerSpeed_6; }
	inline float* get_address_of_playerSpeed_6() { return &___playerSpeed_6; }
	inline void set_playerSpeed_6(float value)
	{
		___playerSpeed_6 = value;
	}

	inline static int32_t get_offset_of_character_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09, ___character_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_character_7() const { return ___character_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_character_7() { return &___character_7; }
	inline void set_character_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___character_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_7), (void*)value);
	}
};


// RoomManager
struct RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject RoomManager::lightTask
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lightTask_4;
	// UnityEngine.GameObject RoomManager::waterTask
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___waterTask_5;
	// UnityEngine.GameObject RoomManager::nutritionTask
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nutritionTask_6;
	// UnityEngine.GameObject RoomManager::Plant
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Plant_7;
	// UnityEngine.GameObject RoomManager::wateringMaschine
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wateringMaschine_8;
	// UnityEngine.GameObject RoomManager::lightMaschine
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___lightMaschine_9;
	// UnityEngine.GameObject RoomManager::nutritionMaschine
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___nutritionMaschine_10;
	// GameManager RoomManager::GM
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___GM_11;
	// UnityEngine.GameObject RoomManager::canvas
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___canvas_12;
	// PlantManager RoomManager::plant
	PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * ___plant_13;
	// System.Boolean RoomManager::inlightTask
	bool ___inlightTask_14;
	// System.Boolean RoomManager::inWaterTask
	bool ___inWaterTask_15;
	// System.Boolean RoomManager::inNutritionTask
	bool ___inNutritionTask_16;

public:
	inline static int32_t get_offset_of_lightTask_4() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___lightTask_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lightTask_4() const { return ___lightTask_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lightTask_4() { return &___lightTask_4; }
	inline void set_lightTask_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lightTask_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightTask_4), (void*)value);
	}

	inline static int32_t get_offset_of_waterTask_5() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___waterTask_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_waterTask_5() const { return ___waterTask_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_waterTask_5() { return &___waterTask_5; }
	inline void set_waterTask_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___waterTask_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waterTask_5), (void*)value);
	}

	inline static int32_t get_offset_of_nutritionTask_6() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___nutritionTask_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_nutritionTask_6() const { return ___nutritionTask_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_nutritionTask_6() { return &___nutritionTask_6; }
	inline void set_nutritionTask_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___nutritionTask_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nutritionTask_6), (void*)value);
	}

	inline static int32_t get_offset_of_Plant_7() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___Plant_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Plant_7() const { return ___Plant_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Plant_7() { return &___Plant_7; }
	inline void set_Plant_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Plant_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Plant_7), (void*)value);
	}

	inline static int32_t get_offset_of_wateringMaschine_8() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___wateringMaschine_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wateringMaschine_8() const { return ___wateringMaschine_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wateringMaschine_8() { return &___wateringMaschine_8; }
	inline void set_wateringMaschine_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wateringMaschine_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wateringMaschine_8), (void*)value);
	}

	inline static int32_t get_offset_of_lightMaschine_9() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___lightMaschine_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_lightMaschine_9() const { return ___lightMaschine_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_lightMaschine_9() { return &___lightMaschine_9; }
	inline void set_lightMaschine_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___lightMaschine_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lightMaschine_9), (void*)value);
	}

	inline static int32_t get_offset_of_nutritionMaschine_10() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___nutritionMaschine_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_nutritionMaschine_10() const { return ___nutritionMaschine_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_nutritionMaschine_10() { return &___nutritionMaschine_10; }
	inline void set_nutritionMaschine_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___nutritionMaschine_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nutritionMaschine_10), (void*)value);
	}

	inline static int32_t get_offset_of_GM_11() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___GM_11)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_GM_11() const { return ___GM_11; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_GM_11() { return &___GM_11; }
	inline void set_GM_11(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___GM_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GM_11), (void*)value);
	}

	inline static int32_t get_offset_of_canvas_12() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___canvas_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_canvas_12() const { return ___canvas_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_canvas_12() { return &___canvas_12; }
	inline void set_canvas_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___canvas_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___canvas_12), (void*)value);
	}

	inline static int32_t get_offset_of_plant_13() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___plant_13)); }
	inline PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * get_plant_13() const { return ___plant_13; }
	inline PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA ** get_address_of_plant_13() { return &___plant_13; }
	inline void set_plant_13(PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * value)
	{
		___plant_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___plant_13), (void*)value);
	}

	inline static int32_t get_offset_of_inlightTask_14() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___inlightTask_14)); }
	inline bool get_inlightTask_14() const { return ___inlightTask_14; }
	inline bool* get_address_of_inlightTask_14() { return &___inlightTask_14; }
	inline void set_inlightTask_14(bool value)
	{
		___inlightTask_14 = value;
	}

	inline static int32_t get_offset_of_inWaterTask_15() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___inWaterTask_15)); }
	inline bool get_inWaterTask_15() const { return ___inWaterTask_15; }
	inline bool* get_address_of_inWaterTask_15() { return &___inWaterTask_15; }
	inline void set_inWaterTask_15(bool value)
	{
		___inWaterTask_15 = value;
	}

	inline static int32_t get_offset_of_inNutritionTask_16() { return static_cast<int32_t>(offsetof(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF, ___inNutritionTask_16)); }
	inline bool get_inNutritionTask_16() const { return ___inNutritionTask_16; }
	inline bool* get_address_of_inNutritionTask_16() { return &___inNutritionTask_16; }
	inline void set_inNutritionTask_16(bool value)
	{
		___inNutritionTask_16 = value;
	}
};


// TaskEnter
struct TaskEnter_t2A923415BDFA13E00EEF41301930ABC814D62FE3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single TaskEnter::initialIntensity
	float ___initialIntensity_4;
	// UnityEngine.GameObject[] TaskEnter::roomLights
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___roomLights_5;

public:
	inline static int32_t get_offset_of_initialIntensity_4() { return static_cast<int32_t>(offsetof(TaskEnter_t2A923415BDFA13E00EEF41301930ABC814D62FE3, ___initialIntensity_4)); }
	inline float get_initialIntensity_4() const { return ___initialIntensity_4; }
	inline float* get_address_of_initialIntensity_4() { return &___initialIntensity_4; }
	inline void set_initialIntensity_4(float value)
	{
		___initialIntensity_4 = value;
	}

	inline static int32_t get_offset_of_roomLights_5() { return static_cast<int32_t>(offsetof(TaskEnter_t2A923415BDFA13E00EEF41301930ABC814D62FE3, ___roomLights_5)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_roomLights_5() const { return ___roomLights_5; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_roomLights_5() { return &___roomLights_5; }
	inline void set_roomLights_5(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___roomLights_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___roomLights_5), (void*)value);
	}
};


// TriggerLightTask
struct TriggerLightTask_tF558497883F3635F15C52E3F84FDD830C02664FE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TriggerLightTask::Room
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Room_4;

public:
	inline static int32_t get_offset_of_Room_4() { return static_cast<int32_t>(offsetof(TriggerLightTask_tF558497883F3635F15C52E3F84FDD830C02664FE, ___Room_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Room_4() const { return ___Room_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Room_4() { return &___Room_4; }
	inline void set_Room_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Room_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Room_4), (void*)value);
	}
};


// TriggerNutriTask
struct TriggerNutriTask_t816ECE7538DDB79BB8C73D322F27050078FC2AFE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TriggerNutriTask::Room
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Room_4;

public:
	inline static int32_t get_offset_of_Room_4() { return static_cast<int32_t>(offsetof(TriggerNutriTask_t816ECE7538DDB79BB8C73D322F27050078FC2AFE, ___Room_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Room_4() const { return ___Room_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Room_4() { return &___Room_4; }
	inline void set_Room_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Room_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Room_4), (void*)value);
	}
};


// TriggerWaterTask
struct TriggerWaterTask_tE61098CE10A3846C154FD6E0C2F5E192BBBC1891  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TriggerWaterTask::Room
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Room_4;

public:
	inline static int32_t get_offset_of_Room_4() { return static_cast<int32_t>(offsetof(TriggerWaterTask_tE61098CE10A3846C154FD6E0C2F5E192BBBC1891, ___Room_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Room_4() const { return ___Room_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Room_4() { return &___Room_4; }
	inline void set_Room_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Room_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Room_4), (void*)value);
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WateringTask
struct WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject WateringTask::waterValve
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___waterValve_4;
	// System.Boolean WateringTask::turn
	bool ___turn_5;
	// System.Int32 WateringTask::turnCount
	int32_t ___turnCount_6;
	// System.Int32 WateringTask::goalTurn
	int32_t ___goalTurn_7;
	// System.Single WateringTask::Duration
	float ___Duration_8;
	// GameManager WateringTask::GM
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___GM_9;
	// RoomManager WateringTask::RM
	RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * ___RM_10;
	// UnityEngine.GameObject WateringTask::Button
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Button_11;
	// UnityEngine.GameObject WateringTask::results
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___results_12;
	// TaskType WateringTask::taskType
	int32_t ___taskType_13;
	// System.Single WateringTask::spinned
	float ___spinned_14;
	// System.Single WateringTask::minSpinSpeed
	float ___minSpinSpeed_15;
	// System.Single WateringTask::speedMultiplier
	float ___speedMultiplier_16;
	// System.Single WateringTask::spinSpeed
	float ___spinSpeed_17;
	// System.Single WateringTask::degree
	float ___degree_18;

public:
	inline static int32_t get_offset_of_waterValve_4() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___waterValve_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_waterValve_4() const { return ___waterValve_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_waterValve_4() { return &___waterValve_4; }
	inline void set_waterValve_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___waterValve_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waterValve_4), (void*)value);
	}

	inline static int32_t get_offset_of_turn_5() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___turn_5)); }
	inline bool get_turn_5() const { return ___turn_5; }
	inline bool* get_address_of_turn_5() { return &___turn_5; }
	inline void set_turn_5(bool value)
	{
		___turn_5 = value;
	}

	inline static int32_t get_offset_of_turnCount_6() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___turnCount_6)); }
	inline int32_t get_turnCount_6() const { return ___turnCount_6; }
	inline int32_t* get_address_of_turnCount_6() { return &___turnCount_6; }
	inline void set_turnCount_6(int32_t value)
	{
		___turnCount_6 = value;
	}

	inline static int32_t get_offset_of_goalTurn_7() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___goalTurn_7)); }
	inline int32_t get_goalTurn_7() const { return ___goalTurn_7; }
	inline int32_t* get_address_of_goalTurn_7() { return &___goalTurn_7; }
	inline void set_goalTurn_7(int32_t value)
	{
		___goalTurn_7 = value;
	}

	inline static int32_t get_offset_of_Duration_8() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___Duration_8)); }
	inline float get_Duration_8() const { return ___Duration_8; }
	inline float* get_address_of_Duration_8() { return &___Duration_8; }
	inline void set_Duration_8(float value)
	{
		___Duration_8 = value;
	}

	inline static int32_t get_offset_of_GM_9() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___GM_9)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_GM_9() const { return ___GM_9; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_GM_9() { return &___GM_9; }
	inline void set_GM_9(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___GM_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GM_9), (void*)value);
	}

	inline static int32_t get_offset_of_RM_10() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___RM_10)); }
	inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * get_RM_10() const { return ___RM_10; }
	inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF ** get_address_of_RM_10() { return &___RM_10; }
	inline void set_RM_10(RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * value)
	{
		___RM_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RM_10), (void*)value);
	}

	inline static int32_t get_offset_of_Button_11() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___Button_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Button_11() const { return ___Button_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Button_11() { return &___Button_11; }
	inline void set_Button_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Button_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Button_11), (void*)value);
	}

	inline static int32_t get_offset_of_results_12() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___results_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_results_12() const { return ___results_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_results_12() { return &___results_12; }
	inline void set_results_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___results_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___results_12), (void*)value);
	}

	inline static int32_t get_offset_of_taskType_13() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___taskType_13)); }
	inline int32_t get_taskType_13() const { return ___taskType_13; }
	inline int32_t* get_address_of_taskType_13() { return &___taskType_13; }
	inline void set_taskType_13(int32_t value)
	{
		___taskType_13 = value;
	}

	inline static int32_t get_offset_of_spinned_14() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___spinned_14)); }
	inline float get_spinned_14() const { return ___spinned_14; }
	inline float* get_address_of_spinned_14() { return &___spinned_14; }
	inline void set_spinned_14(float value)
	{
		___spinned_14 = value;
	}

	inline static int32_t get_offset_of_minSpinSpeed_15() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___minSpinSpeed_15)); }
	inline float get_minSpinSpeed_15() const { return ___minSpinSpeed_15; }
	inline float* get_address_of_minSpinSpeed_15() { return &___minSpinSpeed_15; }
	inline void set_minSpinSpeed_15(float value)
	{
		___minSpinSpeed_15 = value;
	}

	inline static int32_t get_offset_of_speedMultiplier_16() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___speedMultiplier_16)); }
	inline float get_speedMultiplier_16() const { return ___speedMultiplier_16; }
	inline float* get_address_of_speedMultiplier_16() { return &___speedMultiplier_16; }
	inline void set_speedMultiplier_16(float value)
	{
		___speedMultiplier_16 = value;
	}

	inline static int32_t get_offset_of_spinSpeed_17() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___spinSpeed_17)); }
	inline float get_spinSpeed_17() const { return ___spinSpeed_17; }
	inline float* get_address_of_spinSpeed_17() { return &___spinSpeed_17; }
	inline void set_spinSpeed_17(float value)
	{
		___spinSpeed_17 = value;
	}

	inline static int32_t get_offset_of_degree_18() { return static_cast<int32_t>(offsetof(WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690, ___degree_18)); }
	inline float get_degree_18() const { return ___degree_18; }
	inline float* get_address_of_degree_18() { return &___degree_18; }
	inline void set_degree_18(float value)
	{
		___degree_18 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.Collider2D[]
struct Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * m_Items[1];

public:
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  ReadOnlyArray_1_get_Item_mEEBFFC408FF97F9B0BF28B951075C0EB9A178010_gshared (ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9 * __this, int32_t ___index0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// System.Void CharacterController2D/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_mB1C4B8CED2296E60F44636855900EA1BDF1F393A (BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::op_Implicit(UnityEngine.LayerMask)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0 (LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  ___mask0, const RuntimeMethod* method);
// UnityEngine.Collider2D[] UnityEngine.Physics2D::OverlapCircleAll(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* Physics2D_OverlapCircleAll_m1D3E8E59627D524F35EF6C67940DD1121CEE6E7C (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5 (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * __this, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.Physics2D::OverlapCircle(UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07 (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___point0, float ___radius1, int32_t ___layerMask2, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::Invoke(!0)
inline void UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, bool ___arg00, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, bool, const RuntimeMethod*))UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_gshared)(__this, ___arg00, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_velocity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::SmoothDamp(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3&,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___current0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___target1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * ___currentVelocity2, float ___smoothTime3, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// System.Void CharacterController2D::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Flip_m8F1D0D7A87D7E507031BBCDF6C0DB095AFB21965 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::AddForce(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___force0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6 (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset UnityEngine.InputSystem.InputActionAsset::FromJson(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * InputActionAsset_FromJson_m85BD957DA42DE323A6FFB6A262A39A65EFD6A698 (String_t* ___json0, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionAsset CharacterInput::get_asset()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputActionMap UnityEngine.InputSystem.InputActionAsset::FindActionMap(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * InputActionAsset_FindActionMap_m26AEF35E59D7739FC7BF8E985085ED02CC42CA70 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction UnityEngine.InputSystem.InputActionMap::FindAction(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, String_t* ___nameOrId0, bool ___throwIfNotFound1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> UnityEngine.InputSystem.InputActionAsset::get_bindingMask()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_bindingMask_m8B3F08D6BB04076802DFFF80E4C8606A2F78753F (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___value0, const RuntimeMethod* method);
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> UnityEngine.InputSystem.InputActionAsset::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  InputActionAsset_get_devices_m1144659F84189F26DF62C81AD3E3CB59D91E2233 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_set_devices_m719AC35B8D32694CDDB432D38BBE670BFE4A53D5 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  ___value0, const RuntimeMethod* method);
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> UnityEngine.InputSystem.InputActionAsset::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  InputActionAsset_get_controlSchemes_m9FACEA3E979F8EAAA228ED9390E80E05318C4A60 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionAsset::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionAsset_Contains_m792C3FAB58851FC223273425F7D2C39562BDE40D (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___action0, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> UnityEngine.InputSystem.InputActionAsset::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* InputActionAsset_GetEnumerator_mEA39637BFE5F6916DEDC5C99080128CEDB79A3B6 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> CharacterInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacterInput_GetEnumerator_mA02D5F2528690CE95281EA85EC99C53D9CC0A7FA (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Enable_mC9C209D6E73F93865238FA20C9CA5B864F53E647 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionAsset::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionAsset_Disable_m8879D95AF1BC47E7406769B0C490592D313D6269 (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method);
// System.Void CharacterInput/PlayerActions::.ctor(CharacterInput)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerActions__ctor_m13C8917F20E34D83612AF9D0C6DBE4A9FF7AF44F_inline (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * ___wrapper0, const RuntimeMethod* method);
// System.Int32 UnityEngine.InputSystem.InputActionAsset::FindControlSchemeIndex(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t InputActionAsset_FindControlSchemeIndex_m9D70721D915E71C296839EDC5F4EEAF79B7CBF6F (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, String_t* ___name0, const RuntimeMethod* method);
// !0 UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme>::get_Item(System.Int32)
inline InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  ReadOnlyArray_1_get_Item_mEEBFFC408FF97F9B0BF28B951075C0EB9A178010 (ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  (*) (ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9 *, int32_t, const RuntimeMethod*))ReadOnlyArray_1_get_Item_mEEBFFC408FF97F9B0BF28B951075C0EB9A178010_gshared)(__this, ___index0, method);
}
// !!0 UnityEngine.Component::GetComponent<NetworkManager>()
inline NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * Component_GetComponent_TisNetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_m8B96EC85EE35FAF3E6AB6C123D5D2A408DBAA8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_fixedDeltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5 (const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<GameManager>()
inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<RoomManager>()
inline RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, String_t* ___n0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Slider>()
inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void RoomManager::startCycle(System.Single,TaskType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_startCycle_mAEC43D118E6B5264AEF2A95429C1B3DB1FC7A7B3 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, float ___d0, int32_t ___t1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Animator::GetBool(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void NutritionTask::checkWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_checkWin_mDE82FEB7459136F2A5BE54C8CD7D58751001261E (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// System.Void CharacterInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput__ctor_mBD75FB6033675789ED0B203254A7C2D2753BCBA1 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CharacterController>()
inline CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void CharacterInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput_Enable_mEEFFF9BA951949C7D6814806A2D87511BFB2A754 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method);
// System.Void CharacterInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput_Disable_m7890AE030B899D18657DCC9D04C577E9DB31B28E (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method);
// CharacterInput/PlayerActions CharacterInput::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965  CharacterInput_get_Player_m2C0A9E445307E3C595DF62C3405F7E1B12DB5402 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method);
// UnityEngine.InputSystem.InputAction CharacterInput/PlayerActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4 (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.InputSystem.InputAction::ReadValue<UnityEngine.Vector2>()
inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, const RuntimeMethod* method)
{
	return ((  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  (*) (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 *, const RuntimeMethod*))InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// UnityEngine.CollisionFlags UnityEngine.CharacterController::Move(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60 (CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___motion0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.SpriteRenderer::set_flipX(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.IEnumerator RoomManager::cycleIsOver(System.Single,TaskType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RoomManager_cycleIsOver_m5CAC0E6EF6858F06B69BD40FB3AE42F8C37C3390 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, float ___delayTime0, int32_t ___t1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void RoomManager/<cycleIsOver>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcycleIsOverU3Ed__18__ctor_mF30B870FEEA931EB0ABC0DFA58D5661CA4DE54C8 (U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<PlantManager>()
inline PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Experimental.Rendering.Universal.Light2D>()
inline Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Single UnityEngine.Experimental.Rendering.Universal.Light2D::get_intensity()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_intensity_m12C2A712E18652DEC877F79FCBA3C3D3AC2269D5_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Experimental.Rendering.Universal.Light2D::set_intensity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_intensity_m906585AD3CD4319A37DE766A9412561D6E654224_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, float ___value0, const RuntimeMethod* method);
// System.Void RoomManager::startLightTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_startLightTask_mE28BDFDDFDDFB2313A81B4EF2C3D7AD8C366AAE4 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method);
// System.Void RoomManager::startNutriTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_startNutriTask_m7D380331A92009CD2C72A237099FEE704EED0917 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method);
// System.Void RoomManager::startWateringTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_startWateringTask_m968B078D6A798DAFBE47EB49AE276D3504D47C96 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method);
// System.Void WateringTask::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_Reset_mFDE17E61A7D8849B12B58EC7B9E849FA444C902C (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method);
// System.Void WateringTask::KeepTurning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_KeepTurning_m1CFCDC654DC26D1BA682268612A2BDB0ACB227D5 (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90 (const RuntimeMethod* method);
// System.Void UnityEngine.Transform::RotateAround(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___axis1, float ___angle2, const RuntimeMethod* method);
// System.Void WateringTask::Spin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_Spin_m0016F1C118020EBB562B9E6A93CD62E4C390EB22 (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method);
// System.Void WateringTask::SpinOneRound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_SpinOneRound_m3559C40E4DFBD9EE223C04490866102712B41E3B (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Boolean>::.ctor()
inline void UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7 (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB * __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_t10C429A2DAF73A4517568E494115F7503F9E17EB *, const RuntimeMethod*))UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_gshared)(__this, method);
}
// UnityEngine.InputSystem.InputActionMap CharacterInput/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * PlayerActions_Get_m9D8BB52C557D3C46352AF299C5D78CC2A454904F (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void CharacterInput/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_mEE181F8E8B6B7C14EC707DBE86C65D143867AA4A (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputActionMap::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5 (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Void CharacterInput/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_m611BEEF208161AB63FBA20EE91CCB5811F43CB4C (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.InputSystem.InputActionMap::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E (InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * __this, const RuntimeMethod* method);
// System.Boolean CharacterInput/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m59778DD1A48F8DCF94BD49E88BD491F6981CD6F6 (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method);
// System.Void System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0 (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.InputSystem.InputAction::remove_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::remove_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_started(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_performed(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.InputSystem.InputAction::add_canceled(System.Action`1<UnityEngine.InputSystem.InputAction/CallbackContext>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49 (InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * __this, Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * ___value0, const RuntimeMethod* method);
// System.Void CharacterInput/PlayerActions::SetCallbacks(CharacterInput/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_mB35094E2C8A2595AEF16812251655FC666D2B111 (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
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
// System.Void CharacterController2D::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Awake_mFD21C000EE8097373F734648EAC2BFDB901197FA (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m_Rigidbody2D = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_m_Rigidbody2D_15(L_0);
		// if (OnLandEvent == null)
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_1 = __this->get_OnLandEvent_18();
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		// OnLandEvent = new UnityEvent();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_2 = (UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 *)il2cpp_codegen_object_new(UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4_il2cpp_TypeInfo_var);
		UnityEvent__ctor_m98D9C5A59898546B23A45388CFACA25F52A9E5A6(L_2, /*hidden argument*/NULL);
		__this->set_OnLandEvent_18(L_2);
	}

IL_001f:
	{
		// if (OnCrouchEvent == null)
		BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * L_3 = __this->get_OnCrouchEvent_19();
		if (L_3)
		{
			goto IL_0032;
		}
	}
	{
		// OnCrouchEvent = new BoolEvent();
		BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * L_4 = (BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 *)il2cpp_codegen_object_new(BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659_il2cpp_TypeInfo_var);
		BoolEvent__ctor_mB1C4B8CED2296E60F44636855900EA1BDF1F393A(L_4, /*hidden argument*/NULL);
		__this->set_OnCrouchEvent_19(L_4);
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_FixedUpdate_m00D8CBF2991777D0875EB1D13AF8222831A2F0E8 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// bool wasGrounded = m_Grounded;
		bool L_0 = __this->get_m_Grounded_13();
		V_0 = L_0;
		// m_Grounded = false;
		__this->set_m_Grounded_13((bool)0);
		// Collider2D[] colliders = Physics2D.OverlapCircleAll(m_GroundCheck.position, k_GroundedRadius, m_WhatIsGround);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_m_GroundCheck_9();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_m_WhatIsGround_8();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_6;
		L_6 = Physics2D_OverlapCircleAll_m1D3E8E59627D524F35EF6C67940DD1121CEE6E7C(L_3, (0.200000003f), L_5, /*hidden argument*/NULL);
		V_1 = L_6;
		// for (int i = 0; i < colliders.Length; i++)
		V_2 = 0;
		goto IL_0066;
	}

IL_0038:
	{
		// if (colliders[i].gameObject != gameObject)
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_7 = V_1;
		int32_t L_8 = V_2;
		int32_t L_9 = L_8;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_11, L_12, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_0062;
		}
	}
	{
		// m_Grounded = true;
		__this->set_m_Grounded_13((bool)1);
		// if (!wasGrounded)
		bool L_14 = V_0;
		if (L_14)
		{
			goto IL_0062;
		}
	}
	{
		// OnLandEvent.Invoke();
		UnityEvent_tA0EA9BC49FD7D5185E7A238EF2E0E6F5D0EE27F4 * L_15 = __this->get_OnLandEvent_18();
		UnityEvent_Invoke_mDA46AA9786AD4C34211C6C6ADFB0963DFF430AF5(L_15, /*hidden argument*/NULL);
	}

IL_0062:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0066:
	{
		// for (int i = 0; i < colliders.Length; i++)
		int32_t L_17 = V_2;
		Collider2DU5BU5D_t00DF4453C28C5F1D2EE97FAE6CF865E53DE189D1* L_18 = V_1;
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0038;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::Move(System.Single,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Move_mE541579D7B4A796A34C1E2AFF0DAD5DEADD475F9 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, float ___move0, bool ___crouch1, bool ___jump2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (!crouch)
		bool L_0 = ___crouch1;
		if (L_0)
		{
			goto IL_0032;
		}
	}
	{
		// if (Physics2D.OverlapCircle(m_CeilingCheck.position, k_CeilingRadius, m_WhatIsGround))
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1 = __this->get_m_CeilingCheck_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_2, /*hidden argument*/NULL);
		LayerMask_t5FA647D8C300EA0621360CA4424717C3C73190A8  L_4 = __this->get_m_WhatIsGround_8();
		int32_t L_5;
		L_5 = LayerMask_op_Implicit_mD89E9970822613D8D19B2EBCA36C79391C287BE0(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_6;
		L_6 = Physics2D_OverlapCircle_mA13E0B8B40964C93CD1E8BB9B4FE32B19B52BC07(L_3, (0.200000003f), L_5, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_6, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_0032;
		}
	}
	{
		// crouch = true;
		___crouch1 = (bool)1;
	}

IL_0032:
	{
		// if (m_Grounded || m_AirControl)
		bool L_8 = __this->get_m_Grounded_13();
		if (L_8)
		{
			goto IL_0045;
		}
	}
	{
		bool L_9 = __this->get_m_AirControl_7();
		if (!L_9)
		{
			goto IL_0140;
		}
	}

IL_0045:
	{
		// if (crouch)
		bool L_10 = ___crouch1;
		if (!L_10)
		{
			goto IL_0089;
		}
	}
	{
		// if (!m_wasCrouching)
		bool L_11 = __this->get_m_wasCrouching_20();
		if (L_11)
		{
			goto IL_0063;
		}
	}
	{
		// m_wasCrouching = true;
		__this->set_m_wasCrouching_20((bool)1);
		// OnCrouchEvent.Invoke(true);
		BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * L_12 = __this->get_OnCrouchEvent_19();
		UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F(L_12, (bool)1, /*hidden argument*/UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
	}

IL_0063:
	{
		// move *= m_CrouchSpeed;
		float L_13 = ___move0;
		float L_14 = __this->get_m_CrouchSpeed_5();
		___move0 = ((float)il2cpp_codegen_multiply((float)L_13, (float)L_14));
		// if (m_CrouchDisableCollider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_15 = __this->get_m_CrouchDisableCollider_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_16;
		L_16 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_15, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_00be;
		}
	}
	{
		// m_CrouchDisableCollider.enabled = false;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17 = __this->get_m_CrouchDisableCollider_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_17, (bool)0, /*hidden argument*/NULL);
		// } else
		goto IL_00be;
	}

IL_0089:
	{
		// if (m_CrouchDisableCollider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_18 = __this->get_m_CrouchDisableCollider_11();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_18, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		// m_CrouchDisableCollider.enabled = true;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_20 = __this->get_m_CrouchDisableCollider_11();
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_20, (bool)1, /*hidden argument*/NULL);
	}

IL_00a3:
	{
		// if (m_wasCrouching)
		bool L_21 = __this->get_m_wasCrouching_20();
		if (!L_21)
		{
			goto IL_00be;
		}
	}
	{
		// m_wasCrouching = false;
		__this->set_m_wasCrouching_20((bool)0);
		// OnCrouchEvent.Invoke(false);
		BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * L_22 = __this->get_OnCrouchEvent_19();
		UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F(L_22, (bool)0, /*hidden argument*/UnityEvent_1_Invoke_m93A9A80D13EE147EB2805A92EFD48453AF727D7F_RuntimeMethod_var);
	}

IL_00be:
	{
		// Vector3 targetVelocity = new Vector2(move * 10f, m_Rigidbody2D.velocity.y);
		float L_23 = ___move0;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_24 = __this->get_m_Rigidbody2D_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_25;
		L_25 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_24, /*hidden argument*/NULL);
		float L_26 = L_25.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_27;
		memset((&L_27), 0, sizeof(L_27));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_27), ((float)il2cpp_codegen_multiply((float)L_23, (float)(10.0f))), L_26, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_27, /*hidden argument*/NULL);
		V_0 = L_28;
		// m_Rigidbody2D.velocity = Vector3.SmoothDamp(m_Rigidbody2D.velocity, targetVelocity, ref m_Velocity, m_MovementSmoothing);
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_29 = __this->get_m_Rigidbody2D_15();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30 = __this->get_m_Rigidbody2D_15();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		L_31 = Rigidbody2D_get_velocity_m138328DCC01EB876FB5EA025BF08728030D93D66(L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_34 = __this->get_address_of_m_Velocity_17();
		float L_35 = __this->get_m_MovementSmoothing_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_SmoothDamp_m4655944DBD5B44125F8F4B5A15E31DE94CB0F627(L_32, L_33, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)L_34, L_35, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_37;
		L_37 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_36, /*hidden argument*/NULL);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_29, L_37, /*hidden argument*/NULL);
		// if (move > 0 && !m_FacingRight)
		float L_38 = ___move0;
		if ((!(((float)L_38) > ((float)(0.0f)))))
		{
			goto IL_012a;
		}
	}
	{
		bool L_39 = __this->get_m_FacingRight_16();
		if (L_39)
		{
			goto IL_012a;
		}
	}
	{
		// Flip();
		CharacterController2D_Flip_m8F1D0D7A87D7E507031BBCDF6C0DB095AFB21965(__this, /*hidden argument*/NULL);
		// }
		goto IL_0140;
	}

IL_012a:
	{
		// else if (move < 0 && m_FacingRight)
		float L_40 = ___move0;
		if ((!(((float)L_40) < ((float)(0.0f)))))
		{
			goto IL_0140;
		}
	}
	{
		bool L_41 = __this->get_m_FacingRight_16();
		if (!L_41)
		{
			goto IL_0140;
		}
	}
	{
		// Flip();
		CharacterController2D_Flip_m8F1D0D7A87D7E507031BBCDF6C0DB095AFB21965(__this, /*hidden argument*/NULL);
	}

IL_0140:
	{
		// if (m_Grounded && jump)
		bool L_42 = __this->get_m_Grounded_13();
		bool L_43 = ___jump2;
		if (!((int32_t)((int32_t)L_42&(int32_t)L_43)))
		{
			goto IL_016c;
		}
	}
	{
		// m_Grounded = false;
		__this->set_m_Grounded_13((bool)0);
		// m_Rigidbody2D.AddForce(new Vector2(0f, m_JumpForce));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_44 = __this->get_m_Rigidbody2D_15();
		float L_45 = __this->get_m_JumpForce_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_46), (0.0f), L_45, /*hidden argument*/NULL);
		Rigidbody2D_AddForce_mB4754FC98ED65E5381854CDC858D12F0504FB3A2(L_44, L_46, /*hidden argument*/NULL);
	}

IL_016c:
	{
		// }
		return;
	}
}
// System.Void CharacterController2D::Flip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D_Flip_m8F1D0D7A87D7E507031BBCDF6C0DB095AFB21965 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// m_FacingRight = !m_FacingRight;
		bool L_0 = __this->get_m_FacingRight_16();
		__this->set_m_FacingRight_16((bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0));
		// Vector3 theScale = transform.localScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_localScale_mD9DF6CA81108C2A6002B5EA2BE25A6CD2723D046(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		// theScale.x *= -1;
		float* L_3 = (&V_0)->get_address_of_x_2();
		float* L_4 = L_3;
		float L_5 = *((float*)L_4);
		*((float*)L_4) = (float)((float)il2cpp_codegen_multiply((float)L_5, (float)(-1.0f)));
		// transform.localScale = theScale;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7 = V_0;
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_6, L_7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterController2D::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterController2D__ctor_m5C93DA812470EF6163E25545DED6CA554BBA83F7 (CharacterController2D_tC9441A71D76D6ED1CB5EBE22D56E57B2D0410D1A * __this, const RuntimeMethod* method)
{
	{
		// [SerializeField] private float m_JumpForce = 400f;                            // Amount of force added when the player jumps.
		__this->set_m_JumpForce_4((400.0f));
		// [Range(0, 1)] [SerializeField] private float m_CrouchSpeed = .36f;            // Amount of maxSpeed applied to crouching movement. 1 = 100%
		__this->set_m_CrouchSpeed_5((0.360000014f));
		// [Range(0, .3f)] [SerializeField] private float m_MovementSmoothing = .05f;    // How much to smooth out the movement
		__this->set_m_MovementSmoothing_6((0.0500000007f));
		// private bool m_FacingRight = true;  // For determining which way the player is currently facing.
		__this->set_m_FacingRight_16((bool)1);
		// private Vector3 m_Velocity = Vector3.zero;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		L_0 = Vector3_get_zero_m1A8F7993167785F750B6B01762D22C2597C84EF6(/*hidden argument*/NULL);
		__this->set_m_Velocity_17(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// UnityEngine.InputSystem.InputActionAsset CharacterInput::get_asset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = __this->get_U3CassetU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void CharacterInput::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput__ctor_mBD75FB6033675789ED0B203254A7C2D2753BCBA1 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE02FDE1306AAB0CF2E8F94B82700B99D1CDB0ED1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private int m_TouchScreenSchemeIndex = -1;
		__this->set_m_TouchScreenSchemeIndex_4((-1));
		// public @CharacterInput()
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		//         asset = InputActionAsset.FromJson(@"{
		//     ""name"": ""Character Input"",
		//     ""maps"": [
		//         {
		//             ""name"": ""Player"",
		//             ""id"": ""bd73f736-eb84-402e-be97-dc736d47f5da"",
		//             ""actions"": [
		//                 {
		//                     ""name"": ""Move"",
		//                     ""type"": ""Value"",
		//                     ""id"": ""2142d4a2-be7f-4cfc-8195-b00de010bc9b"",
		//                     ""expectedControlType"": ""Vector2"",
		//                     ""processors"": """",
		//                     ""interactions"": """"
		//                 }
		//             ],
		//             ""bindings"": [
		//                 {
		//                     ""name"": """",
		//                     ""id"": ""ed6117a5-791c-4016-8f17-7739d4cee637"",
		//                     ""path"": ""<Gamepad>/leftStick"",
		//                     ""interactions"": """",
		//                     ""processors"": """",
		//                     ""groups"": """",
		//                     ""action"": ""Move"",
		//                     ""isComposite"": false,
		//                     ""isPartOfComposite"": false
		//                 }
		//             ]
		//         }
		//     ],
		//     ""controlSchemes"": [
		//         {
		//             ""name"": ""TouchScreen"",
		//             ""bindingGroup"": ""TouchScreen"",
		//             ""devices"": [
		//                 {
		//                     ""devicePath"": ""<Gamepad>"",
		//                     ""isOptional"": true,
		//                     ""isOR"": false
		//                 }
		//             ]
		//         }
		//     ]
		// }");
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = InputActionAsset_FromJson_m85BD957DA42DE323A6FFB6A262A39A65EFD6A698(_stringLiteralE02FDE1306AAB0CF2E8F94B82700B99D1CDB0ED1, /*hidden argument*/NULL);
		__this->set_U3CassetU3Ek__BackingField_0(L_0);
		// m_Player = asset.FindActionMap("Player", throwIfNotFound: true);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_1;
		L_1 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_2;
		L_2 = InputActionAsset_FindActionMap_m26AEF35E59D7739FC7BF8E985085ED02CC42CA70(L_1, _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Player_1(L_2);
		// m_Player_Move = m_Player.FindAction("Move", throwIfNotFound: true);
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_3 = __this->get_m_Player_1();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_4;
		L_4 = InputActionMap_FindAction_m664C1A5513E905A84A527A42360EF5608A3EF812(L_3, _stringLiteral378F2A2277727E3F33599E270749A10E7C2B55E1, (bool)1, /*hidden argument*/NULL);
		__this->set_m_Player_Move_3(L_4);
		// }
		return;
	}
}
// System.Void CharacterInput::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput_Dispose_m7E52EDF471584F3F090C380F861E7259255B3D8E (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// UnityEngine.Object.Destroy(asset);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.InputBinding> CharacterInput::get_bindingMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  CharacterInput_get_bindingMask_m03C92BED36C67D672CCA2EDBE5B0E742F440C957 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// get => asset.bindingMask;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_1;
		L_1 = InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CharacterInput::set_bindingMask(System.Nullable`1<UnityEngine.InputSystem.InputBinding>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput_set_bindingMask_m4D978CA8F748031CF6373B89E0A26630BF3A03FC (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  ___value0, const RuntimeMethod* method)
{
	{
		// set => asset.bindingMask = value;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_1 = ___value0;
		InputActionAsset_set_bindingMask_m8B3F08D6BB04076802DFFF80E4C8606A2F78753F(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>> CharacterInput::get_devices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  CharacterInput_get_devices_mB3FB1A1C92BD54E1CDF877C6718DF2E42D0D55B0 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// get => asset.devices;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  L_1;
		L_1 = InputActionAsset_get_devices_m1144659F84189F26DF62C81AD3E3CB59D91E2233(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Void CharacterInput::set_devices(System.Nullable`1<UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputDevice>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput_set_devices_m6DEAC022B87A37138859F53432BA64D624209665 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  ___value0, const RuntimeMethod* method)
{
	{
		// set => asset.devices = value;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		Nullable_1_t0BC9F6012C8079CB7005C66DAE4E3F3A7AA2FD84  L_1 = ___value0;
		InputActionAsset_set_devices_m719AC35B8D32694CDDB432D38BBE670BFE4A53D5(L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.InputSystem.Utilities.ReadOnlyArray`1<UnityEngine.InputSystem.InputControlScheme> CharacterInput::get_controlSchemes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  CharacterInput_get_controlSchemes_m51355D98F87E648160FA3C0C15C14280D05C7351 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// public ReadOnlyArray<InputControlScheme> controlSchemes => asset.controlSchemes;
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  L_1;
		L_1 = InputActionAsset_get_controlSchemes_m9FACEA3E979F8EAAA228ED9390E80E05318C4A60(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Boolean CharacterInput::Contains(UnityEngine.InputSystem.InputAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CharacterInput_Contains_m643187984E696456BE84D11A436AD52DE8CF5DAA (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * ___action0, const RuntimeMethod* method)
{
	{
		// return asset.Contains(action);
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = ___action0;
		bool L_2;
		L_2 = InputActionAsset_Contains_m792C3FAB58851FC223273425F7D2C39562BDE40D(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Collections.Generic.IEnumerator`1<UnityEngine.InputSystem.InputAction> CharacterInput::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacterInput_GetEnumerator_mA02D5F2528690CE95281EA85EC99C53D9CC0A7FA (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// return asset.GetEnumerator();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		RuntimeObject* L_1;
		L_1 = InputActionAsset_GetEnumerator_mEA39637BFE5F6916DEDC5C99080128CEDB79A3B6(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Collections.IEnumerator CharacterInput::System.Collections.IEnumerable.GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CharacterInput_System_Collections_IEnumerable_GetEnumerator_mEFE09A01EC431BCCDCF44003CF864C5312A42579 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// return GetEnumerator();
		RuntimeObject* L_0;
		L_0 = CharacterInput_GetEnumerator_mA02D5F2528690CE95281EA85EC99C53D9CC0A7FA(__this, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CharacterInput::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput_Enable_mEEFFF9BA951949C7D6814806A2D87511BFB2A754 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// asset.Enable();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		InputActionAsset_Enable_mC9C209D6E73F93865238FA20C9CA5B864F53E647(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterInput::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterInput_Disable_m7890AE030B899D18657DCC9D04C577E9DB31B28E (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// asset.Disable();
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0;
		L_0 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		InputActionAsset_Disable_m8879D95AF1BC47E7406769B0C490592D313D6269(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// CharacterInput/PlayerActions CharacterInput::get_Player()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965  CharacterInput_get_Player_m2C0A9E445307E3C595DF62C3405F7E1B12DB5402 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// public PlayerActions @Player => new PlayerActions(this);
		PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965  L_0;
		memset((&L_0), 0, sizeof(L_0));
		PlayerActions__ctor_m13C8917F20E34D83612AF9D0C6DBE4A9FF7AF44F_inline((&L_0), __this, /*hidden argument*/NULL);
		return L_0;
	}
}
// UnityEngine.InputSystem.InputControlScheme CharacterInput::get_TouchScreenScheme()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  CharacterInput_get_TouchScreenScheme_mB6035DE7DEADC6902C0D4ECB4E018A5180D005D3 (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReadOnlyArray_1_get_Item_mEEBFFC408FF97F9B0BF28B951075C0EB9A178010_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral192133D71494A4CA0994DD1D8C21D029CD3D3188);
		s_Il2CppMethodInitialized = true;
	}
	ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if (m_TouchScreenSchemeIndex == -1) m_TouchScreenSchemeIndex = asset.FindControlSchemeIndex("TouchScreen");
		int32_t L_0 = __this->get_m_TouchScreenSchemeIndex_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)(-1)))))
		{
			goto IL_001f;
		}
	}
	{
		// if (m_TouchScreenSchemeIndex == -1) m_TouchScreenSchemeIndex = asset.FindControlSchemeIndex("TouchScreen");
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_1;
		L_1 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = InputActionAsset_FindControlSchemeIndex_m9D70721D915E71C296839EDC5F4EEAF79B7CBF6F(L_1, _stringLiteral192133D71494A4CA0994DD1D8C21D029CD3D3188, /*hidden argument*/NULL);
		__this->set_m_TouchScreenSchemeIndex_4(L_2);
	}

IL_001f:
	{
		// return asset.controlSchemes[m_TouchScreenSchemeIndex];
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_3;
		L_3 = CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline(__this, /*hidden argument*/NULL);
		ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9  L_4;
		L_4 = InputActionAsset_get_controlSchemes_m9FACEA3E979F8EAAA228ED9390E80E05318C4A60(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		int32_t L_5 = __this->get_m_TouchScreenSchemeIndex_4();
		InputControlScheme_tEA1C7C6A6509E7AE956DDBBA6C2E288AD437ED9A  L_6;
		L_6 = ReadOnlyArray_1_get_Item_mEEBFFC408FF97F9B0BF28B951075C0EB9A178010((ReadOnlyArray_1_t58DCCA8745FD3540CF312BB0844D53DCAAA103C9 *)(&V_0), L_5, /*hidden argument*/ReadOnlyArray_1_get_Item_mEEBFFC408FF97F9B0BF28B951075C0EB9A178010_RuntimeMethod_var);
		return L_6;
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisNetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_m8B96EC85EE35FAF3E6AB6C123D5D2A408DBAA8F6_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NM = this.GetComponent<NetworkManager>();
		NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * L_0;
		L_0 = Component_GetComponent_TisNetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_m8B96EC85EE35FAF3E6AB6C123D5D2A408DBAA8F6(__this, /*hidden argument*/Component_GetComponent_TisNetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606_m8B96EC85EE35FAF3E6AB6C123D5D2A408DBAA8F6_RuntimeMethod_var);
		__this->set_NM_4(L_0);
		// }
		return;
	}
}
// System.Void GameManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_FixedUpdate_m23578D1B5AC4A39D33E15C9D4FB08F7E4EAE3AD1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// time += Time.fixedDeltaTime;
		float L_0 = __this->get_time_7();
		float L_1;
		L_1 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_time_7(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LightingTask::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingTask_Awake_m3CBB4EE0A7CA96FD0D8B1E1DD31B3A257116C3CC (LightingTask_tDDE3B2649698157708B5552518862B4053D44975 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral276ECBDB922BA52FC83448ABC78E76E42421B150);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GM = GameObject.Find("Managers").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_GM_4(L_1);
		// RM = GameObject.Find("Room1").GetComponent<RoomManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral276ECBDB922BA52FC83448ABC78E76E42421B150, /*hidden argument*/NULL);
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_3;
		L_3 = GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA(L_2, /*hidden argument*/GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		__this->set_RM_5(L_3);
		// slider = this.gameObject.transform.Find("Slider").GetComponent<Slider>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_5, _stringLiteralA7F97E75A1B9ABE21090F40226508D1F9BFFC36F, /*hidden argument*/NULL);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_7;
		L_7 = Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4(L_6, /*hidden argument*/Component_GetComponent_TisSlider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A_mD501A27463515FA99A5A93A10E37F913696D20C4_RuntimeMethod_var);
		__this->set_slider_9(L_7);
		// }
		return;
	}
}
// System.Void LightingTask::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingTask_init_mAA86DAF64B2D403D4662594F678CC1DE41F34CAE (LightingTask_tDDE3B2649698157708B5552518862B4053D44975 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Single LightingTask::getDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float LightingTask_getDuration_m7254E65E9B234D9AAB95535F3E42D10BCD6AECE6 (LightingTask_tDDE3B2649698157708B5552518862B4053D44975 * __this, const RuntimeMethod* method)
{
	{
		// return Duration;
		float L_0 = __this->get_Duration_8();
		return L_0;
	}
}
// System.Void LightingTask::setCycleDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingTask_setCycleDuration_m085C6E94B40A9444F05DE62D0118A6CB72E0E5DA (LightingTask_tDDE3B2649698157708B5552518862B4053D44975 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D0A628233CAFA722586C12A8D62EFC841E9E8E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBA0AC58702C7BC7CA0BB328CEE642437EB1BCB24);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// switch (slider.value)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_0 = __this->get_slider_9();
		float L_1;
		L_1 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_0);
		V_0 = L_1;
		float L_2 = V_0;
		if ((((float)L_2) == ((float)(0.0f))))
		{
			goto IL_0026;
		}
	}
	{
		float L_3 = V_0;
		if ((((float)L_3) == ((float)(1.0f))))
		{
			goto IL_0033;
		}
	}
	{
		float L_4 = V_0;
		if ((((float)L_4) == ((float)(2.0f))))
		{
			goto IL_0040;
		}
	}
	{
		goto IL_004b;
	}

IL_0026:
	{
		// Duration = 24f;
		__this->set_Duration_8((24.0f));
		// break;
		goto IL_004b;
	}

IL_0033:
	{
		// Duration = 18f;
		__this->set_Duration_8((18.0f));
		// break;
		goto IL_004b;
	}

IL_0040:
	{
		// Duration = 12f;
		__this->set_Duration_8((12.0f));
	}

IL_004b:
	{
		// if (slider.value == goalDuration)
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_5 = __this->get_slider_9();
		float L_6;
		L_6 = VirtFuncInvoker0< float >::Invoke(46 /* System.Single UnityEngine.UI.Slider::get_value() */, L_5);
		int32_t L_7 = __this->get_goalDuration_7();
		if ((!(((float)L_6) == ((float)((float)((float)L_7))))))
		{
			goto IL_0077;
		}
	}
	{
		// results.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_results_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("LIGHT IS CORRECT");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9D0A628233CAFA722586C12A8D62EFC841E9E8E4, /*hidden argument*/NULL);
		// }
		goto IL_0083;
	}

IL_0077:
	{
		// results.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_results_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// Debug.Log("light cycle duration: " + Duration);
		float* L_10 = __this->get_address_of_Duration_8();
		String_t* L_11;
		L_11 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)L_10, /*hidden argument*/NULL);
		String_t* L_12;
		L_12 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralBA0AC58702C7BC7CA0BB328CEE642437EB1BCB24, L_11, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_12, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightingTask::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingTask_OnEnable_m33833A95A22F6F624B98ABAD3F64F4554B8F5544 (LightingTask_tDDE3B2649698157708B5552518862B4053D44975 * __this, const RuntimeMethod* method)
{
	{
		// results.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_results_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightingTask::taskDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingTask_taskDone_m4838861892E1A6FE0C79A14B338D21282A0FC26F (LightingTask_tDDE3B2649698157708B5552518862B4053D44975 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54292B16AAF767794C392D4A7FFF2FB4A7901579);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Debug.Log("cycle set to end the task at: " + (GM.time + Duration) );
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_GM_4();
		float L_1 = L_0->get_time_7();
		float L_2 = __this->get_Duration_8();
		V_0 = ((float)il2cpp_codegen_add((float)L_1, (float)L_2));
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral54292B16AAF767794C392D4A7FFF2FB4A7901579, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// RM.startCycle(Duration, taskType);
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_5 = __this->get_RM_5();
		float L_6 = __this->get_Duration_8();
		int32_t L_7 = __this->get_taskType_10();
		RoomManager_startCycle_mAEC43D118E6B5264AEF2A95429C1B3DB1FC7A7B3(L_5, L_6, L_7, /*hidden argument*/NULL);
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LightingTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightingTask__ctor_mC93202AC70E8AE8216BA5C7E3C989021D4949340 (LightingTask_tDDE3B2649698157708B5552518862B4053D44975 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NetworkManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_Start_mF62F7D5D531194AFEF4C3FFAC8BFE07E10F72365 (NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NetworkManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager_Update_m1C15CCEC240B392E85BBF68264100E502BDFB496 (NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NetworkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NetworkManager__ctor_m1C3DBB165C04540C090C4D74FEDBD83DEFC5C62F (NetworkManager_tDA8A4BECD3B0245AF4351E9ABC199B1B185BF606 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void NutritionTask::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_OnEnable_mD33FCCD89D59BF25FCDAF12A5B769031E96B5C76 (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	{
		// results.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_results_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NutritionTask::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_Start_m09D1EAEA73F44F9D67DDD7272D4B4FF8CD4B1F40 (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26FC3835E7F0AB039D303C68C6CD7A2BA5237E46);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral276ECBDB922BA52FC83448ABC78E76E42421B150);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACF223A25B988017970CFF5BD48021DA0E08D1C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB537BDDF2180BAC13CD1DF0E195832CCBB31AA4D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RM = GameObject.Find("Room1").GetComponent<RoomManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral276ECBDB922BA52FC83448ABC78E76E42421B150, /*hidden argument*/NULL);
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_1;
		L_1 = GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA(L_0, /*hidden argument*/GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		__this->set_RM_6(L_1);
		// l1 = GameObject.Find("Lever1");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralB537BDDF2180BAC13CD1DF0E195832CCBB31AA4D, /*hidden argument*/NULL);
		__this->set_l1_9(L_2);
		// l1_anim = l1.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_l1_9();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4;
		L_4 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_3, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_l1_anim_10(L_4);
		// l2 = GameObject.Find("Lever2");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralACF223A25B988017970CFF5BD48021DA0E08D1C7, /*hidden argument*/NULL);
		__this->set_l2_13(L_5);
		// l2_anim = l2.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_l2_13();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7;
		L_7 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_6, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_l2_anim_12(L_7);
		// l3 = GameObject.Find("Lever3");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral26FC3835E7F0AB039D303C68C6CD7A2BA5237E46, /*hidden argument*/NULL);
		__this->set_l3_11(L_8);
		// l3_anim = l3.GetComponent<Animator>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_l3_11();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10;
		L_10 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_9, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		__this->set_l3_anim_14(L_10);
		// }
		return;
	}
}
// System.Void NutritionTask::lever1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_lever1_mF1CB871A1A62D00703C2AB13150EB80370188C60 (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (l1_anim.GetBool("Pull")==false)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_l1_anim_10();
		bool L_1;
		L_1 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_0, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// l1_anim.SetBool("Pull", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_l1_anim_10();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0036;
	}

IL_0025:
	{
		// l1_anim.SetBool("Pull", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_l1_anim_10();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, (bool)0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// checkWin();
		NutritionTask_checkWin_mDE82FEB7459136F2A5BE54C8CD7D58751001261E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NutritionTask::lever2()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_lever2_m7B10B99E2FC711627CD868626F9BD1FD55BFE66D (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (l2_anim.GetBool("Pull") == false)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_l2_anim_12();
		bool L_1;
		L_1 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_0, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// l2_anim.SetBool("Pull", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_l2_anim_12();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0036;
	}

IL_0025:
	{
		// l2_anim.SetBool("Pull", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_l2_anim_12();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, (bool)0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// checkWin();
		NutritionTask_checkWin_mDE82FEB7459136F2A5BE54C8CD7D58751001261E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NutritionTask::lever3()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_lever3_mE64388E8259DF2FF967859C9E8D4A3AC67CE03C9 (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (l3_anim.GetBool("Pull") == false)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_l3_anim_14();
		bool L_1;
		L_1 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_0, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0025;
		}
	}
	{
		// l3_anim.SetBool("Pull", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_2 = __this->get_l3_anim_14();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_2, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0036;
	}

IL_0025:
	{
		// l3_anim.SetBool("Pull", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_l3_anim_14();
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_3, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, (bool)0, /*hidden argument*/NULL);
	}

IL_0036:
	{
		// checkWin();
		NutritionTask_checkWin_mDE82FEB7459136F2A5BE54C8CD7D58751001261E(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NutritionTask::checkWin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_checkWin_mDE82FEB7459136F2A5BE54C8CD7D58751001261E (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (goalLever == 1)
		int32_t L_0 = __this->get_goalLever_4();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_0059;
		}
	}
	{
		// if (l1_anim.GetBool("Pull") == true && l2_anim.GetBool("Pull") == false && l3_anim.GetBool("Pull") == false)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_l1_anim_10();
		bool L_2;
		L_2 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_1, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_004c;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_l2_anim_12();
		bool L_4;
		L_4 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_3, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_l3_anim_14();
		bool L_6;
		L_6 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_5, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// results.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_results_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_004c:
	{
		// results.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_results_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0059:
	{
		// else if (goalLever == 2)
		int32_t L_9 = __this->get_goalLever_4();
		if ((!(((uint32_t)L_9) == ((uint32_t)2))))
		{
			goto IL_00b2;
		}
	}
	{
		// if (l1_anim.GetBool("Pull") == false && l2_anim.GetBool("Pull") == true && l3_anim.GetBool("Pull") == false)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_10 = __this->get_l1_anim_10();
		bool L_11;
		L_11 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_10, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_11)
		{
			goto IL_00a5;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_12 = __this->get_l2_anim_12();
		bool L_13;
		L_13 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_12, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_00a5;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_14 = __this->get_l3_anim_14();
		bool L_15;
		L_15 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_14, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00a5;
		}
	}
	{
		// results.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_results_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a5:
	{
		// results.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_results_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b2:
	{
		// else if (goalLever == 3)
		int32_t L_18 = __this->get_goalLever_4();
		if ((!(((uint32_t)L_18) == ((uint32_t)3))))
		{
			goto IL_010a;
		}
	}
	{
		// if (l1_anim.GetBool("Pull") == false && l2_anim.GetBool("Pull") == false && l3_anim.GetBool("Pull") == true)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_19 = __this->get_l1_anim_10();
		bool L_20;
		L_20 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_19, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_20)
		{
			goto IL_00fe;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_21 = __this->get_l2_anim_12();
		bool L_22;
		L_22 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_21, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00fe;
		}
	}
	{
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_23 = __this->get_l3_anim_14();
		bool L_24;
		L_24 = Animator_GetBool_m69AFEA8176E7FB312C264773784D6D6B08A80C0A(L_23, _stringLiteralE64F869101F0DCDEC83506608F9C5C7A57FCAA11, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00fe;
		}
	}
	{
		// results.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_results_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00fe:
	{
		// results.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = __this->get_results_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)0, /*hidden argument*/NULL);
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void NutritionTask::taskDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_taskDone_mA041B8970AB640A3E812F0B91C67FE73DB9DE9D7 (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	{
		// RM.startCycle(duration, taskType);
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_0 = __this->get_RM_6();
		float L_1 = __this->get_duration_7();
		int32_t L_2 = __this->get_taskType_8();
		RoomManager_startCycle_mAEC43D118E6B5264AEF2A95429C1B3DB1FC7A7B3(L_0, L_1, L_2, /*hidden argument*/NULL);
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void NutritionTask::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask_Update_m5916E961836BDAC501F6C0D274A6827A4BDC5478 (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void NutritionTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NutritionTask__ctor_m3D7054344463EA45DCA9B3EA749E027553EC590B (NutritionTask_t84D2D8268F28FDEAB197658AAEE4DE82E9111915 * __this, const RuntimeMethod* method)
{
	{
		// public int goalLever = 2;
		__this->set_goalLever_4(2);
		// private float duration = 10f;
		__this->set_duration_7((10.0f));
		// private TaskType taskType = TaskType.nutrition;
		__this->set_taskType_8(1);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlantManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantManager_Start_mDEAC9F209678668AF33DC39C1A8C43424BE8868F (PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GM = GameObject.Find("Managers").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_GM_4(L_1);
		// this.state = State.seed;
		__this->set_state_5(0);
		// }
		return;
	}
}
// System.Void PlantManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantManager_FixedUpdate_mE4476B4A56EF95DB415567A3515449AE737D15EB (PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * __this, const RuntimeMethod* method)
{
	{
		// if(nutriBar < maxNutriBar * 0.3)
		float L_0 = __this->get_nutriBar_14();
		float L_1 = __this->get_maxNutriBar_17();
		if ((!(((double)((double)((double)L_0))) < ((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_1)), (double)(0.29999999999999999)))))))
		{
			goto IL_0023;
		}
	}
	{
		// needNutrition = true;
		__this->set_needNutrition_10((bool)1);
		// }
		goto IL_002a;
	}

IL_0023:
	{
		// needNutrition = false;
		__this->set_needNutrition_10((bool)0);
	}

IL_002a:
	{
		// if(lightBar < maxLightBar * 0.3)
		float L_2 = __this->get_lightBar_15();
		float L_3 = __this->get_maxLightBar_18();
		if ((!(((double)((double)((double)L_2))) < ((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_3)), (double)(0.29999999999999999)))))))
		{
			goto IL_004d;
		}
	}
	{
		// needLight = true;
		__this->set_needLight_11((bool)1);
		// }
		goto IL_0054;
	}

IL_004d:
	{
		// needLight = false;
		__this->set_needLight_11((bool)0);
	}

IL_0054:
	{
		// if(waterBar < maxWaterBar * 0.3)
		float L_4 = __this->get_waterBar_13();
		float L_5 = __this->get_maxWaterBar_16();
		if ((!(((double)((double)((double)L_4))) < ((double)((double)il2cpp_codegen_multiply((double)((double)((double)L_5)), (double)(0.29999999999999999)))))))
		{
			goto IL_0077;
		}
	}
	{
		// needWater = true;
		__this->set_needWater_9((bool)1);
		// }
		goto IL_007e;
	}

IL_0077:
	{
		// needWater = false;
		__this->set_needWater_9((bool)0);
	}

IL_007e:
	{
		// if(inNuteriCycle)
		bool L_6 = __this->get_inNuteriCycle_8();
		if (!L_6)
		{
			goto IL_009a;
		}
	}
	{
		// nutriBar += Time.fixedDeltaTime;
		float L_7 = __this->get_nutriBar_14();
		float L_8;
		L_8 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		__this->set_nutriBar_14(((float)il2cpp_codegen_add((float)L_7, (float)L_8)));
		// }
		goto IL_00c2;
	}

IL_009a:
	{
		// nutriBar -= Time.fixedDeltaTime * (0.1f * Random.Range(0f, 10f));
		float L_9 = __this->get_nutriBar_14();
		float L_10;
		L_10 = Time_get_fixedDeltaTime_m8E94ECFF6A6A1D9B5D60BF82D116D540852484E5(/*hidden argument*/NULL);
		float L_11;
		L_11 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.0f), (10.0f), /*hidden argument*/NULL);
		__this->set_nutriBar_14(((float)il2cpp_codegen_subtract((float)L_9, (float)((float)il2cpp_codegen_multiply((float)L_10, (float)((float)il2cpp_codegen_multiply((float)(0.100000001f), (float)L_11)))))));
	}

IL_00c2:
	{
		// healthBar = (lightBar + nutriBar + waterBar) / 3;
		float L_12 = __this->get_lightBar_15();
		float L_13 = __this->get_nutriBar_14();
		float L_14 = __this->get_waterBar_13();
		__this->set_healthBar_12(((float)((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_12, (float)L_13)), (float)L_14))/(float)(3.0f))));
		// }
		return;
	}
}
// System.Void PlantManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlantManager__ctor_m596574FB051F91ED15887A28157DF4AB13DA345A (PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * __this, const RuntimeMethod* method)
{
	{
		// public float maxWaterBar = 60f;
		__this->set_maxWaterBar_16((60.0f));
		// public float maxNutriBar = 50f;
		__this->set_maxNutriBar_17((50.0f));
		// public float maxLightBar = 48f;
		__this->set_maxLightBar_18((48.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void PlayerMovement::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Awake_m441E25AABE54B8C5068808DB8025B67B9A7EA87E (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playerInput = new CharacterInput();
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D *)il2cpp_codegen_object_new(CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D_il2cpp_TypeInfo_var);
		CharacterInput__ctor_mBD75FB6033675789ED0B203254A7C2D2753BCBA1(L_0, /*hidden argument*/NULL);
		__this->set_playerInput_4(L_0);
		// controller = GetComponent<CharacterController>();
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_1;
		L_1 = Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2(__this, /*hidden argument*/Component_GetComponent_TisCharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E_m3DB1DD5819F96D7C7F6F19C12138AC48D21DBBF2_RuntimeMethod_var);
		__this->set_controller_5(L_1);
		// }
		return;
	}
}
// System.Void PlayerMovement::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnEnable_m7898CFDCC16437BC0D42A02B78EA9F311FBFE00A (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// playerInput.Enable();
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = __this->get_playerInput_4();
		CharacterInput_Enable_mEEFFF9BA951949C7D6814806A2D87511BFB2A754(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_OnDisable_m7648BB07D389F8AD5DEDD04EA90852711DD6A00D (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// playerInput.Disable();
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = __this->get_playerInput_4();
		CharacterInput_Disable_m7890AE030B899D18657DCC9D04C577E9DB31B28E(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Start_mB585552228B1908E44D3A69496598FB485F608B6 (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral586825A85BD3ABBC2F448E88E81F8DFBBE3A1EC4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// character = GameObject.Find("Character");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral586825A85BD3ABBC2F448E88E81F8DFBBE3A1EC4, /*hidden argument*/NULL);
		__this->set_character_7(L_0);
		// }
		return;
	}
}
// System.Void PlayerMovement::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement_Update_mC3491BD6CDFF1FA543B16969144C939B2298052F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// Vector2 movementInput = playerInput.Player.Move.ReadValue<Vector2>();
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = __this->get_playerInput_4();
		PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965  L_1;
		L_1 = CharacterInput_get_Player_m2C0A9E445307E3C595DF62C3405F7E1B12DB5402(L_0, /*hidden argument*/NULL);
		V_2 = L_1;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)(&V_2), /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3;
		L_3 = InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F(L_2, /*hidden argument*/InputAction_ReadValue_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m44678B7D383453D730B67AB2CCE3579D2AC0687F_RuntimeMethod_var);
		V_0 = L_3;
		// Vector3 move = new Vector3(movementInput.x, movementInput.y, 0f);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = V_0;
		float L_5 = L_4.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		float L_7 = L_6.get_y_1();
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), L_5, L_7, (0.0f), /*hidden argument*/NULL);
		// if(movementInput.x != 0 || movementInput.y != 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8 = V_0;
		float L_9 = L_8.get_x_0();
		if ((!(((float)L_9) == ((float)(0.0f)))))
		{
			goto IL_004b;
		}
	}
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10 = V_0;
		float L_11 = L_10.get_y_1();
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_00b4;
		}
	}

IL_004b:
	{
		// character.GetComponent<Animator>().SetBool("Walk", true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_character_7();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13;
		L_13 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_12, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_13, _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, (bool)1, /*hidden argument*/NULL);
		// controller.Move(move * Time.deltaTime * playerSpeed);
		CharacterController_tCCF68621C784CCB3391E0C66FE134F6F93DD6C2E * L_14 = __this->get_controller_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_1;
		float L_16;
		L_16 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_15, L_16, /*hidden argument*/NULL);
		float L_18 = __this->get_playerSpeed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_17, L_18, /*hidden argument*/NULL);
		int32_t L_20;
		L_20 = CharacterController_Move_mE0EBC32C72A0BEC18EDEBE748D44309A4BA32E60(L_14, L_19, /*hidden argument*/NULL);
		// if(movementInput.x <= 0)
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21 = V_0;
		float L_22 = L_21.get_x_0();
		if ((!(((float)L_22) <= ((float)(0.0f)))))
		{
			goto IL_00a2;
		}
	}
	{
		// character.GetComponent<SpriteRenderer>().flipX = true;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_character_7();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_24;
		L_24 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_23, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_24, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00a2:
	{
		// character.GetComponent<SpriteRenderer>().flipX = false;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_character_7();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_26;
		L_26 = GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1(L_25, /*hidden argument*/GameObject_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m137AC519978188EDF693EDACB218EFF6F37078C1_RuntimeMethod_var);
		SpriteRenderer_set_flipX_mD3AB83CC6D742A69F1B52376D1636CAA2E44B67E(L_26, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b4:
	{
		// character.GetComponent<Animator>().SetBool("Walk", false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = __this->get_character_7();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_28;
		L_28 = GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36(L_27, /*hidden argument*/GameObject_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m7B3DD04368DD8D8896F3694FFDF28D1CE00F5B36_RuntimeMethod_var);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_28, _stringLiteralAFCB38F037F5FFD9195B0826F7AEE82373DE4539, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void PlayerMovement::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerMovement__ctor_mBF9F632DD9929DD6FF092A968649A4406BFE397F (PlayerMovement_t324642B864F0A1AE4225A972674F8FD21DCA5F09 * __this, const RuntimeMethod* method)
{
	{
		// public float playerSpeed = 2.0f;
		__this->set_playerSpeed_6((2.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void RoomManager::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_FixedUpdate_m4758917C43F370E2658B11A66198BCB375255131 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1BCA69AC7AE2261B8C62E8C523FBAF0853527187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4443244504A090DAB8C4BFAE24318E5FDA5C6DC7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2865A84BFDD84373A85D2359FE558B031911F33);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (plant.needLight && !plant.inLightCycle && !inlightTask)
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_0 = __this->get_plant_13();
		bool L_1 = L_0->get_needLight_11();
		if (!L_1)
		{
			goto IL_004a;
		}
	}
	{
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_2 = __this->get_plant_13();
		bool L_3 = L_2->get_inLightCycle_7();
		if (L_3)
		{
			goto IL_004a;
		}
	}
	{
		bool L_4 = __this->get_inlightTask_14();
		if (L_4)
		{
			goto IL_004a;
		}
	}
	{
		// Debug.Log("light task ready to be initilized");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB2865A84BFDD84373A85D2359FE558B031911F33, /*hidden argument*/NULL);
		// lightMaschine.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_lightMaschine_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_0066;
	}

IL_004a:
	{
		// lightMaschine.transform.GetChild(0).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_lightMaschine_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_9, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_10, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
	}

IL_0066:
	{
		// if (plant.needWater && !plant.inWaterCycle && !inWaterTask)
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_13 = __this->get_plant_13();
		bool L_14 = L_13->get_needWater_9();
		if (!L_14)
		{
			goto IL_00b0;
		}
	}
	{
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_15 = __this->get_plant_13();
		bool L_16 = L_15->get_inWaterCycle_6();
		if (L_16)
		{
			goto IL_00b0;
		}
	}
	{
		bool L_17 = __this->get_inWaterTask_15();
		if (L_17)
		{
			goto IL_00b0;
		}
	}
	{
		// Debug.Log("water task ready to be initilized");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral1BCA69AC7AE2261B8C62E8C523FBAF0853527187, /*hidden argument*/NULL);
		// wateringMaschine.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_wateringMaschine_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_19;
		L_19 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_18, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_19, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_20, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00cc;
	}

IL_00b0:
	{
		// wateringMaschine.transform.GetChild(0).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_wateringMaschine_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_23, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)0, /*hidden argument*/NULL);
	}

IL_00cc:
	{
		// if (plant.needNutrition && !plant.inNuteriCycle && !inNutritionTask)
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_26 = __this->get_plant_13();
		bool L_27 = L_26->get_needNutrition_10();
		if (!L_27)
		{
			goto IL_0115;
		}
	}
	{
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_28 = __this->get_plant_13();
		bool L_29 = L_28->get_inNuteriCycle_8();
		if (L_29)
		{
			goto IL_0115;
		}
	}
	{
		bool L_30 = __this->get_inNutritionTask_16();
		if (L_30)
		{
			goto IL_0115;
		}
	}
	{
		// Debug.Log("nutrition task ready to be initilized");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral4443244504A090DAB8C4BFAE24318E5FDA5C6DC7, /*hidden argument*/NULL);
		// nutritionMaschine.transform.GetChild(0).gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = __this->get_nutritionMaschine_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_32, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_34, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0115:
	{
		// nutritionMaschine.transform.GetChild(0).gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = __this->get_nutritionMaschine_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_36;
		L_36 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_35, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_36, 0, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_37, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_38, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RoomManager::startWateringTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_startWateringTask_m968B078D6A798DAFBE47EB49AE276D3504D47C96 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method)
{
	{
		// waterTask.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_waterTask_5();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// inWaterTask = true;
		__this->set_inWaterTask_15((bool)1);
		// }
		return;
	}
}
// System.Void RoomManager::startLightTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_startLightTask_mE28BDFDDFDDFB2313A81B4EF2C3D7AD8C366AAE4 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method)
{
	{
		// lightTask.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_lightTask_4();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// inlightTask = true;
		__this->set_inlightTask_14((bool)1);
		// }
		return;
	}
}
// System.Void RoomManager::startNutriTask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_startNutriTask_m7D380331A92009CD2C72A237099FEE704EED0917 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method)
{
	{
		// nutritionTask.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_nutritionTask_6();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// inNutritionTask = true;
		__this->set_inNutritionTask_16((bool)1);
		// }
		return;
	}
}
// System.Void RoomManager::startCycle(System.Single,TaskType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_startCycle_mAEC43D118E6B5264AEF2A95429C1B3DB1FC7A7B3 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, float ___d0, int32_t ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40346765A6347B0CFF06B8F6CCEDA9B1CC173C7B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5E208D8BE642C90B748592EF469D854CA6BDBD7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("CYCLE STARTS NOW");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral40346765A6347B0CFF06B8F6CCEDA9B1CC173C7B, /*hidden argument*/NULL);
		// if (t.Equals(TaskType.light))
		int32_t L_0 = 0;
		RuntimeObject * L_1 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, &L_0);
		RuntimeObject * L_2 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, (&___t1));
		bool L_3;
		L_3 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_2, L_1);
		___t1 = *(int32_t*)UnBox(L_2);
		if (!L_3)
		{
			goto IL_0042;
		}
	}
	{
		// inlightTask = false;
		__this->set_inlightTask_14((bool)0);
		// plant.inLightCycle = true;
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_4 = __this->get_plant_13();
		L_4->set_inLightCycle_7((bool)1);
		// StartCoroutine(cycleIsOver(d, t));
		float L_5 = ___d0;
		int32_t L_6 = ___t1;
		RuntimeObject* L_7;
		L_7 = RoomManager_cycleIsOver_m5CAC0E6EF6858F06B69BD40FB3AE42F8C37C3390(__this, L_5, L_6, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_8;
		L_8 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_7, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0042:
	{
		// else if (t.Equals(TaskType.water))
		int32_t L_9 = 2;
		RuntimeObject * L_10 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, &L_9);
		RuntimeObject * L_11 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, (&___t1));
		bool L_12;
		L_12 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_11, L_10);
		___t1 = *(int32_t*)UnBox(L_11);
		if (!L_12)
		{
			goto IL_007a;
		}
	}
	{
		// inWaterTask = false;
		__this->set_inWaterTask_15((bool)0);
		// plant.inWaterCycle = true;
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_13 = __this->get_plant_13();
		L_13->set_inWaterCycle_6((bool)1);
		// StartCoroutine(cycleIsOver(d, t));
		float L_14 = ___d0;
		int32_t L_15 = ___t1;
		RuntimeObject* L_16;
		L_16 = RoomManager_cycleIsOver_m5CAC0E6EF6858F06B69BD40FB3AE42F8C37C3390(__this, L_14, L_15, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
		// }
		return;
	}

IL_007a:
	{
		// else if (t.Equals(TaskType.nutrition))
		int32_t L_18 = 1;
		RuntimeObject * L_19 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, &L_18);
		RuntimeObject * L_20 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, (&___t1));
		bool L_21;
		L_21 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_20, L_19);
		___t1 = *(int32_t*)UnBox(L_20);
		if (!L_21)
		{
			goto IL_00b2;
		}
	}
	{
		// inNutritionTask = false;
		__this->set_inNutritionTask_16((bool)0);
		// plant.inNuteriCycle = true;
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_22 = __this->get_plant_13();
		L_22->set_inNuteriCycle_8((bool)1);
		// StartCoroutine(cycleIsOver(d, t));
		float L_23 = ___d0;
		int32_t L_24 = ___t1;
		RuntimeObject* L_25;
		L_25 = RoomManager_cycleIsOver_m5CAC0E6EF6858F06B69BD40FB3AE42F8C37C3390(__this, L_23, L_24, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_26;
		L_26 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_25, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00b2:
	{
		// Debug.Log("No Matching type found");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralE5E208D8BE642C90B748592EF469D854CA6BDBD7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator RoomManager::cycleIsOver(System.Single,TaskType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* RoomManager_cycleIsOver_m5CAC0E6EF6858F06B69BD40FB3AE42F8C37C3390 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, float ___delayTime0, int32_t ___t1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * L_0 = (U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D *)il2cpp_codegen_object_new(U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D_il2cpp_TypeInfo_var);
		U3CcycleIsOverU3Ed__18__ctor_mF30B870FEEA931EB0ABC0DFA58D5661CA4DE54C8(L_0, 0, /*hidden argument*/NULL);
		U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * L_1 = L_0;
		L_1->set_U3CU3E4__this_4(__this);
		U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * L_2 = L_1;
		float L_3 = ___delayTime0;
		L_2->set_delayTime_2(L_3);
		U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * L_4 = L_2;
		int32_t L_5 = ___t1;
		L_4->set_t_3(L_5);
		return L_4;
	}
}
// System.Void RoomManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_Start_m44DB3C022B062DA4E268718B9B7261BF7B66B6F9 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GM = GameObject.Find("Managers").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_GM_11(L_1);
		// canvas = GameObject.Find("Canvas").gameObject;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralFC075BC3DFE942623230E78DC9D41126E9C003CA, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		__this->set_canvas_12(L_3);
		// plant = Plant.GetComponent<PlantManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Plant_7();
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_5;
		L_5 = GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0(L_4, /*hidden argument*/GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0_RuntimeMethod_var);
		__this->set_plant_13(L_5);
		// }
		return;
	}
}
// System.Void RoomManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager_Update_mE4B5C65EB4444702FDA7890285827C7B3BBDBF8F (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void RoomManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RoomManager__ctor_mB80958CB1C8945EFECA6721A48CCD7FD4FD642C0 (RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TaskEnter::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskEnter_Start_mC1077BDA96FB9E11ACEDD9470042A235BAAEEB99 (TaskEnter_t2A923415BDFA13E00EEF41301930ABC814D62FE3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// initialIntensity = roomLights[0].GetComponent<Light2D>().intensity;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_roomLights_5();
		int32_t L_1 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_1));
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_3;
		L_3 = GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE(L_2, /*hidden argument*/GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE_RuntimeMethod_var);
		float L_4;
		L_4 = Light2D_get_intensity_m12C2A712E18652DEC877F79FCBA3C3D3AC2269D5_inline(L_3, /*hidden argument*/NULL);
		__this->set_initialIntensity_4(L_4);
		// foreach (GameObject light in roomLights)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_5 = __this->get_roomLights_5();
		V_0 = L_5;
		V_1 = 0;
		goto IL_0039;
	}

IL_0023:
	{
		// foreach (GameObject light in roomLights)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = V_0;
		int32_t L_7 = V_1;
		int32_t L_8 = L_7;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		// light.GetComponent<Light2D>().intensity = 0;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_10;
		L_10 = GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE(L_9, /*hidden argument*/GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE_RuntimeMethod_var);
		Light2D_set_intensity_m906585AD3CD4319A37DE766A9412561D6E654224_inline(L_10, (0.0f), /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_0039:
	{
		// foreach (GameObject light in roomLights)
		int32_t L_12 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = V_0;
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0023;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TaskEnter::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskEnter_OnTriggerEnter_m4CD2D431D9E5709F49CCE3D625B791B16D22B802 (TaskEnter_t2A923415BDFA13E00EEF41301930ABC814D62FE3 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject light in roomLights)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_roomLights_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0022;
	}

IL_000b:
	{
		// foreach (GameObject light in roomLights)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// light.GetComponent<Light2D>().intensity = initialIntensity;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_5;
		L_5 = GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE(L_4, /*hidden argument*/GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE_RuntimeMethod_var);
		float L_6 = __this->get_initialIntensity_4();
		Light2D_set_intensity_m906585AD3CD4319A37DE766A9412561D6E654224_inline(L_5, L_6, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0022:
	{
		// foreach (GameObject light in roomLights)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TaskEnter::OnTriggerExit(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskEnter_OnTriggerExit_m83A2681E0483D490347C57601473350E73408DDD (TaskEnter_t2A923415BDFA13E00EEF41301930ABC814D62FE3 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// foreach (GameObject light in roomLights)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_roomLights_5();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_000b:
	{
		// foreach (GameObject light in roomLights)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// light.GetComponent<Light2D>().intensity = 0;
		Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * L_5;
		L_5 = GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE(L_4, /*hidden argument*/GameObject_GetComponent_TisLight2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF_m22941C6ED1509981C5E16F4440EE742A1E21A8AE_RuntimeMethod_var);
		Light2D_set_intensity_m906585AD3CD4319A37DE766A9412561D6E654224_inline(L_5, (0.0f), /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		// foreach (GameObject light in roomLights)
		int32_t L_7 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = V_0;
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_000b;
		}
	}
	{
		// }
		return;
	}
}
// System.Void TaskEnter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskEnter__ctor_m0A9C8900BB5327A3F7371873356921231D7FA955 (TaskEnter_t2A923415BDFA13E00EEF41301930ABC814D62FE3 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TriggerLightTask::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerLightTask_OnTriggerEnter_m5BDE7A9DC79BA874367D0AAD43083E151FBA9E99 (TriggerLightTask_tF558497883F3635F15C52E3F84FDD830C02664FE * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Room.GetComponent<RoomManager>().startLightTask();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Room_4();
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_1;
		L_1 = GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA(L_0, /*hidden argument*/GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		RoomManager_startLightTask_mE28BDFDDFDDFB2313A81B4EF2C3D7AD8C366AAE4(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriggerLightTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerLightTask__ctor_m61F1B7F1DBAEBDDF37D540857767221258C912F4 (TriggerLightTask_tF558497883F3635F15C52E3F84FDD830C02664FE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TriggerNutriTask::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerNutriTask_OnTriggerEnter_mF7813A26E46EB011569C13DF8C63F2556870AD88 (TriggerNutriTask_t816ECE7538DDB79BB8C73D322F27050078FC2AFE * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Room.GetComponent<RoomManager>().startNutriTask();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Room_4();
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_1;
		L_1 = GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA(L_0, /*hidden argument*/GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		RoomManager_startNutriTask_m7D380331A92009CD2C72A237099FEE704EED0917(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriggerNutriTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerNutriTask__ctor_mCC1252BC9D2B88F147DB1122318CDA25BEAEAA41 (TriggerNutriTask_t816ECE7538DDB79BB8C73D322F27050078FC2AFE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TriggerWaterTask::OnTriggerEnter(UnityEngine.Collider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerWaterTask_OnTriggerEnter_mE4801190B8CAD52F0E3DD64B07062CD603FDFBE2 (TriggerWaterTask_tE61098CE10A3846C154FD6E0C2F5E192BBBC1891 * __this, Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Room.GetComponent<RoomManager>().startWateringTask();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_Room_4();
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_1;
		L_1 = GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA(L_0, /*hidden argument*/GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		RoomManager_startWateringTask_m968B078D6A798DAFBE47EB49AE276D3504D47C96(L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TriggerWaterTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TriggerWaterTask__ctor_m2AD20D7BCFF98BBFE3BC65597198D5D4BAF0570D (TriggerWaterTask_tE61098CE10A3846C154FD6E0C2F5E192BBBC1891 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WateringTask::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_Awake_m49DD04E011B680AFEE9BA193D52C6904F20A25B8 (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral276ECBDB922BA52FC83448ABC78E76E42421B150);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GM = GameObject.Find("Managers").GetComponent<GameManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral31D701E4B3F67A274A58FCB804A3A9C30BCD59B2, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_1;
		L_1 = GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0(L_0, /*hidden argument*/GameObject_GetComponent_TisGameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_mFF12AA9620C4A0771F7554A4E7B516D7E47DC7F0_RuntimeMethod_var);
		__this->set_GM_9(L_1);
		// RM = GameObject.Find("Room1").GetComponent<RoomManager>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteral276ECBDB922BA52FC83448ABC78E76E42421B150, /*hidden argument*/NULL);
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_3;
		L_3 = GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA(L_2, /*hidden argument*/GameObject_GetComponent_TisRoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF_mD21AAA6B3541604968F25FBE9C2DF35B40B654EA_RuntimeMethod_var);
		__this->set_RM_10(L_3);
		// }
		return;
	}
}
// System.Void WateringTask::init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_init_mF386F2B596F8D7815956C48AC7C5980994FCCB3F (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void WateringTask::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_Start_m4C6A7B2D04DF06620B493895AFAEEE3066BA1438 (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFAF00C5055CB27DF30B3F69C3030B7EFA0B10CF4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Reset();
		WateringTask_Reset_mFDE17E61A7D8849B12B58EC7B9E849FA444C902C(__this, /*hidden argument*/NULL);
		// waterValve = this.transform.Find("waterValve").gameObject;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Transform_Find_mB1687901A4FB0D562C44A93CC67CD35DCFCAABA1(L_0, _stringLiteralFAF00C5055CB27DF30B3F69C3030B7EFA0B10CF4, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_1, /*hidden argument*/NULL);
		__this->set_waterValve_4(L_2);
		// }
		return;
	}
}
// System.Void WateringTask::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_Update_mA29E13063D03A7566E0D9FDB54DCC869AA198C6A (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// if (turn)
		bool L_0 = __this->get_turn_5();
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Button.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_Button_11();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// KeepTurning();
		WateringTask_KeepTurning_m1CFCDC654DC26D1BA682268612A2BDB0ACB227D5(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001b:
	{
		// Button.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_Button_11();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WateringTask::KeepTurning()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_KeepTurning_m1CFCDC654DC26D1BA682268612A2BDB0ACB227D5 (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// spinSpeed = minSpinSpeed + (degree - spinned) / degree * minSpinSpeed * speedMultiplier;
		float L_0 = __this->get_minSpinSpeed_15();
		float L_1 = __this->get_degree_18();
		float L_2 = __this->get_spinned_14();
		float L_3 = __this->get_degree_18();
		float L_4 = __this->get_minSpinSpeed_15();
		float L_5 = __this->get_speedMultiplier_16();
		__this->set_spinSpeed_17(((float)il2cpp_codegen_add((float)L_0, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)((float)((float)((float)il2cpp_codegen_subtract((float)L_1, (float)L_2))/(float)L_3)), (float)L_4)), (float)L_5)))));
		// if (spinned >= degree)
		float L_6 = __this->get_spinned_14();
		float L_7 = __this->get_degree_18();
		if ((!(((float)L_6) >= ((float)L_7))))
		{
			goto IL_009d;
		}
	}
	{
		// waterValve.transform.eulerAngles = new Vector3(0, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_waterValve_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		memset((&L_10), 0, sizeof(L_10));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_10), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_9, L_10, /*hidden argument*/NULL);
		// spinSpeed = 0;
		__this->set_spinSpeed_17((0.0f));
		// turn = false;
		__this->set_turn_5((bool)0);
		// if(turnCount == goalTurn)
		int32_t L_11 = __this->get_turnCount_6();
		int32_t L_12 = __this->get_goalTurn_7();
		if ((!(((uint32_t)L_11) == ((uint32_t)L_12))))
		{
			goto IL_008f;
		}
	}
	{
		// results.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_results_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// }
		goto IL_00c8;
	}

IL_008f:
	{
		// results.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_results_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_00c8;
	}

IL_009d:
	{
		// waterValve.transform.RotateAround(waterValve.transform.position, Vector3.forward, spinSpeed);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = __this->get_waterValve_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_waterValve_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_17, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20;
		L_20 = Vector3_get_forward_m3082920F8A24AA02E4F542B6771EB0B63A91AC90(/*hidden argument*/NULL);
		float L_21 = __this->get_spinSpeed_17();
		Transform_RotateAround_m1F93A7A1807BE407BD23EC1BA49F03AD22FCE4BE(L_16, L_19, L_20, L_21, /*hidden argument*/NULL);
	}

IL_00c8:
	{
		// spinned += spinSpeed;
		float L_22 = __this->get_spinned_14();
		float L_23 = __this->get_spinSpeed_17();
		__this->set_spinned_14(((float)il2cpp_codegen_add((float)L_22, (float)L_23)));
		// }
		return;
	}
}
// System.Void WateringTask::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_OnEnable_mF62899AB90AD5D351F41F4ECEBC70AF9ED01AD22 (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// Reset();
		WateringTask_Reset_mFDE17E61A7D8849B12B58EC7B9E849FA444C902C(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WateringTask::turnValve()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_turnValve_m119857ACF2974F5EF6CFD26AE36A0FF1EE80AB0B (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// turn = true;
		__this->set_turn_5((bool)1);
		// spinned = 0f;
		__this->set_spinned_14((0.0f));
		// Spin();
		WateringTask_Spin_m0016F1C118020EBB562B9E6A93CD62E4C390EB22(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WateringTask::taskDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_taskDone_m453C7811F6A548E3E108E1BE61342C195A2D8C97 (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral54292B16AAF767794C392D4A7FFF2FB4A7901579);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// Debug.Log("cycle set to end the task at: " + (GM.time + Duration));
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_GM_9();
		float L_1 = L_0->get_time_7();
		float L_2 = __this->get_Duration_8();
		V_0 = ((float)il2cpp_codegen_add((float)L_1, (float)L_2));
		String_t* L_3;
		L_3 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_0), /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral54292B16AAF767794C392D4A7FFF2FB4A7901579, L_3, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
		// RM.startCycle(Duration, taskType);
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_5 = __this->get_RM_10();
		float L_6 = __this->get_Duration_8();
		int32_t L_7 = __this->get_taskType_13();
		RoomManager_startCycle_mAEC43D118E6B5264AEF2A95429C1B3DB1FC7A7B3(L_5, L_6, L_7, /*hidden argument*/NULL);
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WateringTask::Spin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_Spin_m0016F1C118020EBB562B9E6A93CD62E4C390EB22 (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// SpinOneRound();
		WateringTask_SpinOneRound_m3559C40E4DFBD9EE223C04490866102712B41E3B(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void WateringTask::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_Reset_mFDE17E61A7D8849B12B58EC7B9E849FA444C902C (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// results.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_results_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// spinned = 0f;
		__this->set_spinned_14((0.0f));
		// turnCount = 0;
		__this->set_turnCount_6(0);
		// }
		return;
	}
}
// System.Void WateringTask::SpinOneRound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask_SpinOneRound_m3559C40E4DFBD9EE223C04490866102712B41E3B (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// turnCount++;
		int32_t L_0 = __this->get_turnCount_6();
		__this->set_turnCount_6(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)1)));
		// degree = 360f;
		__this->set_degree_18((360.0f));
		// turn = true;
		__this->set_turn_5((bool)1);
		// }
		return;
	}
}
// System.Void WateringTask::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WateringTask__ctor_m0AAF51F17D11D81DBDD25079680EBB494D45EF3D (WateringTask_t9AD68D762F45F68160EC8308729F101BA78B8690 * __this, const RuntimeMethod* method)
{
	{
		// public int goalTurn = 3;
		__this->set_goalTurn_7(3);
		// private float Duration = 5f;
		__this->set_Duration_8((5.0f));
		// private TaskType taskType = TaskType.water;
		__this->set_taskType_13(2);
		// public float minSpinSpeed = 2f;
		__this->set_minSpinSpeed_15((2.0f));
		// public float speedMultiplier = 1f;
		__this->set_speedMultiplier_16((1.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CharacterController2D/BoolEvent::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoolEvent__ctor_mB1C4B8CED2296E60F44636855900EA1BDF1F393A (BoolEvent_t8F45AA601F5617A2109D92A2DA1ACFB0307A9659 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7(__this, /*hidden argument*/UnityEvent_1__ctor_m55B3D17A5D50746ED6618952C2C745FB5A73BAA7_RuntimeMethod_var);
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
// Conversion methods for marshalling of: CharacterInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshal_pinvoke(const PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965& unmarshaled, PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshaled_pinvoke& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshal_pinvoke_back(const PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshaled_pinvoke& marshaled, PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: CharacterInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshal_pinvoke_cleanup(PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshaled_pinvoke& marshaled)
{
}
// Conversion methods for marshalling of: CharacterInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshal_com(const PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965& unmarshaled, PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshaled_com& marshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
IL2CPP_EXTERN_C void PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshal_com_back(const PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshaled_com& marshaled, PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965& unmarshaled)
{
	Exception_t* ___m_Wrapper_0Exception = il2cpp_codegen_get_marshal_directive_exception("Cannot marshal field 'm_Wrapper' of type 'PlayerActions': Reference type field marshaling is not supported.");
	IL2CPP_RAISE_MANAGED_EXCEPTION(___m_Wrapper_0Exception, NULL);
}
// Conversion method for clean up from marshalling of: CharacterInput/PlayerActions
IL2CPP_EXTERN_C void PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshal_com_cleanup(PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965_marshaled_com& marshaled)
{
}
// System.Void CharacterInput/PlayerActions::.ctor(CharacterInput)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions__ctor_m13C8917F20E34D83612AF9D0C6DBE4A9FF7AF44F (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public PlayerActions(@CharacterInput wrapper) { m_Wrapper = wrapper; }
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public PlayerActions(@CharacterInput wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions__ctor_m13C8917F20E34D83612AF9D0C6DBE4A9FF7AF44F_AdjustorThunk (RuntimeObject * __this, CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * ___wrapper0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * _thisAdjusted = reinterpret_cast<PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *>(__this + _offset);
	PlayerActions__ctor_m13C8917F20E34D83612AF9D0C6DBE4A9FF7AF44F_inline(_thisAdjusted, ___wrapper0, method);
}
// UnityEngine.InputSystem.InputAction CharacterInput/PlayerActions::get_Move()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4 (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method)
{
	{
		// public InputAction @Move => m_Wrapper.m_Player_Move;
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = __this->get_m_Wrapper_0();
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_1 = L_0->get_m_Player_Move_3();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * _thisAdjusted = reinterpret_cast<PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *>(__this + _offset);
	InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * _returnValue;
	_returnValue = PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap CharacterInput/PlayerActions::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * PlayerActions_Get_m9D8BB52C557D3C46352AF299C5D78CC2A454904F (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method)
{
	{
		// public InputActionMap Get() { return m_Wrapper.m_Player; }
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = __this->get_m_Wrapper_0();
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_1 = L_0->get_m_Player_1();
		return L_1;
	}
}
IL2CPP_EXTERN_C  InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * PlayerActions_Get_m9D8BB52C557D3C46352AF299C5D78CC2A454904F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * _thisAdjusted = reinterpret_cast<PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *>(__this + _offset);
	InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * _returnValue;
	_returnValue = PlayerActions_Get_m9D8BB52C557D3C46352AF299C5D78CC2A454904F(_thisAdjusted, method);
	return _returnValue;
}
// System.Void CharacterInput/PlayerActions::Enable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Enable_mEE181F8E8B6B7C14EC707DBE86C65D143867AA4A (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method)
{
	{
		// public void Enable() { Get().Enable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = PlayerActions_Get_m9D8BB52C557D3C46352AF299C5D78CC2A454904F((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		InputActionMap_Enable_m7FB7229D7099C525C994CA0208284CC904D52F15(L_0, /*hidden argument*/NULL);
		// public void Enable() { Get().Enable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Enable_mEE181F8E8B6B7C14EC707DBE86C65D143867AA4A_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * _thisAdjusted = reinterpret_cast<PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *>(__this + _offset);
	PlayerActions_Enable_mEE181F8E8B6B7C14EC707DBE86C65D143867AA4A(_thisAdjusted, method);
}
// System.Void CharacterInput/PlayerActions::Disable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_Disable_m611BEEF208161AB63FBA20EE91CCB5811F43CB4C (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method)
{
	{
		// public void Disable() { Get().Disable(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = PlayerActions_Get_m9D8BB52C557D3C46352AF299C5D78CC2A454904F((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		InputActionMap_Disable_mE9427CBA292066C977F0A8FE109A1D4B4E6CB6B5(L_0, /*hidden argument*/NULL);
		// public void Disable() { Get().Disable(); }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_Disable_m611BEEF208161AB63FBA20EE91CCB5811F43CB4C_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * _thisAdjusted = reinterpret_cast<PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *>(__this + _offset);
	PlayerActions_Disable_m611BEEF208161AB63FBA20EE91CCB5811F43CB4C(_thisAdjusted, method);
}
// System.Boolean CharacterInput/PlayerActions::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerActions_get_enabled_m59778DD1A48F8DCF94BD49E88BD491F6981CD6F6 (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, const RuntimeMethod* method)
{
	{
		// public bool enabled => Get().enabled;
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = PlayerActions_Get_m9D8BB52C557D3C46352AF299C5D78CC2A454904F((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		bool L_1;
		L_1 = InputActionMap_get_enabled_m067EAC332984B7758EC1214A45FF0552F913945E(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
IL2CPP_EXTERN_C  bool PlayerActions_get_enabled_m59778DD1A48F8DCF94BD49E88BD491F6981CD6F6_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * _thisAdjusted = reinterpret_cast<PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayerActions_get_enabled_m59778DD1A48F8DCF94BD49E88BD491F6981CD6F6(_thisAdjusted, method);
	return _returnValue;
}
// UnityEngine.InputSystem.InputActionMap CharacterInput/PlayerActions::op_Implicit(CharacterInput/PlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * PlayerActions_op_Implicit_mDF92AFB37E4581899BCB78B7F53AC9AC63792E4A (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965  ___set0, const RuntimeMethod* method)
{
	{
		// public static implicit operator InputActionMap(PlayerActions set) { return set.Get(); }
		InputActionMap_tBA45B784C5957091166E0007413402A3E83DD226 * L_0;
		L_0 = PlayerActions_Get_m9D8BB52C557D3C46352AF299C5D78CC2A454904F((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)(&___set0), /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void CharacterInput/PlayerActions::SetCallbacks(CharacterInput/IPlayerActions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerActions_SetCallbacks_mB35094E2C8A2595AEF16812251655FC666D2B111 (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (m_Wrapper.m_PlayerActionsCallbackInterface != null)
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = __this->get_m_Wrapper_0();
		RuntimeObject* L_1 = L_0->get_m_PlayerActionsCallbackInterface_2();
		if (!L_1)
		{
			goto IL_0073;
		}
	}
	{
		// @Move.started -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_2;
		L_2 = PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_3 = __this->get_m_Wrapper_0();
		RuntimeObject* L_4 = L_3->get_m_PlayerActionsCallbackInterface_2();
		RuntimeObject* L_5 = L_4;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_6 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_6, L_5, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_5, 0, IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_started_m365C97F93610FB6AE39AD14291F66B18CD569F62(L_2, L_6, /*hidden argument*/NULL);
		// @Move.performed -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_7;
		L_7 = PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_8 = __this->get_m_Wrapper_0();
		RuntimeObject* L_9 = L_8->get_m_PlayerActionsCallbackInterface_2();
		RuntimeObject* L_10 = L_9;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_11 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_11, L_10, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_10, 0, IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_performed_m6D13571BE4651E97A4B5FFDB9DD7725D93879B90(L_7, L_11, /*hidden argument*/NULL);
		// @Move.canceled -= m_Wrapper.m_PlayerActionsCallbackInterface.OnMove;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_12;
		L_12 = PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_13 = __this->get_m_Wrapper_0();
		RuntimeObject* L_14 = L_13->get_m_PlayerActionsCallbackInterface_2();
		RuntimeObject* L_15 = L_14;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_16 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_16, L_15, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_15, 0, IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_remove_canceled_mD3D5FF749E8E3A7966E32B6DB7E505817CD54A51(L_12, L_16, /*hidden argument*/NULL);
	}

IL_0073:
	{
		// m_Wrapper.m_PlayerActionsCallbackInterface = instance;
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_17 = __this->get_m_Wrapper_0();
		RuntimeObject* L_18 = ___instance0;
		L_17->set_m_PlayerActionsCallbackInterface_2(L_18);
		// if (instance != null)
		RuntimeObject* L_19 = ___instance0;
		if (!L_19)
		{
			goto IL_00ca;
		}
	}
	{
		// @Move.started += instance.OnMove;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_20;
		L_20 = PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_21 = ___instance0;
		RuntimeObject* L_22 = L_21;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_23 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_23, L_22, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_22, 0, IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_started_m7C0A1C6831F4DBFC1C3E846EA92D752A73F24578(L_20, L_23, /*hidden argument*/NULL);
		// @Move.performed += instance.OnMove;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_24;
		L_24 = PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_25 = ___instance0;
		RuntimeObject* L_26 = L_25;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_27 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_27, L_26, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_26, 0, IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_performed_m08BA8B41633027A527B1ABA1F0F647DD665FB18E(L_24, L_27, /*hidden argument*/NULL);
		// @Move.canceled += instance.OnMove;
		InputAction_tF0C77AF72E0C19608B020E77A2C36C04E9DCBE48 * L_28;
		L_28 = PlayerActions_get_Move_mC01359E74C35591C2476AF5494C8A0D7DAB3FDA4((PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *)__this, /*hidden argument*/NULL);
		RuntimeObject* L_29 = ___instance0;
		RuntimeObject* L_30 = L_29;
		Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 * L_31 = (Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416 *)il2cpp_codegen_object_new(Action_1_t7A6E0E94B21008B707D8BEA0DA19B65A96D58416_il2cpp_TypeInfo_var);
		Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0(L_31, L_30, (intptr_t)((intptr_t)GetInterfaceMethodInfo(L_30, 0, IPlayerActions_t43F1E9820B681BF0A20910058528B60744B390D9_il2cpp_TypeInfo_var)), /*hidden argument*/Action_1__ctor_m8902DCFE8589EFD9B0A1C1655AC5664A0047F8D0_RuntimeMethod_var);
		InputAction_add_canceled_mE043BDF3F4333CD70CFF05BE475DD516EC59EB49(L_28, L_31, /*hidden argument*/NULL);
	}

IL_00ca:
	{
		// }
		return;
	}
}
IL2CPP_EXTERN_C  void PlayerActions_SetCallbacks_mB35094E2C8A2595AEF16812251655FC666D2B111_AdjustorThunk (RuntimeObject * __this, RuntimeObject* ___instance0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * _thisAdjusted = reinterpret_cast<PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 *>(__this + _offset);
	PlayerActions_SetCallbacks_mB35094E2C8A2595AEF16812251655FC666D2B111(_thisAdjusted, ___instance0, method);
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
// System.Void RoomManager/<cycleIsOver>d__18::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcycleIsOverU3Ed__18__ctor_mF30B870FEEA931EB0ABC0DFA58D5661CA4DE54C8 (U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void RoomManager/<cycleIsOver>d__18::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcycleIsOverU3Ed__18_System_IDisposable_Dispose_m3AE8EA61695F086441546A5BEBDA12716FD062B1 (U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean RoomManager/<cycleIsOver>d__18::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CcycleIsOverU3Ed__18_MoveNext_mAAFAF19CF9FC6FF5275D70FDEF9DB0EBAFC1B074 (U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB2F6D327D59DE65144BD6F7CC4960CAFE87A21F7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_1 = __this->get_U3CU3E4__this_4();
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0038;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(delayTime);
		float L_4 = __this->get_delayTime_2();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_5 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_5, L_4, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_5);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0038:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Debug.Log("CYCLE IS OVER NOW");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralB2F6D327D59DE65144BD6F7CC4960CAFE87A21F7, /*hidden argument*/NULL);
		// if (t.Equals(TaskType.light))
		int32_t* L_6 = __this->get_address_of_t_3();
		int32_t L_7 = 0;
		RuntimeObject * L_8 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, &L_7);
		RuntimeObject * L_9 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, L_6);
		bool L_10;
		L_10 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_9, L_8);
		*L_6 = *(int32_t*)UnBox(L_9);
		if (!L_10)
		{
			goto IL_0075;
		}
	}
	{
		// Plant.GetComponent<PlantManager>().inLightCycle = false;
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_11 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_Plant_7();
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_13;
		L_13 = GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0(L_12, /*hidden argument*/GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0_RuntimeMethod_var);
		L_13->set_inLightCycle_7((bool)0);
		// }
		goto IL_00cb;
	}

IL_0075:
	{
		// else if (t.Equals(TaskType.water))
		int32_t* L_14 = __this->get_address_of_t_3();
		int32_t L_15 = 2;
		RuntimeObject * L_16 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, &L_15);
		RuntimeObject * L_17 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, L_14);
		bool L_18;
		L_18 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_17, L_16);
		*L_14 = *(int32_t*)UnBox(L_17);
		if (!L_18)
		{
			goto IL_00a1;
		}
	}
	{
		// Plant.GetComponent<PlantManager>().inWaterCycle = false;
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_19 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = L_19->get_Plant_7();
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_21;
		L_21 = GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0(L_20, /*hidden argument*/GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0_RuntimeMethod_var);
		L_21->set_inWaterCycle_6((bool)0);
		// }
		goto IL_00cb;
	}

IL_00a1:
	{
		// else if (t.Equals(TaskType.nutrition))
		int32_t* L_22 = __this->get_address_of_t_3();
		int32_t L_23 = 1;
		RuntimeObject * L_24 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, &L_23);
		RuntimeObject * L_25 = Box(TaskType_t2449E8A4C52CD19D36ABCBA326D90FCD2DEE0283_il2cpp_TypeInfo_var, L_22);
		bool L_26;
		L_26 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, L_25, L_24);
		*L_22 = *(int32_t*)UnBox(L_25);
		if (!L_26)
		{
			goto IL_00cb;
		}
	}
	{
		// Plant.GetComponent<PlantManager>().inNuteriCycle = false;
		RoomManager_tC5ACC3E796947A6332027FA7168AAFB7D2E80AFF * L_27 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = L_27->get_Plant_7();
		PlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA * L_29;
		L_29 = GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0(L_28, /*hidden argument*/GameObject_GetComponent_TisPlantManager_tC1ABEE0B119386B41F8CB570A5D43ABAE134F1BA_m55D6427DBFD20E0BC61D7FB713FED64DC9C454F0_RuntimeMethod_var);
		L_29->set_inNuteriCycle_8((bool)0);
	}

IL_00cb:
	{
		// }
		return (bool)0;
	}
}
// System.Object RoomManager/<cycleIsOver>d__18::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CcycleIsOverU3Ed__18_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m58C8860C79F83E5FCEFCB34A6E5767465EAA65BB (U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void RoomManager/<cycleIsOver>d__18::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CcycleIsOverU3Ed__18_System_Collections_IEnumerator_Reset_m6879B36C480C5C254BD6E68A36F657B8A96E1AD9 (U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CcycleIsOverU3Ed__18_System_Collections_IEnumerator_Reset_m6879B36C480C5C254BD6E68A36F657B8A96E1AD9_RuntimeMethod_var)));
	}
}
// System.Object RoomManager/<cycleIsOver>d__18::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CcycleIsOverU3Ed__18_System_Collections_IEnumerator_get_Current_mEAC3B76EEEFB8D2534E662AD7DFDB5343CBB2E9D (U3CcycleIsOverU3Ed__18_t0B56D00288911DC10D165EBCE17F12F2B0CF433D * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * CharacterInput_get_asset_m8A1EA20AA9CBAE6241F3B64626D379AD46A6777A_inline (CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * __this, const RuntimeMethod* method)
{
	{
		// public InputActionAsset asset { get; }
		InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * L_0 = __this->get_U3CassetU3Ek__BackingField_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  InputActionAsset_get_bindingMask_m0DE2822978D8EF39E157BF7CD94C2AEC26BFC554_inline (InputActionAsset_tB1114F77EFFAE61A28A8A559662A6FCCF444F70E * __this, const RuntimeMethod* method)
{
	{
		// get => m_BindingMask;
		Nullable_1_tAF2F42FC2F7DC5A356BAC77371758E4D7339F104  L_0 = __this->get_m_BindingMask_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void PlayerActions__ctor_m13C8917F20E34D83612AF9D0C6DBE4A9FF7AF44F_inline (PlayerActions_t782B8C89E54EEB271546F5B46AD3CA55E84B4965 * __this, CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * ___wrapper0, const RuntimeMethod* method)
{
	{
		// public PlayerActions(@CharacterInput wrapper) { m_Wrapper = wrapper; }
		CharacterInput_t5EA7396AF73DEE72436844EE9F68A91096492A0D * L_0 = ___wrapper0;
		__this->set_m_Wrapper_0(L_0);
		// public PlayerActions(@CharacterInput wrapper) { m_Wrapper = wrapper; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Light2D_get_intensity_m12C2A712E18652DEC877F79FCBA3C3D3AC2269D5_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, const RuntimeMethod* method)
{
	{
		// public float intensity { get => m_Intensity; set => m_Intensity = value; }
		float L_0 = __this->get_m_Intensity_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Light2D_set_intensity_m906585AD3CD4319A37DE766A9412561D6E654224_inline (Light2D_tB2F9E756DFBD3368D5F2B56465C7D7D0887454EF * __this, float ___value0, const RuntimeMethod* method)
{
	{
		// public float intensity { get => m_Intensity; set => m_Intensity = value; }
		float L_0 = ___value0;
		__this->set_m_Intensity_8(L_0);
		return;
	}
}

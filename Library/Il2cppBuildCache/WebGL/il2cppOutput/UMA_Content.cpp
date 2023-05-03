#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1, typename T2, typename T3>
struct VirtActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UMA.DNAConvertDelegate>>
struct Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMADnaBase>
struct Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D;
// System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMASkeleton/BoneData>
struct Dictionary_2_t809F164252C5DC79F27283B75CF4A14E2E10F561;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.MeshHideAsset>>
struct Dictionary_2_t7B44D9A0564C9705D96B47DCC6B257D2B9EBA177;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423;
// System.Collections.Generic.Dictionary`2<System.Type,UMA.DNAConvertDelegate>
struct Dictionary_2_tCE17D359830A1305E94351EF4D2681529A1BB22C;
// System.Collections.Generic.LinkedListNode`1<UMA.UMAData>
struct LinkedListNode_1_t58B04B7F807A8599357DEF495B9BAECB62B34286;
// System.Collections.Generic.List`1<UMA.OverlayColorData>
struct List_1_tF13EF38A4E5EDC174BC4866BC9B5CF9580F9DD35;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UMA.UMADnaBase>
struct List_1_t6EB9C928712A968388ECB10159E456120E6DE71D;
// System.Collections.Generic.List`1<UMA.UMASavedItem>
struct List_1_t180E55DE782EC1658BD5144F1BDE7963D5BC605F;
// System.Collections.Generic.List`1<UMA.PoseTools.ExpressionPlayer/Expression>
struct List_1_tB003A2F8E21D2D238360FD0A214D00FD4B70965B;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A;
// UnityEngine.Events.UnityAction`1<UMA.UMAData>
struct UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7;
// UnityEngine.Events.UnityEvent`1<System.Object>
struct UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F;
// UnityEngine.Events.UnityEvent`1<UMA.UMAData>
struct UnityEvent_1_tB6040BFF4F07107C0EAAF4F259490C24063254D4;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ContactPoint[]
struct ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B;
// UMA.DNARangeAsset[]
struct DNARangeAssetU5BU5D_tB8ADF4F0FA7CB00B573B50A4E3B2F5E086A0A036;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UMA.DnaConverterBehaviour[]
struct DnaConverterBehaviourU5BU5D_t72E1696A59110668A1B279529CFEDD250E8F5D30;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UMA.OverlayColorData[]
struct OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED;
// UMA.SlotData[]
struct SlotDataU5BU5D_t0E8AD71F47DF5ADA5BD2486C00490B7F6FBDBDDF;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UMA.UMARendererAsset[]
struct UMARendererAssetU5BU5D_t0039165EF8659578C2E0EF3BD5C20F3461DAE27B;
// UMA.PoseTools.ExpressionPlayer/MecanimJoint[]
struct MecanimJointU5BU5D_tB17A714B547AB2DE8AFB198C1B04961DD09523F3;
// UMA.PoseTools.UMAExpressionSet/PosePair[]
struct PosePairU5BU5D_t75DD5142CCC37AADE0EE86A22F055D1259351CB8;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UMA.BlendShapeSettings
struct BlendShapeSettings_tB123D8AB02898CF0D0B7218F215CE4CE4197C042;
// UnityEngine.BoxCollider
struct BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5;
// UnityEngine.CapsuleCollider
struct CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635;
// UMA.CapsuleColliderSlotScript
struct CapsuleColliderSlotScript_t92F670AAA36FB908BDB3DC7A959E0C553462C7DD;
// UnityEngine.Collider
struct Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02;
// UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UMA.DNAConvertDelegate
struct DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1;
// UMA.DNAConverterList
struct DNAConverterList_t66CB0C5C4C19C39E9FE66C5A01FB7BDA89962511;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// UMA.DnaConverterBehaviour
struct DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6;
// UMA.CharacterSystem.DynamicCharacterAvatar
struct DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4;
// UMA.PoseTools.ExpressionSlotScript
struct ExpressionSlotScript_t12A940B1CF4C863A0C320E926971FD5CEA8F313F;
// UMA.ForearmTwistSlotScript
struct ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UMA.HumanFemaleDNAConverterBehaviour
struct HumanFemaleDNAConverterBehaviour_t08D66080D8F6149AD598A5AB468F4C3CCFC9A612;
// UMA.HumanMaleDNAConverterBehaviour
struct HumanMaleDNAConverterBehaviour_t881F394515FB96ABD3724D7A5D54AD405AB444F5;
// UMA.HumanoidDNAConverterBehaviour
struct HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_tB7C66AA0C00F9C102C8BDC17A144E569AC7527A9;
// UMA.Examples.Locomotion
struct Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4;
// UMA.Examples.LocomotionSlotScript
struct LocomotionSlotScript_tC6F1D709E7F22799FF4F6DEC52CFC8FD1DED0F43;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t9A1D83DA2BA3118C103FA87D93CE92557A956FDC;
// UMA.RaceData
struct RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// UMA.TwistBones
struct TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B;
// System.Type
struct Type_t;
// UMA.UMAData
struct UMAData_t696E4E970704E7893146E28998A230A9F2947B3C;
// UMA.UMADataEvent
struct UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196;
// UMA.UMADnaHumanoid
struct UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F;
// UMA.UMAExpressionEvent
struct UMAExpressionEvent_t4D2610DE669A5E2F7B5FFE11148303C37B28AC1E;
// UMA.PoseTools.UMAExpressionPlayer
struct UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68;
// UMA.PoseTools.UMAExpressionSet
struct UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94;
// UMA.UMAGeneratorBase
struct UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3;
// UMA.UMARecipeBase
struct UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35;
// UMA.UMARendererAsset
struct UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2;
// UMA.UMASkeleton
struct UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE;
// UMA.UmaTPose
struct UmaTPose_t14C98D5B3053667973FFD791510A8865E1D455DC;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UMA.RaceData/CrossCompatibilitySettingsList
struct CrossCompatibilitySettingsList_tF1D11A46A6F989CF59E3F26CF01D2922A62CE349;
// UMA.RaceData/RaceThumbnails
struct RaceThumbnails_tEE7AD76E4EEC2BF6EA26E64D61ADD1BF2308FDB1;
// UMA.UMAData/GeneratedMaterials
struct GeneratedMaterials_tB1112A090548BA0EAEF788D774FE1A871F64A644;
// UMA.UMAData/UMARecipe
struct UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A;
// UMA.UMAPackedRecipeBase/UMAPackRecipe
struct UMAPackRecipe_t0CAC7FA6FE47936263E8EBEB36971985ED76443C;

IL2CPP_EXTERN_C RuntimeClass* DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral187980DBE1429BB611B6BE6611A58E12C4EE4DC2;
IL2CPP_EXTERN_C String_t* _stringLiteral19DDBEB730DD1557CC95B3EB4B51D5918A02F45D;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral4FCCDFD3057B203D397AF5279F8B17B5A5060F82;
IL2CPP_EXTERN_C String_t* _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32;
IL2CPP_EXTERN_C String_t* _stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D;
IL2CPP_EXTERN_C String_t* _stringLiteral8B25A3EE6826690B4824274E83F9FBB3F2550D29;
IL2CPP_EXTERN_C String_t* _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907;
IL2CPP_EXTERN_C String_t* _stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m5B078D319D4F6952735EDADA57E9F154F8D8F23A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExpressionSlotScript_umaData_OnCharacterUpdated_m45AA5DF3259563439C10B20D749F60D7B7869DE9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m4C7B5A06C8B2205403103DE818227089B02E05E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m42C702C12C4EB19C03766DAF7282545805022F50_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_mF47859E225CAD91D6F8546CED8F01874504B9409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m6EBBC2FEDBA32E3404BD034FD75FB37DFDFF0C95_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HumanFemaleDNAConverterBehaviour_UpdateUMAFemaleDNABones_m879C5A5FB36F4B4B2C29A8F6A29AD00A6693A761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HumanMaleDNAConverterBehaviour_UpdateUMAMaleDNABones_m25074687B08CECE4939620673F3A42859023FAB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UMAData_GetDna_TisUMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_m1EB03CCC9ED0211434198721DCF67EF43E8AB409_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityAction_1__ctor_m26E27A4EE35C3FF6DC17C1247D0D7DE1569E97EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_AddListener_mA64241CBD6FBB5A7AAD577AD657C8444124B7C5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEvent_1_RemoveListener_m340E1C16EB47D8D7222F1A909FBE2A719D54B23C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_0_0_0_var;
struct ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;

struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tAEC0E0822A8B5105E37228CC30F3A28CED54EE2C 
{
public:

public:
};


// System.Object

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


// UMA.UMADnaBase
struct  UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40  : public RuntimeObject
{
public:
	// System.Int32 UMA.UMADnaBase::<Count>k__BackingField
	int32_t ___U3CCountU3Ek__BackingField_0;
	// System.Single[] UMA.UMADnaBase::<Values>k__BackingField
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___U3CValuesU3Ek__BackingField_1;
	// System.String[] UMA.UMADnaBase::<Names>k__BackingField
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___U3CNamesU3Ek__BackingField_2;
	// System.Int32 UMA.UMADnaBase::dnaTypeHash
	int32_t ___dnaTypeHash_3;

public:
	inline static int32_t get_offset_of_U3CCountU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40, ___U3CCountU3Ek__BackingField_0)); }
	inline int32_t get_U3CCountU3Ek__BackingField_0() const { return ___U3CCountU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CCountU3Ek__BackingField_0() { return &___U3CCountU3Ek__BackingField_0; }
	inline void set_U3CCountU3Ek__BackingField_0(int32_t value)
	{
		___U3CCountU3Ek__BackingField_0 = value;
	}

	inline static int32_t get_offset_of_U3CValuesU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40, ___U3CValuesU3Ek__BackingField_1)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_U3CValuesU3Ek__BackingField_1() const { return ___U3CValuesU3Ek__BackingField_1; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_U3CValuesU3Ek__BackingField_1() { return &___U3CValuesU3Ek__BackingField_1; }
	inline void set_U3CValuesU3Ek__BackingField_1(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___U3CValuesU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CValuesU3Ek__BackingField_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CNamesU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40, ___U3CNamesU3Ek__BackingField_2)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_U3CNamesU3Ek__BackingField_2() const { return ___U3CNamesU3Ek__BackingField_2; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_U3CNamesU3Ek__BackingField_2() { return &___U3CNamesU3Ek__BackingField_2; }
	inline void set_U3CNamesU3Ek__BackingField_2(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___U3CNamesU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNamesU3Ek__BackingField_2), (void*)value);
	}

	inline static int32_t get_offset_of_dnaTypeHash_3() { return static_cast<int32_t>(offsetof(UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40, ___dnaTypeHash_3)); }
	inline int32_t get_dnaTypeHash_3() const { return ___dnaTypeHash_3; }
	inline int32_t* get_address_of_dnaTypeHash_3() { return &___dnaTypeHash_3; }
	inline void set_dnaTypeHash_3(int32_t value)
	{
		___dnaTypeHash_3 = value;
	}
};


// UMA.UMASkeleton
struct  UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE  : public RuntimeObject
{
public:
	// System.Boolean UMA.UMASkeleton::updating
	bool ___updating_0;
	// System.Int32 UMA.UMASkeleton::frame
	int32_t ___frame_1;
	// System.Int32 UMA.UMASkeleton::<rootBoneHash>k__BackingField
	int32_t ___U3CrootBoneHashU3Ek__BackingField_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMASkeleton/BoneData> UMA.UMASkeleton::boneHashDataLookup
	Dictionary_2_t809F164252C5DC79F27283B75CF4A14E2E10F561 * ___boneHashDataLookup_3;

public:
	inline static int32_t get_offset_of_updating_0() { return static_cast<int32_t>(offsetof(UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE, ___updating_0)); }
	inline bool get_updating_0() const { return ___updating_0; }
	inline bool* get_address_of_updating_0() { return &___updating_0; }
	inline void set_updating_0(bool value)
	{
		___updating_0 = value;
	}

	inline static int32_t get_offset_of_frame_1() { return static_cast<int32_t>(offsetof(UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE, ___frame_1)); }
	inline int32_t get_frame_1() const { return ___frame_1; }
	inline int32_t* get_address_of_frame_1() { return &___frame_1; }
	inline void set_frame_1(int32_t value)
	{
		___frame_1 = value;
	}

	inline static int32_t get_offset_of_U3CrootBoneHashU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE, ___U3CrootBoneHashU3Ek__BackingField_2)); }
	inline int32_t get_U3CrootBoneHashU3Ek__BackingField_2() const { return ___U3CrootBoneHashU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CrootBoneHashU3Ek__BackingField_2() { return &___U3CrootBoneHashU3Ek__BackingField_2; }
	inline void set_U3CrootBoneHashU3Ek__BackingField_2(int32_t value)
	{
		___U3CrootBoneHashU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_boneHashDataLookup_3() { return static_cast<int32_t>(offsetof(UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE, ___boneHashDataLookup_3)); }
	inline Dictionary_2_t809F164252C5DC79F27283B75CF4A14E2E10F561 * get_boneHashDataLookup_3() const { return ___boneHashDataLookup_3; }
	inline Dictionary_2_t809F164252C5DC79F27283B75CF4A14E2E10F561 ** get_address_of_boneHashDataLookup_3() { return &___boneHashDataLookup_3; }
	inline void set_boneHashDataLookup_3(Dictionary_2_t809F164252C5DC79F27283B75CF4A14E2E10F561 * value)
	{
		___boneHashDataLookup_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boneHashDataLookup_3), (void*)value);
	}
};


// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB  : public RuntimeObject
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
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// UMA.UMAData/UMARecipe
struct  UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A  : public RuntimeObject
{
public:
	// UMA.RaceData UMA.UMAData/UMARecipe::raceData
	RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * ___raceData_0;
	// System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMADnaBase> UMA.UMAData/UMARecipe::_umaDna
	Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D * ____umaDna_1;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UMA.DNAConvertDelegate>> UMA.UMAData/UMARecipe::umaDNAConverters
	Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB * ___umaDNAConverters_2;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UMA.DNAConvertDelegate>> UMA.UMAData/UMARecipe::umaDNAPreApplyConverters
	Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB * ___umaDNAPreApplyConverters_3;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> UMA.UMAData/UMARecipe::mergedSharedColors
	Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * ___mergedSharedColors_4;
	// System.Collections.Generic.List`1<UMA.UMADnaBase> UMA.UMAData/UMARecipe::dnaValues
	List_1_t6EB9C928712A968388ECB10159E456120E6DE71D * ___dnaValues_5;
	// UMA.SlotData[] UMA.UMAData/UMARecipe::slotDataList
	SlotDataU5BU5D_t0E8AD71F47DF5ADA5BD2486C00490B7F6FBDBDDF* ___slotDataList_6;
	// UMA.OverlayColorData[] UMA.UMAData/UMARecipe::sharedColors
	OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* ___sharedColors_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.MeshHideAsset>> UMA.UMAData/UMARecipe::<MeshHideDictionary>k__BackingField
	Dictionary_2_t7B44D9A0564C9705D96B47DCC6B257D2B9EBA177 * ___U3CMeshHideDictionaryU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_raceData_0() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ___raceData_0)); }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * get_raceData_0() const { return ___raceData_0; }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F ** get_address_of_raceData_0() { return &___raceData_0; }
	inline void set_raceData_0(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * value)
	{
		___raceData_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raceData_0), (void*)value);
	}

	inline static int32_t get_offset_of__umaDna_1() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ____umaDna_1)); }
	inline Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D * get__umaDna_1() const { return ____umaDna_1; }
	inline Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D ** get_address_of__umaDna_1() { return &____umaDna_1; }
	inline void set__umaDna_1(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D * value)
	{
		____umaDna_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____umaDna_1), (void*)value);
	}

	inline static int32_t get_offset_of_umaDNAConverters_2() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ___umaDNAConverters_2)); }
	inline Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB * get_umaDNAConverters_2() const { return ___umaDNAConverters_2; }
	inline Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB ** get_address_of_umaDNAConverters_2() { return &___umaDNAConverters_2; }
	inline void set_umaDNAConverters_2(Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB * value)
	{
		___umaDNAConverters_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaDNAConverters_2), (void*)value);
	}

	inline static int32_t get_offset_of_umaDNAPreApplyConverters_3() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ___umaDNAPreApplyConverters_3)); }
	inline Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB * get_umaDNAPreApplyConverters_3() const { return ___umaDNAPreApplyConverters_3; }
	inline Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB ** get_address_of_umaDNAPreApplyConverters_3() { return &___umaDNAPreApplyConverters_3; }
	inline void set_umaDNAPreApplyConverters_3(Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB * value)
	{
		___umaDNAPreApplyConverters_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaDNAPreApplyConverters_3), (void*)value);
	}

	inline static int32_t get_offset_of_mergedSharedColors_4() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ___mergedSharedColors_4)); }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * get_mergedSharedColors_4() const { return ___mergedSharedColors_4; }
	inline Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 ** get_address_of_mergedSharedColors_4() { return &___mergedSharedColors_4; }
	inline void set_mergedSharedColors_4(Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162 * value)
	{
		___mergedSharedColors_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mergedSharedColors_4), (void*)value);
	}

	inline static int32_t get_offset_of_dnaValues_5() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ___dnaValues_5)); }
	inline List_1_t6EB9C928712A968388ECB10159E456120E6DE71D * get_dnaValues_5() const { return ___dnaValues_5; }
	inline List_1_t6EB9C928712A968388ECB10159E456120E6DE71D ** get_address_of_dnaValues_5() { return &___dnaValues_5; }
	inline void set_dnaValues_5(List_1_t6EB9C928712A968388ECB10159E456120E6DE71D * value)
	{
		___dnaValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dnaValues_5), (void*)value);
	}

	inline static int32_t get_offset_of_slotDataList_6() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ___slotDataList_6)); }
	inline SlotDataU5BU5D_t0E8AD71F47DF5ADA5BD2486C00490B7F6FBDBDDF* get_slotDataList_6() const { return ___slotDataList_6; }
	inline SlotDataU5BU5D_t0E8AD71F47DF5ADA5BD2486C00490B7F6FBDBDDF** get_address_of_slotDataList_6() { return &___slotDataList_6; }
	inline void set_slotDataList_6(SlotDataU5BU5D_t0E8AD71F47DF5ADA5BD2486C00490B7F6FBDBDDF* value)
	{
		___slotDataList_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slotDataList_6), (void*)value);
	}

	inline static int32_t get_offset_of_sharedColors_7() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ___sharedColors_7)); }
	inline OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* get_sharedColors_7() const { return ___sharedColors_7; }
	inline OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB** get_address_of_sharedColors_7() { return &___sharedColors_7; }
	inline void set_sharedColors_7(OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* value)
	{
		___sharedColors_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedColors_7), (void*)value);
	}

	inline static int32_t get_offset_of_U3CMeshHideDictionaryU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A, ___U3CMeshHideDictionaryU3Ek__BackingField_8)); }
	inline Dictionary_2_t7B44D9A0564C9705D96B47DCC6B257D2B9EBA177 * get_U3CMeshHideDictionaryU3Ek__BackingField_8() const { return ___U3CMeshHideDictionaryU3Ek__BackingField_8; }
	inline Dictionary_2_t7B44D9A0564C9705D96B47DCC6B257D2B9EBA177 ** get_address_of_U3CMeshHideDictionaryU3Ek__BackingField_8() { return &___U3CMeshHideDictionaryU3Ek__BackingField_8; }
	inline void set_U3CMeshHideDictionaryU3Ek__BackingField_8(Dictionary_2_t7B44D9A0564C9705D96B47DCC6B257D2B9EBA177 * value)
	{
		___U3CMeshHideDictionaryU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMeshHideDictionaryU3Ek__BackingField_8), (void*)value);
	}
};


// UnityEngine.Events.UnityEvent`1<UMA.UMAData>
struct  UnityEvent_1_tB6040BFF4F07107C0EAAF4F259490C24063254D4  : public UnityEventBase_tBB43047292084BA63C5CBB1A379A8BB88611C6FB
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_InvokeArray_3;

public:
	inline static int32_t get_offset_of_m_InvokeArray_3() { return static_cast<int32_t>(offsetof(UnityEvent_1_tB6040BFF4F07107C0EAAF4F259490C24063254D4, ___m_InvokeArray_3)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_InvokeArray_3() const { return ___m_InvokeArray_3; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_InvokeArray_3() { return &___m_InvokeArray_3; }
	inline void set_m_InvokeArray_3(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_InvokeArray_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_InvokeArray_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
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
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UMA.UMADna
struct  UMADna_t68DB393FE14EBB4AC850B80873B4EBA09CAC0A7F  : public UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40
{
public:

public:
};


// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
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


// UnityEngine.Bounds
struct  Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 
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


// UnityEngine.Collision
struct  Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0  : public RuntimeObject
{
public:
	// UnityEngine.Vector3 UnityEngine.Collision::m_Impulse
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	// UnityEngine.Vector3 UnityEngine.Collision::m_RelativeVelocity
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	// UnityEngine.Rigidbody UnityEngine.Collision::m_Rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	// UnityEngine.Collider UnityEngine.Collision::m_Collider
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	// System.Int32 UnityEngine.Collision::m_ContactCount
	int32_t ___m_ContactCount_4;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_ReusedContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_ReusedContacts_5;
	// UnityEngine.ContactPoint[] UnityEngine.Collision::m_LegacyContacts
	ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* ___m_LegacyContacts_6;

public:
	inline static int32_t get_offset_of_m_Impulse_0() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Impulse_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Impulse_0() const { return ___m_Impulse_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Impulse_0() { return &___m_Impulse_0; }
	inline void set_m_Impulse_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Impulse_0 = value;
	}

	inline static int32_t get_offset_of_m_RelativeVelocity_1() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_RelativeVelocity_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_RelativeVelocity_1() const { return ___m_RelativeVelocity_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_RelativeVelocity_1() { return &___m_RelativeVelocity_1; }
	inline void set_m_RelativeVelocity_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_RelativeVelocity_1 = value;
	}

	inline static int32_t get_offset_of_m_Rigidbody_2() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Rigidbody_2)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get_m_Rigidbody_2() const { return ___m_Rigidbody_2; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of_m_Rigidbody_2() { return &___m_Rigidbody_2; }
	inline void set_m_Rigidbody_2(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		___m_Rigidbody_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Rigidbody_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_Collider_3() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_Collider_3)); }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * get_m_Collider_3() const { return ___m_Collider_3; }
	inline Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 ** get_address_of_m_Collider_3() { return &___m_Collider_3; }
	inline void set_m_Collider_3(Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * value)
	{
		___m_Collider_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Collider_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ContactCount_4() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ContactCount_4)); }
	inline int32_t get_m_ContactCount_4() const { return ___m_ContactCount_4; }
	inline int32_t* get_address_of_m_ContactCount_4() { return &___m_ContactCount_4; }
	inline void set_m_ContactCount_4(int32_t value)
	{
		___m_ContactCount_4 = value;
	}

	inline static int32_t get_offset_of_m_ReusedContacts_5() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_ReusedContacts_5)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_ReusedContacts_5() const { return ___m_ReusedContacts_5; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_ReusedContacts_5() { return &___m_ReusedContacts_5; }
	inline void set_m_ReusedContacts_5(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_ReusedContacts_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ReusedContacts_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_LegacyContacts_6() { return static_cast<int32_t>(offsetof(Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0, ___m_LegacyContacts_6)); }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* get_m_LegacyContacts_6() const { return ___m_LegacyContacts_6; }
	inline ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B** get_address_of_m_LegacyContacts_6() { return &___m_LegacyContacts_6; }
	inline void set_m_LegacyContacts_6(ContactPointU5BU5D_t1ACD262B1EA44CD48E2039381DE96847F203E62B* value)
	{
		___m_LegacyContacts_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_LegacyContacts_6), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_pinvoke
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
};
// Native definition for COM marshalling of UnityEngine.Collision
struct Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0_marshaled_com
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Impulse_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_RelativeVelocity_1;
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ___m_Rigidbody_2;
	Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * ___m_Collider_3;
	int32_t ___m_ContactCount_4;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_ReusedContacts_5;
	ContactPoint_tC179732A8E0014F5EFF5977ED1ADF12CF14A9017 * ___m_LegacyContacts_6;
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

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.RigidbodyConstraints
struct  RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97 
{
public:
	// System.Int32 UnityEngine.RigidbodyConstraints::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RigidbodyConstraints_tB1AC534C460083518E5C8664CE62334E3B5A0F97, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
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


// UMA.UMADataEvent
struct  UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196  : public UnityEvent_1_tB6040BFF4F07107C0EAAF4F259490C24063254D4
{
public:

public:
};


// UMA.UMADnaHumanoid
struct  UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F  : public UMADna_t68DB393FE14EBB4AC850B80873B4EBA09CAC0A7F
{
public:
	// System.Single UMA.UMADnaHumanoid::height
	float ___height_4;
	// System.Single UMA.UMADnaHumanoid::headSize
	float ___headSize_5;
	// System.Single UMA.UMADnaHumanoid::headWidth
	float ___headWidth_6;
	// System.Single UMA.UMADnaHumanoid::neckThickness
	float ___neckThickness_7;
	// System.Single UMA.UMADnaHumanoid::armLength
	float ___armLength_8;
	// System.Single UMA.UMADnaHumanoid::forearmLength
	float ___forearmLength_9;
	// System.Single UMA.UMADnaHumanoid::armWidth
	float ___armWidth_10;
	// System.Single UMA.UMADnaHumanoid::forearmWidth
	float ___forearmWidth_11;
	// System.Single UMA.UMADnaHumanoid::handsSize
	float ___handsSize_12;
	// System.Single UMA.UMADnaHumanoid::feetSize
	float ___feetSize_13;
	// System.Single UMA.UMADnaHumanoid::legSeparation
	float ___legSeparation_14;
	// System.Single UMA.UMADnaHumanoid::upperMuscle
	float ___upperMuscle_15;
	// System.Single UMA.UMADnaHumanoid::lowerMuscle
	float ___lowerMuscle_16;
	// System.Single UMA.UMADnaHumanoid::upperWeight
	float ___upperWeight_17;
	// System.Single UMA.UMADnaHumanoid::lowerWeight
	float ___lowerWeight_18;
	// System.Single UMA.UMADnaHumanoid::legsSize
	float ___legsSize_19;
	// System.Single UMA.UMADnaHumanoid::belly
	float ___belly_20;
	// System.Single UMA.UMADnaHumanoid::waist
	float ___waist_21;
	// System.Single UMA.UMADnaHumanoid::gluteusSize
	float ___gluteusSize_22;
	// System.Single UMA.UMADnaHumanoid::earsSize
	float ___earsSize_23;
	// System.Single UMA.UMADnaHumanoid::earsPosition
	float ___earsPosition_24;
	// System.Single UMA.UMADnaHumanoid::earsRotation
	float ___earsRotation_25;
	// System.Single UMA.UMADnaHumanoid::noseSize
	float ___noseSize_26;
	// System.Single UMA.UMADnaHumanoid::noseCurve
	float ___noseCurve_27;
	// System.Single UMA.UMADnaHumanoid::noseWidth
	float ___noseWidth_28;
	// System.Single UMA.UMADnaHumanoid::noseInclination
	float ___noseInclination_29;
	// System.Single UMA.UMADnaHumanoid::nosePosition
	float ___nosePosition_30;
	// System.Single UMA.UMADnaHumanoid::nosePronounced
	float ___nosePronounced_31;
	// System.Single UMA.UMADnaHumanoid::noseFlatten
	float ___noseFlatten_32;
	// System.Single UMA.UMADnaHumanoid::chinSize
	float ___chinSize_33;
	// System.Single UMA.UMADnaHumanoid::chinPronounced
	float ___chinPronounced_34;
	// System.Single UMA.UMADnaHumanoid::chinPosition
	float ___chinPosition_35;
	// System.Single UMA.UMADnaHumanoid::mandibleSize
	float ___mandibleSize_36;
	// System.Single UMA.UMADnaHumanoid::jawsSize
	float ___jawsSize_37;
	// System.Single UMA.UMADnaHumanoid::jawsPosition
	float ___jawsPosition_38;
	// System.Single UMA.UMADnaHumanoid::cheekSize
	float ___cheekSize_39;
	// System.Single UMA.UMADnaHumanoid::cheekPosition
	float ___cheekPosition_40;
	// System.Single UMA.UMADnaHumanoid::lowCheekPronounced
	float ___lowCheekPronounced_41;
	// System.Single UMA.UMADnaHumanoid::lowCheekPosition
	float ___lowCheekPosition_42;
	// System.Single UMA.UMADnaHumanoid::foreheadSize
	float ___foreheadSize_43;
	// System.Single UMA.UMADnaHumanoid::foreheadPosition
	float ___foreheadPosition_44;
	// System.Single UMA.UMADnaHumanoid::lipsSize
	float ___lipsSize_45;
	// System.Single UMA.UMADnaHumanoid::mouthSize
	float ___mouthSize_46;
	// System.Single UMA.UMADnaHumanoid::eyeRotation
	float ___eyeRotation_47;
	// System.Single UMA.UMADnaHumanoid::eyeSize
	float ___eyeSize_48;
	// System.Single UMA.UMADnaHumanoid::breastSize
	float ___breastSize_49;

public:
	inline static int32_t get_offset_of_height_4() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___height_4)); }
	inline float get_height_4() const { return ___height_4; }
	inline float* get_address_of_height_4() { return &___height_4; }
	inline void set_height_4(float value)
	{
		___height_4 = value;
	}

	inline static int32_t get_offset_of_headSize_5() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___headSize_5)); }
	inline float get_headSize_5() const { return ___headSize_5; }
	inline float* get_address_of_headSize_5() { return &___headSize_5; }
	inline void set_headSize_5(float value)
	{
		___headSize_5 = value;
	}

	inline static int32_t get_offset_of_headWidth_6() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___headWidth_6)); }
	inline float get_headWidth_6() const { return ___headWidth_6; }
	inline float* get_address_of_headWidth_6() { return &___headWidth_6; }
	inline void set_headWidth_6(float value)
	{
		___headWidth_6 = value;
	}

	inline static int32_t get_offset_of_neckThickness_7() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___neckThickness_7)); }
	inline float get_neckThickness_7() const { return ___neckThickness_7; }
	inline float* get_address_of_neckThickness_7() { return &___neckThickness_7; }
	inline void set_neckThickness_7(float value)
	{
		___neckThickness_7 = value;
	}

	inline static int32_t get_offset_of_armLength_8() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___armLength_8)); }
	inline float get_armLength_8() const { return ___armLength_8; }
	inline float* get_address_of_armLength_8() { return &___armLength_8; }
	inline void set_armLength_8(float value)
	{
		___armLength_8 = value;
	}

	inline static int32_t get_offset_of_forearmLength_9() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___forearmLength_9)); }
	inline float get_forearmLength_9() const { return ___forearmLength_9; }
	inline float* get_address_of_forearmLength_9() { return &___forearmLength_9; }
	inline void set_forearmLength_9(float value)
	{
		___forearmLength_9 = value;
	}

	inline static int32_t get_offset_of_armWidth_10() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___armWidth_10)); }
	inline float get_armWidth_10() const { return ___armWidth_10; }
	inline float* get_address_of_armWidth_10() { return &___armWidth_10; }
	inline void set_armWidth_10(float value)
	{
		___armWidth_10 = value;
	}

	inline static int32_t get_offset_of_forearmWidth_11() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___forearmWidth_11)); }
	inline float get_forearmWidth_11() const { return ___forearmWidth_11; }
	inline float* get_address_of_forearmWidth_11() { return &___forearmWidth_11; }
	inline void set_forearmWidth_11(float value)
	{
		___forearmWidth_11 = value;
	}

	inline static int32_t get_offset_of_handsSize_12() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___handsSize_12)); }
	inline float get_handsSize_12() const { return ___handsSize_12; }
	inline float* get_address_of_handsSize_12() { return &___handsSize_12; }
	inline void set_handsSize_12(float value)
	{
		___handsSize_12 = value;
	}

	inline static int32_t get_offset_of_feetSize_13() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___feetSize_13)); }
	inline float get_feetSize_13() const { return ___feetSize_13; }
	inline float* get_address_of_feetSize_13() { return &___feetSize_13; }
	inline void set_feetSize_13(float value)
	{
		___feetSize_13 = value;
	}

	inline static int32_t get_offset_of_legSeparation_14() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___legSeparation_14)); }
	inline float get_legSeparation_14() const { return ___legSeparation_14; }
	inline float* get_address_of_legSeparation_14() { return &___legSeparation_14; }
	inline void set_legSeparation_14(float value)
	{
		___legSeparation_14 = value;
	}

	inline static int32_t get_offset_of_upperMuscle_15() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___upperMuscle_15)); }
	inline float get_upperMuscle_15() const { return ___upperMuscle_15; }
	inline float* get_address_of_upperMuscle_15() { return &___upperMuscle_15; }
	inline void set_upperMuscle_15(float value)
	{
		___upperMuscle_15 = value;
	}

	inline static int32_t get_offset_of_lowerMuscle_16() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___lowerMuscle_16)); }
	inline float get_lowerMuscle_16() const { return ___lowerMuscle_16; }
	inline float* get_address_of_lowerMuscle_16() { return &___lowerMuscle_16; }
	inline void set_lowerMuscle_16(float value)
	{
		___lowerMuscle_16 = value;
	}

	inline static int32_t get_offset_of_upperWeight_17() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___upperWeight_17)); }
	inline float get_upperWeight_17() const { return ___upperWeight_17; }
	inline float* get_address_of_upperWeight_17() { return &___upperWeight_17; }
	inline void set_upperWeight_17(float value)
	{
		___upperWeight_17 = value;
	}

	inline static int32_t get_offset_of_lowerWeight_18() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___lowerWeight_18)); }
	inline float get_lowerWeight_18() const { return ___lowerWeight_18; }
	inline float* get_address_of_lowerWeight_18() { return &___lowerWeight_18; }
	inline void set_lowerWeight_18(float value)
	{
		___lowerWeight_18 = value;
	}

	inline static int32_t get_offset_of_legsSize_19() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___legsSize_19)); }
	inline float get_legsSize_19() const { return ___legsSize_19; }
	inline float* get_address_of_legsSize_19() { return &___legsSize_19; }
	inline void set_legsSize_19(float value)
	{
		___legsSize_19 = value;
	}

	inline static int32_t get_offset_of_belly_20() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___belly_20)); }
	inline float get_belly_20() const { return ___belly_20; }
	inline float* get_address_of_belly_20() { return &___belly_20; }
	inline void set_belly_20(float value)
	{
		___belly_20 = value;
	}

	inline static int32_t get_offset_of_waist_21() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___waist_21)); }
	inline float get_waist_21() const { return ___waist_21; }
	inline float* get_address_of_waist_21() { return &___waist_21; }
	inline void set_waist_21(float value)
	{
		___waist_21 = value;
	}

	inline static int32_t get_offset_of_gluteusSize_22() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___gluteusSize_22)); }
	inline float get_gluteusSize_22() const { return ___gluteusSize_22; }
	inline float* get_address_of_gluteusSize_22() { return &___gluteusSize_22; }
	inline void set_gluteusSize_22(float value)
	{
		___gluteusSize_22 = value;
	}

	inline static int32_t get_offset_of_earsSize_23() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___earsSize_23)); }
	inline float get_earsSize_23() const { return ___earsSize_23; }
	inline float* get_address_of_earsSize_23() { return &___earsSize_23; }
	inline void set_earsSize_23(float value)
	{
		___earsSize_23 = value;
	}

	inline static int32_t get_offset_of_earsPosition_24() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___earsPosition_24)); }
	inline float get_earsPosition_24() const { return ___earsPosition_24; }
	inline float* get_address_of_earsPosition_24() { return &___earsPosition_24; }
	inline void set_earsPosition_24(float value)
	{
		___earsPosition_24 = value;
	}

	inline static int32_t get_offset_of_earsRotation_25() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___earsRotation_25)); }
	inline float get_earsRotation_25() const { return ___earsRotation_25; }
	inline float* get_address_of_earsRotation_25() { return &___earsRotation_25; }
	inline void set_earsRotation_25(float value)
	{
		___earsRotation_25 = value;
	}

	inline static int32_t get_offset_of_noseSize_26() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___noseSize_26)); }
	inline float get_noseSize_26() const { return ___noseSize_26; }
	inline float* get_address_of_noseSize_26() { return &___noseSize_26; }
	inline void set_noseSize_26(float value)
	{
		___noseSize_26 = value;
	}

	inline static int32_t get_offset_of_noseCurve_27() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___noseCurve_27)); }
	inline float get_noseCurve_27() const { return ___noseCurve_27; }
	inline float* get_address_of_noseCurve_27() { return &___noseCurve_27; }
	inline void set_noseCurve_27(float value)
	{
		___noseCurve_27 = value;
	}

	inline static int32_t get_offset_of_noseWidth_28() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___noseWidth_28)); }
	inline float get_noseWidth_28() const { return ___noseWidth_28; }
	inline float* get_address_of_noseWidth_28() { return &___noseWidth_28; }
	inline void set_noseWidth_28(float value)
	{
		___noseWidth_28 = value;
	}

	inline static int32_t get_offset_of_noseInclination_29() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___noseInclination_29)); }
	inline float get_noseInclination_29() const { return ___noseInclination_29; }
	inline float* get_address_of_noseInclination_29() { return &___noseInclination_29; }
	inline void set_noseInclination_29(float value)
	{
		___noseInclination_29 = value;
	}

	inline static int32_t get_offset_of_nosePosition_30() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___nosePosition_30)); }
	inline float get_nosePosition_30() const { return ___nosePosition_30; }
	inline float* get_address_of_nosePosition_30() { return &___nosePosition_30; }
	inline void set_nosePosition_30(float value)
	{
		___nosePosition_30 = value;
	}

	inline static int32_t get_offset_of_nosePronounced_31() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___nosePronounced_31)); }
	inline float get_nosePronounced_31() const { return ___nosePronounced_31; }
	inline float* get_address_of_nosePronounced_31() { return &___nosePronounced_31; }
	inline void set_nosePronounced_31(float value)
	{
		___nosePronounced_31 = value;
	}

	inline static int32_t get_offset_of_noseFlatten_32() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___noseFlatten_32)); }
	inline float get_noseFlatten_32() const { return ___noseFlatten_32; }
	inline float* get_address_of_noseFlatten_32() { return &___noseFlatten_32; }
	inline void set_noseFlatten_32(float value)
	{
		___noseFlatten_32 = value;
	}

	inline static int32_t get_offset_of_chinSize_33() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___chinSize_33)); }
	inline float get_chinSize_33() const { return ___chinSize_33; }
	inline float* get_address_of_chinSize_33() { return &___chinSize_33; }
	inline void set_chinSize_33(float value)
	{
		___chinSize_33 = value;
	}

	inline static int32_t get_offset_of_chinPronounced_34() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___chinPronounced_34)); }
	inline float get_chinPronounced_34() const { return ___chinPronounced_34; }
	inline float* get_address_of_chinPronounced_34() { return &___chinPronounced_34; }
	inline void set_chinPronounced_34(float value)
	{
		___chinPronounced_34 = value;
	}

	inline static int32_t get_offset_of_chinPosition_35() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___chinPosition_35)); }
	inline float get_chinPosition_35() const { return ___chinPosition_35; }
	inline float* get_address_of_chinPosition_35() { return &___chinPosition_35; }
	inline void set_chinPosition_35(float value)
	{
		___chinPosition_35 = value;
	}

	inline static int32_t get_offset_of_mandibleSize_36() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___mandibleSize_36)); }
	inline float get_mandibleSize_36() const { return ___mandibleSize_36; }
	inline float* get_address_of_mandibleSize_36() { return &___mandibleSize_36; }
	inline void set_mandibleSize_36(float value)
	{
		___mandibleSize_36 = value;
	}

	inline static int32_t get_offset_of_jawsSize_37() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___jawsSize_37)); }
	inline float get_jawsSize_37() const { return ___jawsSize_37; }
	inline float* get_address_of_jawsSize_37() { return &___jawsSize_37; }
	inline void set_jawsSize_37(float value)
	{
		___jawsSize_37 = value;
	}

	inline static int32_t get_offset_of_jawsPosition_38() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___jawsPosition_38)); }
	inline float get_jawsPosition_38() const { return ___jawsPosition_38; }
	inline float* get_address_of_jawsPosition_38() { return &___jawsPosition_38; }
	inline void set_jawsPosition_38(float value)
	{
		___jawsPosition_38 = value;
	}

	inline static int32_t get_offset_of_cheekSize_39() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___cheekSize_39)); }
	inline float get_cheekSize_39() const { return ___cheekSize_39; }
	inline float* get_address_of_cheekSize_39() { return &___cheekSize_39; }
	inline void set_cheekSize_39(float value)
	{
		___cheekSize_39 = value;
	}

	inline static int32_t get_offset_of_cheekPosition_40() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___cheekPosition_40)); }
	inline float get_cheekPosition_40() const { return ___cheekPosition_40; }
	inline float* get_address_of_cheekPosition_40() { return &___cheekPosition_40; }
	inline void set_cheekPosition_40(float value)
	{
		___cheekPosition_40 = value;
	}

	inline static int32_t get_offset_of_lowCheekPronounced_41() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___lowCheekPronounced_41)); }
	inline float get_lowCheekPronounced_41() const { return ___lowCheekPronounced_41; }
	inline float* get_address_of_lowCheekPronounced_41() { return &___lowCheekPronounced_41; }
	inline void set_lowCheekPronounced_41(float value)
	{
		___lowCheekPronounced_41 = value;
	}

	inline static int32_t get_offset_of_lowCheekPosition_42() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___lowCheekPosition_42)); }
	inline float get_lowCheekPosition_42() const { return ___lowCheekPosition_42; }
	inline float* get_address_of_lowCheekPosition_42() { return &___lowCheekPosition_42; }
	inline void set_lowCheekPosition_42(float value)
	{
		___lowCheekPosition_42 = value;
	}

	inline static int32_t get_offset_of_foreheadSize_43() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___foreheadSize_43)); }
	inline float get_foreheadSize_43() const { return ___foreheadSize_43; }
	inline float* get_address_of_foreheadSize_43() { return &___foreheadSize_43; }
	inline void set_foreheadSize_43(float value)
	{
		___foreheadSize_43 = value;
	}

	inline static int32_t get_offset_of_foreheadPosition_44() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___foreheadPosition_44)); }
	inline float get_foreheadPosition_44() const { return ___foreheadPosition_44; }
	inline float* get_address_of_foreheadPosition_44() { return &___foreheadPosition_44; }
	inline void set_foreheadPosition_44(float value)
	{
		___foreheadPosition_44 = value;
	}

	inline static int32_t get_offset_of_lipsSize_45() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___lipsSize_45)); }
	inline float get_lipsSize_45() const { return ___lipsSize_45; }
	inline float* get_address_of_lipsSize_45() { return &___lipsSize_45; }
	inline void set_lipsSize_45(float value)
	{
		___lipsSize_45 = value;
	}

	inline static int32_t get_offset_of_mouthSize_46() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___mouthSize_46)); }
	inline float get_mouthSize_46() const { return ___mouthSize_46; }
	inline float* get_address_of_mouthSize_46() { return &___mouthSize_46; }
	inline void set_mouthSize_46(float value)
	{
		___mouthSize_46 = value;
	}

	inline static int32_t get_offset_of_eyeRotation_47() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___eyeRotation_47)); }
	inline float get_eyeRotation_47() const { return ___eyeRotation_47; }
	inline float* get_address_of_eyeRotation_47() { return &___eyeRotation_47; }
	inline void set_eyeRotation_47(float value)
	{
		___eyeRotation_47 = value;
	}

	inline static int32_t get_offset_of_eyeSize_48() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___eyeSize_48)); }
	inline float get_eyeSize_48() const { return ___eyeSize_48; }
	inline float* get_address_of_eyeSize_48() { return &___eyeSize_48; }
	inline void set_eyeSize_48(float value)
	{
		___eyeSize_48 = value;
	}

	inline static int32_t get_offset_of_breastSize_49() { return static_cast<int32_t>(offsetof(UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F, ___breastSize_49)); }
	inline float get_breastSize_49() const { return ___breastSize_49; }
	inline float* get_address_of_breastSize_49() { return &___breastSize_49; }
	inline void set_breastSize_49(float value)
	{
		___breastSize_49 = value;
	}
};


// UMA.PoseTools.ExpressionPlayer/GazeMode
struct  GazeMode_tE249FCB2A997C6BC031F3722C83A1495EF0C7EBA 
{
public:
	// System.Int32 UMA.PoseTools.ExpressionPlayer/GazeMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GazeMode_tE249FCB2A997C6BC031F3722C83A1495EF0C7EBA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UMA.RaceData/UMATarget
struct  UMATarget_tD3DB817DC52B2CDE7B525266C3F549165235EBF4 
{
public:
	// System.Int32 UMA.RaceData/UMATarget::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UMATarget_tD3DB817DC52B2CDE7B525266C3F549165235EBF4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
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

// UnityEngine.ScriptableObject
struct  ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
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

// System.Type
struct  Type_t  : public MemberInfo_t
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


// UnityEngine.Events.UnityAction`1<UMA.UMAData>
struct  UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Collider
struct  Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UMA.DNAConvertDelegate
struct  DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1  : public MulticastDelegate_t
{
public:

public:
};


// UMA.RaceData
struct  RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Boolean UMA.RaceData::FixupRotations
	bool ___FixupRotations_4;
	// UMA.UMARecipeBase UMA.RaceData::baseRaceRecipe
	UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35 * ___baseRaceRecipe_5;
	// System.Collections.Generic.List`1<System.String> UMA.RaceData::wardrobeSlots
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___wardrobeSlots_6;
	// UMA.UMAPackedRecipeBase/UMAPackRecipe UMA.RaceData::packedRecipe
	UMAPackRecipe_t0CAC7FA6FE47936263E8EBEB36971985ED76443C * ___packedRecipe_7;
	// UMA.UMAData/UMARecipe UMA.RaceData::unPackedRecipe
	UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * ___unPackedRecipe_8;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> UMA.RaceData::RaceDNAValues
	Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * ___RaceDNAValues_9;
	// System.Collections.Generic.List`1<UMA.OverlayColorData> UMA.RaceData::RaceColorValues
	List_1_tF13EF38A4E5EDC174BC4866BC9B5CF9580F9DD35 * ___RaceColorValues_10;
	// System.Collections.Generic.List`1<System.String> UMA.RaceData::backwardsCompatibleWith
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___backwardsCompatibleWith_11;
	// UMA.RaceData/CrossCompatibilitySettingsList UMA.RaceData::_crossCompatibilitySettings
	CrossCompatibilitySettingsList_tF1D11A46A6F989CF59E3F26CF01D2922A62CE349 * ____crossCompatibilitySettings_12;
	// UMA.RaceData/RaceThumbnails UMA.RaceData::raceThumbnails
	RaceThumbnails_tEE7AD76E4EEC2BF6EA26E64D61ADD1BF2308FDB1 * ___raceThumbnails_13;
	// System.String UMA.RaceData::raceName
	String_t* ___raceName_14;
	// System.Collections.Generic.List`1<System.String> UMA.RaceData::KeepBoneNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___KeepBoneNames_15;
	// UMA.DnaConverterBehaviour[] UMA.RaceData::_dnaConverterListLegacy
	DnaConverterBehaviourU5BU5D_t72E1696A59110668A1B279529CFEDD250E8F5D30* ____dnaConverterListLegacy_16;
	// System.Collections.Generic.Dictionary`2<System.Type,UMA.DNAConvertDelegate> UMA.RaceData::raceDictionary
	Dictionary_2_tCE17D359830A1305E94351EF4D2681529A1BB22C * ___raceDictionary_17;
	// UMA.DNAConverterList UMA.RaceData::_dnaConverterList
	DNAConverterList_t66CB0C5C4C19C39E9FE66C5A01FB7BDA89962511 * ____dnaConverterList_18;
	// UMA.UmaTPose UMA.RaceData::TPose
	UmaTPose_t14C98D5B3053667973FFD791510A8865E1D455DC * ___TPose_19;
	// UMA.RaceData/UMATarget UMA.RaceData::umaTarget
	int32_t ___umaTarget_20;
	// System.String UMA.RaceData::genericRootMotionTransformName
	String_t* ___genericRootMotionTransformName_21;
	// UMA.PoseTools.UMAExpressionSet UMA.RaceData::expressionSet
	UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * ___expressionSet_22;
	// UMA.DNARangeAsset[] UMA.RaceData::dnaRanges
	DNARangeAssetU5BU5D_tB8ADF4F0FA7CB00B573B50A4E3B2F5E086A0A036* ___dnaRanges_23;
	// System.Single UMA.RaceData::raceHeight
	float ___raceHeight_24;
	// System.Single UMA.RaceData::raceRadius
	float ___raceRadius_25;
	// System.Single UMA.RaceData::raceMass
	float ___raceMass_26;

public:
	inline static int32_t get_offset_of_FixupRotations_4() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___FixupRotations_4)); }
	inline bool get_FixupRotations_4() const { return ___FixupRotations_4; }
	inline bool* get_address_of_FixupRotations_4() { return &___FixupRotations_4; }
	inline void set_FixupRotations_4(bool value)
	{
		___FixupRotations_4 = value;
	}

	inline static int32_t get_offset_of_baseRaceRecipe_5() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___baseRaceRecipe_5)); }
	inline UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35 * get_baseRaceRecipe_5() const { return ___baseRaceRecipe_5; }
	inline UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35 ** get_address_of_baseRaceRecipe_5() { return &___baseRaceRecipe_5; }
	inline void set_baseRaceRecipe_5(UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35 * value)
	{
		___baseRaceRecipe_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___baseRaceRecipe_5), (void*)value);
	}

	inline static int32_t get_offset_of_wardrobeSlots_6() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___wardrobeSlots_6)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_wardrobeSlots_6() const { return ___wardrobeSlots_6; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_wardrobeSlots_6() { return &___wardrobeSlots_6; }
	inline void set_wardrobeSlots_6(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___wardrobeSlots_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wardrobeSlots_6), (void*)value);
	}

	inline static int32_t get_offset_of_packedRecipe_7() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___packedRecipe_7)); }
	inline UMAPackRecipe_t0CAC7FA6FE47936263E8EBEB36971985ED76443C * get_packedRecipe_7() const { return ___packedRecipe_7; }
	inline UMAPackRecipe_t0CAC7FA6FE47936263E8EBEB36971985ED76443C ** get_address_of_packedRecipe_7() { return &___packedRecipe_7; }
	inline void set_packedRecipe_7(UMAPackRecipe_t0CAC7FA6FE47936263E8EBEB36971985ED76443C * value)
	{
		___packedRecipe_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___packedRecipe_7), (void*)value);
	}

	inline static int32_t get_offset_of_unPackedRecipe_8() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___unPackedRecipe_8)); }
	inline UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * get_unPackedRecipe_8() const { return ___unPackedRecipe_8; }
	inline UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A ** get_address_of_unPackedRecipe_8() { return &___unPackedRecipe_8; }
	inline void set_unPackedRecipe_8(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * value)
	{
		___unPackedRecipe_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unPackedRecipe_8), (void*)value);
	}

	inline static int32_t get_offset_of_RaceDNAValues_9() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___RaceDNAValues_9)); }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * get_RaceDNAValues_9() const { return ___RaceDNAValues_9; }
	inline Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 ** get_address_of_RaceDNAValues_9() { return &___RaceDNAValues_9; }
	inline void set_RaceDNAValues_9(Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423 * value)
	{
		___RaceDNAValues_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaceDNAValues_9), (void*)value);
	}

	inline static int32_t get_offset_of_RaceColorValues_10() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___RaceColorValues_10)); }
	inline List_1_tF13EF38A4E5EDC174BC4866BC9B5CF9580F9DD35 * get_RaceColorValues_10() const { return ___RaceColorValues_10; }
	inline List_1_tF13EF38A4E5EDC174BC4866BC9B5CF9580F9DD35 ** get_address_of_RaceColorValues_10() { return &___RaceColorValues_10; }
	inline void set_RaceColorValues_10(List_1_tF13EF38A4E5EDC174BC4866BC9B5CF9580F9DD35 * value)
	{
		___RaceColorValues_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaceColorValues_10), (void*)value);
	}

	inline static int32_t get_offset_of_backwardsCompatibleWith_11() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___backwardsCompatibleWith_11)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_backwardsCompatibleWith_11() const { return ___backwardsCompatibleWith_11; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_backwardsCompatibleWith_11() { return &___backwardsCompatibleWith_11; }
	inline void set_backwardsCompatibleWith_11(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___backwardsCompatibleWith_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backwardsCompatibleWith_11), (void*)value);
	}

	inline static int32_t get_offset_of__crossCompatibilitySettings_12() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ____crossCompatibilitySettings_12)); }
	inline CrossCompatibilitySettingsList_tF1D11A46A6F989CF59E3F26CF01D2922A62CE349 * get__crossCompatibilitySettings_12() const { return ____crossCompatibilitySettings_12; }
	inline CrossCompatibilitySettingsList_tF1D11A46A6F989CF59E3F26CF01D2922A62CE349 ** get_address_of__crossCompatibilitySettings_12() { return &____crossCompatibilitySettings_12; }
	inline void set__crossCompatibilitySettings_12(CrossCompatibilitySettingsList_tF1D11A46A6F989CF59E3F26CF01D2922A62CE349 * value)
	{
		____crossCompatibilitySettings_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____crossCompatibilitySettings_12), (void*)value);
	}

	inline static int32_t get_offset_of_raceThumbnails_13() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___raceThumbnails_13)); }
	inline RaceThumbnails_tEE7AD76E4EEC2BF6EA26E64D61ADD1BF2308FDB1 * get_raceThumbnails_13() const { return ___raceThumbnails_13; }
	inline RaceThumbnails_tEE7AD76E4EEC2BF6EA26E64D61ADD1BF2308FDB1 ** get_address_of_raceThumbnails_13() { return &___raceThumbnails_13; }
	inline void set_raceThumbnails_13(RaceThumbnails_tEE7AD76E4EEC2BF6EA26E64D61ADD1BF2308FDB1 * value)
	{
		___raceThumbnails_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raceThumbnails_13), (void*)value);
	}

	inline static int32_t get_offset_of_raceName_14() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___raceName_14)); }
	inline String_t* get_raceName_14() const { return ___raceName_14; }
	inline String_t** get_address_of_raceName_14() { return &___raceName_14; }
	inline void set_raceName_14(String_t* value)
	{
		___raceName_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raceName_14), (void*)value);
	}

	inline static int32_t get_offset_of_KeepBoneNames_15() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___KeepBoneNames_15)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_KeepBoneNames_15() const { return ___KeepBoneNames_15; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_KeepBoneNames_15() { return &___KeepBoneNames_15; }
	inline void set_KeepBoneNames_15(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___KeepBoneNames_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeepBoneNames_15), (void*)value);
	}

	inline static int32_t get_offset_of__dnaConverterListLegacy_16() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ____dnaConverterListLegacy_16)); }
	inline DnaConverterBehaviourU5BU5D_t72E1696A59110668A1B279529CFEDD250E8F5D30* get__dnaConverterListLegacy_16() const { return ____dnaConverterListLegacy_16; }
	inline DnaConverterBehaviourU5BU5D_t72E1696A59110668A1B279529CFEDD250E8F5D30** get_address_of__dnaConverterListLegacy_16() { return &____dnaConverterListLegacy_16; }
	inline void set__dnaConverterListLegacy_16(DnaConverterBehaviourU5BU5D_t72E1696A59110668A1B279529CFEDD250E8F5D30* value)
	{
		____dnaConverterListLegacy_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dnaConverterListLegacy_16), (void*)value);
	}

	inline static int32_t get_offset_of_raceDictionary_17() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___raceDictionary_17)); }
	inline Dictionary_2_tCE17D359830A1305E94351EF4D2681529A1BB22C * get_raceDictionary_17() const { return ___raceDictionary_17; }
	inline Dictionary_2_tCE17D359830A1305E94351EF4D2681529A1BB22C ** get_address_of_raceDictionary_17() { return &___raceDictionary_17; }
	inline void set_raceDictionary_17(Dictionary_2_tCE17D359830A1305E94351EF4D2681529A1BB22C * value)
	{
		___raceDictionary_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raceDictionary_17), (void*)value);
	}

	inline static int32_t get_offset_of__dnaConverterList_18() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ____dnaConverterList_18)); }
	inline DNAConverterList_t66CB0C5C4C19C39E9FE66C5A01FB7BDA89962511 * get__dnaConverterList_18() const { return ____dnaConverterList_18; }
	inline DNAConverterList_t66CB0C5C4C19C39E9FE66C5A01FB7BDA89962511 ** get_address_of__dnaConverterList_18() { return &____dnaConverterList_18; }
	inline void set__dnaConverterList_18(DNAConverterList_t66CB0C5C4C19C39E9FE66C5A01FB7BDA89962511 * value)
	{
		____dnaConverterList_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dnaConverterList_18), (void*)value);
	}

	inline static int32_t get_offset_of_TPose_19() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___TPose_19)); }
	inline UmaTPose_t14C98D5B3053667973FFD791510A8865E1D455DC * get_TPose_19() const { return ___TPose_19; }
	inline UmaTPose_t14C98D5B3053667973FFD791510A8865E1D455DC ** get_address_of_TPose_19() { return &___TPose_19; }
	inline void set_TPose_19(UmaTPose_t14C98D5B3053667973FFD791510A8865E1D455DC * value)
	{
		___TPose_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TPose_19), (void*)value);
	}

	inline static int32_t get_offset_of_umaTarget_20() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___umaTarget_20)); }
	inline int32_t get_umaTarget_20() const { return ___umaTarget_20; }
	inline int32_t* get_address_of_umaTarget_20() { return &___umaTarget_20; }
	inline void set_umaTarget_20(int32_t value)
	{
		___umaTarget_20 = value;
	}

	inline static int32_t get_offset_of_genericRootMotionTransformName_21() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___genericRootMotionTransformName_21)); }
	inline String_t* get_genericRootMotionTransformName_21() const { return ___genericRootMotionTransformName_21; }
	inline String_t** get_address_of_genericRootMotionTransformName_21() { return &___genericRootMotionTransformName_21; }
	inline void set_genericRootMotionTransformName_21(String_t* value)
	{
		___genericRootMotionTransformName_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___genericRootMotionTransformName_21), (void*)value);
	}

	inline static int32_t get_offset_of_expressionSet_22() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___expressionSet_22)); }
	inline UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * get_expressionSet_22() const { return ___expressionSet_22; }
	inline UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 ** get_address_of_expressionSet_22() { return &___expressionSet_22; }
	inline void set_expressionSet_22(UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * value)
	{
		___expressionSet_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expressionSet_22), (void*)value);
	}

	inline static int32_t get_offset_of_dnaRanges_23() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___dnaRanges_23)); }
	inline DNARangeAssetU5BU5D_tB8ADF4F0FA7CB00B573B50A4E3B2F5E086A0A036* get_dnaRanges_23() const { return ___dnaRanges_23; }
	inline DNARangeAssetU5BU5D_tB8ADF4F0FA7CB00B573B50A4E3B2F5E086A0A036** get_address_of_dnaRanges_23() { return &___dnaRanges_23; }
	inline void set_dnaRanges_23(DNARangeAssetU5BU5D_tB8ADF4F0FA7CB00B573B50A4E3B2F5E086A0A036* value)
	{
		___dnaRanges_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dnaRanges_23), (void*)value);
	}

	inline static int32_t get_offset_of_raceHeight_24() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___raceHeight_24)); }
	inline float get_raceHeight_24() const { return ___raceHeight_24; }
	inline float* get_address_of_raceHeight_24() { return &___raceHeight_24; }
	inline void set_raceHeight_24(float value)
	{
		___raceHeight_24 = value;
	}

	inline static int32_t get_offset_of_raceRadius_25() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___raceRadius_25)); }
	inline float get_raceRadius_25() const { return ___raceRadius_25; }
	inline float* get_address_of_raceRadius_25() { return &___raceRadius_25; }
	inline void set_raceRadius_25(float value)
	{
		___raceRadius_25 = value;
	}

	inline static int32_t get_offset_of_raceMass_26() { return static_cast<int32_t>(offsetof(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F, ___raceMass_26)); }
	inline float get_raceMass_26() const { return ___raceMass_26; }
	inline float* get_address_of_raceMass_26() { return &___raceMass_26; }
	inline void set_raceMass_26(float value)
	{
		___raceMass_26 = value;
	}
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody
struct  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UMA.PoseTools.UMAExpressionSet
struct  UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UMA.PoseTools.UMAExpressionSet/PosePair[] UMA.PoseTools.UMAExpressionSet::posePairs
	PosePairU5BU5D_t75DD5142CCC37AADE0EE86A22F055D1259351CB8* ___posePairs_4;
	// System.Int32[] UMA.PoseTools.UMAExpressionSet::boneHashes
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___boneHashes_5;

public:
	inline static int32_t get_offset_of_posePairs_4() { return static_cast<int32_t>(offsetof(UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94, ___posePairs_4)); }
	inline PosePairU5BU5D_t75DD5142CCC37AADE0EE86A22F055D1259351CB8* get_posePairs_4() const { return ___posePairs_4; }
	inline PosePairU5BU5D_t75DD5142CCC37AADE0EE86A22F055D1259351CB8** get_address_of_posePairs_4() { return &___posePairs_4; }
	inline void set_posePairs_4(PosePairU5BU5D_t75DD5142CCC37AADE0EE86A22F055D1259351CB8* value)
	{
		___posePairs_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___posePairs_4), (void*)value);
	}

	inline static int32_t get_offset_of_boneHashes_5() { return static_cast<int32_t>(offsetof(UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94, ___boneHashes_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_boneHashes_5() const { return ___boneHashes_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_boneHashes_5() { return &___boneHashes_5; }
	inline void set_boneHashes_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___boneHashes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boneHashes_5), (void*)value);
	}
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.BoxCollider
struct  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.CapsuleCollider
struct  CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635  : public Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SkinnedMeshRenderer
struct  SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// UMA.CapsuleColliderSlotScript
struct  CapsuleColliderSlotScript_t92F670AAA36FB908BDB3DC7A959E0C553462C7DD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UMA.DnaConverterBehaviour
struct  DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Type UMA.DnaConverterBehaviour::_dnaType
	Type_t * ____dnaType_4;
	// System.String UMA.DnaConverterBehaviour::_displayValue
	String_t* ____displayValue_5;
	// System.Int32 UMA.DnaConverterBehaviour::dnaTypeHash
	int32_t ___dnaTypeHash_6;
	// UMA.DNAConvertDelegate UMA.DnaConverterBehaviour::_preApplyDnaAction
	DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * ____preApplyDnaAction_7;
	// UMA.DNAConvertDelegate UMA.DnaConverterBehaviour::_applyDnaAction
	DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * ____applyDnaAction_8;

public:
	inline static int32_t get_offset_of__dnaType_4() { return static_cast<int32_t>(offsetof(DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6, ____dnaType_4)); }
	inline Type_t * get__dnaType_4() const { return ____dnaType_4; }
	inline Type_t ** get_address_of__dnaType_4() { return &____dnaType_4; }
	inline void set__dnaType_4(Type_t * value)
	{
		____dnaType_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dnaType_4), (void*)value);
	}

	inline static int32_t get_offset_of__displayValue_5() { return static_cast<int32_t>(offsetof(DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6, ____displayValue_5)); }
	inline String_t* get__displayValue_5() const { return ____displayValue_5; }
	inline String_t** get_address_of__displayValue_5() { return &____displayValue_5; }
	inline void set__displayValue_5(String_t* value)
	{
		____displayValue_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____displayValue_5), (void*)value);
	}

	inline static int32_t get_offset_of_dnaTypeHash_6() { return static_cast<int32_t>(offsetof(DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6, ___dnaTypeHash_6)); }
	inline int32_t get_dnaTypeHash_6() const { return ___dnaTypeHash_6; }
	inline int32_t* get_address_of_dnaTypeHash_6() { return &___dnaTypeHash_6; }
	inline void set_dnaTypeHash_6(int32_t value)
	{
		___dnaTypeHash_6 = value;
	}

	inline static int32_t get_offset_of__preApplyDnaAction_7() { return static_cast<int32_t>(offsetof(DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6, ____preApplyDnaAction_7)); }
	inline DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * get__preApplyDnaAction_7() const { return ____preApplyDnaAction_7; }
	inline DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 ** get_address_of__preApplyDnaAction_7() { return &____preApplyDnaAction_7; }
	inline void set__preApplyDnaAction_7(DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * value)
	{
		____preApplyDnaAction_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____preApplyDnaAction_7), (void*)value);
	}

	inline static int32_t get_offset_of__applyDnaAction_8() { return static_cast<int32_t>(offsetof(DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6, ____applyDnaAction_8)); }
	inline DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * get__applyDnaAction_8() const { return ____applyDnaAction_8; }
	inline DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 ** get_address_of__applyDnaAction_8() { return &____applyDnaAction_8; }
	inline void set__applyDnaAction_8(DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * value)
	{
		____applyDnaAction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____applyDnaAction_8), (void*)value);
	}
};


// UMA.PoseTools.ExpressionPlayer
struct  ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Boolean UMA.PoseTools.ExpressionPlayer::enableBlinking
	bool ___enableBlinking_4;
	// System.Single UMA.PoseTools.ExpressionPlayer::blinkDuration
	float ___blinkDuration_5;
	// System.Single UMA.PoseTools.ExpressionPlayer::minBlinkDelay
	float ___minBlinkDelay_6;
	// System.Single UMA.PoseTools.ExpressionPlayer::maxBlinkDelay
	float ___maxBlinkDelay_7;
	// System.Single UMA.PoseTools.ExpressionPlayer::blinkDelay
	float ___blinkDelay_8;
	// System.Boolean UMA.PoseTools.ExpressionPlayer::enableSaccades
	bool ___enableSaccades_9;
	// System.Single UMA.PoseTools.ExpressionPlayer::saccadeDelay
	float ___saccadeDelay_10;
	// System.Single UMA.PoseTools.ExpressionPlayer::saccadeDuration
	float ___saccadeDuration_11;
	// System.Single UMA.PoseTools.ExpressionPlayer::saccadeProgress
	float ___saccadeProgress_12;
	// UnityEngine.Vector2 UMA.PoseTools.ExpressionPlayer::saccadeTarget
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___saccadeTarget_13;
	// UnityEngine.Vector2 UMA.PoseTools.ExpressionPlayer::saccadeTargetPrev
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___saccadeTargetPrev_14;
	// UnityEngine.Vector3 UMA.PoseTools.ExpressionPlayer::gazeTarget
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___gazeTarget_15;
	// System.Single UMA.PoseTools.ExpressionPlayer::gazeWeight
	float ___gazeWeight_16;
	// UMA.PoseTools.ExpressionPlayer/GazeMode UMA.PoseTools.ExpressionPlayer::gazeMode
	int32_t ___gazeMode_17;
	// System.Boolean UMA.PoseTools.ExpressionPlayer::overrideMecanimEyes
	bool ___overrideMecanimEyes_18;
	// System.Boolean UMA.PoseTools.ExpressionPlayer::overrideMecanimJaw
	bool ___overrideMecanimJaw_19;
	// System.Boolean UMA.PoseTools.ExpressionPlayer::overrideMecanimNeck
	bool ___overrideMecanimNeck_20;
	// System.Boolean UMA.PoseTools.ExpressionPlayer::overrideMecanimHead
	bool ___overrideMecanimHead_21;
	// System.Boolean UMA.PoseTools.ExpressionPlayer::overrideMecanimHands
	bool ___overrideMecanimHands_22;
	// System.Collections.Generic.List`1<UMA.PoseTools.ExpressionPlayer/Expression> UMA.PoseTools.ExpressionPlayer::Expressions
	List_1_tB003A2F8E21D2D238360FD0A214D00FD4B70965B * ___Expressions_23;
	// System.Single UMA.PoseTools.ExpressionPlayer::neckUp_Down
	float ___neckUp_Down_27;
	// System.Single UMA.PoseTools.ExpressionPlayer::neckLeft_Right
	float ___neckLeft_Right_28;
	// System.Single UMA.PoseTools.ExpressionPlayer::neckTiltLeft_Right
	float ___neckTiltLeft_Right_29;
	// System.Single UMA.PoseTools.ExpressionPlayer::headUp_Down
	float ___headUp_Down_30;
	// System.Single UMA.PoseTools.ExpressionPlayer::headLeft_Right
	float ___headLeft_Right_31;
	// System.Single UMA.PoseTools.ExpressionPlayer::headTiltLeft_Right
	float ___headTiltLeft_Right_32;
	// System.Single UMA.PoseTools.ExpressionPlayer::jawOpen_Close
	float ___jawOpen_Close_33;
	// System.Single UMA.PoseTools.ExpressionPlayer::jawForward_Back
	float ___jawForward_Back_34;
	// System.Single UMA.PoseTools.ExpressionPlayer::jawLeft_Right
	float ___jawLeft_Right_35;
	// System.Single UMA.PoseTools.ExpressionPlayer::mouthLeft_Right
	float ___mouthLeft_Right_36;
	// System.Single UMA.PoseTools.ExpressionPlayer::mouthUp_Down
	float ___mouthUp_Down_37;
	// System.Single UMA.PoseTools.ExpressionPlayer::mouthNarrow_Pucker
	float ___mouthNarrow_Pucker_38;
	// System.Single UMA.PoseTools.ExpressionPlayer::tongueOut
	float ___tongueOut_39;
	// System.Single UMA.PoseTools.ExpressionPlayer::tongueCurl
	float ___tongueCurl_40;
	// System.Single UMA.PoseTools.ExpressionPlayer::tongueUp_Down
	float ___tongueUp_Down_41;
	// System.Single UMA.PoseTools.ExpressionPlayer::tongueLeft_Right
	float ___tongueLeft_Right_42;
	// System.Single UMA.PoseTools.ExpressionPlayer::tongueWide_Narrow
	float ___tongueWide_Narrow_43;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftMouthSmile_Frown
	float ___leftMouthSmile_Frown_44;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightMouthSmile_Frown
	float ___rightMouthSmile_Frown_45;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftLowerLipUp_Down
	float ___leftLowerLipUp_Down_46;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightLowerLipUp_Down
	float ___rightLowerLipUp_Down_47;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftUpperLipUp_Down
	float ___leftUpperLipUp_Down_48;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightUpperLipUp_Down
	float ___rightUpperLipUp_Down_49;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftCheekPuff_Squint
	float ___leftCheekPuff_Squint_50;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightCheekPuff_Squint
	float ___rightCheekPuff_Squint_51;
	// System.Single UMA.PoseTools.ExpressionPlayer::noseSneer
	float ___noseSneer_52;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftEyeOpen_Close
	float ___leftEyeOpen_Close_53;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightEyeOpen_Close
	float ___rightEyeOpen_Close_54;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftEyeUp_Down
	float ___leftEyeUp_Down_55;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightEyeUp_Down
	float ___rightEyeUp_Down_56;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftEyeIn_Out
	float ___leftEyeIn_Out_57;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightEyeIn_Out
	float ___rightEyeIn_Out_58;
	// System.Single UMA.PoseTools.ExpressionPlayer::browsIn
	float ___browsIn_59;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftBrowUp_Down
	float ___leftBrowUp_Down_60;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightBrowUp_Down
	float ___rightBrowUp_Down_61;
	// System.Single UMA.PoseTools.ExpressionPlayer::midBrowUp_Down
	float ___midBrowUp_Down_62;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftGrasp
	float ___leftGrasp_63;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightGrasp
	float ___rightGrasp_64;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftPeace
	float ___leftPeace_65;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightPeace
	float ___rightPeace_66;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftRude
	float ___leftRude_67;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightRude
	float ___rightRude_68;
	// System.Single UMA.PoseTools.ExpressionPlayer::leftPoint
	float ___leftPoint_69;
	// System.Single UMA.PoseTools.ExpressionPlayer::rightPoint
	float ___rightPoint_70;
	// System.Single[] UMA.PoseTools.ExpressionPlayer::valueArray
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___valueArray_71;

public:
	inline static int32_t get_offset_of_enableBlinking_4() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___enableBlinking_4)); }
	inline bool get_enableBlinking_4() const { return ___enableBlinking_4; }
	inline bool* get_address_of_enableBlinking_4() { return &___enableBlinking_4; }
	inline void set_enableBlinking_4(bool value)
	{
		___enableBlinking_4 = value;
	}

	inline static int32_t get_offset_of_blinkDuration_5() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___blinkDuration_5)); }
	inline float get_blinkDuration_5() const { return ___blinkDuration_5; }
	inline float* get_address_of_blinkDuration_5() { return &___blinkDuration_5; }
	inline void set_blinkDuration_5(float value)
	{
		___blinkDuration_5 = value;
	}

	inline static int32_t get_offset_of_minBlinkDelay_6() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___minBlinkDelay_6)); }
	inline float get_minBlinkDelay_6() const { return ___minBlinkDelay_6; }
	inline float* get_address_of_minBlinkDelay_6() { return &___minBlinkDelay_6; }
	inline void set_minBlinkDelay_6(float value)
	{
		___minBlinkDelay_6 = value;
	}

	inline static int32_t get_offset_of_maxBlinkDelay_7() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___maxBlinkDelay_7)); }
	inline float get_maxBlinkDelay_7() const { return ___maxBlinkDelay_7; }
	inline float* get_address_of_maxBlinkDelay_7() { return &___maxBlinkDelay_7; }
	inline void set_maxBlinkDelay_7(float value)
	{
		___maxBlinkDelay_7 = value;
	}

	inline static int32_t get_offset_of_blinkDelay_8() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___blinkDelay_8)); }
	inline float get_blinkDelay_8() const { return ___blinkDelay_8; }
	inline float* get_address_of_blinkDelay_8() { return &___blinkDelay_8; }
	inline void set_blinkDelay_8(float value)
	{
		___blinkDelay_8 = value;
	}

	inline static int32_t get_offset_of_enableSaccades_9() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___enableSaccades_9)); }
	inline bool get_enableSaccades_9() const { return ___enableSaccades_9; }
	inline bool* get_address_of_enableSaccades_9() { return &___enableSaccades_9; }
	inline void set_enableSaccades_9(bool value)
	{
		___enableSaccades_9 = value;
	}

	inline static int32_t get_offset_of_saccadeDelay_10() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___saccadeDelay_10)); }
	inline float get_saccadeDelay_10() const { return ___saccadeDelay_10; }
	inline float* get_address_of_saccadeDelay_10() { return &___saccadeDelay_10; }
	inline void set_saccadeDelay_10(float value)
	{
		___saccadeDelay_10 = value;
	}

	inline static int32_t get_offset_of_saccadeDuration_11() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___saccadeDuration_11)); }
	inline float get_saccadeDuration_11() const { return ___saccadeDuration_11; }
	inline float* get_address_of_saccadeDuration_11() { return &___saccadeDuration_11; }
	inline void set_saccadeDuration_11(float value)
	{
		___saccadeDuration_11 = value;
	}

	inline static int32_t get_offset_of_saccadeProgress_12() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___saccadeProgress_12)); }
	inline float get_saccadeProgress_12() const { return ___saccadeProgress_12; }
	inline float* get_address_of_saccadeProgress_12() { return &___saccadeProgress_12; }
	inline void set_saccadeProgress_12(float value)
	{
		___saccadeProgress_12 = value;
	}

	inline static int32_t get_offset_of_saccadeTarget_13() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___saccadeTarget_13)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_saccadeTarget_13() const { return ___saccadeTarget_13; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_saccadeTarget_13() { return &___saccadeTarget_13; }
	inline void set_saccadeTarget_13(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___saccadeTarget_13 = value;
	}

	inline static int32_t get_offset_of_saccadeTargetPrev_14() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___saccadeTargetPrev_14)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_saccadeTargetPrev_14() const { return ___saccadeTargetPrev_14; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_saccadeTargetPrev_14() { return &___saccadeTargetPrev_14; }
	inline void set_saccadeTargetPrev_14(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___saccadeTargetPrev_14 = value;
	}

	inline static int32_t get_offset_of_gazeTarget_15() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___gazeTarget_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_gazeTarget_15() const { return ___gazeTarget_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_gazeTarget_15() { return &___gazeTarget_15; }
	inline void set_gazeTarget_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___gazeTarget_15 = value;
	}

	inline static int32_t get_offset_of_gazeWeight_16() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___gazeWeight_16)); }
	inline float get_gazeWeight_16() const { return ___gazeWeight_16; }
	inline float* get_address_of_gazeWeight_16() { return &___gazeWeight_16; }
	inline void set_gazeWeight_16(float value)
	{
		___gazeWeight_16 = value;
	}

	inline static int32_t get_offset_of_gazeMode_17() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___gazeMode_17)); }
	inline int32_t get_gazeMode_17() const { return ___gazeMode_17; }
	inline int32_t* get_address_of_gazeMode_17() { return &___gazeMode_17; }
	inline void set_gazeMode_17(int32_t value)
	{
		___gazeMode_17 = value;
	}

	inline static int32_t get_offset_of_overrideMecanimEyes_18() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___overrideMecanimEyes_18)); }
	inline bool get_overrideMecanimEyes_18() const { return ___overrideMecanimEyes_18; }
	inline bool* get_address_of_overrideMecanimEyes_18() { return &___overrideMecanimEyes_18; }
	inline void set_overrideMecanimEyes_18(bool value)
	{
		___overrideMecanimEyes_18 = value;
	}

	inline static int32_t get_offset_of_overrideMecanimJaw_19() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___overrideMecanimJaw_19)); }
	inline bool get_overrideMecanimJaw_19() const { return ___overrideMecanimJaw_19; }
	inline bool* get_address_of_overrideMecanimJaw_19() { return &___overrideMecanimJaw_19; }
	inline void set_overrideMecanimJaw_19(bool value)
	{
		___overrideMecanimJaw_19 = value;
	}

	inline static int32_t get_offset_of_overrideMecanimNeck_20() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___overrideMecanimNeck_20)); }
	inline bool get_overrideMecanimNeck_20() const { return ___overrideMecanimNeck_20; }
	inline bool* get_address_of_overrideMecanimNeck_20() { return &___overrideMecanimNeck_20; }
	inline void set_overrideMecanimNeck_20(bool value)
	{
		___overrideMecanimNeck_20 = value;
	}

	inline static int32_t get_offset_of_overrideMecanimHead_21() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___overrideMecanimHead_21)); }
	inline bool get_overrideMecanimHead_21() const { return ___overrideMecanimHead_21; }
	inline bool* get_address_of_overrideMecanimHead_21() { return &___overrideMecanimHead_21; }
	inline void set_overrideMecanimHead_21(bool value)
	{
		___overrideMecanimHead_21 = value;
	}

	inline static int32_t get_offset_of_overrideMecanimHands_22() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___overrideMecanimHands_22)); }
	inline bool get_overrideMecanimHands_22() const { return ___overrideMecanimHands_22; }
	inline bool* get_address_of_overrideMecanimHands_22() { return &___overrideMecanimHands_22; }
	inline void set_overrideMecanimHands_22(bool value)
	{
		___overrideMecanimHands_22 = value;
	}

	inline static int32_t get_offset_of_Expressions_23() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___Expressions_23)); }
	inline List_1_tB003A2F8E21D2D238360FD0A214D00FD4B70965B * get_Expressions_23() const { return ___Expressions_23; }
	inline List_1_tB003A2F8E21D2D238360FD0A214D00FD4B70965B ** get_address_of_Expressions_23() { return &___Expressions_23; }
	inline void set_Expressions_23(List_1_tB003A2F8E21D2D238360FD0A214D00FD4B70965B * value)
	{
		___Expressions_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expressions_23), (void*)value);
	}

	inline static int32_t get_offset_of_neckUp_Down_27() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___neckUp_Down_27)); }
	inline float get_neckUp_Down_27() const { return ___neckUp_Down_27; }
	inline float* get_address_of_neckUp_Down_27() { return &___neckUp_Down_27; }
	inline void set_neckUp_Down_27(float value)
	{
		___neckUp_Down_27 = value;
	}

	inline static int32_t get_offset_of_neckLeft_Right_28() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___neckLeft_Right_28)); }
	inline float get_neckLeft_Right_28() const { return ___neckLeft_Right_28; }
	inline float* get_address_of_neckLeft_Right_28() { return &___neckLeft_Right_28; }
	inline void set_neckLeft_Right_28(float value)
	{
		___neckLeft_Right_28 = value;
	}

	inline static int32_t get_offset_of_neckTiltLeft_Right_29() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___neckTiltLeft_Right_29)); }
	inline float get_neckTiltLeft_Right_29() const { return ___neckTiltLeft_Right_29; }
	inline float* get_address_of_neckTiltLeft_Right_29() { return &___neckTiltLeft_Right_29; }
	inline void set_neckTiltLeft_Right_29(float value)
	{
		___neckTiltLeft_Right_29 = value;
	}

	inline static int32_t get_offset_of_headUp_Down_30() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___headUp_Down_30)); }
	inline float get_headUp_Down_30() const { return ___headUp_Down_30; }
	inline float* get_address_of_headUp_Down_30() { return &___headUp_Down_30; }
	inline void set_headUp_Down_30(float value)
	{
		___headUp_Down_30 = value;
	}

	inline static int32_t get_offset_of_headLeft_Right_31() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___headLeft_Right_31)); }
	inline float get_headLeft_Right_31() const { return ___headLeft_Right_31; }
	inline float* get_address_of_headLeft_Right_31() { return &___headLeft_Right_31; }
	inline void set_headLeft_Right_31(float value)
	{
		___headLeft_Right_31 = value;
	}

	inline static int32_t get_offset_of_headTiltLeft_Right_32() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___headTiltLeft_Right_32)); }
	inline float get_headTiltLeft_Right_32() const { return ___headTiltLeft_Right_32; }
	inline float* get_address_of_headTiltLeft_Right_32() { return &___headTiltLeft_Right_32; }
	inline void set_headTiltLeft_Right_32(float value)
	{
		___headTiltLeft_Right_32 = value;
	}

	inline static int32_t get_offset_of_jawOpen_Close_33() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___jawOpen_Close_33)); }
	inline float get_jawOpen_Close_33() const { return ___jawOpen_Close_33; }
	inline float* get_address_of_jawOpen_Close_33() { return &___jawOpen_Close_33; }
	inline void set_jawOpen_Close_33(float value)
	{
		___jawOpen_Close_33 = value;
	}

	inline static int32_t get_offset_of_jawForward_Back_34() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___jawForward_Back_34)); }
	inline float get_jawForward_Back_34() const { return ___jawForward_Back_34; }
	inline float* get_address_of_jawForward_Back_34() { return &___jawForward_Back_34; }
	inline void set_jawForward_Back_34(float value)
	{
		___jawForward_Back_34 = value;
	}

	inline static int32_t get_offset_of_jawLeft_Right_35() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___jawLeft_Right_35)); }
	inline float get_jawLeft_Right_35() const { return ___jawLeft_Right_35; }
	inline float* get_address_of_jawLeft_Right_35() { return &___jawLeft_Right_35; }
	inline void set_jawLeft_Right_35(float value)
	{
		___jawLeft_Right_35 = value;
	}

	inline static int32_t get_offset_of_mouthLeft_Right_36() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___mouthLeft_Right_36)); }
	inline float get_mouthLeft_Right_36() const { return ___mouthLeft_Right_36; }
	inline float* get_address_of_mouthLeft_Right_36() { return &___mouthLeft_Right_36; }
	inline void set_mouthLeft_Right_36(float value)
	{
		___mouthLeft_Right_36 = value;
	}

	inline static int32_t get_offset_of_mouthUp_Down_37() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___mouthUp_Down_37)); }
	inline float get_mouthUp_Down_37() const { return ___mouthUp_Down_37; }
	inline float* get_address_of_mouthUp_Down_37() { return &___mouthUp_Down_37; }
	inline void set_mouthUp_Down_37(float value)
	{
		___mouthUp_Down_37 = value;
	}

	inline static int32_t get_offset_of_mouthNarrow_Pucker_38() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___mouthNarrow_Pucker_38)); }
	inline float get_mouthNarrow_Pucker_38() const { return ___mouthNarrow_Pucker_38; }
	inline float* get_address_of_mouthNarrow_Pucker_38() { return &___mouthNarrow_Pucker_38; }
	inline void set_mouthNarrow_Pucker_38(float value)
	{
		___mouthNarrow_Pucker_38 = value;
	}

	inline static int32_t get_offset_of_tongueOut_39() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___tongueOut_39)); }
	inline float get_tongueOut_39() const { return ___tongueOut_39; }
	inline float* get_address_of_tongueOut_39() { return &___tongueOut_39; }
	inline void set_tongueOut_39(float value)
	{
		___tongueOut_39 = value;
	}

	inline static int32_t get_offset_of_tongueCurl_40() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___tongueCurl_40)); }
	inline float get_tongueCurl_40() const { return ___tongueCurl_40; }
	inline float* get_address_of_tongueCurl_40() { return &___tongueCurl_40; }
	inline void set_tongueCurl_40(float value)
	{
		___tongueCurl_40 = value;
	}

	inline static int32_t get_offset_of_tongueUp_Down_41() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___tongueUp_Down_41)); }
	inline float get_tongueUp_Down_41() const { return ___tongueUp_Down_41; }
	inline float* get_address_of_tongueUp_Down_41() { return &___tongueUp_Down_41; }
	inline void set_tongueUp_Down_41(float value)
	{
		___tongueUp_Down_41 = value;
	}

	inline static int32_t get_offset_of_tongueLeft_Right_42() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___tongueLeft_Right_42)); }
	inline float get_tongueLeft_Right_42() const { return ___tongueLeft_Right_42; }
	inline float* get_address_of_tongueLeft_Right_42() { return &___tongueLeft_Right_42; }
	inline void set_tongueLeft_Right_42(float value)
	{
		___tongueLeft_Right_42 = value;
	}

	inline static int32_t get_offset_of_tongueWide_Narrow_43() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___tongueWide_Narrow_43)); }
	inline float get_tongueWide_Narrow_43() const { return ___tongueWide_Narrow_43; }
	inline float* get_address_of_tongueWide_Narrow_43() { return &___tongueWide_Narrow_43; }
	inline void set_tongueWide_Narrow_43(float value)
	{
		___tongueWide_Narrow_43 = value;
	}

	inline static int32_t get_offset_of_leftMouthSmile_Frown_44() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftMouthSmile_Frown_44)); }
	inline float get_leftMouthSmile_Frown_44() const { return ___leftMouthSmile_Frown_44; }
	inline float* get_address_of_leftMouthSmile_Frown_44() { return &___leftMouthSmile_Frown_44; }
	inline void set_leftMouthSmile_Frown_44(float value)
	{
		___leftMouthSmile_Frown_44 = value;
	}

	inline static int32_t get_offset_of_rightMouthSmile_Frown_45() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightMouthSmile_Frown_45)); }
	inline float get_rightMouthSmile_Frown_45() const { return ___rightMouthSmile_Frown_45; }
	inline float* get_address_of_rightMouthSmile_Frown_45() { return &___rightMouthSmile_Frown_45; }
	inline void set_rightMouthSmile_Frown_45(float value)
	{
		___rightMouthSmile_Frown_45 = value;
	}

	inline static int32_t get_offset_of_leftLowerLipUp_Down_46() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftLowerLipUp_Down_46)); }
	inline float get_leftLowerLipUp_Down_46() const { return ___leftLowerLipUp_Down_46; }
	inline float* get_address_of_leftLowerLipUp_Down_46() { return &___leftLowerLipUp_Down_46; }
	inline void set_leftLowerLipUp_Down_46(float value)
	{
		___leftLowerLipUp_Down_46 = value;
	}

	inline static int32_t get_offset_of_rightLowerLipUp_Down_47() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightLowerLipUp_Down_47)); }
	inline float get_rightLowerLipUp_Down_47() const { return ___rightLowerLipUp_Down_47; }
	inline float* get_address_of_rightLowerLipUp_Down_47() { return &___rightLowerLipUp_Down_47; }
	inline void set_rightLowerLipUp_Down_47(float value)
	{
		___rightLowerLipUp_Down_47 = value;
	}

	inline static int32_t get_offset_of_leftUpperLipUp_Down_48() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftUpperLipUp_Down_48)); }
	inline float get_leftUpperLipUp_Down_48() const { return ___leftUpperLipUp_Down_48; }
	inline float* get_address_of_leftUpperLipUp_Down_48() { return &___leftUpperLipUp_Down_48; }
	inline void set_leftUpperLipUp_Down_48(float value)
	{
		___leftUpperLipUp_Down_48 = value;
	}

	inline static int32_t get_offset_of_rightUpperLipUp_Down_49() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightUpperLipUp_Down_49)); }
	inline float get_rightUpperLipUp_Down_49() const { return ___rightUpperLipUp_Down_49; }
	inline float* get_address_of_rightUpperLipUp_Down_49() { return &___rightUpperLipUp_Down_49; }
	inline void set_rightUpperLipUp_Down_49(float value)
	{
		___rightUpperLipUp_Down_49 = value;
	}

	inline static int32_t get_offset_of_leftCheekPuff_Squint_50() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftCheekPuff_Squint_50)); }
	inline float get_leftCheekPuff_Squint_50() const { return ___leftCheekPuff_Squint_50; }
	inline float* get_address_of_leftCheekPuff_Squint_50() { return &___leftCheekPuff_Squint_50; }
	inline void set_leftCheekPuff_Squint_50(float value)
	{
		___leftCheekPuff_Squint_50 = value;
	}

	inline static int32_t get_offset_of_rightCheekPuff_Squint_51() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightCheekPuff_Squint_51)); }
	inline float get_rightCheekPuff_Squint_51() const { return ___rightCheekPuff_Squint_51; }
	inline float* get_address_of_rightCheekPuff_Squint_51() { return &___rightCheekPuff_Squint_51; }
	inline void set_rightCheekPuff_Squint_51(float value)
	{
		___rightCheekPuff_Squint_51 = value;
	}

	inline static int32_t get_offset_of_noseSneer_52() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___noseSneer_52)); }
	inline float get_noseSneer_52() const { return ___noseSneer_52; }
	inline float* get_address_of_noseSneer_52() { return &___noseSneer_52; }
	inline void set_noseSneer_52(float value)
	{
		___noseSneer_52 = value;
	}

	inline static int32_t get_offset_of_leftEyeOpen_Close_53() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftEyeOpen_Close_53)); }
	inline float get_leftEyeOpen_Close_53() const { return ___leftEyeOpen_Close_53; }
	inline float* get_address_of_leftEyeOpen_Close_53() { return &___leftEyeOpen_Close_53; }
	inline void set_leftEyeOpen_Close_53(float value)
	{
		___leftEyeOpen_Close_53 = value;
	}

	inline static int32_t get_offset_of_rightEyeOpen_Close_54() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightEyeOpen_Close_54)); }
	inline float get_rightEyeOpen_Close_54() const { return ___rightEyeOpen_Close_54; }
	inline float* get_address_of_rightEyeOpen_Close_54() { return &___rightEyeOpen_Close_54; }
	inline void set_rightEyeOpen_Close_54(float value)
	{
		___rightEyeOpen_Close_54 = value;
	}

	inline static int32_t get_offset_of_leftEyeUp_Down_55() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftEyeUp_Down_55)); }
	inline float get_leftEyeUp_Down_55() const { return ___leftEyeUp_Down_55; }
	inline float* get_address_of_leftEyeUp_Down_55() { return &___leftEyeUp_Down_55; }
	inline void set_leftEyeUp_Down_55(float value)
	{
		___leftEyeUp_Down_55 = value;
	}

	inline static int32_t get_offset_of_rightEyeUp_Down_56() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightEyeUp_Down_56)); }
	inline float get_rightEyeUp_Down_56() const { return ___rightEyeUp_Down_56; }
	inline float* get_address_of_rightEyeUp_Down_56() { return &___rightEyeUp_Down_56; }
	inline void set_rightEyeUp_Down_56(float value)
	{
		___rightEyeUp_Down_56 = value;
	}

	inline static int32_t get_offset_of_leftEyeIn_Out_57() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftEyeIn_Out_57)); }
	inline float get_leftEyeIn_Out_57() const { return ___leftEyeIn_Out_57; }
	inline float* get_address_of_leftEyeIn_Out_57() { return &___leftEyeIn_Out_57; }
	inline void set_leftEyeIn_Out_57(float value)
	{
		___leftEyeIn_Out_57 = value;
	}

	inline static int32_t get_offset_of_rightEyeIn_Out_58() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightEyeIn_Out_58)); }
	inline float get_rightEyeIn_Out_58() const { return ___rightEyeIn_Out_58; }
	inline float* get_address_of_rightEyeIn_Out_58() { return &___rightEyeIn_Out_58; }
	inline void set_rightEyeIn_Out_58(float value)
	{
		___rightEyeIn_Out_58 = value;
	}

	inline static int32_t get_offset_of_browsIn_59() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___browsIn_59)); }
	inline float get_browsIn_59() const { return ___browsIn_59; }
	inline float* get_address_of_browsIn_59() { return &___browsIn_59; }
	inline void set_browsIn_59(float value)
	{
		___browsIn_59 = value;
	}

	inline static int32_t get_offset_of_leftBrowUp_Down_60() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftBrowUp_Down_60)); }
	inline float get_leftBrowUp_Down_60() const { return ___leftBrowUp_Down_60; }
	inline float* get_address_of_leftBrowUp_Down_60() { return &___leftBrowUp_Down_60; }
	inline void set_leftBrowUp_Down_60(float value)
	{
		___leftBrowUp_Down_60 = value;
	}

	inline static int32_t get_offset_of_rightBrowUp_Down_61() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightBrowUp_Down_61)); }
	inline float get_rightBrowUp_Down_61() const { return ___rightBrowUp_Down_61; }
	inline float* get_address_of_rightBrowUp_Down_61() { return &___rightBrowUp_Down_61; }
	inline void set_rightBrowUp_Down_61(float value)
	{
		___rightBrowUp_Down_61 = value;
	}

	inline static int32_t get_offset_of_midBrowUp_Down_62() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___midBrowUp_Down_62)); }
	inline float get_midBrowUp_Down_62() const { return ___midBrowUp_Down_62; }
	inline float* get_address_of_midBrowUp_Down_62() { return &___midBrowUp_Down_62; }
	inline void set_midBrowUp_Down_62(float value)
	{
		___midBrowUp_Down_62 = value;
	}

	inline static int32_t get_offset_of_leftGrasp_63() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftGrasp_63)); }
	inline float get_leftGrasp_63() const { return ___leftGrasp_63; }
	inline float* get_address_of_leftGrasp_63() { return &___leftGrasp_63; }
	inline void set_leftGrasp_63(float value)
	{
		___leftGrasp_63 = value;
	}

	inline static int32_t get_offset_of_rightGrasp_64() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightGrasp_64)); }
	inline float get_rightGrasp_64() const { return ___rightGrasp_64; }
	inline float* get_address_of_rightGrasp_64() { return &___rightGrasp_64; }
	inline void set_rightGrasp_64(float value)
	{
		___rightGrasp_64 = value;
	}

	inline static int32_t get_offset_of_leftPeace_65() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftPeace_65)); }
	inline float get_leftPeace_65() const { return ___leftPeace_65; }
	inline float* get_address_of_leftPeace_65() { return &___leftPeace_65; }
	inline void set_leftPeace_65(float value)
	{
		___leftPeace_65 = value;
	}

	inline static int32_t get_offset_of_rightPeace_66() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightPeace_66)); }
	inline float get_rightPeace_66() const { return ___rightPeace_66; }
	inline float* get_address_of_rightPeace_66() { return &___rightPeace_66; }
	inline void set_rightPeace_66(float value)
	{
		___rightPeace_66 = value;
	}

	inline static int32_t get_offset_of_leftRude_67() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftRude_67)); }
	inline float get_leftRude_67() const { return ___leftRude_67; }
	inline float* get_address_of_leftRude_67() { return &___leftRude_67; }
	inline void set_leftRude_67(float value)
	{
		___leftRude_67 = value;
	}

	inline static int32_t get_offset_of_rightRude_68() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightRude_68)); }
	inline float get_rightRude_68() const { return ___rightRude_68; }
	inline float* get_address_of_rightRude_68() { return &___rightRude_68; }
	inline void set_rightRude_68(float value)
	{
		___rightRude_68 = value;
	}

	inline static int32_t get_offset_of_leftPoint_69() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___leftPoint_69)); }
	inline float get_leftPoint_69() const { return ___leftPoint_69; }
	inline float* get_address_of_leftPoint_69() { return &___leftPoint_69; }
	inline void set_leftPoint_69(float value)
	{
		___leftPoint_69 = value;
	}

	inline static int32_t get_offset_of_rightPoint_70() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___rightPoint_70)); }
	inline float get_rightPoint_70() const { return ___rightPoint_70; }
	inline float* get_address_of_rightPoint_70() { return &___rightPoint_70; }
	inline void set_rightPoint_70(float value)
	{
		___rightPoint_70 = value;
	}

	inline static int32_t get_offset_of_valueArray_71() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905, ___valueArray_71)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_valueArray_71() const { return ___valueArray_71; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_valueArray_71() { return &___valueArray_71; }
	inline void set_valueArray_71(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___valueArray_71 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___valueArray_71), (void*)value);
	}
};

struct ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905_StaticFields
{
public:
	// System.String[] UMA.PoseTools.ExpressionPlayer::PoseNames
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___PoseNames_25;
	// UMA.PoseTools.ExpressionPlayer/MecanimJoint[] UMA.PoseTools.ExpressionPlayer::MecanimAlternate
	MecanimJointU5BU5D_tB17A714B547AB2DE8AFB198C1B04961DD09523F3* ___MecanimAlternate_26;

public:
	inline static int32_t get_offset_of_PoseNames_25() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905_StaticFields, ___PoseNames_25)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_PoseNames_25() const { return ___PoseNames_25; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_PoseNames_25() { return &___PoseNames_25; }
	inline void set_PoseNames_25(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___PoseNames_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PoseNames_25), (void*)value);
	}

	inline static int32_t get_offset_of_MecanimAlternate_26() { return static_cast<int32_t>(offsetof(ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905_StaticFields, ___MecanimAlternate_26)); }
	inline MecanimJointU5BU5D_tB17A714B547AB2DE8AFB198C1B04961DD09523F3* get_MecanimAlternate_26() const { return ___MecanimAlternate_26; }
	inline MecanimJointU5BU5D_tB17A714B547AB2DE8AFB198C1B04961DD09523F3** get_address_of_MecanimAlternate_26() { return &___MecanimAlternate_26; }
	inline void set_MecanimAlternate_26(MecanimJointU5BU5D_tB17A714B547AB2DE8AFB198C1B04961DD09523F3* value)
	{
		___MecanimAlternate_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MecanimAlternate_26), (void*)value);
	}
};


// UMA.PoseTools.ExpressionSlotScript
struct  ExpressionSlotScript_t12A940B1CF4C863A0C320E926971FD5CEA8F313F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UMA.ForearmTwistSlotScript
struct  ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String UMA.ForearmTwistSlotScript::LeftHandBoneName
	String_t* ___LeftHandBoneName_4;
	// System.String UMA.ForearmTwistSlotScript::RightHandBoneName
	String_t* ___RightHandBoneName_5;
	// System.String UMA.ForearmTwistSlotScript::LeftForeArmTwistBoneName
	String_t* ___LeftForeArmTwistBoneName_6;
	// System.String UMA.ForearmTwistSlotScript::RightForeArmTwistBoneName
	String_t* ___RightForeArmTwistBoneName_7;

public:
	inline static int32_t get_offset_of_LeftHandBoneName_4() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134, ___LeftHandBoneName_4)); }
	inline String_t* get_LeftHandBoneName_4() const { return ___LeftHandBoneName_4; }
	inline String_t** get_address_of_LeftHandBoneName_4() { return &___LeftHandBoneName_4; }
	inline void set_LeftHandBoneName_4(String_t* value)
	{
		___LeftHandBoneName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeftHandBoneName_4), (void*)value);
	}

	inline static int32_t get_offset_of_RightHandBoneName_5() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134, ___RightHandBoneName_5)); }
	inline String_t* get_RightHandBoneName_5() const { return ___RightHandBoneName_5; }
	inline String_t** get_address_of_RightHandBoneName_5() { return &___RightHandBoneName_5; }
	inline void set_RightHandBoneName_5(String_t* value)
	{
		___RightHandBoneName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RightHandBoneName_5), (void*)value);
	}

	inline static int32_t get_offset_of_LeftForeArmTwistBoneName_6() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134, ___LeftForeArmTwistBoneName_6)); }
	inline String_t* get_LeftForeArmTwistBoneName_6() const { return ___LeftForeArmTwistBoneName_6; }
	inline String_t** get_address_of_LeftForeArmTwistBoneName_6() { return &___LeftForeArmTwistBoneName_6; }
	inline void set_LeftForeArmTwistBoneName_6(String_t* value)
	{
		___LeftForeArmTwistBoneName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LeftForeArmTwistBoneName_6), (void*)value);
	}

	inline static int32_t get_offset_of_RightForeArmTwistBoneName_7() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134, ___RightForeArmTwistBoneName_7)); }
	inline String_t* get_RightForeArmTwistBoneName_7() const { return ___RightForeArmTwistBoneName_7; }
	inline String_t** get_address_of_RightForeArmTwistBoneName_7() { return &___RightForeArmTwistBoneName_7; }
	inline void set_RightForeArmTwistBoneName_7(String_t* value)
	{
		___RightForeArmTwistBoneName_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RightForeArmTwistBoneName_7), (void*)value);
	}
};

struct ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields
{
public:
	// System.Int32 UMA.ForearmTwistSlotScript::leftHandHash
	int32_t ___leftHandHash_8;
	// System.Int32 UMA.ForearmTwistSlotScript::rightHandHash
	int32_t ___rightHandHash_9;
	// System.Int32 UMA.ForearmTwistSlotScript::leftTwistHash
	int32_t ___leftTwistHash_10;
	// System.Int32 UMA.ForearmTwistSlotScript::rightTwistHash
	int32_t ___rightTwistHash_11;
	// System.Boolean UMA.ForearmTwistSlotScript::hashesFound
	bool ___hashesFound_12;

public:
	inline static int32_t get_offset_of_leftHandHash_8() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields, ___leftHandHash_8)); }
	inline int32_t get_leftHandHash_8() const { return ___leftHandHash_8; }
	inline int32_t* get_address_of_leftHandHash_8() { return &___leftHandHash_8; }
	inline void set_leftHandHash_8(int32_t value)
	{
		___leftHandHash_8 = value;
	}

	inline static int32_t get_offset_of_rightHandHash_9() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields, ___rightHandHash_9)); }
	inline int32_t get_rightHandHash_9() const { return ___rightHandHash_9; }
	inline int32_t* get_address_of_rightHandHash_9() { return &___rightHandHash_9; }
	inline void set_rightHandHash_9(int32_t value)
	{
		___rightHandHash_9 = value;
	}

	inline static int32_t get_offset_of_leftTwistHash_10() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields, ___leftTwistHash_10)); }
	inline int32_t get_leftTwistHash_10() const { return ___leftTwistHash_10; }
	inline int32_t* get_address_of_leftTwistHash_10() { return &___leftTwistHash_10; }
	inline void set_leftTwistHash_10(int32_t value)
	{
		___leftTwistHash_10 = value;
	}

	inline static int32_t get_offset_of_rightTwistHash_11() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields, ___rightTwistHash_11)); }
	inline int32_t get_rightTwistHash_11() const { return ___rightTwistHash_11; }
	inline int32_t* get_address_of_rightTwistHash_11() { return &___rightTwistHash_11; }
	inline void set_rightTwistHash_11(int32_t value)
	{
		___rightTwistHash_11 = value;
	}

	inline static int32_t get_offset_of_hashesFound_12() { return static_cast<int32_t>(offsetof(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields, ___hashesFound_12)); }
	inline bool get_hashesFound_12() const { return ___hashesFound_12; }
	inline bool* get_address_of_hashesFound_12() { return &___hashesFound_12; }
	inline void set_hashesFound_12(bool value)
	{
		___hashesFound_12 = value;
	}
};


// UMA.Examples.Locomotion
struct  Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator UMA.Examples.Locomotion::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;
	// System.Single UMA.Examples.Locomotion::DirectionDampTime
	float ___DirectionDampTime_5;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}

	inline static int32_t get_offset_of_DirectionDampTime_5() { return static_cast<int32_t>(offsetof(Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4, ___DirectionDampTime_5)); }
	inline float get_DirectionDampTime_5() const { return ___DirectionDampTime_5; }
	inline float* get_address_of_DirectionDampTime_5() { return &___DirectionDampTime_5; }
	inline void set_DirectionDampTime_5(float value)
	{
		___DirectionDampTime_5 = value;
	}
};


// UMA.Examples.LocomotionSlotScript
struct  LocomotionSlotScript_tC6F1D709E7F22799FF4F6DEC52CFC8FD1DED0F43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UMA.TwistBones
struct  TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single UMA.TwistBones::twistValue
	float ___twistValue_4;
	// UnityEngine.Transform[] UMA.TwistBones::twistBone
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___twistBone_5;
	// UnityEngine.Transform[] UMA.TwistBones::refBone
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___refBone_6;
	// System.Single[] UMA.TwistBones::originalRefRotation
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___originalRefRotation_7;
	// System.Single[] UMA.TwistBones::twistRotation
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___twistRotation_8;
	// UnityEngine.Vector3 UMA.TwistBones::rotated
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotated_9;

public:
	inline static int32_t get_offset_of_twistValue_4() { return static_cast<int32_t>(offsetof(TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B, ___twistValue_4)); }
	inline float get_twistValue_4() const { return ___twistValue_4; }
	inline float* get_address_of_twistValue_4() { return &___twistValue_4; }
	inline void set_twistValue_4(float value)
	{
		___twistValue_4 = value;
	}

	inline static int32_t get_offset_of_twistBone_5() { return static_cast<int32_t>(offsetof(TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B, ___twistBone_5)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_twistBone_5() const { return ___twistBone_5; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_twistBone_5() { return &___twistBone_5; }
	inline void set_twistBone_5(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___twistBone_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___twistBone_5), (void*)value);
	}

	inline static int32_t get_offset_of_refBone_6() { return static_cast<int32_t>(offsetof(TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B, ___refBone_6)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_refBone_6() const { return ___refBone_6; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_refBone_6() { return &___refBone_6; }
	inline void set_refBone_6(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___refBone_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refBone_6), (void*)value);
	}

	inline static int32_t get_offset_of_originalRefRotation_7() { return static_cast<int32_t>(offsetof(TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B, ___originalRefRotation_7)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_originalRefRotation_7() const { return ___originalRefRotation_7; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_originalRefRotation_7() { return &___originalRefRotation_7; }
	inline void set_originalRefRotation_7(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___originalRefRotation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalRefRotation_7), (void*)value);
	}

	inline static int32_t get_offset_of_twistRotation_8() { return static_cast<int32_t>(offsetof(TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B, ___twistRotation_8)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_twistRotation_8() const { return ___twistRotation_8; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_twistRotation_8() { return &___twistRotation_8; }
	inline void set_twistRotation_8(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___twistRotation_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___twistRotation_8), (void*)value);
	}

	inline static int32_t get_offset_of_rotated_9() { return static_cast<int32_t>(offsetof(TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B, ___rotated_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotated_9() const { return ___rotated_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotated_9() { return &___rotated_9; }
	inline void set_rotated_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotated_9 = value;
	}
};


// UMA.UMAData
struct  UMAData_t696E4E970704E7893146E28998A230A9F2947B3C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.SkinnedMeshRenderer[] UMA.UMAData::renderers
	SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* ___renderers_4;
	// UMA.UMARendererAsset[] UMA.UMAData::rendererAssets
	UMARendererAssetU5BU5D_t0039165EF8659578C2E0EF3BD5C20F3461DAE27B* ___rendererAssets_5;
	// UMA.UMARendererAsset UMA.UMAData::<defaultRendererAsset>k__BackingField
	UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2 * ___U3CdefaultRendererAssetU3Ek__BackingField_6;
	// System.Collections.Generic.List`1<UMA.UMASavedItem> UMA.UMAData::savedItems
	List_1_t180E55DE782EC1658BD5144F1BDE7963D5BC605F * ___savedItems_7;
	// System.Boolean UMA.UMAData::staticCharacter
	bool ___staticCharacter_8;
	// System.Boolean UMA.UMAData::firstBake
	bool ___firstBake_9;
	// System.Boolean UMA.UMAData::RebuildSkeleton
	bool ___RebuildSkeleton_10;
	// UMA.UMAGeneratorBase UMA.UMAData::umaGenerator
	UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3 * ___umaGenerator_11;
	// UMA.UMAData/GeneratedMaterials UMA.UMAData::generatedMaterials
	GeneratedMaterials_tB1112A090548BA0EAEF788D774FE1A871F64A644 * ___generatedMaterials_12;
	// System.Collections.Generic.LinkedListNode`1<UMA.UMAData> UMA.UMAData::listNode
	LinkedListNode_1_t58B04B7F807A8599357DEF495B9BAECB62B34286 * ___listNode_13;
	// System.Single UMA.UMAData::atlasResolutionScale
	float ___atlasResolutionScale_14;
	// System.Boolean UMA.UMAData::isMeshDirty
	bool ___isMeshDirty_15;
	// System.Boolean UMA.UMAData::isShapeDirty
	bool ___isShapeDirty_16;
	// System.Boolean UMA.UMAData::isTextureDirty
	bool ___isTextureDirty_17;
	// System.Boolean UMA.UMAData::isAtlasDirty
	bool ___isAtlasDirty_18;
	// UMA.BlendShapeSettings UMA.UMAData::blendShapeSettings
	BlendShapeSettings_tB123D8AB02898CF0D0B7218F215CE4CE4197C042 * ___blendShapeSettings_19;
	// UnityEngine.RuntimeAnimatorController UMA.UMAData::animationController
	RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * ___animationController_20;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> UMA.UMAData::animatedBonesTable
	Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * ___animatedBonesTable_21;
	// System.Boolean UMA.UMAData::<cancelled>k__BackingField
	bool ___U3CcancelledU3Ek__BackingField_22;
	// System.Boolean UMA.UMAData::dirty
	bool ___dirty_23;
	// System.Boolean UMA.UMAData::isOfficiallyCreated
	bool ___isOfficiallyCreated_24;
	// UMA.UMADataEvent UMA.UMAData::CharacterCreated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterCreated_25;
	// UMA.UMADataEvent UMA.UMAData::CharacterDestroyed
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterDestroyed_26;
	// UMA.UMADataEvent UMA.UMAData::CharacterUpdated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterUpdated_27;
	// UMA.UMADataEvent UMA.UMAData::CharacterBeforeUpdated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterBeforeUpdated_28;
	// UMA.UMADataEvent UMA.UMAData::CharacterBeforeDnaUpdated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterBeforeDnaUpdated_29;
	// UMA.UMADataEvent UMA.UMAData::CharacterDnaUpdated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterDnaUpdated_30;
	// UMA.UMADataEvent UMA.UMAData::CharacterBegun
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterBegun_31;
	// UMA.UMADataEvent UMA.UMAData::AnimatorStateSaved
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___AnimatorStateSaved_32;
	// UMA.UMADataEvent UMA.UMAData::AnimatorStateRestored
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___AnimatorStateRestored_33;
	// UMA.UMADataEvent UMA.UMAData::PreUpdateUMABody
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___PreUpdateUMABody_34;
	// UnityEngine.GameObject UMA.UMAData::umaRoot
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___umaRoot_35;
	// UMA.UMAData/UMARecipe UMA.UMAData::_umaRecipe
	UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * ____umaRecipe_36;
	// UMA.UMAData/UMARecipe UMA.UMAData::umaOverrideRecipe
	UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * ___umaOverrideRecipe_37;
	// UnityEngine.Animator UMA.UMAData::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_38;
	// UMA.UMASkeleton UMA.UMAData::skeleton
	UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * ___skeleton_39;
	// System.Boolean UMA.UMAData::KeepAvatar
	bool ___KeepAvatar_40;
	// System.Single UMA.UMAData::characterHeight
	float ___characterHeight_41;
	// System.Single UMA.UMAData::characterRadius
	float ___characterRadius_42;
	// System.Single UMA.UMAData::characterMass
	float ___characterMass_43;

public:
	inline static int32_t get_offset_of_renderers_4() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___renderers_4)); }
	inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* get_renderers_4() const { return ___renderers_4; }
	inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED** get_address_of_renderers_4() { return &___renderers_4; }
	inline void set_renderers_4(SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* value)
	{
		___renderers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderers_4), (void*)value);
	}

	inline static int32_t get_offset_of_rendererAssets_5() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___rendererAssets_5)); }
	inline UMARendererAssetU5BU5D_t0039165EF8659578C2E0EF3BD5C20F3461DAE27B* get_rendererAssets_5() const { return ___rendererAssets_5; }
	inline UMARendererAssetU5BU5D_t0039165EF8659578C2E0EF3BD5C20F3461DAE27B** get_address_of_rendererAssets_5() { return &___rendererAssets_5; }
	inline void set_rendererAssets_5(UMARendererAssetU5BU5D_t0039165EF8659578C2E0EF3BD5C20F3461DAE27B* value)
	{
		___rendererAssets_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rendererAssets_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CdefaultRendererAssetU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___U3CdefaultRendererAssetU3Ek__BackingField_6)); }
	inline UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2 * get_U3CdefaultRendererAssetU3Ek__BackingField_6() const { return ___U3CdefaultRendererAssetU3Ek__BackingField_6; }
	inline UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2 ** get_address_of_U3CdefaultRendererAssetU3Ek__BackingField_6() { return &___U3CdefaultRendererAssetU3Ek__BackingField_6; }
	inline void set_U3CdefaultRendererAssetU3Ek__BackingField_6(UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2 * value)
	{
		___U3CdefaultRendererAssetU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CdefaultRendererAssetU3Ek__BackingField_6), (void*)value);
	}

	inline static int32_t get_offset_of_savedItems_7() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___savedItems_7)); }
	inline List_1_t180E55DE782EC1658BD5144F1BDE7963D5BC605F * get_savedItems_7() const { return ___savedItems_7; }
	inline List_1_t180E55DE782EC1658BD5144F1BDE7963D5BC605F ** get_address_of_savedItems_7() { return &___savedItems_7; }
	inline void set_savedItems_7(List_1_t180E55DE782EC1658BD5144F1BDE7963D5BC605F * value)
	{
		___savedItems_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedItems_7), (void*)value);
	}

	inline static int32_t get_offset_of_staticCharacter_8() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___staticCharacter_8)); }
	inline bool get_staticCharacter_8() const { return ___staticCharacter_8; }
	inline bool* get_address_of_staticCharacter_8() { return &___staticCharacter_8; }
	inline void set_staticCharacter_8(bool value)
	{
		___staticCharacter_8 = value;
	}

	inline static int32_t get_offset_of_firstBake_9() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___firstBake_9)); }
	inline bool get_firstBake_9() const { return ___firstBake_9; }
	inline bool* get_address_of_firstBake_9() { return &___firstBake_9; }
	inline void set_firstBake_9(bool value)
	{
		___firstBake_9 = value;
	}

	inline static int32_t get_offset_of_RebuildSkeleton_10() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___RebuildSkeleton_10)); }
	inline bool get_RebuildSkeleton_10() const { return ___RebuildSkeleton_10; }
	inline bool* get_address_of_RebuildSkeleton_10() { return &___RebuildSkeleton_10; }
	inline void set_RebuildSkeleton_10(bool value)
	{
		___RebuildSkeleton_10 = value;
	}

	inline static int32_t get_offset_of_umaGenerator_11() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___umaGenerator_11)); }
	inline UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3 * get_umaGenerator_11() const { return ___umaGenerator_11; }
	inline UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3 ** get_address_of_umaGenerator_11() { return &___umaGenerator_11; }
	inline void set_umaGenerator_11(UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3 * value)
	{
		___umaGenerator_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaGenerator_11), (void*)value);
	}

	inline static int32_t get_offset_of_generatedMaterials_12() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___generatedMaterials_12)); }
	inline GeneratedMaterials_tB1112A090548BA0EAEF788D774FE1A871F64A644 * get_generatedMaterials_12() const { return ___generatedMaterials_12; }
	inline GeneratedMaterials_tB1112A090548BA0EAEF788D774FE1A871F64A644 ** get_address_of_generatedMaterials_12() { return &___generatedMaterials_12; }
	inline void set_generatedMaterials_12(GeneratedMaterials_tB1112A090548BA0EAEF788D774FE1A871F64A644 * value)
	{
		___generatedMaterials_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___generatedMaterials_12), (void*)value);
	}

	inline static int32_t get_offset_of_listNode_13() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___listNode_13)); }
	inline LinkedListNode_1_t58B04B7F807A8599357DEF495B9BAECB62B34286 * get_listNode_13() const { return ___listNode_13; }
	inline LinkedListNode_1_t58B04B7F807A8599357DEF495B9BAECB62B34286 ** get_address_of_listNode_13() { return &___listNode_13; }
	inline void set_listNode_13(LinkedListNode_1_t58B04B7F807A8599357DEF495B9BAECB62B34286 * value)
	{
		___listNode_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___listNode_13), (void*)value);
	}

	inline static int32_t get_offset_of_atlasResolutionScale_14() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___atlasResolutionScale_14)); }
	inline float get_atlasResolutionScale_14() const { return ___atlasResolutionScale_14; }
	inline float* get_address_of_atlasResolutionScale_14() { return &___atlasResolutionScale_14; }
	inline void set_atlasResolutionScale_14(float value)
	{
		___atlasResolutionScale_14 = value;
	}

	inline static int32_t get_offset_of_isMeshDirty_15() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___isMeshDirty_15)); }
	inline bool get_isMeshDirty_15() const { return ___isMeshDirty_15; }
	inline bool* get_address_of_isMeshDirty_15() { return &___isMeshDirty_15; }
	inline void set_isMeshDirty_15(bool value)
	{
		___isMeshDirty_15 = value;
	}

	inline static int32_t get_offset_of_isShapeDirty_16() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___isShapeDirty_16)); }
	inline bool get_isShapeDirty_16() const { return ___isShapeDirty_16; }
	inline bool* get_address_of_isShapeDirty_16() { return &___isShapeDirty_16; }
	inline void set_isShapeDirty_16(bool value)
	{
		___isShapeDirty_16 = value;
	}

	inline static int32_t get_offset_of_isTextureDirty_17() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___isTextureDirty_17)); }
	inline bool get_isTextureDirty_17() const { return ___isTextureDirty_17; }
	inline bool* get_address_of_isTextureDirty_17() { return &___isTextureDirty_17; }
	inline void set_isTextureDirty_17(bool value)
	{
		___isTextureDirty_17 = value;
	}

	inline static int32_t get_offset_of_isAtlasDirty_18() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___isAtlasDirty_18)); }
	inline bool get_isAtlasDirty_18() const { return ___isAtlasDirty_18; }
	inline bool* get_address_of_isAtlasDirty_18() { return &___isAtlasDirty_18; }
	inline void set_isAtlasDirty_18(bool value)
	{
		___isAtlasDirty_18 = value;
	}

	inline static int32_t get_offset_of_blendShapeSettings_19() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___blendShapeSettings_19)); }
	inline BlendShapeSettings_tB123D8AB02898CF0D0B7218F215CE4CE4197C042 * get_blendShapeSettings_19() const { return ___blendShapeSettings_19; }
	inline BlendShapeSettings_tB123D8AB02898CF0D0B7218F215CE4CE4197C042 ** get_address_of_blendShapeSettings_19() { return &___blendShapeSettings_19; }
	inline void set_blendShapeSettings_19(BlendShapeSettings_tB123D8AB02898CF0D0B7218F215CE4CE4197C042 * value)
	{
		___blendShapeSettings_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blendShapeSettings_19), (void*)value);
	}

	inline static int32_t get_offset_of_animationController_20() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___animationController_20)); }
	inline RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * get_animationController_20() const { return ___animationController_20; }
	inline RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB ** get_address_of_animationController_20() { return &___animationController_20; }
	inline void set_animationController_20(RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * value)
	{
		___animationController_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationController_20), (void*)value);
	}

	inline static int32_t get_offset_of_animatedBonesTable_21() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___animatedBonesTable_21)); }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * get_animatedBonesTable_21() const { return ___animatedBonesTable_21; }
	inline Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 ** get_address_of_animatedBonesTable_21() { return &___animatedBonesTable_21; }
	inline void set_animatedBonesTable_21(Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08 * value)
	{
		___animatedBonesTable_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animatedBonesTable_21), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcancelledU3Ek__BackingField_22() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___U3CcancelledU3Ek__BackingField_22)); }
	inline bool get_U3CcancelledU3Ek__BackingField_22() const { return ___U3CcancelledU3Ek__BackingField_22; }
	inline bool* get_address_of_U3CcancelledU3Ek__BackingField_22() { return &___U3CcancelledU3Ek__BackingField_22; }
	inline void set_U3CcancelledU3Ek__BackingField_22(bool value)
	{
		___U3CcancelledU3Ek__BackingField_22 = value;
	}

	inline static int32_t get_offset_of_dirty_23() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___dirty_23)); }
	inline bool get_dirty_23() const { return ___dirty_23; }
	inline bool* get_address_of_dirty_23() { return &___dirty_23; }
	inline void set_dirty_23(bool value)
	{
		___dirty_23 = value;
	}

	inline static int32_t get_offset_of_isOfficiallyCreated_24() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___isOfficiallyCreated_24)); }
	inline bool get_isOfficiallyCreated_24() const { return ___isOfficiallyCreated_24; }
	inline bool* get_address_of_isOfficiallyCreated_24() { return &___isOfficiallyCreated_24; }
	inline void set_isOfficiallyCreated_24(bool value)
	{
		___isOfficiallyCreated_24 = value;
	}

	inline static int32_t get_offset_of_CharacterCreated_25() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___CharacterCreated_25)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterCreated_25() const { return ___CharacterCreated_25; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterCreated_25() { return &___CharacterCreated_25; }
	inline void set_CharacterCreated_25(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterCreated_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterCreated_25), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterDestroyed_26() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___CharacterDestroyed_26)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterDestroyed_26() const { return ___CharacterDestroyed_26; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterDestroyed_26() { return &___CharacterDestroyed_26; }
	inline void set_CharacterDestroyed_26(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterDestroyed_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterDestroyed_26), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterUpdated_27() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___CharacterUpdated_27)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterUpdated_27() const { return ___CharacterUpdated_27; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterUpdated_27() { return &___CharacterUpdated_27; }
	inline void set_CharacterUpdated_27(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterUpdated_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterUpdated_27), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterBeforeUpdated_28() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___CharacterBeforeUpdated_28)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterBeforeUpdated_28() const { return ___CharacterBeforeUpdated_28; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterBeforeUpdated_28() { return &___CharacterBeforeUpdated_28; }
	inline void set_CharacterBeforeUpdated_28(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterBeforeUpdated_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterBeforeUpdated_28), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterBeforeDnaUpdated_29() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___CharacterBeforeDnaUpdated_29)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterBeforeDnaUpdated_29() const { return ___CharacterBeforeDnaUpdated_29; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterBeforeDnaUpdated_29() { return &___CharacterBeforeDnaUpdated_29; }
	inline void set_CharacterBeforeDnaUpdated_29(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterBeforeDnaUpdated_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterBeforeDnaUpdated_29), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterDnaUpdated_30() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___CharacterDnaUpdated_30)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterDnaUpdated_30() const { return ___CharacterDnaUpdated_30; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterDnaUpdated_30() { return &___CharacterDnaUpdated_30; }
	inline void set_CharacterDnaUpdated_30(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterDnaUpdated_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterDnaUpdated_30), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterBegun_31() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___CharacterBegun_31)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterBegun_31() const { return ___CharacterBegun_31; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterBegun_31() { return &___CharacterBegun_31; }
	inline void set_CharacterBegun_31(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterBegun_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterBegun_31), (void*)value);
	}

	inline static int32_t get_offset_of_AnimatorStateSaved_32() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___AnimatorStateSaved_32)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_AnimatorStateSaved_32() const { return ___AnimatorStateSaved_32; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_AnimatorStateSaved_32() { return &___AnimatorStateSaved_32; }
	inline void set_AnimatorStateSaved_32(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___AnimatorStateSaved_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimatorStateSaved_32), (void*)value);
	}

	inline static int32_t get_offset_of_AnimatorStateRestored_33() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___AnimatorStateRestored_33)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_AnimatorStateRestored_33() const { return ___AnimatorStateRestored_33; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_AnimatorStateRestored_33() { return &___AnimatorStateRestored_33; }
	inline void set_AnimatorStateRestored_33(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___AnimatorStateRestored_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimatorStateRestored_33), (void*)value);
	}

	inline static int32_t get_offset_of_PreUpdateUMABody_34() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___PreUpdateUMABody_34)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_PreUpdateUMABody_34() const { return ___PreUpdateUMABody_34; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_PreUpdateUMABody_34() { return &___PreUpdateUMABody_34; }
	inline void set_PreUpdateUMABody_34(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___PreUpdateUMABody_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PreUpdateUMABody_34), (void*)value);
	}

	inline static int32_t get_offset_of_umaRoot_35() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___umaRoot_35)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_umaRoot_35() const { return ___umaRoot_35; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_umaRoot_35() { return &___umaRoot_35; }
	inline void set_umaRoot_35(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___umaRoot_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaRoot_35), (void*)value);
	}

	inline static int32_t get_offset_of__umaRecipe_36() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ____umaRecipe_36)); }
	inline UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * get__umaRecipe_36() const { return ____umaRecipe_36; }
	inline UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A ** get_address_of__umaRecipe_36() { return &____umaRecipe_36; }
	inline void set__umaRecipe_36(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * value)
	{
		____umaRecipe_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____umaRecipe_36), (void*)value);
	}

	inline static int32_t get_offset_of_umaOverrideRecipe_37() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___umaOverrideRecipe_37)); }
	inline UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * get_umaOverrideRecipe_37() const { return ___umaOverrideRecipe_37; }
	inline UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A ** get_address_of_umaOverrideRecipe_37() { return &___umaOverrideRecipe_37; }
	inline void set_umaOverrideRecipe_37(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * value)
	{
		___umaOverrideRecipe_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaOverrideRecipe_37), (void*)value);
	}

	inline static int32_t get_offset_of_animator_38() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___animator_38)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_38() const { return ___animator_38; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_38() { return &___animator_38; }
	inline void set_animator_38(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_38), (void*)value);
	}

	inline static int32_t get_offset_of_skeleton_39() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___skeleton_39)); }
	inline UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * get_skeleton_39() const { return ___skeleton_39; }
	inline UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE ** get_address_of_skeleton_39() { return &___skeleton_39; }
	inline void set_skeleton_39(UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * value)
	{
		___skeleton_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skeleton_39), (void*)value);
	}

	inline static int32_t get_offset_of_KeepAvatar_40() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___KeepAvatar_40)); }
	inline bool get_KeepAvatar_40() const { return ___KeepAvatar_40; }
	inline bool* get_address_of_KeepAvatar_40() { return &___KeepAvatar_40; }
	inline void set_KeepAvatar_40(bool value)
	{
		___KeepAvatar_40 = value;
	}

	inline static int32_t get_offset_of_characterHeight_41() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___characterHeight_41)); }
	inline float get_characterHeight_41() const { return ___characterHeight_41; }
	inline float* get_address_of_characterHeight_41() { return &___characterHeight_41; }
	inline void set_characterHeight_41(float value)
	{
		___characterHeight_41 = value;
	}

	inline static int32_t get_offset_of_characterRadius_42() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___characterRadius_42)); }
	inline float get_characterRadius_42() const { return ___characterRadius_42; }
	inline float* get_address_of_characterRadius_42() { return &___characterRadius_42; }
	inline void set_characterRadius_42(float value)
	{
		___characterRadius_42 = value;
	}

	inline static int32_t get_offset_of_characterMass_43() { return static_cast<int32_t>(offsetof(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C, ___characterMass_43)); }
	inline float get_characterMass_43() const { return ___characterMass_43; }
	inline float* get_address_of_characterMass_43() { return &___characterMass_43; }
	inline void set_characterMass_43(float value)
	{
		___characterMass_43 = value;
	}
};


// UMA.HumanoidDNAConverterBehaviour
struct  HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD  : public DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6
{
public:

public:
};

struct HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields
{
public:
	// System.Boolean UMA.HumanoidDNAConverterBehaviour::builtHashes
	bool ___builtHashes_9;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::headAdjustHash
	int32_t ___headAdjustHash_10;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::neckAdjustHash
	int32_t ___neckAdjustHash_11;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftOuterBreastHash
	int32_t ___leftOuterBreastHash_12;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightOuterBreastHash
	int32_t ___rightOuterBreastHash_13;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftEyeHash
	int32_t ___leftEyeHash_14;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightEyeHash
	int32_t ___rightEyeHash_15;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftEyeAdjustHash
	int32_t ___leftEyeAdjustHash_16;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightEyeAdjustHash
	int32_t ___rightEyeAdjustHash_17;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::spine1AdjustHash
	int32_t ___spine1AdjustHash_18;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::spineAdjustHash
	int32_t ___spineAdjustHash_19;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::lowerBackBellyHash
	int32_t ___lowerBackBellyHash_20;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::lowerBackAdjustHash
	int32_t ___lowerBackAdjustHash_21;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftTrapeziusHash
	int32_t ___leftTrapeziusHash_22;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightTrapeziusHash
	int32_t ___rightTrapeziusHash_23;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftArmAdjustHash
	int32_t ___leftArmAdjustHash_24;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightArmAdjustHash
	int32_t ___rightArmAdjustHash_25;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftForeArmAdjustHash
	int32_t ___leftForeArmAdjustHash_26;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightForeArmAdjustHash
	int32_t ___rightForeArmAdjustHash_27;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftForeArmTwistAdjustHash
	int32_t ___leftForeArmTwistAdjustHash_28;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightForeArmTwistAdjustHash
	int32_t ___rightForeArmTwistAdjustHash_29;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftShoulderAdjustHash
	int32_t ___leftShoulderAdjustHash_30;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightShoulderAdjustHash
	int32_t ___rightShoulderAdjustHash_31;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftUpLegAdjustHash
	int32_t ___leftUpLegAdjustHash_32;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightUpLegAdjustHash
	int32_t ___rightUpLegAdjustHash_33;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftLegAdjustHash
	int32_t ___leftLegAdjustHash_34;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightLegAdjustHash
	int32_t ___rightLegAdjustHash_35;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftGluteusHash
	int32_t ___leftGluteusHash_36;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightGluteusHash
	int32_t ___rightGluteusHash_37;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftEarAdjustHash
	int32_t ___leftEarAdjustHash_38;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightEarAdjustHash
	int32_t ___rightEarAdjustHash_39;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::noseBaseAdjustHash
	int32_t ___noseBaseAdjustHash_40;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::noseMiddleAdjustHash
	int32_t ___noseMiddleAdjustHash_41;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftNoseAdjustHash
	int32_t ___leftNoseAdjustHash_42;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightNoseAdjustHash
	int32_t ___rightNoseAdjustHash_43;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::upperLipsAdjustHash
	int32_t ___upperLipsAdjustHash_44;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::mandibleAdjustHash
	int32_t ___mandibleAdjustHash_45;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftLowMaxilarAdjustHash
	int32_t ___leftLowMaxilarAdjustHash_46;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightLowMaxilarAdjustHash
	int32_t ___rightLowMaxilarAdjustHash_47;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftCheekAdjustHash
	int32_t ___leftCheekAdjustHash_48;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightCheekAdjustHash
	int32_t ___rightCheekAdjustHash_49;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftLowCheekAdjustHash
	int32_t ___leftLowCheekAdjustHash_50;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightLowCheekAdjustHash
	int32_t ___rightLowCheekAdjustHash_51;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::noseTopAdjustHash
	int32_t ___noseTopAdjustHash_52;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftEyebrowLowAdjustHash
	int32_t ___leftEyebrowLowAdjustHash_53;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightEyebrowLowAdjustHash
	int32_t ___rightEyebrowLowAdjustHash_54;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftEyebrowMiddleAdjustHash
	int32_t ___leftEyebrowMiddleAdjustHash_55;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightEyebrowMiddleAdjustHash
	int32_t ___rightEyebrowMiddleAdjustHash_56;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftEyebrowUpAdjustHash
	int32_t ___leftEyebrowUpAdjustHash_57;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightEyebrowUpAdjustHash
	int32_t ___rightEyebrowUpAdjustHash_58;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::lipsSuperiorAdjustHash
	int32_t ___lipsSuperiorAdjustHash_59;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::lipsInferiorAdjustHash
	int32_t ___lipsInferiorAdjustHash_60;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftLipsSuperiorMiddleAdjustHash
	int32_t ___leftLipsSuperiorMiddleAdjustHash_61;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightLipsSuperiorMiddleAdjustHash
	int32_t ___rightLipsSuperiorMiddleAdjustHash_62;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftLipsInferiorAdjustHash
	int32_t ___leftLipsInferiorAdjustHash_63;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightLipsInferiorAdjustHash
	int32_t ___rightLipsInferiorAdjustHash_64;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftLipsAdjustHash
	int32_t ___leftLipsAdjustHash_65;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightLipsAdjustHash
	int32_t ___rightLipsAdjustHash_66;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::globalHash
	int32_t ___globalHash_67;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::positionHash
	int32_t ___positionHash_68;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::lowerBackHash
	int32_t ___lowerBackHash_69;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::headHash
	int32_t ___headHash_70;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftArmHash
	int32_t ___leftArmHash_71;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightArmHash
	int32_t ___rightArmHash_72;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftForeArmHash
	int32_t ___leftForeArmHash_73;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightForeArmHash
	int32_t ___rightForeArmHash_74;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftHandHash
	int32_t ___leftHandHash_75;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightHandHash
	int32_t ___rightHandHash_76;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftFootHash
	int32_t ___leftFootHash_77;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightFootHash
	int32_t ___rightFootHash_78;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftUpLegHash
	int32_t ___leftUpLegHash_79;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightUpLegHash
	int32_t ___rightUpLegHash_80;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::leftShoulderHash
	int32_t ___leftShoulderHash_81;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::rightShoulderHash
	int32_t ___rightShoulderHash_82;
	// System.Int32 UMA.HumanoidDNAConverterBehaviour::mandibleHash
	int32_t ___mandibleHash_83;

public:
	inline static int32_t get_offset_of_builtHashes_9() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___builtHashes_9)); }
	inline bool get_builtHashes_9() const { return ___builtHashes_9; }
	inline bool* get_address_of_builtHashes_9() { return &___builtHashes_9; }
	inline void set_builtHashes_9(bool value)
	{
		___builtHashes_9 = value;
	}

	inline static int32_t get_offset_of_headAdjustHash_10() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___headAdjustHash_10)); }
	inline int32_t get_headAdjustHash_10() const { return ___headAdjustHash_10; }
	inline int32_t* get_address_of_headAdjustHash_10() { return &___headAdjustHash_10; }
	inline void set_headAdjustHash_10(int32_t value)
	{
		___headAdjustHash_10 = value;
	}

	inline static int32_t get_offset_of_neckAdjustHash_11() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___neckAdjustHash_11)); }
	inline int32_t get_neckAdjustHash_11() const { return ___neckAdjustHash_11; }
	inline int32_t* get_address_of_neckAdjustHash_11() { return &___neckAdjustHash_11; }
	inline void set_neckAdjustHash_11(int32_t value)
	{
		___neckAdjustHash_11 = value;
	}

	inline static int32_t get_offset_of_leftOuterBreastHash_12() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftOuterBreastHash_12)); }
	inline int32_t get_leftOuterBreastHash_12() const { return ___leftOuterBreastHash_12; }
	inline int32_t* get_address_of_leftOuterBreastHash_12() { return &___leftOuterBreastHash_12; }
	inline void set_leftOuterBreastHash_12(int32_t value)
	{
		___leftOuterBreastHash_12 = value;
	}

	inline static int32_t get_offset_of_rightOuterBreastHash_13() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightOuterBreastHash_13)); }
	inline int32_t get_rightOuterBreastHash_13() const { return ___rightOuterBreastHash_13; }
	inline int32_t* get_address_of_rightOuterBreastHash_13() { return &___rightOuterBreastHash_13; }
	inline void set_rightOuterBreastHash_13(int32_t value)
	{
		___rightOuterBreastHash_13 = value;
	}

	inline static int32_t get_offset_of_leftEyeHash_14() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftEyeHash_14)); }
	inline int32_t get_leftEyeHash_14() const { return ___leftEyeHash_14; }
	inline int32_t* get_address_of_leftEyeHash_14() { return &___leftEyeHash_14; }
	inline void set_leftEyeHash_14(int32_t value)
	{
		___leftEyeHash_14 = value;
	}

	inline static int32_t get_offset_of_rightEyeHash_15() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightEyeHash_15)); }
	inline int32_t get_rightEyeHash_15() const { return ___rightEyeHash_15; }
	inline int32_t* get_address_of_rightEyeHash_15() { return &___rightEyeHash_15; }
	inline void set_rightEyeHash_15(int32_t value)
	{
		___rightEyeHash_15 = value;
	}

	inline static int32_t get_offset_of_leftEyeAdjustHash_16() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftEyeAdjustHash_16)); }
	inline int32_t get_leftEyeAdjustHash_16() const { return ___leftEyeAdjustHash_16; }
	inline int32_t* get_address_of_leftEyeAdjustHash_16() { return &___leftEyeAdjustHash_16; }
	inline void set_leftEyeAdjustHash_16(int32_t value)
	{
		___leftEyeAdjustHash_16 = value;
	}

	inline static int32_t get_offset_of_rightEyeAdjustHash_17() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightEyeAdjustHash_17)); }
	inline int32_t get_rightEyeAdjustHash_17() const { return ___rightEyeAdjustHash_17; }
	inline int32_t* get_address_of_rightEyeAdjustHash_17() { return &___rightEyeAdjustHash_17; }
	inline void set_rightEyeAdjustHash_17(int32_t value)
	{
		___rightEyeAdjustHash_17 = value;
	}

	inline static int32_t get_offset_of_spine1AdjustHash_18() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___spine1AdjustHash_18)); }
	inline int32_t get_spine1AdjustHash_18() const { return ___spine1AdjustHash_18; }
	inline int32_t* get_address_of_spine1AdjustHash_18() { return &___spine1AdjustHash_18; }
	inline void set_spine1AdjustHash_18(int32_t value)
	{
		___spine1AdjustHash_18 = value;
	}

	inline static int32_t get_offset_of_spineAdjustHash_19() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___spineAdjustHash_19)); }
	inline int32_t get_spineAdjustHash_19() const { return ___spineAdjustHash_19; }
	inline int32_t* get_address_of_spineAdjustHash_19() { return &___spineAdjustHash_19; }
	inline void set_spineAdjustHash_19(int32_t value)
	{
		___spineAdjustHash_19 = value;
	}

	inline static int32_t get_offset_of_lowerBackBellyHash_20() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___lowerBackBellyHash_20)); }
	inline int32_t get_lowerBackBellyHash_20() const { return ___lowerBackBellyHash_20; }
	inline int32_t* get_address_of_lowerBackBellyHash_20() { return &___lowerBackBellyHash_20; }
	inline void set_lowerBackBellyHash_20(int32_t value)
	{
		___lowerBackBellyHash_20 = value;
	}

	inline static int32_t get_offset_of_lowerBackAdjustHash_21() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___lowerBackAdjustHash_21)); }
	inline int32_t get_lowerBackAdjustHash_21() const { return ___lowerBackAdjustHash_21; }
	inline int32_t* get_address_of_lowerBackAdjustHash_21() { return &___lowerBackAdjustHash_21; }
	inline void set_lowerBackAdjustHash_21(int32_t value)
	{
		___lowerBackAdjustHash_21 = value;
	}

	inline static int32_t get_offset_of_leftTrapeziusHash_22() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftTrapeziusHash_22)); }
	inline int32_t get_leftTrapeziusHash_22() const { return ___leftTrapeziusHash_22; }
	inline int32_t* get_address_of_leftTrapeziusHash_22() { return &___leftTrapeziusHash_22; }
	inline void set_leftTrapeziusHash_22(int32_t value)
	{
		___leftTrapeziusHash_22 = value;
	}

	inline static int32_t get_offset_of_rightTrapeziusHash_23() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightTrapeziusHash_23)); }
	inline int32_t get_rightTrapeziusHash_23() const { return ___rightTrapeziusHash_23; }
	inline int32_t* get_address_of_rightTrapeziusHash_23() { return &___rightTrapeziusHash_23; }
	inline void set_rightTrapeziusHash_23(int32_t value)
	{
		___rightTrapeziusHash_23 = value;
	}

	inline static int32_t get_offset_of_leftArmAdjustHash_24() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftArmAdjustHash_24)); }
	inline int32_t get_leftArmAdjustHash_24() const { return ___leftArmAdjustHash_24; }
	inline int32_t* get_address_of_leftArmAdjustHash_24() { return &___leftArmAdjustHash_24; }
	inline void set_leftArmAdjustHash_24(int32_t value)
	{
		___leftArmAdjustHash_24 = value;
	}

	inline static int32_t get_offset_of_rightArmAdjustHash_25() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightArmAdjustHash_25)); }
	inline int32_t get_rightArmAdjustHash_25() const { return ___rightArmAdjustHash_25; }
	inline int32_t* get_address_of_rightArmAdjustHash_25() { return &___rightArmAdjustHash_25; }
	inline void set_rightArmAdjustHash_25(int32_t value)
	{
		___rightArmAdjustHash_25 = value;
	}

	inline static int32_t get_offset_of_leftForeArmAdjustHash_26() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftForeArmAdjustHash_26)); }
	inline int32_t get_leftForeArmAdjustHash_26() const { return ___leftForeArmAdjustHash_26; }
	inline int32_t* get_address_of_leftForeArmAdjustHash_26() { return &___leftForeArmAdjustHash_26; }
	inline void set_leftForeArmAdjustHash_26(int32_t value)
	{
		___leftForeArmAdjustHash_26 = value;
	}

	inline static int32_t get_offset_of_rightForeArmAdjustHash_27() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightForeArmAdjustHash_27)); }
	inline int32_t get_rightForeArmAdjustHash_27() const { return ___rightForeArmAdjustHash_27; }
	inline int32_t* get_address_of_rightForeArmAdjustHash_27() { return &___rightForeArmAdjustHash_27; }
	inline void set_rightForeArmAdjustHash_27(int32_t value)
	{
		___rightForeArmAdjustHash_27 = value;
	}

	inline static int32_t get_offset_of_leftForeArmTwistAdjustHash_28() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftForeArmTwistAdjustHash_28)); }
	inline int32_t get_leftForeArmTwistAdjustHash_28() const { return ___leftForeArmTwistAdjustHash_28; }
	inline int32_t* get_address_of_leftForeArmTwistAdjustHash_28() { return &___leftForeArmTwistAdjustHash_28; }
	inline void set_leftForeArmTwistAdjustHash_28(int32_t value)
	{
		___leftForeArmTwistAdjustHash_28 = value;
	}

	inline static int32_t get_offset_of_rightForeArmTwistAdjustHash_29() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightForeArmTwistAdjustHash_29)); }
	inline int32_t get_rightForeArmTwistAdjustHash_29() const { return ___rightForeArmTwistAdjustHash_29; }
	inline int32_t* get_address_of_rightForeArmTwistAdjustHash_29() { return &___rightForeArmTwistAdjustHash_29; }
	inline void set_rightForeArmTwistAdjustHash_29(int32_t value)
	{
		___rightForeArmTwistAdjustHash_29 = value;
	}

	inline static int32_t get_offset_of_leftShoulderAdjustHash_30() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftShoulderAdjustHash_30)); }
	inline int32_t get_leftShoulderAdjustHash_30() const { return ___leftShoulderAdjustHash_30; }
	inline int32_t* get_address_of_leftShoulderAdjustHash_30() { return &___leftShoulderAdjustHash_30; }
	inline void set_leftShoulderAdjustHash_30(int32_t value)
	{
		___leftShoulderAdjustHash_30 = value;
	}

	inline static int32_t get_offset_of_rightShoulderAdjustHash_31() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightShoulderAdjustHash_31)); }
	inline int32_t get_rightShoulderAdjustHash_31() const { return ___rightShoulderAdjustHash_31; }
	inline int32_t* get_address_of_rightShoulderAdjustHash_31() { return &___rightShoulderAdjustHash_31; }
	inline void set_rightShoulderAdjustHash_31(int32_t value)
	{
		___rightShoulderAdjustHash_31 = value;
	}

	inline static int32_t get_offset_of_leftUpLegAdjustHash_32() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftUpLegAdjustHash_32)); }
	inline int32_t get_leftUpLegAdjustHash_32() const { return ___leftUpLegAdjustHash_32; }
	inline int32_t* get_address_of_leftUpLegAdjustHash_32() { return &___leftUpLegAdjustHash_32; }
	inline void set_leftUpLegAdjustHash_32(int32_t value)
	{
		___leftUpLegAdjustHash_32 = value;
	}

	inline static int32_t get_offset_of_rightUpLegAdjustHash_33() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightUpLegAdjustHash_33)); }
	inline int32_t get_rightUpLegAdjustHash_33() const { return ___rightUpLegAdjustHash_33; }
	inline int32_t* get_address_of_rightUpLegAdjustHash_33() { return &___rightUpLegAdjustHash_33; }
	inline void set_rightUpLegAdjustHash_33(int32_t value)
	{
		___rightUpLegAdjustHash_33 = value;
	}

	inline static int32_t get_offset_of_leftLegAdjustHash_34() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftLegAdjustHash_34)); }
	inline int32_t get_leftLegAdjustHash_34() const { return ___leftLegAdjustHash_34; }
	inline int32_t* get_address_of_leftLegAdjustHash_34() { return &___leftLegAdjustHash_34; }
	inline void set_leftLegAdjustHash_34(int32_t value)
	{
		___leftLegAdjustHash_34 = value;
	}

	inline static int32_t get_offset_of_rightLegAdjustHash_35() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightLegAdjustHash_35)); }
	inline int32_t get_rightLegAdjustHash_35() const { return ___rightLegAdjustHash_35; }
	inline int32_t* get_address_of_rightLegAdjustHash_35() { return &___rightLegAdjustHash_35; }
	inline void set_rightLegAdjustHash_35(int32_t value)
	{
		___rightLegAdjustHash_35 = value;
	}

	inline static int32_t get_offset_of_leftGluteusHash_36() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftGluteusHash_36)); }
	inline int32_t get_leftGluteusHash_36() const { return ___leftGluteusHash_36; }
	inline int32_t* get_address_of_leftGluteusHash_36() { return &___leftGluteusHash_36; }
	inline void set_leftGluteusHash_36(int32_t value)
	{
		___leftGluteusHash_36 = value;
	}

	inline static int32_t get_offset_of_rightGluteusHash_37() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightGluteusHash_37)); }
	inline int32_t get_rightGluteusHash_37() const { return ___rightGluteusHash_37; }
	inline int32_t* get_address_of_rightGluteusHash_37() { return &___rightGluteusHash_37; }
	inline void set_rightGluteusHash_37(int32_t value)
	{
		___rightGluteusHash_37 = value;
	}

	inline static int32_t get_offset_of_leftEarAdjustHash_38() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftEarAdjustHash_38)); }
	inline int32_t get_leftEarAdjustHash_38() const { return ___leftEarAdjustHash_38; }
	inline int32_t* get_address_of_leftEarAdjustHash_38() { return &___leftEarAdjustHash_38; }
	inline void set_leftEarAdjustHash_38(int32_t value)
	{
		___leftEarAdjustHash_38 = value;
	}

	inline static int32_t get_offset_of_rightEarAdjustHash_39() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightEarAdjustHash_39)); }
	inline int32_t get_rightEarAdjustHash_39() const { return ___rightEarAdjustHash_39; }
	inline int32_t* get_address_of_rightEarAdjustHash_39() { return &___rightEarAdjustHash_39; }
	inline void set_rightEarAdjustHash_39(int32_t value)
	{
		___rightEarAdjustHash_39 = value;
	}

	inline static int32_t get_offset_of_noseBaseAdjustHash_40() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___noseBaseAdjustHash_40)); }
	inline int32_t get_noseBaseAdjustHash_40() const { return ___noseBaseAdjustHash_40; }
	inline int32_t* get_address_of_noseBaseAdjustHash_40() { return &___noseBaseAdjustHash_40; }
	inline void set_noseBaseAdjustHash_40(int32_t value)
	{
		___noseBaseAdjustHash_40 = value;
	}

	inline static int32_t get_offset_of_noseMiddleAdjustHash_41() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___noseMiddleAdjustHash_41)); }
	inline int32_t get_noseMiddleAdjustHash_41() const { return ___noseMiddleAdjustHash_41; }
	inline int32_t* get_address_of_noseMiddleAdjustHash_41() { return &___noseMiddleAdjustHash_41; }
	inline void set_noseMiddleAdjustHash_41(int32_t value)
	{
		___noseMiddleAdjustHash_41 = value;
	}

	inline static int32_t get_offset_of_leftNoseAdjustHash_42() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftNoseAdjustHash_42)); }
	inline int32_t get_leftNoseAdjustHash_42() const { return ___leftNoseAdjustHash_42; }
	inline int32_t* get_address_of_leftNoseAdjustHash_42() { return &___leftNoseAdjustHash_42; }
	inline void set_leftNoseAdjustHash_42(int32_t value)
	{
		___leftNoseAdjustHash_42 = value;
	}

	inline static int32_t get_offset_of_rightNoseAdjustHash_43() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightNoseAdjustHash_43)); }
	inline int32_t get_rightNoseAdjustHash_43() const { return ___rightNoseAdjustHash_43; }
	inline int32_t* get_address_of_rightNoseAdjustHash_43() { return &___rightNoseAdjustHash_43; }
	inline void set_rightNoseAdjustHash_43(int32_t value)
	{
		___rightNoseAdjustHash_43 = value;
	}

	inline static int32_t get_offset_of_upperLipsAdjustHash_44() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___upperLipsAdjustHash_44)); }
	inline int32_t get_upperLipsAdjustHash_44() const { return ___upperLipsAdjustHash_44; }
	inline int32_t* get_address_of_upperLipsAdjustHash_44() { return &___upperLipsAdjustHash_44; }
	inline void set_upperLipsAdjustHash_44(int32_t value)
	{
		___upperLipsAdjustHash_44 = value;
	}

	inline static int32_t get_offset_of_mandibleAdjustHash_45() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___mandibleAdjustHash_45)); }
	inline int32_t get_mandibleAdjustHash_45() const { return ___mandibleAdjustHash_45; }
	inline int32_t* get_address_of_mandibleAdjustHash_45() { return &___mandibleAdjustHash_45; }
	inline void set_mandibleAdjustHash_45(int32_t value)
	{
		___mandibleAdjustHash_45 = value;
	}

	inline static int32_t get_offset_of_leftLowMaxilarAdjustHash_46() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftLowMaxilarAdjustHash_46)); }
	inline int32_t get_leftLowMaxilarAdjustHash_46() const { return ___leftLowMaxilarAdjustHash_46; }
	inline int32_t* get_address_of_leftLowMaxilarAdjustHash_46() { return &___leftLowMaxilarAdjustHash_46; }
	inline void set_leftLowMaxilarAdjustHash_46(int32_t value)
	{
		___leftLowMaxilarAdjustHash_46 = value;
	}

	inline static int32_t get_offset_of_rightLowMaxilarAdjustHash_47() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightLowMaxilarAdjustHash_47)); }
	inline int32_t get_rightLowMaxilarAdjustHash_47() const { return ___rightLowMaxilarAdjustHash_47; }
	inline int32_t* get_address_of_rightLowMaxilarAdjustHash_47() { return &___rightLowMaxilarAdjustHash_47; }
	inline void set_rightLowMaxilarAdjustHash_47(int32_t value)
	{
		___rightLowMaxilarAdjustHash_47 = value;
	}

	inline static int32_t get_offset_of_leftCheekAdjustHash_48() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftCheekAdjustHash_48)); }
	inline int32_t get_leftCheekAdjustHash_48() const { return ___leftCheekAdjustHash_48; }
	inline int32_t* get_address_of_leftCheekAdjustHash_48() { return &___leftCheekAdjustHash_48; }
	inline void set_leftCheekAdjustHash_48(int32_t value)
	{
		___leftCheekAdjustHash_48 = value;
	}

	inline static int32_t get_offset_of_rightCheekAdjustHash_49() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightCheekAdjustHash_49)); }
	inline int32_t get_rightCheekAdjustHash_49() const { return ___rightCheekAdjustHash_49; }
	inline int32_t* get_address_of_rightCheekAdjustHash_49() { return &___rightCheekAdjustHash_49; }
	inline void set_rightCheekAdjustHash_49(int32_t value)
	{
		___rightCheekAdjustHash_49 = value;
	}

	inline static int32_t get_offset_of_leftLowCheekAdjustHash_50() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftLowCheekAdjustHash_50)); }
	inline int32_t get_leftLowCheekAdjustHash_50() const { return ___leftLowCheekAdjustHash_50; }
	inline int32_t* get_address_of_leftLowCheekAdjustHash_50() { return &___leftLowCheekAdjustHash_50; }
	inline void set_leftLowCheekAdjustHash_50(int32_t value)
	{
		___leftLowCheekAdjustHash_50 = value;
	}

	inline static int32_t get_offset_of_rightLowCheekAdjustHash_51() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightLowCheekAdjustHash_51)); }
	inline int32_t get_rightLowCheekAdjustHash_51() const { return ___rightLowCheekAdjustHash_51; }
	inline int32_t* get_address_of_rightLowCheekAdjustHash_51() { return &___rightLowCheekAdjustHash_51; }
	inline void set_rightLowCheekAdjustHash_51(int32_t value)
	{
		___rightLowCheekAdjustHash_51 = value;
	}

	inline static int32_t get_offset_of_noseTopAdjustHash_52() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___noseTopAdjustHash_52)); }
	inline int32_t get_noseTopAdjustHash_52() const { return ___noseTopAdjustHash_52; }
	inline int32_t* get_address_of_noseTopAdjustHash_52() { return &___noseTopAdjustHash_52; }
	inline void set_noseTopAdjustHash_52(int32_t value)
	{
		___noseTopAdjustHash_52 = value;
	}

	inline static int32_t get_offset_of_leftEyebrowLowAdjustHash_53() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftEyebrowLowAdjustHash_53)); }
	inline int32_t get_leftEyebrowLowAdjustHash_53() const { return ___leftEyebrowLowAdjustHash_53; }
	inline int32_t* get_address_of_leftEyebrowLowAdjustHash_53() { return &___leftEyebrowLowAdjustHash_53; }
	inline void set_leftEyebrowLowAdjustHash_53(int32_t value)
	{
		___leftEyebrowLowAdjustHash_53 = value;
	}

	inline static int32_t get_offset_of_rightEyebrowLowAdjustHash_54() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightEyebrowLowAdjustHash_54)); }
	inline int32_t get_rightEyebrowLowAdjustHash_54() const { return ___rightEyebrowLowAdjustHash_54; }
	inline int32_t* get_address_of_rightEyebrowLowAdjustHash_54() { return &___rightEyebrowLowAdjustHash_54; }
	inline void set_rightEyebrowLowAdjustHash_54(int32_t value)
	{
		___rightEyebrowLowAdjustHash_54 = value;
	}

	inline static int32_t get_offset_of_leftEyebrowMiddleAdjustHash_55() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftEyebrowMiddleAdjustHash_55)); }
	inline int32_t get_leftEyebrowMiddleAdjustHash_55() const { return ___leftEyebrowMiddleAdjustHash_55; }
	inline int32_t* get_address_of_leftEyebrowMiddleAdjustHash_55() { return &___leftEyebrowMiddleAdjustHash_55; }
	inline void set_leftEyebrowMiddleAdjustHash_55(int32_t value)
	{
		___leftEyebrowMiddleAdjustHash_55 = value;
	}

	inline static int32_t get_offset_of_rightEyebrowMiddleAdjustHash_56() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightEyebrowMiddleAdjustHash_56)); }
	inline int32_t get_rightEyebrowMiddleAdjustHash_56() const { return ___rightEyebrowMiddleAdjustHash_56; }
	inline int32_t* get_address_of_rightEyebrowMiddleAdjustHash_56() { return &___rightEyebrowMiddleAdjustHash_56; }
	inline void set_rightEyebrowMiddleAdjustHash_56(int32_t value)
	{
		___rightEyebrowMiddleAdjustHash_56 = value;
	}

	inline static int32_t get_offset_of_leftEyebrowUpAdjustHash_57() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftEyebrowUpAdjustHash_57)); }
	inline int32_t get_leftEyebrowUpAdjustHash_57() const { return ___leftEyebrowUpAdjustHash_57; }
	inline int32_t* get_address_of_leftEyebrowUpAdjustHash_57() { return &___leftEyebrowUpAdjustHash_57; }
	inline void set_leftEyebrowUpAdjustHash_57(int32_t value)
	{
		___leftEyebrowUpAdjustHash_57 = value;
	}

	inline static int32_t get_offset_of_rightEyebrowUpAdjustHash_58() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightEyebrowUpAdjustHash_58)); }
	inline int32_t get_rightEyebrowUpAdjustHash_58() const { return ___rightEyebrowUpAdjustHash_58; }
	inline int32_t* get_address_of_rightEyebrowUpAdjustHash_58() { return &___rightEyebrowUpAdjustHash_58; }
	inline void set_rightEyebrowUpAdjustHash_58(int32_t value)
	{
		___rightEyebrowUpAdjustHash_58 = value;
	}

	inline static int32_t get_offset_of_lipsSuperiorAdjustHash_59() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___lipsSuperiorAdjustHash_59)); }
	inline int32_t get_lipsSuperiorAdjustHash_59() const { return ___lipsSuperiorAdjustHash_59; }
	inline int32_t* get_address_of_lipsSuperiorAdjustHash_59() { return &___lipsSuperiorAdjustHash_59; }
	inline void set_lipsSuperiorAdjustHash_59(int32_t value)
	{
		___lipsSuperiorAdjustHash_59 = value;
	}

	inline static int32_t get_offset_of_lipsInferiorAdjustHash_60() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___lipsInferiorAdjustHash_60)); }
	inline int32_t get_lipsInferiorAdjustHash_60() const { return ___lipsInferiorAdjustHash_60; }
	inline int32_t* get_address_of_lipsInferiorAdjustHash_60() { return &___lipsInferiorAdjustHash_60; }
	inline void set_lipsInferiorAdjustHash_60(int32_t value)
	{
		___lipsInferiorAdjustHash_60 = value;
	}

	inline static int32_t get_offset_of_leftLipsSuperiorMiddleAdjustHash_61() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftLipsSuperiorMiddleAdjustHash_61)); }
	inline int32_t get_leftLipsSuperiorMiddleAdjustHash_61() const { return ___leftLipsSuperiorMiddleAdjustHash_61; }
	inline int32_t* get_address_of_leftLipsSuperiorMiddleAdjustHash_61() { return &___leftLipsSuperiorMiddleAdjustHash_61; }
	inline void set_leftLipsSuperiorMiddleAdjustHash_61(int32_t value)
	{
		___leftLipsSuperiorMiddleAdjustHash_61 = value;
	}

	inline static int32_t get_offset_of_rightLipsSuperiorMiddleAdjustHash_62() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightLipsSuperiorMiddleAdjustHash_62)); }
	inline int32_t get_rightLipsSuperiorMiddleAdjustHash_62() const { return ___rightLipsSuperiorMiddleAdjustHash_62; }
	inline int32_t* get_address_of_rightLipsSuperiorMiddleAdjustHash_62() { return &___rightLipsSuperiorMiddleAdjustHash_62; }
	inline void set_rightLipsSuperiorMiddleAdjustHash_62(int32_t value)
	{
		___rightLipsSuperiorMiddleAdjustHash_62 = value;
	}

	inline static int32_t get_offset_of_leftLipsInferiorAdjustHash_63() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftLipsInferiorAdjustHash_63)); }
	inline int32_t get_leftLipsInferiorAdjustHash_63() const { return ___leftLipsInferiorAdjustHash_63; }
	inline int32_t* get_address_of_leftLipsInferiorAdjustHash_63() { return &___leftLipsInferiorAdjustHash_63; }
	inline void set_leftLipsInferiorAdjustHash_63(int32_t value)
	{
		___leftLipsInferiorAdjustHash_63 = value;
	}

	inline static int32_t get_offset_of_rightLipsInferiorAdjustHash_64() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightLipsInferiorAdjustHash_64)); }
	inline int32_t get_rightLipsInferiorAdjustHash_64() const { return ___rightLipsInferiorAdjustHash_64; }
	inline int32_t* get_address_of_rightLipsInferiorAdjustHash_64() { return &___rightLipsInferiorAdjustHash_64; }
	inline void set_rightLipsInferiorAdjustHash_64(int32_t value)
	{
		___rightLipsInferiorAdjustHash_64 = value;
	}

	inline static int32_t get_offset_of_leftLipsAdjustHash_65() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftLipsAdjustHash_65)); }
	inline int32_t get_leftLipsAdjustHash_65() const { return ___leftLipsAdjustHash_65; }
	inline int32_t* get_address_of_leftLipsAdjustHash_65() { return &___leftLipsAdjustHash_65; }
	inline void set_leftLipsAdjustHash_65(int32_t value)
	{
		___leftLipsAdjustHash_65 = value;
	}

	inline static int32_t get_offset_of_rightLipsAdjustHash_66() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightLipsAdjustHash_66)); }
	inline int32_t get_rightLipsAdjustHash_66() const { return ___rightLipsAdjustHash_66; }
	inline int32_t* get_address_of_rightLipsAdjustHash_66() { return &___rightLipsAdjustHash_66; }
	inline void set_rightLipsAdjustHash_66(int32_t value)
	{
		___rightLipsAdjustHash_66 = value;
	}

	inline static int32_t get_offset_of_globalHash_67() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___globalHash_67)); }
	inline int32_t get_globalHash_67() const { return ___globalHash_67; }
	inline int32_t* get_address_of_globalHash_67() { return &___globalHash_67; }
	inline void set_globalHash_67(int32_t value)
	{
		___globalHash_67 = value;
	}

	inline static int32_t get_offset_of_positionHash_68() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___positionHash_68)); }
	inline int32_t get_positionHash_68() const { return ___positionHash_68; }
	inline int32_t* get_address_of_positionHash_68() { return &___positionHash_68; }
	inline void set_positionHash_68(int32_t value)
	{
		___positionHash_68 = value;
	}

	inline static int32_t get_offset_of_lowerBackHash_69() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___lowerBackHash_69)); }
	inline int32_t get_lowerBackHash_69() const { return ___lowerBackHash_69; }
	inline int32_t* get_address_of_lowerBackHash_69() { return &___lowerBackHash_69; }
	inline void set_lowerBackHash_69(int32_t value)
	{
		___lowerBackHash_69 = value;
	}

	inline static int32_t get_offset_of_headHash_70() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___headHash_70)); }
	inline int32_t get_headHash_70() const { return ___headHash_70; }
	inline int32_t* get_address_of_headHash_70() { return &___headHash_70; }
	inline void set_headHash_70(int32_t value)
	{
		___headHash_70 = value;
	}

	inline static int32_t get_offset_of_leftArmHash_71() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftArmHash_71)); }
	inline int32_t get_leftArmHash_71() const { return ___leftArmHash_71; }
	inline int32_t* get_address_of_leftArmHash_71() { return &___leftArmHash_71; }
	inline void set_leftArmHash_71(int32_t value)
	{
		___leftArmHash_71 = value;
	}

	inline static int32_t get_offset_of_rightArmHash_72() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightArmHash_72)); }
	inline int32_t get_rightArmHash_72() const { return ___rightArmHash_72; }
	inline int32_t* get_address_of_rightArmHash_72() { return &___rightArmHash_72; }
	inline void set_rightArmHash_72(int32_t value)
	{
		___rightArmHash_72 = value;
	}

	inline static int32_t get_offset_of_leftForeArmHash_73() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftForeArmHash_73)); }
	inline int32_t get_leftForeArmHash_73() const { return ___leftForeArmHash_73; }
	inline int32_t* get_address_of_leftForeArmHash_73() { return &___leftForeArmHash_73; }
	inline void set_leftForeArmHash_73(int32_t value)
	{
		___leftForeArmHash_73 = value;
	}

	inline static int32_t get_offset_of_rightForeArmHash_74() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightForeArmHash_74)); }
	inline int32_t get_rightForeArmHash_74() const { return ___rightForeArmHash_74; }
	inline int32_t* get_address_of_rightForeArmHash_74() { return &___rightForeArmHash_74; }
	inline void set_rightForeArmHash_74(int32_t value)
	{
		___rightForeArmHash_74 = value;
	}

	inline static int32_t get_offset_of_leftHandHash_75() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftHandHash_75)); }
	inline int32_t get_leftHandHash_75() const { return ___leftHandHash_75; }
	inline int32_t* get_address_of_leftHandHash_75() { return &___leftHandHash_75; }
	inline void set_leftHandHash_75(int32_t value)
	{
		___leftHandHash_75 = value;
	}

	inline static int32_t get_offset_of_rightHandHash_76() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightHandHash_76)); }
	inline int32_t get_rightHandHash_76() const { return ___rightHandHash_76; }
	inline int32_t* get_address_of_rightHandHash_76() { return &___rightHandHash_76; }
	inline void set_rightHandHash_76(int32_t value)
	{
		___rightHandHash_76 = value;
	}

	inline static int32_t get_offset_of_leftFootHash_77() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftFootHash_77)); }
	inline int32_t get_leftFootHash_77() const { return ___leftFootHash_77; }
	inline int32_t* get_address_of_leftFootHash_77() { return &___leftFootHash_77; }
	inline void set_leftFootHash_77(int32_t value)
	{
		___leftFootHash_77 = value;
	}

	inline static int32_t get_offset_of_rightFootHash_78() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightFootHash_78)); }
	inline int32_t get_rightFootHash_78() const { return ___rightFootHash_78; }
	inline int32_t* get_address_of_rightFootHash_78() { return &___rightFootHash_78; }
	inline void set_rightFootHash_78(int32_t value)
	{
		___rightFootHash_78 = value;
	}

	inline static int32_t get_offset_of_leftUpLegHash_79() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftUpLegHash_79)); }
	inline int32_t get_leftUpLegHash_79() const { return ___leftUpLegHash_79; }
	inline int32_t* get_address_of_leftUpLegHash_79() { return &___leftUpLegHash_79; }
	inline void set_leftUpLegHash_79(int32_t value)
	{
		___leftUpLegHash_79 = value;
	}

	inline static int32_t get_offset_of_rightUpLegHash_80() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightUpLegHash_80)); }
	inline int32_t get_rightUpLegHash_80() const { return ___rightUpLegHash_80; }
	inline int32_t* get_address_of_rightUpLegHash_80() { return &___rightUpLegHash_80; }
	inline void set_rightUpLegHash_80(int32_t value)
	{
		___rightUpLegHash_80 = value;
	}

	inline static int32_t get_offset_of_leftShoulderHash_81() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___leftShoulderHash_81)); }
	inline int32_t get_leftShoulderHash_81() const { return ___leftShoulderHash_81; }
	inline int32_t* get_address_of_leftShoulderHash_81() { return &___leftShoulderHash_81; }
	inline void set_leftShoulderHash_81(int32_t value)
	{
		___leftShoulderHash_81 = value;
	}

	inline static int32_t get_offset_of_rightShoulderHash_82() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___rightShoulderHash_82)); }
	inline int32_t get_rightShoulderHash_82() const { return ___rightShoulderHash_82; }
	inline int32_t* get_address_of_rightShoulderHash_82() { return &___rightShoulderHash_82; }
	inline void set_rightShoulderHash_82(int32_t value)
	{
		___rightShoulderHash_82 = value;
	}

	inline static int32_t get_offset_of_mandibleHash_83() { return static_cast<int32_t>(offsetof(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields, ___mandibleHash_83)); }
	inline int32_t get_mandibleHash_83() const { return ___mandibleHash_83; }
	inline int32_t* get_address_of_mandibleHash_83() { return &___mandibleHash_83; }
	inline void set_mandibleHash_83(int32_t value)
	{
		___mandibleHash_83 = value;
	}
};


// UMA.PoseTools.UMAExpressionPlayer
struct  UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68  : public ExpressionPlayer_t83353F3C0E81CC32AC97411757CFDA077C51F905
{
public:
	// UMA.PoseTools.UMAExpressionSet UMA.PoseTools.UMAExpressionPlayer::expressionSet
	UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * ___expressionSet_72;
	// System.Single UMA.PoseTools.UMAExpressionPlayer::minWeight
	float ___minWeight_73;
	// UMA.UMAData UMA.PoseTools.UMAExpressionPlayer::umaData
	UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData_74;
	// System.Int32 UMA.PoseTools.UMAExpressionPlayer::jawHash
	int32_t ___jawHash_75;
	// System.Int32 UMA.PoseTools.UMAExpressionPlayer::neckHash
	int32_t ___neckHash_76;
	// System.Int32 UMA.PoseTools.UMAExpressionPlayer::headHash
	int32_t ___headHash_77;
	// System.Boolean UMA.PoseTools.UMAExpressionPlayer::initialized
	bool ___initialized_78;
	// System.Int32 UMA.PoseTools.UMAExpressionPlayer::SlotUpdateVsCharacterUpdate
	int32_t ___SlotUpdateVsCharacterUpdate_79;
	// System.Boolean UMA.PoseTools.UMAExpressionPlayer::logResetErrors
	bool ___logResetErrors_80;
	// System.Boolean UMA.PoseTools.UMAExpressionPlayer::useDisableDistance
	bool ___useDisableDistance_81;
	// System.Boolean UMA.PoseTools.UMAExpressionPlayer::processing
	bool ___processing_82;
	// System.Boolean UMA.PoseTools.UMAExpressionPlayer::EventsAdded
	bool ___EventsAdded_83;
	// System.Single UMA.PoseTools.UMAExpressionPlayer::disableDistance
	float ___disableDistance_84;
	// UnityEngine.Transform UMA.PoseTools.UMAExpressionPlayer::_mainCameraTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ____mainCameraTransform_85;
	// UMA.CharacterSystem.DynamicCharacterAvatar UMA.PoseTools.UMAExpressionPlayer::avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___avatar_86;
	// System.Single UMA.PoseTools.UMAExpressionPlayer::eyeMovementRange
	float ___eyeMovementRange_87;
	// System.Single UMA.PoseTools.UMAExpressionPlayer::mutualGazeRange
	float ___mutualGazeRange_88;
	// System.Single UMA.PoseTools.UMAExpressionPlayer::MinSaccadeDelay
	float ___MinSaccadeDelay_89;
	// System.Single UMA.PoseTools.UMAExpressionPlayer::MaxSaccadeMagnitude
	float ___MaxSaccadeMagnitude_90;
	// UnityEngine.Animator UMA.PoseTools.UMAExpressionPlayer::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_91;
	// System.Single[] UMA.PoseTools.UMAExpressionPlayer::LastValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___LastValues_92;
	// UMA.UMAExpressionEvent UMA.PoseTools.UMAExpressionPlayer::ExpressionChanged
	UMAExpressionEvent_t4D2610DE669A5E2F7B5FFE11148303C37B28AC1E * ___ExpressionChanged_93;

public:
	inline static int32_t get_offset_of_expressionSet_72() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___expressionSet_72)); }
	inline UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * get_expressionSet_72() const { return ___expressionSet_72; }
	inline UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 ** get_address_of_expressionSet_72() { return &___expressionSet_72; }
	inline void set_expressionSet_72(UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * value)
	{
		___expressionSet_72 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___expressionSet_72), (void*)value);
	}

	inline static int32_t get_offset_of_minWeight_73() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___minWeight_73)); }
	inline float get_minWeight_73() const { return ___minWeight_73; }
	inline float* get_address_of_minWeight_73() { return &___minWeight_73; }
	inline void set_minWeight_73(float value)
	{
		___minWeight_73 = value;
	}

	inline static int32_t get_offset_of_umaData_74() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___umaData_74)); }
	inline UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * get_umaData_74() const { return ___umaData_74; }
	inline UMAData_t696E4E970704E7893146E28998A230A9F2947B3C ** get_address_of_umaData_74() { return &___umaData_74; }
	inline void set_umaData_74(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * value)
	{
		___umaData_74 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaData_74), (void*)value);
	}

	inline static int32_t get_offset_of_jawHash_75() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___jawHash_75)); }
	inline int32_t get_jawHash_75() const { return ___jawHash_75; }
	inline int32_t* get_address_of_jawHash_75() { return &___jawHash_75; }
	inline void set_jawHash_75(int32_t value)
	{
		___jawHash_75 = value;
	}

	inline static int32_t get_offset_of_neckHash_76() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___neckHash_76)); }
	inline int32_t get_neckHash_76() const { return ___neckHash_76; }
	inline int32_t* get_address_of_neckHash_76() { return &___neckHash_76; }
	inline void set_neckHash_76(int32_t value)
	{
		___neckHash_76 = value;
	}

	inline static int32_t get_offset_of_headHash_77() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___headHash_77)); }
	inline int32_t get_headHash_77() const { return ___headHash_77; }
	inline int32_t* get_address_of_headHash_77() { return &___headHash_77; }
	inline void set_headHash_77(int32_t value)
	{
		___headHash_77 = value;
	}

	inline static int32_t get_offset_of_initialized_78() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___initialized_78)); }
	inline bool get_initialized_78() const { return ___initialized_78; }
	inline bool* get_address_of_initialized_78() { return &___initialized_78; }
	inline void set_initialized_78(bool value)
	{
		___initialized_78 = value;
	}

	inline static int32_t get_offset_of_SlotUpdateVsCharacterUpdate_79() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___SlotUpdateVsCharacterUpdate_79)); }
	inline int32_t get_SlotUpdateVsCharacterUpdate_79() const { return ___SlotUpdateVsCharacterUpdate_79; }
	inline int32_t* get_address_of_SlotUpdateVsCharacterUpdate_79() { return &___SlotUpdateVsCharacterUpdate_79; }
	inline void set_SlotUpdateVsCharacterUpdate_79(int32_t value)
	{
		___SlotUpdateVsCharacterUpdate_79 = value;
	}

	inline static int32_t get_offset_of_logResetErrors_80() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___logResetErrors_80)); }
	inline bool get_logResetErrors_80() const { return ___logResetErrors_80; }
	inline bool* get_address_of_logResetErrors_80() { return &___logResetErrors_80; }
	inline void set_logResetErrors_80(bool value)
	{
		___logResetErrors_80 = value;
	}

	inline static int32_t get_offset_of_useDisableDistance_81() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___useDisableDistance_81)); }
	inline bool get_useDisableDistance_81() const { return ___useDisableDistance_81; }
	inline bool* get_address_of_useDisableDistance_81() { return &___useDisableDistance_81; }
	inline void set_useDisableDistance_81(bool value)
	{
		___useDisableDistance_81 = value;
	}

	inline static int32_t get_offset_of_processing_82() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___processing_82)); }
	inline bool get_processing_82() const { return ___processing_82; }
	inline bool* get_address_of_processing_82() { return &___processing_82; }
	inline void set_processing_82(bool value)
	{
		___processing_82 = value;
	}

	inline static int32_t get_offset_of_EventsAdded_83() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___EventsAdded_83)); }
	inline bool get_EventsAdded_83() const { return ___EventsAdded_83; }
	inline bool* get_address_of_EventsAdded_83() { return &___EventsAdded_83; }
	inline void set_EventsAdded_83(bool value)
	{
		___EventsAdded_83 = value;
	}

	inline static int32_t get_offset_of_disableDistance_84() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___disableDistance_84)); }
	inline float get_disableDistance_84() const { return ___disableDistance_84; }
	inline float* get_address_of_disableDistance_84() { return &___disableDistance_84; }
	inline void set_disableDistance_84(float value)
	{
		___disableDistance_84 = value;
	}

	inline static int32_t get_offset_of__mainCameraTransform_85() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ____mainCameraTransform_85)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get__mainCameraTransform_85() const { return ____mainCameraTransform_85; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of__mainCameraTransform_85() { return &____mainCameraTransform_85; }
	inline void set__mainCameraTransform_85(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		____mainCameraTransform_85 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____mainCameraTransform_85), (void*)value);
	}

	inline static int32_t get_offset_of_avatar_86() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___avatar_86)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_avatar_86() const { return ___avatar_86; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_avatar_86() { return &___avatar_86; }
	inline void set_avatar_86(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___avatar_86 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatar_86), (void*)value);
	}

	inline static int32_t get_offset_of_eyeMovementRange_87() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___eyeMovementRange_87)); }
	inline float get_eyeMovementRange_87() const { return ___eyeMovementRange_87; }
	inline float* get_address_of_eyeMovementRange_87() { return &___eyeMovementRange_87; }
	inline void set_eyeMovementRange_87(float value)
	{
		___eyeMovementRange_87 = value;
	}

	inline static int32_t get_offset_of_mutualGazeRange_88() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___mutualGazeRange_88)); }
	inline float get_mutualGazeRange_88() const { return ___mutualGazeRange_88; }
	inline float* get_address_of_mutualGazeRange_88() { return &___mutualGazeRange_88; }
	inline void set_mutualGazeRange_88(float value)
	{
		___mutualGazeRange_88 = value;
	}

	inline static int32_t get_offset_of_MinSaccadeDelay_89() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___MinSaccadeDelay_89)); }
	inline float get_MinSaccadeDelay_89() const { return ___MinSaccadeDelay_89; }
	inline float* get_address_of_MinSaccadeDelay_89() { return &___MinSaccadeDelay_89; }
	inline void set_MinSaccadeDelay_89(float value)
	{
		___MinSaccadeDelay_89 = value;
	}

	inline static int32_t get_offset_of_MaxSaccadeMagnitude_90() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___MaxSaccadeMagnitude_90)); }
	inline float get_MaxSaccadeMagnitude_90() const { return ___MaxSaccadeMagnitude_90; }
	inline float* get_address_of_MaxSaccadeMagnitude_90() { return &___MaxSaccadeMagnitude_90; }
	inline void set_MaxSaccadeMagnitude_90(float value)
	{
		___MaxSaccadeMagnitude_90 = value;
	}

	inline static int32_t get_offset_of_animator_91() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___animator_91)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_91() const { return ___animator_91; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_91() { return &___animator_91; }
	inline void set_animator_91(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_91 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_91), (void*)value);
	}

	inline static int32_t get_offset_of_LastValues_92() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___LastValues_92)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_LastValues_92() const { return ___LastValues_92; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_LastValues_92() { return &___LastValues_92; }
	inline void set_LastValues_92(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___LastValues_92 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LastValues_92), (void*)value);
	}

	inline static int32_t get_offset_of_ExpressionChanged_93() { return static_cast<int32_t>(offsetof(UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68, ___ExpressionChanged_93)); }
	inline UMAExpressionEvent_t4D2610DE669A5E2F7B5FFE11148303C37B28AC1E * get_ExpressionChanged_93() const { return ___ExpressionChanged_93; }
	inline UMAExpressionEvent_t4D2610DE669A5E2F7B5FFE11148303C37B28AC1E ** get_address_of_ExpressionChanged_93() { return &___ExpressionChanged_93; }
	inline void set_ExpressionChanged_93(UMAExpressionEvent_t4D2610DE669A5E2F7B5FFE11148303C37B28AC1E * value)
	{
		___ExpressionChanged_93 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ExpressionChanged_93), (void*)value);
	}
};


// UMA.HumanFemaleDNAConverterBehaviour
struct  HumanFemaleDNAConverterBehaviour_t08D66080D8F6149AD598A5AB468F4C3CCFC9A612  : public HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD
{
public:

public:
};


// UMA.HumanMaleDNAConverterBehaviour
struct  HumanMaleDNAConverterBehaviour_t881F394515FB96ABD3724D7A5D54AD405AB444F5  : public HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared (UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<System.Object>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared (UnityEvent_1_t32063FE815890FF672DF76288FAC4ABE089B899F * __this, UnityAction_1_t00EE92422CBB066CEAB95CDDBF901E2967EC7B1A * ___call0, const RuntimeMethod* method);
// !!0 UMA.UMAData::GetDna<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UMAData_GetDna_TisRuntimeObject_mD07A7F88E5DE035EDDE3957A8197799DA252CC5A_gshared (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * __this, const RuntimeMethod* method);

// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.Rigidbody>()
inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Rigidbody::set_constraints(UnityEngine.RigidbodyConstraints)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1 (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody::set_mass(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody_set_mass_m54FCACE073F5E7742DB1D7C0BA19CD0C0F3DDA3F (Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * __this, float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * GameObject_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m6EBBC2FEDBA32E3404BD034FD75FB37DFDFF0C95 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// UMA.UMAData/UMARecipe UMA.UMAData::get_umaRecipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35 (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.CapsuleCollider>()
inline CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * GameObject_AddComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m4C7B5A06C8B2205403103DE818227089B02E05E0 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_radius(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_radius_mD4502A8676AAC093F1E9958FB7D5D765EA206432 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_height(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, float ___value0, const RuntimeMethod* method);
// System.Single UnityEngine.CapsuleCollider::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526 (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.CapsuleCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleCollider_set_center_m36F35F070DFC2CBFC87532004073CA8D56F3678F (CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UnityEngine.BoxCollider>()
inline BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.SkinnedMeshRenderer UMA.UMAData::GetRenderer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * UMAData_GetRenderer_m4903131B129A523A15F8D692976DFD687F6DBACA (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * __this, int32_t ___idx0, const RuntimeMethod* method);
// UnityEngine.Bounds UnityEngine.Renderer::get_bounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097 (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::set_size(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_size_mD9153B4AE4C366ACAB9E5F49075D919A89168B2E (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485 (Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.BoxCollider::set_center(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxCollider_set_center_m02D745E759A66BBEF405D33CE4ACE34B7E064178 (BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UMA.PoseTools.UMAExpressionPlayer>()
inline UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199 (RuntimeObject * ___message0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___context1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UMA.PoseTools.UMAExpressionPlayer>()
inline UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * GameObject_AddComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_mF47859E225CAD91D6F8546CED8F01874504B9409 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void UnityEngine.Events.UnityAction`1<UMA.UMAData>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m26E27A4EE35C3FF6DC17C1247D0D7DE1569E97EB (UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 *, RuntimeObject *, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_mDACAB67F7E76FF788C30CA0E51BF3274666F951E_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityEvent`1<UMA.UMAData>::AddListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_AddListener_mA64241CBD6FBB5A7AAD577AD657C8444124B7C5B (UnityEvent_1_tB6040BFF4F07107C0EAAF4F259490C24063254D4 * __this, UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB6040BFF4F07107C0EAAF4F259490C24063254D4 *, UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 *, const RuntimeMethod*))UnityEvent_1_AddListener_m14DAE292BCF77B088359410E4C12071936DB681D_gshared)(__this, ___call0, method);
}
// System.Int32[] UMA.PoseTools.UMAExpressionSet::GetAnimatedBoneHashes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* UMAExpressionSet_GetAnimatedBoneHashes_m3ED47CACB8BF8B13C0F521F42744FE78C0695CB9 (UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * __this, const RuntimeMethod* method);
// System.Void UMA.UMAUtils::DestroySceneObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMAUtils_DestroySceneObject_m53E185DA7317A05369247518903C2D420A9565C9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Void UnityEngine.Events.UnityEvent`1<UMA.UMAData>::RemoveListener(UnityEngine.Events.UnityAction`1<!0>)
inline void UnityEvent_1_RemoveListener_m340E1C16EB47D8D7222F1A909FBE2A719D54B23C (UnityEvent_1_tB6040BFF4F07107C0EAAF4F259490C24063254D4 * __this, UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 * ___call0, const RuntimeMethod* method)
{
	((  void (*) (UnityEvent_1_tB6040BFF4F07107C0EAAF4F259490C24063254D4 *, UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 *, const RuntimeMethod*))UnityEvent_1_RemoveListener_m793372F5AF1175F5DD348F908874E7D607B16DBD_gshared)(__this, ___call0, method);
}
// System.Int32 UMA.UMAUtils::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject UMA.UMAData::GetBoneGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82 (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * __this, int32_t ___boneHash0, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UMA.TwistBones>()
inline TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UMA.HumanoidDNAConverterBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanoidDNAConverterBehaviour__ctor_m5E219325116E4581A0C08F6379FB9CC67C8F88AC (HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD * __this, const RuntimeMethod* method);
// System.Void UMA.DNAConvertDelegate::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DNAConvertDelegate__ctor_m952F609FDE4CAF628B38C5FF085DF5DE512D57CF (DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UMA.DnaConverterBehaviour::set_ApplyDnaAction(UMA.DNAConvertDelegate)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnaConverterBehaviour_set_ApplyDnaAction_m109107C3682D965772496EB3AA7DB43C0FA0CF21_inline (DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6 * __this, DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * ___value0, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Void UMA.DnaConverterBehaviour::set_DNAType(System.Type)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnaConverterBehaviour_set_DNAType_m95AB815DF252C02BBA9A0926B3F0C918019FC497_inline (DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6 * __this, Type_t * ___value0, const RuntimeMethod* method);
// !!0 UMA.UMAData::GetDna<UMA.UMADnaHumanoid>()
inline UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * UMAData_GetDna_TisUMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_m1EB03CCC9ED0211434198721DCF67EF43E8AB409 (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * __this, const RuntimeMethod* method)
{
	return ((  UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * (*) (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C *, const RuntimeMethod*))UMAData_GetDna_TisRuntimeObject_mD07A7F88E5DE035EDDE3957A8197799DA252CC5A_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mathf::Clamp(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C (int32_t ___value0, int32_t ___min1, int32_t ___max2, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___euler0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Int32 UnityEngine.Animator::get_layerCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetLayerWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetLayerWeight_mFC527EAF68AAA25156B5A5B838FB9AB7231DDDF7 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, int32_t ___layerIndex0, float ___weight1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Single UnityEngine.Input::GetAxis(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326 (String_t* ___axisName0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetFloat(System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetFloat_mA337A8EB0C377B41EAB2FAFC01320F9FD2DC6ED3 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, float ___value1, float ___dampTime2, float ___deltaTime3, const RuntimeMethod* method);
// UnityEngine.Collider UnityEngine.Collision::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8 (Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UMA.Examples.Locomotion>()
inline Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * Component_GetComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m5B078D319D4F6952735EDADA57E9F154F8D8F23A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.GameObject::AddComponent<UMA.Examples.Locomotion>()
inline Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * GameObject_AddComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m42C702C12C4EB19C03766DAF7282545805022F50 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
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
// System.Void UMA.CapsuleColliderSlotScript::OnDnaApplied(UMA.UMAData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleColliderSlotScript_OnDnaApplied_mF0CE720CD0BF0D53D4865918D542BA46C2246FCA (CapsuleColliderSlotScript_t92F670AAA36FB908BDB3DC7A959E0C553462C7DD * __this, UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m4C7B5A06C8B2205403103DE818227089B02E05E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m6EBBC2FEDBA32E3404BD034FD75FB37DFDFF0C95_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * V_0 = NULL;
	CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * V_1 = NULL;
	BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * V_2 = NULL;
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * V_3 = NULL;
	Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// var rigid = umaData.gameObject.GetComponent<Rigidbody>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_0 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_2;
		L_2 = GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354(L_1, /*hidden argument*/GameObject_GetComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_mA1779277BB07CE3D2CB8E340CEA85C40C6B52354_RuntimeMethod_var);
		V_0 = L_2;
		// if (rigid == null)
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}
	{
		// rigid = umaData.gameObject.AddComponent<Rigidbody>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_5 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_7;
		L_7 = GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0(L_6, /*hidden argument*/GameObject_AddComponent_TisRigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A_m8A7C1E803E270C9EF2DA310339083AE5271AF9B0_RuntimeMethod_var);
		V_0 = L_7;
	}

IL_0021:
	{
		// rigid.constraints = RigidbodyConstraints.FreezeRotation;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_8 = V_0;
		Rigidbody_set_constraints_mA76F562D16D3BE8889E095D0309C8FE38DA914F1(L_8, ((int32_t)112), /*hidden argument*/NULL);
		// rigid.mass = umaData.characterMass;
		Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * L_9 = V_0;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_10 = ___umaData0;
		float L_11 = L_10->get_characterMass_43();
		Rigidbody_set_mass_m54FCACE073F5E7742DB1D7C0BA19CD0C0F3DDA3F(L_9, L_11, /*hidden argument*/NULL);
		// CapsuleCollider capsule = umaData.gameObject.GetComponent<CapsuleCollider>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_12 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_14;
		L_14 = GameObject_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m6EBBC2FEDBA32E3404BD034FD75FB37DFDFF0C95(L_13, /*hidden argument*/GameObject_GetComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m6EBBC2FEDBA32E3404BD034FD75FB37DFDFF0C95_RuntimeMethod_var);
		V_1 = L_14;
		// BoxCollider box = umaData.gameObject.GetComponent<BoxCollider>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_15 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_15, /*hidden argument*/NULL);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_17;
		L_17 = GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF(L_16, /*hidden argument*/GameObject_GetComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_m106D19D2AB9862E4B35BBBCF1A510C4A16C928FF_RuntimeMethod_var);
		V_2 = L_17;
		// if(umaData.umaRecipe.raceData.umaTarget == RaceData.UMATarget.Humanoid)
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_18 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_19;
		L_19 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_18, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_20 = L_19->get_raceData_0();
		int32_t L_21 = L_20->get_umaTarget_20();
		if (L_21)
		{
			goto IL_00bd;
		}
	}
	{
		// if (capsule == null)
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_22 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_22, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_23)
		{
			goto IL_0074;
		}
	}
	{
		// capsule = umaData.gameObject.AddComponent<CapsuleCollider>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_24 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_24, /*hidden argument*/NULL);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_26;
		L_26 = GameObject_AddComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m4C7B5A06C8B2205403103DE818227089B02E05E0(L_25, /*hidden argument*/GameObject_AddComponent_TisCapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635_m4C7B5A06C8B2205403103DE818227089B02E05E0_RuntimeMethod_var);
		V_1 = L_26;
	}

IL_0074:
	{
		// if( box != null )
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_27 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0083;
		}
	}
	{
		// Destroy(box);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_29 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_29, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// capsule.radius = umaData.characterRadius;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_30 = V_1;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_31 = ___umaData0;
		float L_32 = L_31->get_characterRadius_42();
		CapsuleCollider_set_radius_mD4502A8676AAC093F1E9958FB7D5D765EA206432(L_30, L_32, /*hidden argument*/NULL);
		// capsule.height = umaData.characterHeight;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_33 = V_1;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_34 = ___umaData0;
		float L_35 = L_34->get_characterHeight_41();
		CapsuleCollider_set_height_m728C9AF3772EEC1DA9845E19F3C2899CDD2D9496(L_33, L_35, /*hidden argument*/NULL);
		// capsule.center = new Vector3(0, capsule.height / 2, 0);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_36 = V_1;
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_37 = V_1;
		float L_38;
		L_38 = CapsuleCollider_get_height_mD6CF93CB2C222F8E5B77D65B0356F8FD8005B526(L_37, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_39;
		memset((&L_39), 0, sizeof(L_39));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_39), (0.0f), ((float)((float)L_38/(float)(2.0f))), (0.0f), /*hidden argument*/NULL);
		CapsuleCollider_set_center_m36F35F070DFC2CBFC87532004073CA8D56F3678F(L_36, L_39, /*hidden argument*/NULL);
		// }
		return;
	}

IL_00bd:
	{
		// if (box == null)
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_40 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_41;
		L_41 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_40, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_41)
		{
			goto IL_00d2;
		}
	}
	{
		// box = umaData.gameObject.AddComponent<BoxCollider>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_42 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_42, /*hidden argument*/NULL);
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_44;
		L_44 = GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B(L_43, /*hidden argument*/GameObject_AddComponent_TisBoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5_mC6683EB7079A68A971E47FCF1CAD5E2CB015354B_RuntimeMethod_var);
		V_2 = L_44;
	}

IL_00d2:
	{
		// if(capsule != null)
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_45 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_46)
		{
			goto IL_00e1;
		}
	}
	{
		// Destroy(capsule);
		CapsuleCollider_t89745329298279F4827FE29C54CC2F8A28654635 * L_47 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_47, /*hidden argument*/NULL);
	}

IL_00e1:
	{
		// var umaRenderer = umaData.GetRenderer(0);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_48 = ___umaData0;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_49;
		L_49 = UMAData_GetRenderer_m4903131B129A523A15F8D692976DFD687F6DBACA(L_48, 0, /*hidden argument*/NULL);
		V_3 = L_49;
		// if (umaRenderer != null)
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_50 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_51;
		L_51 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_50, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_51)
		{
			goto IL_011c;
		}
	}
	{
		// box.size = umaRenderer.bounds.size;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_52 = V_2;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_53 = V_3;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_54;
		L_54 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_53, /*hidden argument*/NULL);
		V_4 = L_54;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Bounds_get_size_mB1C37E89879C7810BC9F4210033D9277DAFE2C14((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		BoxCollider_set_size_mD9153B4AE4C366ACAB9E5F49075D919A89168B2E(L_52, L_55, /*hidden argument*/NULL);
		// box.center = umaRenderer.bounds.center;
		BoxCollider_tA530691AC1A3C9FE6428F68F98588FCB1BF9AAA5 * L_56 = V_2;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_57 = V_3;
		Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37  L_58;
		L_58 = Renderer_get_bounds_m296EE301CAC35DE15E295646CAD7911794825097(L_57, /*hidden argument*/NULL);
		V_4 = L_58;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Bounds_get_center_m78CD262996DD859F71DAFFF39228EBE0C422F485((Bounds_t0F1F36D4F7AF49524B3C2A2259594412A3D3AE37 *)(&V_4), /*hidden argument*/NULL);
		BoxCollider_set_center_m02D745E759A66BBEF405D33CE4ACE34B7E064178(L_56, L_59, /*hidden argument*/NULL);
	}

IL_011c:
	{
		// }
		return;
	}
}
// System.Void UMA.CapsuleColliderSlotScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CapsuleColliderSlotScript__ctor_mEEED2151DC42E092113A734853A34D34F4A08253 (CapsuleColliderSlotScript_t92F670AAA36FB908BDB3DC7A959E0C553462C7DD * __this, const RuntimeMethod* method)
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
// System.Void UMA.PoseTools.ExpressionSlotScript::OnCharacterBegun(UMA.UMAData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionSlotScript_OnCharacterBegun_m8021971F7F056E23FE09C98AC95F34438128D7E7 (ExpressionSlotScript_t12A940B1CF4C863A0C320E926971FD5CEA8F313F * __this, UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * V_0 = NULL;
	{
		// var expressionPlayer = umaData.GetComponent<UMAExpressionPlayer>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_0 = ___umaData0;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_1;
		L_1 = Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030(L_0, /*hidden argument*/Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030_RuntimeMethod_var);
		V_0 = L_1;
		// if (expressionPlayer != null)
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_2 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_2, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// expressionPlayer.SlotUpdateVsCharacterUpdate++;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_4 = V_0;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_5 = L_4;
		int32_t L_6 = L_5->get_SlotUpdateVsCharacterUpdate_79();
		L_5->set_SlotUpdateVsCharacterUpdate_79(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1)));
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UMA.PoseTools.ExpressionSlotScript::OnDnaApplied(UMA.UMAData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionSlotScript_OnDnaApplied_mADB32E3377B9B8D44E66DA81D137E35AA88C8348 (ExpressionSlotScript_t12A940B1CF4C863A0C320E926971FD5CEA8F313F * __this, UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionSlotScript_umaData_OnCharacterUpdated_m45AA5DF3259563439C10B20D749F60D7B7869DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_mF47859E225CAD91D6F8546CED8F01874504B9409_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m26E27A4EE35C3FF6DC17C1247D0D7DE1569E97EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_AddListener_mA64241CBD6FBB5A7AAD577AD657C8444124B7C5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral187980DBE1429BB611B6BE6611A58E12C4EE4DC2);
		s_Il2CppMethodInitialized = true;
	}
	UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * V_0 = NULL;
	UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * V_1 = NULL;
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* V_2 = NULL;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// var expressionSet = umaData.umaRecipe.raceData.expressionSet;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_0 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_1;
		L_1 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_0, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_2 = L_1->get_raceData_0();
		UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * L_3 = L_2->get_expressionSet_22();
		V_0 = L_3;
		// if (expressionSet == null)
		UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * L_4 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_4, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0047;
		}
	}
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_0046;
		}
	}
	{
		// Debug.LogError("Couldn't add Expressions to Race: " + umaData.umaRecipe.raceData.raceName, umaData.gameObject);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_7 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_8;
		L_8 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_7, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_9 = L_8->get_raceData_0();
		String_t* L_10 = L_9->get_raceName_14();
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral187980DBE1429BB611B6BE6611A58E12C4EE4DC2, L_10, /*hidden argument*/NULL);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_12 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_mEFF048E5541EE45362C0AAD829E3FA4C2CAB9199(L_11, L_13, /*hidden argument*/NULL);
	}

IL_0046:
	{
		// return;
		return;
	}

IL_0047:
	{
		// var expressionPlayer = umaData.GetComponent<UMAExpressionPlayer>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_14 = ___umaData0;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_15;
		L_15 = Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030(L_14, /*hidden argument*/Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030_RuntimeMethod_var);
		V_1 = L_15;
		// if (expressionPlayer == null)
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_16 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_17;
		L_17 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_16, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_0088;
		}
	}
	{
		// expressionPlayer = umaData.gameObject.AddComponent<UMAExpressionPlayer>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_18 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_20;
		L_20 = GameObject_AddComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_mF47859E225CAD91D6F8546CED8F01874504B9409(L_19, /*hidden argument*/GameObject_AddComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_mF47859E225CAD91D6F8546CED8F01874504B9409_RuntimeMethod_var);
		V_1 = L_20;
		// expressionPlayer.SlotUpdateVsCharacterUpdate++;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_21 = V_1;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_22 = L_21;
		int32_t L_23 = L_22->get_SlotUpdateVsCharacterUpdate_79();
		L_22->set_SlotUpdateVsCharacterUpdate_79(((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1)));
		// umaData.CharacterUpdated.AddListener(new UnityAction<UMAData>(umaData_OnCharacterUpdated));
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_24 = ___umaData0;
		UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * L_25 = L_24->get_CharacterUpdated_27();
		UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 * L_26 = (UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 *)il2cpp_codegen_object_new(UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m26E27A4EE35C3FF6DC17C1247D0D7DE1569E97EB(L_26, __this, (intptr_t)((intptr_t)ExpressionSlotScript_umaData_OnCharacterUpdated_m45AA5DF3259563439C10B20D749F60D7B7869DE9_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m26E27A4EE35C3FF6DC17C1247D0D7DE1569E97EB_RuntimeMethod_var);
		UnityEvent_1_AddListener_mA64241CBD6FBB5A7AAD577AD657C8444124B7C5B(L_25, L_26, /*hidden argument*/UnityEvent_1_AddListener_mA64241CBD6FBB5A7AAD577AD657C8444124B7C5B_RuntimeMethod_var);
	}

IL_0088:
	{
		// expressionPlayer.expressionSet = expressionSet;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_27 = V_1;
		UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * L_28 = V_0;
		L_27->set_expressionSet_72(L_28);
		// expressionPlayer.umaData = umaData;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_29 = V_1;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_30 = ___umaData0;
		L_29->set_umaData_74(L_30);
		// foreach (var hash in expressionSet.GetAnimatedBoneHashes())
		UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94 * L_31 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_32;
		L_32 = UMAExpressionSet_GetAnimatedBoneHashes_m3ED47CACB8BF8B13C0F521F42744FE78C0695CB9(L_31, /*hidden argument*/NULL);
		V_2 = L_32;
		V_3 = 0;
		goto IL_00b7;
	}

IL_00a1:
	{
		// foreach (var hash in expressionSet.GetAnimatedBoneHashes())
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_33 = V_2;
		int32_t L_34 = V_3;
		int32_t L_35 = L_34;
		int32_t L_36 = (L_33)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_35));
		V_4 = L_36;
		// umaData.skeleton.SetAnimatedBoneHierachy(hash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_37 = ___umaData0;
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_38 = L_37->get_skeleton_39();
		int32_t L_39 = V_4;
		VirtActionInvoker1< int32_t >::Invoke(8 /* System.Void UMA.UMASkeleton::SetAnimatedBoneHierachy(System.Int32) */, L_38, L_39);
		int32_t L_40 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1));
	}

IL_00b7:
	{
		// foreach (var hash in expressionSet.GetAnimatedBoneHashes())
		int32_t L_41 = V_3;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_42 = V_2;
		if ((((int32_t)L_41) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_42)->max_length))))))
		{
			goto IL_00a1;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UMA.PoseTools.ExpressionSlotScript::umaData_OnCharacterUpdated(UMA.UMAData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionSlotScript_umaData_OnCharacterUpdated_m45AA5DF3259563439C10B20D749F60D7B7869DE9 (ExpressionSlotScript_t12A940B1CF4C863A0C320E926971FD5CEA8F313F * __this, UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ExpressionSlotScript_umaData_OnCharacterUpdated_m45AA5DF3259563439C10B20D749F60D7B7869DE9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1__ctor_m26E27A4EE35C3FF6DC17C1247D0D7DE1569E97EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEvent_1_RemoveListener_m340E1C16EB47D8D7222F1A909FBE2A719D54B23C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * V_0 = NULL;
	int32_t V_1 = 0;
	{
		// var expressionPlayer = umaData.GetComponent<UMAExpressionPlayer>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_0 = ___umaData0;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_1;
		L_1 = Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030(L_0, /*hidden argument*/Component_GetComponent_TisUMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68_m69F1270298A6A1212FF33028EFDE827BC0432030_RuntimeMethod_var);
		V_0 = L_1;
		// if (expressionPlayer.SlotUpdateVsCharacterUpdate-- == 0)
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_2 = V_0;
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_3 = L_2;
		int32_t L_4 = L_3->get_SlotUpdateVsCharacterUpdate_79();
		V_1 = L_4;
		int32_t L_5 = V_1;
		L_3->set_SlotUpdateVsCharacterUpdate_79(((int32_t)il2cpp_codegen_subtract((int32_t)L_5, (int32_t)1)));
		int32_t L_6 = V_1;
		if (L_6)
		{
			goto IL_0038;
		}
	}
	{
		// UMAUtils.DestroySceneObject(expressionPlayer);
		UMAExpressionPlayer_t3239A6CD69E52D3AE6265787B9743A68241A1C68 * L_7 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		UMAUtils_DestroySceneObject_m53E185DA7317A05369247518903C2D420A9565C9(L_7, /*hidden argument*/NULL);
		// umaData.CharacterUpdated.RemoveListener(new UnityAction<UMAData>(umaData_OnCharacterUpdated));
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_8 = ___umaData0;
		UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * L_9 = L_8->get_CharacterUpdated_27();
		UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 * L_10 = (UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7 *)il2cpp_codegen_object_new(UnityAction_1_t918B55B925C8BEB1E6BA9D5F82914B1733B71ED7_il2cpp_TypeInfo_var);
		UnityAction_1__ctor_m26E27A4EE35C3FF6DC17C1247D0D7DE1569E97EB(L_10, __this, (intptr_t)((intptr_t)ExpressionSlotScript_umaData_OnCharacterUpdated_m45AA5DF3259563439C10B20D749F60D7B7869DE9_RuntimeMethod_var), /*hidden argument*/UnityAction_1__ctor_m26E27A4EE35C3FF6DC17C1247D0D7DE1569E97EB_RuntimeMethod_var);
		UnityEvent_1_RemoveListener_m340E1C16EB47D8D7222F1A909FBE2A719D54B23C(L_9, L_10, /*hidden argument*/UnityEvent_1_RemoveListener_m340E1C16EB47D8D7222F1A909FBE2A719D54B23C_RuntimeMethod_var);
		// return;
		return;
	}

IL_0038:
	{
		// }
		return;
	}
}
// System.Void UMA.PoseTools.ExpressionSlotScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpressionSlotScript__ctor_m255BF81851A8C528062C6C9757CC0EE4ECCFF602 (ExpressionSlotScript_t12A940B1CF4C863A0C320E926971FD5CEA8F313F * __this, const RuntimeMethod* method)
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
// System.Void UMA.ForearmTwistSlotScript::OnDnaApplied(UMA.UMAData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForearmTwistSlotScript_OnDnaApplied_m4D2EB7B75B93455E2E04E7E8B91FBDEE82BC29DD (ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134 * __this, UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19DDBEB730DD1557CC95B3EB4B51D5918A02F45D);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * V_4 = NULL;
	{
		// if (!hashesFound)
		IL2CPP_RUNTIME_CLASS_INIT(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var);
		bool L_0 = ((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->get_hashesFound_12();
		if (L_0)
		{
			goto IL_004d;
		}
	}
	{
		// leftHandHash = UMAUtils.StringToHash(LeftHandBoneName);
		String_t* L_1 = __this->get_LeftHandBoneName_4();
		IL2CPP_RUNTIME_CLASS_INIT(UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		int32_t L_2;
		L_2 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(L_1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var);
		((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->set_leftHandHash_8(L_2);
		// rightHandHash = UMAUtils.StringToHash(RightHandBoneName);
		String_t* L_3 = __this->get_RightHandBoneName_5();
		int32_t L_4;
		L_4 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(L_3, /*hidden argument*/NULL);
		((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->set_rightHandHash_9(L_4);
		// leftTwistHash = UMAUtils.StringToHash(LeftForeArmTwistBoneName);
		String_t* L_5 = __this->get_LeftForeArmTwistBoneName_6();
		int32_t L_6;
		L_6 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(L_5, /*hidden argument*/NULL);
		((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->set_leftTwistHash_10(L_6);
		// rightTwistHash = UMAUtils.StringToHash(RightForeArmTwistBoneName);
		String_t* L_7 = __this->get_RightForeArmTwistBoneName_7();
		int32_t L_8;
		L_8 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(L_7, /*hidden argument*/NULL);
		((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->set_rightTwistHash_11(L_8);
		// hashesFound = true;
		((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->set_hashesFound_12((bool)1);
	}

IL_004d:
	{
		// GameObject leftHand = umaData.GetBoneGameObject(leftHandHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_9 = ___umaData0;
		IL2CPP_RUNTIME_CLASS_INIT(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var);
		int32_t L_10 = ((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->get_leftHandHash_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// GameObject rightHand = umaData.GetBoneGameObject(rightHandHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_12 = ___umaData0;
		int32_t L_13 = ((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->get_rightHandHash_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// GameObject leftTwist = umaData.GetBoneGameObject(leftTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_15 = ___umaData0;
		int32_t L_16 = ((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->get_leftTwistHash_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// GameObject rightTwist = umaData.GetBoneGameObject(rightTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_18 = ___umaData0;
		int32_t L_19 = ((ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_StaticFields*)il2cpp_codegen_static_fields_for(ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134_il2cpp_TypeInfo_var))->get_rightTwistHash_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		// if ((leftHand == null) || (rightHand == null) || (leftTwist == null) || (rightTwist == null))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_22;
		L_22 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_21, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00a1;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_24;
		L_24 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_23, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00a1;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_25, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_26)
		{
			goto IL_00a1;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_27, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_00be;
		}
	}

IL_00a1:
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_29;
		L_29 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_29)
		{
			goto IL_00bd;
		}
	}
	{
		// Debug.LogError("Failed to add Forearm Twist to: " + umaData.name);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_30 = ___umaData0;
		String_t* L_31;
		L_31 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_30, /*hidden argument*/NULL);
		String_t* L_32;
		L_32 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral19DDBEB730DD1557CC95B3EB4B51D5918A02F45D, L_31, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_32, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// return;
		return;
	}

IL_00be:
	{
		// var twist = umaData.umaRoot.AddComponent<TwistBones>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_33 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = L_33->get_umaRoot_35();
		TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * L_35;
		L_35 = GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF(L_34, /*hidden argument*/GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF_RuntimeMethod_var);
		V_4 = L_35;
		// twist.twistValue = 0.5f;
		TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * L_36 = V_4;
		L_36->set_twistValue_4((0.5f));
		// twist.twistBone = new Transform[] {leftTwist.transform, rightTwist.transform};
		TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * L_37 = V_4;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_38 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)2);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_39 = L_38;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_41;
		L_41 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_40, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_39, L_41);
		(L_39)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_41);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_42 = L_39;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_44;
		L_44 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_43, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_42, L_44);
		(L_42)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_44);
		L_37->set_twistBone_5(L_42);
		// twist.refBone = new Transform[] {leftHand.transform, rightHand.transform};
		TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * L_45 = V_4;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_46 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)2);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_47 = L_46;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_47, L_49);
		(L_47)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_49);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_50 = L_47;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_51 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_52;
		L_52 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_51, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_50, L_52);
		(L_50)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_52);
		L_45->set_refBone_6(L_50);
		// }
		return;
	}
}
// System.Void UMA.ForearmTwistSlotScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForearmTwistSlotScript__ctor_m6272848B67788059F4D146AF593AA6C160C2BB29 (ForearmTwistSlotScript_tB55B23F5A36ABAC3A57932964FD4228267C09134 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4FCCDFD3057B203D397AF5279F8B17B5A5060F82);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B25A3EE6826690B4824274E83F9FBB3F2550D29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public string LeftHandBoneName = "LeftHand";
		__this->set_LeftHandBoneName_4(_stringLiteralFF91CCC42729FED4D77421D6F8E1B13F461E983A);
		// public string RightHandBoneName = "RightHand";
		__this->set_RightHandBoneName_5(_stringLiteral5D5174454E3D3F9E783E0B8B821F8B1A68A0547F);
		// public string LeftForeArmTwistBoneName = "LeftForeArmTwist";
		__this->set_LeftForeArmTwistBoneName_6(_stringLiteral4FCCDFD3057B203D397AF5279F8B17B5A5060F82);
		// public string RightForeArmTwistBoneName = "RightForeArmTwist";
		__this->set_RightForeArmTwistBoneName_7(_stringLiteral8B25A3EE6826690B4824274E83F9FBB3F2550D29);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UMA.ForearmTwistSlotScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ForearmTwistSlotScript__cctor_m46A1DEFFD96E48EDCDCBEA552A8A88D498B5E9E3 (const RuntimeMethod* method)
{
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
// System.Void UMA.HumanFemaleDNAConverterBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanFemaleDNAConverterBehaviour__ctor_m29ED6283FDD43F773E4455B114EFFFE59FFF2274 (HumanFemaleDNAConverterBehaviour_t08D66080D8F6149AD598A5AB468F4C3CCFC9A612 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanFemaleDNAConverterBehaviour_UpdateUMAFemaleDNABones_m879C5A5FB36F4B4B2C29A8F6A29AD00A6693A761_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HumanFemaleDNAConverterBehaviour()
		IL2CPP_RUNTIME_CLASS_INIT(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var);
		HumanoidDNAConverterBehaviour__ctor_m5E219325116E4581A0C08F6379FB9CC67C8F88AC(__this, /*hidden argument*/NULL);
		// this.ApplyDnaAction = UpdateUMAFemaleDNABones;
		DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * L_0 = (DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 *)il2cpp_codegen_object_new(DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1_il2cpp_TypeInfo_var);
		DNAConvertDelegate__ctor_m952F609FDE4CAF628B38C5FF085DF5DE512D57CF(L_0, NULL, (intptr_t)((intptr_t)HumanFemaleDNAConverterBehaviour_UpdateUMAFemaleDNABones_m879C5A5FB36F4B4B2C29A8F6A29AD00A6693A761_RuntimeMethod_var), /*hidden argument*/NULL);
		DnaConverterBehaviour_set_ApplyDnaAction_m109107C3682D965772496EB3AA7DB43C0FA0CF21_inline(__this, L_0, /*hidden argument*/NULL);
		// this.DNAType = typeof(UMADnaHumanoid);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		DnaConverterBehaviour_set_DNAType_m95AB815DF252C02BBA9A0926B3F0C918019FC497_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.HumanFemaleDNAConverterBehaviour::UpdateUMAFemaleDNABones(UMA.UMAData,UMA.UMASkeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanFemaleDNAConverterBehaviour_UpdateUMAFemaleDNABones_m879C5A5FB36F4B4B2C29A8F6A29AD00A6693A761 (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * ___skeleton1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAData_GetDna_TisUMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_m1EB03CCC9ED0211434198721DCF67EF43E8AB409_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// var umaDna = umaData.GetDna<UMADnaHumanoid>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_0 = ___umaData0;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1;
		L_1 = UMAData_GetDna_TisUMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_m1EB03CCC9ED0211434198721DCF67EF43E8AB409(L_0, /*hidden argument*/UMAData_GetDna_TisUMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_m1EB03CCC9ED0211434198721DCF67EF43E8AB409_RuntimeMethod_var);
		V_0 = L_1;
		// skeleton.SetScale(headAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 1, 1),
		//     Mathf.Clamp(1 + (umaDna.headWidth - 0.5f) * 0.30f, 0.5f, 1.6f),
		//     Mathf.Clamp(1 , 1, 1)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_2 = ___skeleton1;
		IL2CPP_RUNTIME_CLASS_INIT(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var);
		int32_t L_3 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_headAdjustHash_10();
		int32_t L_4;
		L_4 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(1, 1, 1, /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_5 = V_0;
		float L_6 = L_5->get_headWidth_6();
		float L_7;
		L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_6, (float)(0.5f))), (float)(0.300000012f))))), (0.5f), (1.60000002f), /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(1, 1, 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_4)), L_7, ((float)((float)L_8)), /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_2, L_3, L_9);
		// skeleton.SetScale(neckAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.neckThickness - 0.5f) * 0.80f, 0.5f, 1.6f),
		//     Mathf.Clamp(1 + (umaDna.neckThickness - 0.5f) * 1.2f, 0.5f, 1.6f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_10 = ___skeleton1;
		int32_t L_11 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_neckAdjustHash_11();
		float L_12;
		L_12 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_13 = V_0;
		float L_14 = L_13->get_neckThickness_7();
		float L_15;
		L_15 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)(0.5f))), (float)(0.800000012f))))), (0.5f), (1.60000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_16 = V_0;
		float L_17 = L_16->get_neckThickness_7();
		float L_18;
		L_18 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)(0.5f))), (float)(1.20000005f))))), (0.5f), (1.60000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_12, L_15, L_18, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_10, L_11, L_19);
		// skeleton.SetScale(leftOuterBreastHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_20 = ___skeleton1;
		int32_t L_21 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftOuterBreastHash_12();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_22 = V_0;
		float L_23 = L_22->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_24 = V_0;
		float L_25 = L_24->get_upperWeight_17();
		float L_26;
		L_26 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_23, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_25, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_27 = V_0;
		float L_28 = L_27->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_29 = V_0;
		float L_30 = L_29->get_upperWeight_17();
		float L_31;
		L_31 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_28, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_30, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_32 = V_0;
		float L_33 = L_32->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_34 = V_0;
		float L_35 = L_34->get_upperWeight_17();
		float L_36;
		L_36 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_33, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_35, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), L_26, L_31, L_36, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_20, L_21, L_37);
		// skeleton.SetScale(rightOuterBreastHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_38 = ___skeleton1;
		int32_t L_39 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightOuterBreastHash_13();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_40 = V_0;
		float L_41 = L_40->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_42 = V_0;
		float L_43 = L_42->get_upperWeight_17();
		float L_44;
		L_44 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_41, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_43, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_45 = V_0;
		float L_46 = L_45->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_47 = V_0;
		float L_48 = L_47->get_upperWeight_17();
		float L_49;
		L_49 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_46, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_48, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_50 = V_0;
		float L_51 = L_50->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_52 = V_0;
		float L_53 = L_52->get_upperWeight_17();
		float L_54;
		L_54 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_51, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_53, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_55), L_44, L_49, L_54, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_38, L_39, L_55);
		// skeleton.SetScale(leftEyeHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f),
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f),
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_56 = ___skeleton1;
		int32_t L_57 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyeHash_14();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_58 = V_0;
		float L_59 = L_58->get_eyeSize_48();
		float L_60;
		L_60 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_59, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_61 = V_0;
		float L_62 = L_61->get_eyeSize_48();
		float L_63;
		L_63 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_62, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_64 = V_0;
		float L_65 = L_64->get_eyeSize_48();
		float L_66;
		L_66 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_65, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_67), L_60, L_63, L_66, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_56, L_57, L_67);
		// skeleton.SetScale(rightEyeHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f),
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f),
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_68 = ___skeleton1;
		int32_t L_69 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyeHash_15();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_70 = V_0;
		float L_71 = L_70->get_eyeSize_48();
		float L_72;
		L_72 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_71, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_73 = V_0;
		float L_74 = L_73->get_eyeSize_48();
		float L_75;
		L_75 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_74, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_76 = V_0;
		float L_77 = L_76->get_eyeSize_48();
		float L_78;
		L_78 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_77, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_79), L_72, L_75, L_78, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_68, L_69, L_79);
		// skeleton.SetRotation(leftEyeAdjustHash,
		//                      Quaternion.Euler(new Vector3((umaDna.eyeRotation - 0.5f) * 20, 0, 0)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_80 = ___skeleton1;
		int32_t L_81 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyeAdjustHash_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_82 = V_0;
		float L_83 = L_82->get_eyeRotation_47();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_84), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_83, (float)(0.5f))), (float)(20.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_85;
		L_85 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_84, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_80, L_81, L_85);
		// skeleton.SetRotation(rightEyeAdjustHash,
		//                      Quaternion.Euler(new Vector3(-(umaDna.eyeRotation - 0.5f) * 20, 0, 0)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_86 = ___skeleton1;
		int32_t L_87 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyeAdjustHash_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_88 = V_0;
		float L_89 = L_88->get_eyeRotation_47();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		memset((&L_90), 0, sizeof(L_90));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_90), ((float)il2cpp_codegen_multiply((float)((-((float)il2cpp_codegen_subtract((float)L_89, (float)(0.5f))))), (float)(20.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_91;
		L_91 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_90, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_86, L_87, L_91);
		// skeleton.SetScale(spine1AdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.10f + (umaDna.upperMuscle - 0.5f) * 0.15f, 0.75f, 1.10f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.10f + (umaDna.upperMuscle - 0.5f) * 0.25f, 0.85f, 1.00f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_92 = ___skeleton1;
		int32_t L_93 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_spine1AdjustHash_18();
		float L_94;
		L_94 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_95 = V_0;
		float L_96 = L_95->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_97 = V_0;
		float L_98 = L_97->get_upperMuscle_15();
		float L_99;
		L_99 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_96, (float)(0.5f))), (float)(0.100000001f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_98, (float)(0.5f))), (float)(0.150000006f))))), (0.75f), (1.10000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_100 = V_0;
		float L_101 = L_100->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_102 = V_0;
		float L_103 = L_102->get_upperMuscle_15();
		float L_104;
		L_104 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_101, (float)(0.5f))), (float)(0.100000001f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_103, (float)(0.5f))), (float)(0.25f))))), (0.850000024f), (1.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_105), L_94, L_99, L_104, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_92, L_93, L_105);
		// skeleton.SetScale(spineAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.25f + (umaDna.upperMuscle - 0.5f) * 0.25f, 0.85f, 1.350f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.25f + (umaDna.upperMuscle - 0.5f) * 0.25f, 0.85f, 1.450f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_106 = ___skeleton1;
		int32_t L_107 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_spineAdjustHash_19();
		float L_108;
		L_108 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_109 = V_0;
		float L_110 = L_109->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_111 = V_0;
		float L_112 = L_111->get_upperMuscle_15();
		float L_113;
		L_113 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_110, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_112, (float)(0.5f))), (float)(0.25f))))), (0.850000024f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_114 = V_0;
		float L_115 = L_114->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_116 = V_0;
		float L_117 = L_116->get_upperMuscle_15();
		float L_118;
		L_118 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_115, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_117, (float)(0.5f))), (float)(0.25f))))), (0.850000024f), (1.45000005f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_119), L_108, L_113, L_118, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_106, L_107, L_119);
		// skeleton.SetScale(lowerBackBellyHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.belly - 0.5f) * 1.75f, 0.35f, 1.75f),
		//     Mathf.Clamp(1 + (umaDna.waist - 0.5f) * 1.75f, 0.35f, 1.75f),
		//     Mathf.Clamp(1 + (umaDna.belly - 0.5f) * 3.00f, 0.35f, 3.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_120 = ___skeleton1;
		int32_t L_121 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lowerBackBellyHash_20();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_122 = V_0;
		float L_123 = L_122->get_belly_20();
		float L_124;
		L_124 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_123, (float)(0.5f))), (float)(1.75f))))), (0.349999994f), (1.75f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_125 = V_0;
		float L_126 = L_125->get_waist_21();
		float L_127;
		L_127 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_126, (float)(0.5f))), (float)(1.75f))))), (0.349999994f), (1.75f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_128 = V_0;
		float L_129 = L_128->get_belly_20();
		float L_130;
		L_130 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_129, (float)(0.5f))), (float)(3.0f))))), (0.349999994f), (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_131), L_124, L_127, L_130, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_120, L_121, L_131);
		// skeleton.SetScale(lowerBackAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.25f + (umaDna.lowerWeight - 0.5f) * 0.15f, 0.85f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.25f + (umaDna.lowerWeight - 0.5f) * 0.15f, 0.85f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.25f + (umaDna.lowerWeight - 0.5f) * 0.15f, 0.85f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_132 = ___skeleton1;
		int32_t L_133 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lowerBackAdjustHash_21();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_134 = V_0;
		float L_135 = L_134->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_136 = V_0;
		float L_137 = L_136->get_lowerWeight_18();
		float L_138;
		L_138 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_135, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_137, (float)(0.5f))), (float)(0.150000006f))))), (0.850000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_139 = V_0;
		float L_140 = L_139->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_141 = V_0;
		float L_142 = L_141->get_lowerWeight_18();
		float L_143;
		L_143 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_140, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_142, (float)(0.5f))), (float)(0.150000006f))))), (0.850000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_144 = V_0;
		float L_145 = L_144->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_146 = V_0;
		float L_147 = L_146->get_lowerWeight_18();
		float L_148;
		L_148 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_145, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_147, (float)(0.5f))), (float)(0.150000006f))))), (0.850000024f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_149;
		memset((&L_149), 0, sizeof(L_149));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_149), L_138, L_143, L_148, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_132, L_133, L_149);
		// skeleton.SetScale(leftTrapeziusHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_150 = ___skeleton1;
		int32_t L_151 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftTrapeziusHash_22();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_152 = V_0;
		float L_153 = L_152->get_upperMuscle_15();
		float L_154;
		L_154 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_153, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_155 = V_0;
		float L_156 = L_155->get_upperMuscle_15();
		float L_157;
		L_157 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_156, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_158 = V_0;
		float L_159 = L_158->get_upperMuscle_15();
		float L_160;
		L_160 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_159, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_161;
		memset((&L_161), 0, sizeof(L_161));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_161), L_154, L_157, L_160, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_150, L_151, L_161);
		// skeleton.SetScale(rightTrapeziusHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_162 = ___skeleton1;
		int32_t L_163 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightTrapeziusHash_23();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_164 = V_0;
		float L_165 = L_164->get_upperMuscle_15();
		float L_166;
		L_166 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_165, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_167 = V_0;
		float L_168 = L_167->get_upperMuscle_15();
		float L_169;
		L_169 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_168, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_170 = V_0;
		float L_171 = L_170->get_upperMuscle_15();
		float L_172;
		L_172 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_171, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_173;
		memset((&L_173), 0, sizeof(L_173));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_173), L_166, L_169, L_172, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_162, L_163, L_173);
		// skeleton.SetScale(leftArmAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.armWidth - 0.5f) * 0.65f, 0.65f, 1.65f),
		//     Mathf.Clamp(1 + (umaDna.armWidth - 0.5f) * 0.65f, 0.65f, 1.65f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_174 = ___skeleton1;
		int32_t L_175 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftArmAdjustHash_24();
		float L_176;
		L_176 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_177 = V_0;
		float L_178 = L_177->get_armWidth_10();
		float L_179;
		L_179 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_178, (float)(0.5f))), (float)(0.649999976f))))), (0.649999976f), (1.64999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_180 = V_0;
		float L_181 = L_180->get_armWidth_10();
		float L_182;
		L_182 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_181, (float)(0.5f))), (float)(0.649999976f))))), (0.649999976f), (1.64999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_183;
		memset((&L_183), 0, sizeof(L_183));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_183), L_176, L_179, L_182, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_174, L_175, L_183);
		// skeleton.SetScale(rightArmAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.armWidth - 0.5f) * 0.65f, 0.65f, 1.65f),
		//     Mathf.Clamp(1 + (umaDna.armWidth - 0.5f) * 0.65f, 0.65f, 1.65f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_184 = ___skeleton1;
		int32_t L_185 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightArmAdjustHash_25();
		float L_186;
		L_186 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_187 = V_0;
		float L_188 = L_187->get_armWidth_10();
		float L_189;
		L_189 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_188, (float)(0.5f))), (float)(0.649999976f))))), (0.649999976f), (1.64999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_190 = V_0;
		float L_191 = L_190->get_armWidth_10();
		float L_192;
		L_192 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_191, (float)(0.5f))), (float)(0.649999976f))))), (0.649999976f), (1.64999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193;
		memset((&L_193), 0, sizeof(L_193));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_193), L_186, L_189, L_192, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_184, L_185, L_193);
		// skeleton.SetScale(leftForeArmAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.65f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.65f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_194 = ___skeleton1;
		int32_t L_195 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftForeArmAdjustHash_26();
		float L_196;
		L_196 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_197 = V_0;
		float L_198 = L_197->get_forearmWidth_11();
		float L_199;
		L_199 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_198, (float)(0.5f))), (float)(0.649999976f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_200 = V_0;
		float L_201 = L_200->get_forearmWidth_11();
		float L_202;
		L_202 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_201, (float)(0.5f))), (float)(0.649999976f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_203;
		memset((&L_203), 0, sizeof(L_203));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_203), L_196, L_199, L_202, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_194, L_195, L_203);
		// skeleton.SetScale(rightForeArmAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.65f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.65f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_204 = ___skeleton1;
		int32_t L_205 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightForeArmAdjustHash_27();
		float L_206;
		L_206 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_207 = V_0;
		float L_208 = L_207->get_forearmWidth_11();
		float L_209;
		L_209 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_208, (float)(0.5f))), (float)(0.649999976f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_210 = V_0;
		float L_211 = L_210->get_forearmWidth_11();
		float L_212;
		L_212 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_211, (float)(0.5f))), (float)(0.649999976f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_213;
		memset((&L_213), 0, sizeof(L_213));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_213), L_206, L_209, L_212, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_204, L_205, L_213);
		// skeleton.SetScale(leftForeArmTwistAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.35f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.35f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_214 = ___skeleton1;
		int32_t L_215 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftForeArmTwistAdjustHash_28();
		float L_216;
		L_216 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_217 = V_0;
		float L_218 = L_217->get_forearmWidth_11();
		float L_219;
		L_219 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_218, (float)(0.5f))), (float)(0.349999994f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_220 = V_0;
		float L_221 = L_220->get_forearmWidth_11();
		float L_222;
		L_222 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_221, (float)(0.5f))), (float)(0.349999994f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_223;
		memset((&L_223), 0, sizeof(L_223));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_223), L_216, L_219, L_222, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_214, L_215, L_223);
		// skeleton.SetScale(rightForeArmTwistAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.35f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.35f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_224 = ___skeleton1;
		int32_t L_225 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightForeArmTwistAdjustHash_29();
		float L_226;
		L_226 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_227 = V_0;
		float L_228 = L_227->get_forearmWidth_11();
		float L_229;
		L_229 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_228, (float)(0.5f))), (float)(0.349999994f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_230 = V_0;
		float L_231 = L_230->get_forearmWidth_11();
		float L_232;
		L_232 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_231, (float)(0.5f))), (float)(0.349999994f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_233;
		memset((&L_233), 0, sizeof(L_233));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_233), L_226, L_229, L_232, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_224, L_225, L_233);
		// skeleton.SetScale(leftShoulderAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.55f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.55f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_234 = ___skeleton1;
		int32_t L_235 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftShoulderAdjustHash_30();
		float L_236;
		L_236 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_237 = V_0;
		float L_238 = L_237->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_239 = V_0;
		float L_240 = L_239->get_upperMuscle_15();
		float L_241;
		L_241 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_238, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_240, (float)(0.5f))), (float)(0.550000012f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_242 = V_0;
		float L_243 = L_242->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_244 = V_0;
		float L_245 = L_244->get_upperMuscle_15();
		float L_246;
		L_246 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_243, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_245, (float)(0.5f))), (float)(0.550000012f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_247;
		memset((&L_247), 0, sizeof(L_247));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_247), L_236, L_241, L_246, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_234, L_235, L_247);
		// skeleton.SetScale(rightShoulderAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.55f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.55f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_248 = ___skeleton1;
		int32_t L_249 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightShoulderAdjustHash_31();
		float L_250;
		L_250 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_251 = V_0;
		float L_252 = L_251->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_253 = V_0;
		float L_254 = L_253->get_upperMuscle_15();
		float L_255;
		L_255 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_252, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_254, (float)(0.5f))), (float)(0.550000012f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_256 = V_0;
		float L_257 = L_256->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_258 = V_0;
		float L_259 = L_258->get_upperMuscle_15();
		float L_260;
		L_260 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_257, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_259, (float)(0.5f))), (float)(0.550000012f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_261;
		memset((&L_261), 0, sizeof(L_261));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_261), L_250, L_255, L_260, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_248, L_249, L_261);
		// skeleton.SetScale(leftUpLegAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.65f + (umaDna.lowerMuscle - 0.5f) * 0.15f - (umaDna.legsSize - 0.5f), 0.45f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.65f + (umaDna.lowerMuscle - 0.5f) * 0.15f - (umaDna.legsSize - 0.5f), 0.45f, 1.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_262 = ___skeleton1;
		int32_t L_263 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftUpLegAdjustHash_32();
		float L_264;
		L_264 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_265 = V_0;
		float L_266 = L_265->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_267 = V_0;
		float L_268 = L_267->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_269 = V_0;
		float L_270 = L_269->get_legsSize_19();
		float L_271;
		L_271 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_266, (float)(0.5f))), (float)(0.649999976f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_268, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_subtract((float)L_270, (float)(0.5f))))), (0.449999988f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_272 = V_0;
		float L_273 = L_272->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_274 = V_0;
		float L_275 = L_274->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_276 = V_0;
		float L_277 = L_276->get_legsSize_19();
		float L_278;
		L_278 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_273, (float)(0.5f))), (float)(0.649999976f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_275, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_subtract((float)L_277, (float)(0.5f))))), (0.449999988f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_279;
		memset((&L_279), 0, sizeof(L_279));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_279), L_264, L_271, L_278, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_262, L_263, L_279);
		// skeleton.SetScale(rightUpLegAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.65f + (umaDna.lowerMuscle - 0.5f) * 0.15f - (umaDna.legsSize - 0.5f), 0.45f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.65f + (umaDna.lowerMuscle - 0.5f) * 0.15f - (umaDna.legsSize - 0.5f), 0.45f, 1.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_280 = ___skeleton1;
		int32_t L_281 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightUpLegAdjustHash_33();
		float L_282;
		L_282 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_283 = V_0;
		float L_284 = L_283->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_285 = V_0;
		float L_286 = L_285->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_287 = V_0;
		float L_288 = L_287->get_legsSize_19();
		float L_289;
		L_289 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_284, (float)(0.5f))), (float)(0.649999976f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_286, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_subtract((float)L_288, (float)(0.5f))))), (0.449999988f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_290 = V_0;
		float L_291 = L_290->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_292 = V_0;
		float L_293 = L_292->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_294 = V_0;
		float L_295 = L_294->get_legsSize_19();
		float L_296;
		L_296 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_291, (float)(0.5f))), (float)(0.649999976f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_293, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_subtract((float)L_295, (float)(0.5f))))), (0.449999988f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_297;
		memset((&L_297), 0, sizeof(L_297));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_297), L_282, L_289, L_296, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_280, L_281, L_297);
		// skeleton.SetScale(leftLegAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.lowerMuscle - 0.5f) * 0.95f - (umaDna.legsSize - 0.5f), 0.65f, 1.45f),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.lowerMuscle - 0.5f) * 0.75f - (umaDna.legsSize - 0.5f), 0.65f, 1.45f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_298 = ___skeleton1;
		int32_t L_299 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLegAdjustHash_34();
		float L_300;
		L_300 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_301 = V_0;
		float L_302 = L_301->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_303 = V_0;
		float L_304 = L_303->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_305 = V_0;
		float L_306 = L_305->get_legsSize_19();
		float L_307;
		L_307 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_302, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_304, (float)(0.5f))), (float)(0.949999988f))))), (float)((float)il2cpp_codegen_subtract((float)L_306, (float)(0.5f))))), (0.649999976f), (1.45000005f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_308 = V_0;
		float L_309 = L_308->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_310 = V_0;
		float L_311 = L_310->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_312 = V_0;
		float L_313 = L_312->get_legsSize_19();
		float L_314;
		L_314 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_309, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_311, (float)(0.5f))), (float)(0.75f))))), (float)((float)il2cpp_codegen_subtract((float)L_313, (float)(0.5f))))), (0.649999976f), (1.45000005f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_315;
		memset((&L_315), 0, sizeof(L_315));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_315), L_300, L_307, L_314, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_298, L_299, L_315);
		// skeleton.SetScale(rightLegAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.lowerMuscle - 0.5f) * 0.95f - (umaDna.legsSize - 0.5f), 0.65f, 1.45f),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.lowerMuscle - 0.5f) * 0.75f - (umaDna.legsSize - 0.5f), 0.65f, 1.45f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_316 = ___skeleton1;
		int32_t L_317 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLegAdjustHash_35();
		float L_318;
		L_318 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_319 = V_0;
		float L_320 = L_319->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_321 = V_0;
		float L_322 = L_321->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_323 = V_0;
		float L_324 = L_323->get_legsSize_19();
		float L_325;
		L_325 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_320, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_322, (float)(0.5f))), (float)(0.949999988f))))), (float)((float)il2cpp_codegen_subtract((float)L_324, (float)(0.5f))))), (0.649999976f), (1.45000005f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_326 = V_0;
		float L_327 = L_326->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_328 = V_0;
		float L_329 = L_328->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_330 = V_0;
		float L_331 = L_330->get_legsSize_19();
		float L_332;
		L_332 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_327, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_329, (float)(0.5f))), (float)(0.75f))))), (float)((float)il2cpp_codegen_subtract((float)L_331, (float)(0.5f))))), (0.649999976f), (1.45000005f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_333;
		memset((&L_333), 0, sizeof(L_333));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_333), L_318, L_325, L_332, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_316, L_317, L_333);
		// skeleton.SetScale(leftGluteusHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f),
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f),
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_334 = ___skeleton1;
		int32_t L_335 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftGluteusHash_36();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_336 = V_0;
		float L_337 = L_336->get_gluteusSize_22();
		float L_338;
		L_338 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_337, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_339 = V_0;
		float L_340 = L_339->get_gluteusSize_22();
		float L_341;
		L_341 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_340, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_342 = V_0;
		float L_343 = L_342->get_gluteusSize_22();
		float L_344;
		L_344 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_343, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_345;
		memset((&L_345), 0, sizeof(L_345));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_345), L_338, L_341, L_344, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_334, L_335, L_345);
		// skeleton.SetScale(rightGluteusHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f),
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f),
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_346 = ___skeleton1;
		int32_t L_347 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightGluteusHash_37();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_348 = V_0;
		float L_349 = L_348->get_gluteusSize_22();
		float L_350;
		L_350 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_349, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_351 = V_0;
		float L_352 = L_351->get_gluteusSize_22();
		float L_353;
		L_353 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_352, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_354 = V_0;
		float L_355 = L_354->get_gluteusSize_22();
		float L_356;
		L_356 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_355, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_357;
		memset((&L_357), 0, sizeof(L_357));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_357), L_350, L_353, L_356, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_346, L_347, L_357);
		// skeleton.SetScale(leftEarAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_358 = ___skeleton1;
		int32_t L_359 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEarAdjustHash_38();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_360 = V_0;
		float L_361 = L_360->get_earsSize_23();
		float L_362;
		L_362 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_361, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_363 = V_0;
		float L_364 = L_363->get_earsSize_23();
		float L_365;
		L_365 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_364, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_366 = V_0;
		float L_367 = L_366->get_earsSize_23();
		float L_368;
		L_368 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_367, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_369;
		memset((&L_369), 0, sizeof(L_369));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_369), L_362, L_365, L_368, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_358, L_359, L_369);
		// skeleton.SetScale(rightEarAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_370 = ___skeleton1;
		int32_t L_371 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEarAdjustHash_39();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_372 = V_0;
		float L_373 = L_372->get_earsSize_23();
		float L_374;
		L_374 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_373, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_375 = V_0;
		float L_376 = L_375->get_earsSize_23();
		float L_377;
		L_377 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_376, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_378 = V_0;
		float L_379 = L_378->get_earsSize_23();
		float L_380;
		L_380 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_379, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_381;
		memset((&L_381), 0, sizeof(L_381));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_381), L_374, L_377, L_380, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_370, L_371, L_381);
		// skeleton.SetPositionRelative(leftEarAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.headWidth - 0.5f) * -0.01f, -0.01f, 0.01f),
		//     Mathf.Clamp(0 + (umaDna.headWidth - 0.5f) * -0.03f, -0.03f, 0.03f),
		//     Mathf.Clamp(0 + (umaDna.earsPosition - 0.5f) * 0.02f, -0.02f, 0.02f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_382 = ___skeleton1;
		int32_t L_383 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEarAdjustHash_38();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_384 = V_0;
		float L_385 = L_384->get_headWidth_6();
		float L_386;
		L_386 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_385, (float)(0.5f))), (float)(-0.00999999978f))))), (-0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_387 = V_0;
		float L_388 = L_387->get_headWidth_6();
		float L_389;
		L_389 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_388, (float)(0.5f))), (float)(-0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_390 = V_0;
		float L_391 = L_390->get_earsPosition_24();
		float L_392;
		L_392 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_391, (float)(0.5f))), (float)(0.0199999996f))))), (-0.0199999996f), (0.0199999996f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_393;
		memset((&L_393), 0, sizeof(L_393));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_393), L_386, L_389, L_392, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_382, L_383, L_393, (1.0f));
		// skeleton.SetPositionRelative(rightEarAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.headWidth - 0.5f) * -0.01f, -0.01f, 0.01f),
		//     Mathf.Clamp(0 + (umaDna.headWidth - 0.5f) * 0.03f, -0.03f, 0.03f),
		//     Mathf.Clamp(0 + (umaDna.earsPosition - 0.5f) * 0.02f, -0.02f, 0.02f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_394 = ___skeleton1;
		int32_t L_395 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEarAdjustHash_39();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_396 = V_0;
		float L_397 = L_396->get_headWidth_6();
		float L_398;
		L_398 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_397, (float)(0.5f))), (float)(-0.00999999978f))))), (-0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_399 = V_0;
		float L_400 = L_399->get_headWidth_6();
		float L_401;
		L_401 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_400, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_402 = V_0;
		float L_403 = L_402->get_earsPosition_24();
		float L_404;
		L_404 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_403, (float)(0.5f))), (float)(0.0199999996f))))), (-0.0199999996f), (0.0199999996f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_405;
		memset((&L_405), 0, sizeof(L_405));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_405), L_398, L_401, L_404, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_394, L_395, L_405, (1.0f));
		// skeleton.SetRotation(leftEarAdjustHash,
		//                      Quaternion.Euler(new Vector3(
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp((umaDna.earsRotation - 0.5f) * 40, -15, 40))));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_406 = ___skeleton1;
		int32_t L_407 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEarAdjustHash_38();
		int32_t L_408;
		L_408 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		int32_t L_409;
		L_409 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_410 = V_0;
		float L_411 = L_410->get_earsRotation_25();
		float L_412;
		L_412 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_411, (float)(0.5f))), (float)(40.0f))), (-15.0f), (40.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_413;
		memset((&L_413), 0, sizeof(L_413));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_413), ((float)((float)L_408)), ((float)((float)L_409)), L_412, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_414;
		L_414 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_413, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_406, L_407, L_414);
		// skeleton.SetRotation(rightEarAdjustHash,
		//                      Quaternion.Euler(new Vector3(
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp((umaDna.earsRotation - 0.5f) * -40, -40, 15))));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_415 = ___skeleton1;
		int32_t L_416 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEarAdjustHash_39();
		int32_t L_417;
		L_417 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		int32_t L_418;
		L_418 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_419 = V_0;
		float L_420 = L_419->get_earsRotation_25();
		float L_421;
		L_421 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_420, (float)(0.5f))), (float)(-40.0f))), (-40.0f), (15.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_422;
		memset((&L_422), 0, sizeof(L_422));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_422), ((float)((float)L_417)), ((float)((float)L_418)), L_421, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_423;
		L_423 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_422, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_415, L_416, L_423);
		// skeleton.SetScale(noseBaseAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.noseSize - 0.5f) * 1.5f, 0.4f, 3.0f),
		//     Mathf.Clamp(1 + (umaDna.noseSize - 0.5f) * 0.15f + (umaDna.noseWidth - 0.5f) * 1.0f, 0.25f, 3.0f),
		//     Mathf.Clamp(1 + (umaDna.noseSize - 0.5f) * 0.15f + (umaDna.noseFlatten - 0.5f) * 0.75f, 0.25f, 3.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_424 = ___skeleton1;
		int32_t L_425 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseBaseAdjustHash_40();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_426 = V_0;
		float L_427 = L_426->get_noseSize_26();
		float L_428;
		L_428 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_427, (float)(0.5f))), (float)(1.5f))))), (0.400000006f), (3.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_429 = V_0;
		float L_430 = L_429->get_noseSize_26();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_431 = V_0;
		float L_432 = L_431->get_noseWidth_28();
		float L_433;
		L_433 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_430, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_432, (float)(0.5f))), (float)(1.0f))))), (0.25f), (3.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_434 = V_0;
		float L_435 = L_434->get_noseSize_26();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_436 = V_0;
		float L_437 = L_436->get_noseFlatten_32();
		float L_438;
		L_438 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_435, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_437, (float)(0.5f))), (float)(0.75f))))), (0.25f), (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_439;
		memset((&L_439), 0, sizeof(L_439));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_439), L_428, L_433, L_438, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_424, L_425, L_439);
		// skeleton.SetScale(noseMiddleAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.noseCurve - 0.5f) * 1.9f + (umaDna.noseSize - 0.5f) * 1.0f, 0.5f, 3.0f),
		//     Mathf.Clamp(1 + (umaDna.noseCurve - 0.5f) * 0.15f + (umaDna.noseSize - 0.5f) * 0.25f + (umaDna.noseWidth - 0.5f) * 0.5f, 0.5f, 3.0f),
		//     Mathf.Clamp(1 + (umaDna.noseCurve - 0.5f) * 0.15f + (umaDna.noseSize - 0.5f) * 0.10f, 0.5f, 3.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_440 = ___skeleton1;
		int32_t L_441 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseMiddleAdjustHash_41();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_442 = V_0;
		float L_443 = L_442->get_noseCurve_27();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_444 = V_0;
		float L_445 = L_444->get_noseSize_26();
		float L_446;
		L_446 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_443, (float)(0.5f))), (float)(1.89999998f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_445, (float)(0.5f))), (float)(1.0f))))), (0.5f), (3.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_447 = V_0;
		float L_448 = L_447->get_noseCurve_27();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_449 = V_0;
		float L_450 = L_449->get_noseSize_26();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_451 = V_0;
		float L_452 = L_451->get_noseWidth_28();
		float L_453;
		L_453 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_448, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_450, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_452, (float)(0.5f))), (float)(0.5f))))), (0.5f), (3.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_454 = V_0;
		float L_455 = L_454->get_noseCurve_27();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_456 = V_0;
		float L_457 = L_456->get_noseSize_26();
		float L_458;
		L_458 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_455, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_457, (float)(0.5f))), (float)(0.100000001f))))), (0.5f), (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_459;
		memset((&L_459), 0, sizeof(L_459));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_459), L_446, L_453, L_458, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_440, L_441, L_459);
		// skeleton.SetRotation(noseBaseAdjustHash,
		//                      Quaternion.Euler(new Vector3(
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp((umaDna.noseInclination - 0.5f) * 60, -60, 30),
		//     Mathf.Clamp(0, -30, 80))));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_460 = ___skeleton1;
		int32_t L_461 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseBaseAdjustHash_40();
		int32_t L_462;
		L_462 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_463 = V_0;
		float L_464 = L_463->get_noseInclination_29();
		float L_465;
		L_465 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_464, (float)(0.5f))), (float)(60.0f))), (-60.0f), (30.0f), /*hidden argument*/NULL);
		int32_t L_466;
		L_466 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_467;
		memset((&L_467), 0, sizeof(L_467));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_467), ((float)((float)L_462)), L_465, ((float)((float)L_466)), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_468;
		L_468 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_467, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_460, L_461, L_468);
		// skeleton.SetPositionRelative(noseBaseAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.nosePronounced - 0.5f) * -0.0125f, -0.025f, 0.025f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.0125f, -0.025f, 0.025f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_469 = ___skeleton1;
		int32_t L_470 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseBaseAdjustHash_40();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_471 = V_0;
		float L_472 = L_471->get_nosePronounced_31();
		float L_473;
		L_473 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_472, (float)(0.5f))), (float)(-0.0125000002f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		float L_474;
		L_474 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_475 = V_0;
		float L_476 = L_475->get_nosePosition_30();
		float L_477;
		L_477 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_476, (float)(0.5f))), (float)(0.0125000002f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_478;
		memset((&L_478), 0, sizeof(L_478));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_478), L_473, L_474, L_477, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_469, L_470, L_478, (1.0f));
		// skeleton.SetPositionRelative(noseMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.nosePronounced - 0.5f) * -0.006f, -0.012f, 0.012f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.007f, -0.015f, 0.015f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_479 = ___skeleton1;
		int32_t L_480 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseMiddleAdjustHash_41();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_481 = V_0;
		float L_482 = L_481->get_nosePronounced_31();
		float L_483;
		L_483 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_482, (float)(0.5f))), (float)(-0.00600000005f))))), (-0.0120000001f), (0.0120000001f), /*hidden argument*/NULL);
		float L_484;
		L_484 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_485 = V_0;
		float L_486 = L_485->get_nosePosition_30();
		float L_487;
		L_487 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_486, (float)(0.5f))), (float)(0.00700000022f))))), (-0.0149999997f), (0.0149999997f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_488;
		memset((&L_488), 0, sizeof(L_488));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_488), L_483, L_484, L_487, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_479, L_480, L_488, (1.0f));
		// skeleton.SetPositionRelative(leftNoseAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.nosePronounced - 0.5f) * -0.0125f, -0.025f, 0.025f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.0125f, -0.025f, 0.025f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_489 = ___skeleton1;
		int32_t L_490 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftNoseAdjustHash_42();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_491 = V_0;
		float L_492 = L_491->get_nosePronounced_31();
		float L_493;
		L_493 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_492, (float)(0.5f))), (float)(-0.0125000002f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		float L_494;
		L_494 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_495 = V_0;
		float L_496 = L_495->get_nosePosition_30();
		float L_497;
		L_497 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_496, (float)(0.5f))), (float)(0.0125000002f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_498;
		memset((&L_498), 0, sizeof(L_498));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_498), L_493, L_494, L_497, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_489, L_490, L_498, (1.0f));
		// skeleton.SetPositionRelative(rightNoseAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.nosePronounced - 0.5f) * -0.0125f, -0.025f, 0.025f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.0125f, -0.025f, 0.025f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_499 = ___skeleton1;
		int32_t L_500 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightNoseAdjustHash_43();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_501 = V_0;
		float L_502 = L_501->get_nosePronounced_31();
		float L_503;
		L_503 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_502, (float)(0.5f))), (float)(-0.0125000002f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		float L_504;
		L_504 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_505 = V_0;
		float L_506 = L_505->get_nosePosition_30();
		float L_507;
		L_507 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_506, (float)(0.5f))), (float)(0.0125000002f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_508;
		memset((&L_508), 0, sizeof(L_508));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_508), L_503, L_504, L_507, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_499, L_500, L_508, (1.0f));
		// skeleton.SetPositionRelative(upperLipsAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.0045f, -0.0045f, 0.0045f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_509 = ___skeleton1;
		int32_t L_510 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_upperLipsAdjustHash_44();
		float L_511;
		L_511 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		float L_512;
		L_512 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_513 = V_0;
		float L_514 = L_513->get_nosePosition_30();
		float L_515;
		L_515 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_514, (float)(0.5f))), (float)(0.00449999981f))))), (-0.00449999981f), (0.00449999981f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_516;
		memset((&L_516), 0, sizeof(L_516));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_516), L_511, L_512, L_515, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_509, L_510, L_516, (1.0f));
		// skeleton.SetScale(mandibleAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.chinPronounced - 0.5f) * 0.18f, 0.55f, 1.75f),
		//     Mathf.Clamp(1 + (umaDna.chinSize - 0.5f) * 1.3f, 0.75f, 1.3f),
		//     Mathf.Clamp(1, 0.4f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_517 = ___skeleton1;
		int32_t L_518 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_mandibleAdjustHash_45();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_519 = V_0;
		float L_520 = L_519->get_chinPronounced_34();
		float L_521;
		L_521 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_520, (float)(0.5f))), (float)(0.180000007f))))), (0.550000012f), (1.75f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_522 = V_0;
		float L_523 = L_522->get_chinSize_33();
		float L_524;
		L_524 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_523, (float)(0.5f))), (float)(1.29999995f))))), (0.75f), (1.29999995f), /*hidden argument*/NULL);
		float L_525;
		L_525 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.400000006f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_526;
		memset((&L_526), 0, sizeof(L_526));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_526), L_521, L_524, L_525, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_517, L_518, L_526);
		// skeleton.SetPositionRelative(mandibleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.0125f, 0.0125f),
		//     Mathf.Clamp(0, -0.0125f, 0.0125f),
		//     Mathf.Clamp(0 + (umaDna.chinPosition - 0.5f) * 0.0075f, -0.0075f, 0.0075f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_527 = ___skeleton1;
		int32_t L_528 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_mandibleAdjustHash_45();
		float L_529;
		L_529 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0125000002f), (0.0125000002f), /*hidden argument*/NULL);
		float L_530;
		L_530 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0125000002f), (0.0125000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_531 = V_0;
		float L_532 = L_531->get_chinPosition_35();
		float L_533;
		L_533 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_532, (float)(0.5f))), (float)(0.00749999983f))))), (-0.00749999983f), (0.00749999983f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_534;
		memset((&L_534), 0, sizeof(L_534));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_534), L_529, L_530, L_533, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_527, L_528, L_534, (1.0f));
		// skeleton.SetPositionRelative(leftLowMaxilarAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.jawsSize - 0.5f) * 0.025f, -0.025f, 0.025f),
		//     Mathf.Clamp(0 + (umaDna.jawsPosition - 0.5f) * 0.03f, -0.03f, 0.03f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_535 = ___skeleton1;
		int32_t L_536 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLowMaxilarAdjustHash_46();
		float L_537;
		L_537 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_538 = V_0;
		float L_539 = L_538->get_jawsSize_37();
		float L_540;
		L_540 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_539, (float)(0.5f))), (float)(0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_541 = V_0;
		float L_542 = L_541->get_jawsPosition_38();
		float L_543;
		L_543 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_542, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_544;
		memset((&L_544), 0, sizeof(L_544));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_544), L_537, L_540, L_543, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_535, L_536, L_544, (1.0f));
		// skeleton.SetPositionRelative(rightLowMaxilarAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.jawsSize - 0.5f) * -0.025f, -0.025f, 0.025f),
		//     Mathf.Clamp(0 + (umaDna.jawsPosition - 0.5f) * 0.03f, -0.03f, 0.03f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_545 = ___skeleton1;
		int32_t L_546 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLowMaxilarAdjustHash_47();
		float L_547;
		L_547 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_548 = V_0;
		float L_549 = L_548->get_jawsSize_37();
		float L_550;
		L_550 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_549, (float)(0.5f))), (float)(-0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_551 = V_0;
		float L_552 = L_551->get_jawsPosition_38();
		float L_553;
		L_553 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_552, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_554;
		memset((&L_554), 0, sizeof(L_554));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_554), L_547, L_550, L_553, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_545, L_546, L_554, (1.0f));
		// skeleton.SetScale(leftCheekAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f),
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f),
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_555 = ___skeleton1;
		int32_t L_556 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftCheekAdjustHash_48();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_557 = V_0;
		float L_558 = L_557->get_cheekSize_39();
		float L_559;
		L_559 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_558, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_560 = V_0;
		float L_561 = L_560->get_cheekSize_39();
		float L_562;
		L_562 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_561, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_563 = V_0;
		float L_564 = L_563->get_cheekSize_39();
		float L_565;
		L_565 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_564, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_566;
		memset((&L_566), 0, sizeof(L_566));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_566), L_559, L_562, L_565, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_555, L_556, L_566);
		// skeleton.SetScale(rightCheekAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f),
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f),
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_567 = ___skeleton1;
		int32_t L_568 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightCheekAdjustHash_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_569 = V_0;
		float L_570 = L_569->get_cheekSize_39();
		float L_571;
		L_571 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_570, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_572 = V_0;
		float L_573 = L_572->get_cheekSize_39();
		float L_574;
		L_574 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_573, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_575 = V_0;
		float L_576 = L_575->get_cheekSize_39();
		float L_577;
		L_577 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_576, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_578;
		memset((&L_578), 0, sizeof(L_578));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_578), L_571, L_574, L_577, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_567, L_568, L_578);
		// skeleton.SetPositionRelative(leftCheekAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.cheekPosition - 0.5f) * 0.03f, -0.03f, 0.03f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_579 = ___skeleton1;
		int32_t L_580 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftCheekAdjustHash_48();
		float L_581;
		L_581 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		float L_582;
		L_582 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_583 = V_0;
		float L_584 = L_583->get_cheekPosition_40();
		float L_585;
		L_585 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_584, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_586;
		memset((&L_586), 0, sizeof(L_586));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_586), L_581, L_582, L_585, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_579, L_580, L_586, (1.0f));
		// skeleton.SetPositionRelative(rightCheekAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.cheekPosition - 0.5f) * 0.03f, -0.03f, 0.03f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_587 = ___skeleton1;
		int32_t L_588 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightCheekAdjustHash_49();
		float L_589;
		L_589 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		float L_590;
		L_590 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_591 = V_0;
		float L_592 = L_591->get_cheekPosition_40();
		float L_593;
		L_593 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_592, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_594;
		memset((&L_594), 0, sizeof(L_594));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_594), L_589, L_590, L_593, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_587, L_588, L_594, (1.0f));
		// skeleton.SetPositionRelative(leftLowCheekAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.lowCheekPronounced - 0.5f) * -0.035f, -0.07f, 0.035f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.lowCheekPosition - 0.5f) * 0.06f, -0.06f, 0.06f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_595 = ___skeleton1;
		int32_t L_596 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLowCheekAdjustHash_50();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_597 = V_0;
		float L_598 = L_597->get_lowCheekPronounced_41();
		float L_599;
		L_599 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_598, (float)(0.5f))), (float)(-0.0350000001f))))), (-0.0700000003f), (0.0350000001f), /*hidden argument*/NULL);
		float L_600;
		L_600 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_601 = V_0;
		float L_602 = L_601->get_lowCheekPosition_42();
		float L_603;
		L_603 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_602, (float)(0.5f))), (float)(0.0599999987f))))), (-0.0599999987f), (0.0599999987f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_604;
		memset((&L_604), 0, sizeof(L_604));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_604), L_599, L_600, L_603, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_595, L_596, L_604, (1.0f));
		// skeleton.SetPositionRelative(rightLowCheekAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.lowCheekPronounced - 0.5f) * -0.035f, -0.07f, 0.035f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.lowCheekPosition - 0.5f) * 0.06f, -0.06f, 0.06f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_605 = ___skeleton1;
		int32_t L_606 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLowCheekAdjustHash_51();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_607 = V_0;
		float L_608 = L_607->get_lowCheekPronounced_41();
		float L_609;
		L_609 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_608, (float)(0.5f))), (float)(-0.0350000001f))))), (-0.0700000003f), (0.0350000001f), /*hidden argument*/NULL);
		float L_610;
		L_610 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_611 = V_0;
		float L_612 = L_611->get_lowCheekPosition_42();
		float L_613;
		L_613 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_612, (float)(0.5f))), (float)(0.0599999987f))))), (-0.0599999987f), (0.0599999987f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_614;
		memset((&L_614), 0, sizeof(L_614));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_614), L_609, L_610, L_613, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_605, L_606, L_614, (1.0f));
		// skeleton.SetPositionRelative(noseTopAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.025f + (umaDna.foreheadSize - 0.5f) * -0.0015f, -0.015f, 0.0025f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_615 = ___skeleton1;
		int32_t L_616 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseTopAdjustHash_52();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_617 = V_0;
		float L_618 = L_617->get_foreheadSize_43();
		float L_619;
		L_619 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_618, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_620;
		L_620 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_621 = V_0;
		float L_622 = L_621->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_623 = V_0;
		float L_624 = L_623->get_foreheadSize_43();
		float L_625;
		L_625 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_622, (float)(0.5f))), (float)(-0.0250000004f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_624, (float)(0.5f))), (float)(-0.00150000001f))))), (-0.0149999997f), (0.00249999994f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_626;
		memset((&L_626), 0, sizeof(L_626));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_626), L_619, L_620, L_625, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_615, L_616, L_626, (1.0f));
		// skeleton.SetPositionRelative(leftEyebrowLowAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.02f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.015f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_627 = ___skeleton1;
		int32_t L_628 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyebrowLowAdjustHash_53();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_629 = V_0;
		float L_630 = L_629->get_foreheadSize_43();
		float L_631;
		L_631 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_630, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_632;
		L_632 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_633 = V_0;
		float L_634 = L_633->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_635 = V_0;
		float L_636 = L_635->get_foreheadSize_43();
		float L_637;
		L_637 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_634, (float)(0.5f))), (float)(-0.0199999996f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_636, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.0149999997f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_638;
		memset((&L_638), 0, sizeof(L_638));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_638), L_631, L_632, L_637, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_627, L_628, L_638, (1.0f));
		// skeleton.SetPositionRelative(leftEyebrowMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.04f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.025f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_639 = ___skeleton1;
		int32_t L_640 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyebrowMiddleAdjustHash_55();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_641 = V_0;
		float L_642 = L_641->get_foreheadSize_43();
		float L_643;
		L_643 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_642, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_644;
		L_644 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_645 = V_0;
		float L_646 = L_645->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_647 = V_0;
		float L_648 = L_647->get_foreheadSize_43();
		float L_649;
		L_649 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_646, (float)(0.5f))), (float)(-0.0399999991f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_648, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_650;
		memset((&L_650), 0, sizeof(L_650));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_650), L_643, L_644, L_649, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_639, L_640, L_650, (1.0f));
		// skeleton.SetPositionRelative(leftEyebrowUpAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.007f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.010f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_651 = ___skeleton1;
		int32_t L_652 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyebrowUpAdjustHash_57();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_653 = V_0;
		float L_654 = L_653->get_foreheadSize_43();
		float L_655;
		L_655 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_654, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_656;
		L_656 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_657 = V_0;
		float L_658 = L_657->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_659 = V_0;
		float L_660 = L_659->get_foreheadSize_43();
		float L_661;
		L_661 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_658, (float)(0.5f))), (float)(-0.00700000022f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_660, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.00999999978f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_662;
		memset((&L_662), 0, sizeof(L_662));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_662), L_655, L_656, L_661, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_651, L_652, L_662, (1.0f));
		// skeleton.SetPositionRelative(rightEyebrowLowAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.02f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.015f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_663 = ___skeleton1;
		int32_t L_664 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyebrowLowAdjustHash_54();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_665 = V_0;
		float L_666 = L_665->get_foreheadSize_43();
		float L_667;
		L_667 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_666, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_668;
		L_668 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_669 = V_0;
		float L_670 = L_669->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_671 = V_0;
		float L_672 = L_671->get_foreheadSize_43();
		float L_673;
		L_673 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_670, (float)(0.5f))), (float)(-0.0199999996f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_672, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.0149999997f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_674;
		memset((&L_674), 0, sizeof(L_674));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_674), L_667, L_668, L_673, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_663, L_664, L_674, (1.0f));
		// skeleton.SetPositionRelative(rightEyebrowMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.04f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.025f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_675 = ___skeleton1;
		int32_t L_676 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyebrowMiddleAdjustHash_56();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_677 = V_0;
		float L_678 = L_677->get_foreheadSize_43();
		float L_679;
		L_679 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_678, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_680;
		L_680 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_681 = V_0;
		float L_682 = L_681->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_683 = V_0;
		float L_684 = L_683->get_foreheadSize_43();
		float L_685;
		L_685 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_682, (float)(0.5f))), (float)(-0.0399999991f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_684, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_686;
		memset((&L_686), 0, sizeof(L_686));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_686), L_679, L_680, L_685, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_675, L_676, L_686, (1.0f));
		// skeleton.SetPositionRelative(rightEyebrowUpAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.007f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.010f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_687 = ___skeleton1;
		int32_t L_688 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyebrowUpAdjustHash_58();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_689 = V_0;
		float L_690 = L_689->get_foreheadSize_43();
		float L_691;
		L_691 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_690, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_692;
		L_692 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_693 = V_0;
		float L_694 = L_693->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_695 = V_0;
		float L_696 = L_695->get_foreheadSize_43();
		float L_697;
		L_697 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_694, (float)(0.5f))), (float)(-0.00700000022f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_696, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.00999999978f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_698;
		memset((&L_698), 0, sizeof(L_698));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_698), L_691, L_692, L_697, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_687, L_688, L_698, (1.0f));
		// skeleton.SetScale(lipsSuperiorAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_699 = ___skeleton1;
		int32_t L_700 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lipsSuperiorAdjustHash_59();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_701 = V_0;
		float L_702 = L_701->get_lipsSize_45();
		float L_703;
		L_703 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_702, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_704 = V_0;
		float L_705 = L_704->get_lipsSize_45();
		float L_706;
		L_706 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_705, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_707 = V_0;
		float L_708 = L_707->get_lipsSize_45();
		float L_709;
		L_709 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_708, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_710;
		memset((&L_710), 0, sizeof(L_710));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_710), L_703, L_706, L_709, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_699, L_700, L_710);
		// skeleton.SetScale(lipsInferiorAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 1.0f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 1.0f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_711 = ___skeleton1;
		int32_t L_712 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lipsInferiorAdjustHash_60();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_713 = V_0;
		float L_714 = L_713->get_lipsSize_45();
		float L_715;
		L_715 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_714, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_716 = V_0;
		float L_717 = L_716->get_lipsSize_45();
		float L_718;
		L_718 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_717, (float)(0.5f))), (float)(1.0f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_719 = V_0;
		float L_720 = L_719->get_lipsSize_45();
		float L_721;
		L_721 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_720, (float)(0.5f))), (float)(1.0f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_722;
		memset((&L_722), 0, sizeof(L_722));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_722), L_715, L_718, L_721, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_711, L_712, L_722);
		// skeleton.SetScale(leftLipsSuperiorMiddleAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_723 = ___skeleton1;
		int32_t L_724 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsSuperiorMiddleAdjustHash_61();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_725 = V_0;
		float L_726 = L_725->get_lipsSize_45();
		float L_727;
		L_727 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_726, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_728 = V_0;
		float L_729 = L_728->get_lipsSize_45();
		float L_730;
		L_730 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_729, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_731 = V_0;
		float L_732 = L_731->get_lipsSize_45();
		float L_733;
		L_733 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_732, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_734;
		memset((&L_734), 0, sizeof(L_734));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_734), L_727, L_730, L_733, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_723, L_724, L_734);
		// skeleton.SetScale(rightLipsSuperiorMiddleAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_735 = ___skeleton1;
		int32_t L_736 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsSuperiorMiddleAdjustHash_62();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_737 = V_0;
		float L_738 = L_737->get_lipsSize_45();
		float L_739;
		L_739 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_738, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_740 = V_0;
		float L_741 = L_740->get_lipsSize_45();
		float L_742;
		L_742 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_741, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_743 = V_0;
		float L_744 = L_743->get_lipsSize_45();
		float L_745;
		L_745 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_744, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_746;
		memset((&L_746), 0, sizeof(L_746));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_746), L_739, L_742, L_745, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_735, L_736, L_746);
		// skeleton.SetScale(leftLipsInferiorAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_747 = ___skeleton1;
		int32_t L_748 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsInferiorAdjustHash_63();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_749 = V_0;
		float L_750 = L_749->get_lipsSize_45();
		float L_751;
		L_751 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_750, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_752 = V_0;
		float L_753 = L_752->get_lipsSize_45();
		float L_754;
		L_754 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_753, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_755 = V_0;
		float L_756 = L_755->get_lipsSize_45();
		float L_757;
		L_757 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_756, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_758;
		memset((&L_758), 0, sizeof(L_758));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_758), L_751, L_754, L_757, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_747, L_748, L_758);
		// skeleton.SetScale(rightLipsInferiorAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_759 = ___skeleton1;
		int32_t L_760 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsInferiorAdjustHash_64();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_761 = V_0;
		float L_762 = L_761->get_lipsSize_45();
		float L_763;
		L_763 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_762, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_764 = V_0;
		float L_765 = L_764->get_lipsSize_45();
		float L_766;
		L_766 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_765, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_767 = V_0;
		float L_768 = L_767->get_lipsSize_45();
		float L_769;
		L_769 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_768, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_770;
		memset((&L_770), 0, sizeof(L_770));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_770), L_763, L_766, L_769, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_759, L_760, L_770);
		// skeleton.SetPositionRelative(lipsInferiorAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.lipsSize - 0.5f) * -0.008f, -0.1f, 0.1f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_771 = ___skeleton1;
		int32_t L_772 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lipsInferiorAdjustHash_60();
		float L_773;
		L_773 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		float L_774;
		L_774 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_775 = V_0;
		float L_776 = L_775->get_lipsSize_45();
		float L_777;
		L_777 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_776, (float)(0.5f))), (float)(-0.00800000038f))))), (-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_778;
		memset((&L_778), 0, sizeof(L_778));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_778), L_773, L_774, L_777, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_771, L_772, L_778, (1.0f));
		// skeleton.SetPositionRelative(leftLipsAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * 0.03f, -0.02f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_779 = ___skeleton1;
		int32_t L_780 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsAdjustHash_65();
		float L_781;
		L_781 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_782 = V_0;
		float L_783 = L_782->get_mouthSize_46();
		float L_784;
		L_784 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_783, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0199999996f), (0.00499999989f), /*hidden argument*/NULL);
		float L_785;
		L_785 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_786;
		memset((&L_786), 0, sizeof(L_786));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_786), L_781, L_784, L_785, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_779, L_780, L_786, (1.0f));
		// skeleton.SetPositionRelative(rightLipsAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * -0.03f, -0.005f, 0.02f),
		//     Mathf.Clamp(0, -0.05f, 0.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_787 = ___skeleton1;
		int32_t L_788 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsAdjustHash_66();
		float L_789;
		L_789 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_790 = V_0;
		float L_791 = L_790->get_mouthSize_46();
		float L_792;
		L_792 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_791, (float)(0.5f))), (float)(-0.0299999993f))))), (-0.00499999989f), (0.0199999996f), /*hidden argument*/NULL);
		float L_793;
		L_793 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_794;
		memset((&L_794), 0, sizeof(L_794));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_794), L_789, L_792, L_793, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_787, L_788, L_794, (1.0f));
		// skeleton.SetPositionRelative(leftLipsSuperiorMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * 0.007f, -0.02f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_795 = ___skeleton1;
		int32_t L_796 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsSuperiorMiddleAdjustHash_61();
		float L_797;
		L_797 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_798 = V_0;
		float L_799 = L_798->get_mouthSize_46();
		float L_800;
		L_800 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_799, (float)(0.5f))), (float)(0.00700000022f))))), (-0.0199999996f), (0.00499999989f), /*hidden argument*/NULL);
		float L_801;
		L_801 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_802;
		memset((&L_802), 0, sizeof(L_802));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_802), L_797, L_800, L_801, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_795, L_796, L_802, (1.0f));
		// skeleton.SetPositionRelative(rightLipsSuperiorMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * -0.007f, -0.005f, 0.02f),
		//     Mathf.Clamp(0, -0.05f, 0.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_803 = ___skeleton1;
		int32_t L_804 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsSuperiorMiddleAdjustHash_62();
		float L_805;
		L_805 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_806 = V_0;
		float L_807 = L_806->get_mouthSize_46();
		float L_808;
		L_808 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_807, (float)(0.5f))), (float)(-0.00700000022f))))), (-0.00499999989f), (0.0199999996f), /*hidden argument*/NULL);
		float L_809;
		L_809 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_810;
		memset((&L_810), 0, sizeof(L_810));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_810), L_805, L_808, L_809, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_803, L_804, L_810, (1.0f));
		// skeleton.SetPositionRelative(leftLipsInferiorAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * 0.007f, -0.02f, 0.005f),
		//     Mathf.Clamp(0 + (umaDna.lipsSize - 0.5f) * -0.008f, -0.1f, 0.1f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_811 = ___skeleton1;
		int32_t L_812 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsInferiorAdjustHash_63();
		float L_813;
		L_813 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_814 = V_0;
		float L_815 = L_814->get_mouthSize_46();
		float L_816;
		L_816 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_815, (float)(0.5f))), (float)(0.00700000022f))))), (-0.0199999996f), (0.00499999989f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_817 = V_0;
		float L_818 = L_817->get_lipsSize_45();
		float L_819;
		L_819 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_818, (float)(0.5f))), (float)(-0.00800000038f))))), (-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_820;
		memset((&L_820), 0, sizeof(L_820));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_820), L_813, L_816, L_819, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_811, L_812, L_820, (1.0f));
		// skeleton.SetPositionRelative(rightLipsInferiorAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * -0.007f, -0.005f, 0.02f),
		//     Mathf.Clamp(0 + (umaDna.lipsSize - 0.5f) * -0.008f, -0.1f, 0.1f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_821 = ___skeleton1;
		int32_t L_822 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsInferiorAdjustHash_64();
		float L_823;
		L_823 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_824 = V_0;
		float L_825 = L_824->get_mouthSize_46();
		float L_826;
		L_826 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_825, (float)(0.5f))), (float)(-0.00700000022f))))), (-0.00499999989f), (0.0199999996f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_827 = V_0;
		float L_828 = L_827->get_lipsSize_45();
		float L_829;
		L_829 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_828, (float)(0.5f))), (float)(-0.00800000038f))))), (-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_830;
		memset((&L_830), 0, sizeof(L_830));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_830), L_823, L_826, L_829, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_821, L_822, L_830, (1.0f));
		// float overallScale = 0.81f + (umaDna.height - 0.5f) * 1.0f + (umaDna.legsSize - 0.5f) * 1.0f;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_831 = V_0;
		float L_832 = L_831->get_height_4();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_833 = V_0;
		float L_834 = L_833->get_legsSize_19();
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.810000002f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_832, (float)(0.5f))), (float)(1.0f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_834, (float)(0.5f))), (float)(1.0f)))));
		// overallScale = Mathf.Clamp(overallScale, 0.4f, 1.8f);
		float L_835 = V_1;
		float L_836;
		L_836 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_835, (0.400000006f), (1.79999995f), /*hidden argument*/NULL);
		V_1 = L_836;
		// skeleton.SetScale(positionHash, new Vector3(overallScale, overallScale, overallScale));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_837 = ___skeleton1;
		int32_t L_838 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_positionHash_68();
		float L_839 = V_1;
		float L_840 = V_1;
		float L_841 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_842;
		memset((&L_842), 0, sizeof(L_842));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_842), L_839, L_840, L_841, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_837, L_838, L_842);
		// skeleton.SetPositionRelative(positionHash,
		//                      new Vector3(
		//     Mathf.Clamp((umaDna.feetSize - 0.5f) * -0.17f, -0.15f, 0.0675f),
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_843 = ___skeleton1;
		int32_t L_844 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_positionHash_68();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_845 = V_0;
		float L_846 = L_845->get_feetSize_13();
		float L_847;
		L_847 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_846, (float)(0.5f))), (float)(-0.170000002f))), (-0.150000006f), (0.0675000027f), /*hidden argument*/NULL);
		int32_t L_848;
		L_848 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		int32_t L_849;
		L_849 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_850;
		memset((&L_850), 0, sizeof(L_850));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_850), L_847, ((float)((float)L_848)), ((float)((float)L_849)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_843, L_844, L_850, (1.0f));
		// float lowerBackScale = Mathf.Clamp(1 - (umaDna.legsSize - 0.5f) * 1.0f, 0.5f, 3.0f);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_851 = V_0;
		float L_852 = L_851->get_legsSize_19();
		float L_853;
		L_853 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_852, (float)(0.5f))), (float)(1.0f))))), (0.5f), (3.0f), /*hidden argument*/NULL);
		V_2 = L_853;
		// skeleton.SetScale(lowerBackHash, new Vector3(lowerBackScale, lowerBackScale, lowerBackScale));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_854 = ___skeleton1;
		int32_t L_855 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lowerBackHash_69();
		float L_856 = V_2;
		float L_857 = V_2;
		float L_858 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_859;
		memset((&L_859), 0, sizeof(L_859));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_859), L_856, L_857, L_858, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_854, L_855, L_859);
		// skeleton.SetScale(headHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.headSize - 0.5f) * 2.0f, 0.5f, 2),
		//     Mathf.Clamp(1 + (umaDna.headSize - 0.5f) * 2.0f, 0.5f, 2),
		//     Mathf.Clamp(1 + (umaDna.headSize - 0.5f) * 2.0f, 0.5f, 2)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_860 = ___skeleton1;
		int32_t L_861 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_headHash_70();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_862 = V_0;
		float L_863 = L_862->get_headSize_5();
		float L_864;
		L_864 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_863, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_865 = V_0;
		float L_866 = L_865->get_headSize_5();
		float L_867;
		L_867 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_866, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_868 = V_0;
		float L_869 = L_868->get_headSize_5();
		float L_870;
		L_870 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_869, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_871;
		memset((&L_871), 0, sizeof(L_871));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_871), L_864, L_867, L_870, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_860, L_861, L_871);
		// skeleton.SetScale(leftArmHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_872 = ___skeleton1;
		int32_t L_873 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftArmHash_71();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_874 = V_0;
		float L_875 = L_874->get_armLength_8();
		float L_876;
		L_876 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_875, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_877 = V_0;
		float L_878 = L_877->get_armLength_8();
		float L_879;
		L_879 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_878, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_880 = V_0;
		float L_881 = L_880->get_armLength_8();
		float L_882;
		L_882 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_881, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_883;
		memset((&L_883), 0, sizeof(L_883));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_883), L_876, L_879, L_882, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_872, L_873, L_883);
		// skeleton.SetScale(rightArmHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_884 = ___skeleton1;
		int32_t L_885 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightArmHash_72();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_886 = V_0;
		float L_887 = L_886->get_armLength_8();
		float L_888;
		L_888 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_887, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_889 = V_0;
		float L_890 = L_889->get_armLength_8();
		float L_891;
		L_891 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_890, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_892 = V_0;
		float L_893 = L_892->get_armLength_8();
		float L_894;
		L_894 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_893, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_895;
		memset((&L_895), 0, sizeof(L_895));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_895), L_888, L_891, L_894, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_884, L_885, L_895);
		// skeleton.SetScale(leftForeArmHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_896 = ___skeleton1;
		int32_t L_897 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftForeArmHash_73();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_898 = V_0;
		float L_899 = L_898->get_forearmLength_9();
		float L_900;
		L_900 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_899, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_901 = V_0;
		float L_902 = L_901->get_forearmLength_9();
		float L_903;
		L_903 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_902, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_904 = V_0;
		float L_905 = L_904->get_forearmLength_9();
		float L_906;
		L_906 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_905, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_907;
		memset((&L_907), 0, sizeof(L_907));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_907), L_900, L_903, L_906, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_896, L_897, L_907);
		// skeleton.SetScale(rightForeArmHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_908 = ___skeleton1;
		int32_t L_909 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightForeArmHash_74();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_910 = V_0;
		float L_911 = L_910->get_forearmLength_9();
		float L_912;
		L_912 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_911, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_913 = V_0;
		float L_914 = L_913->get_forearmLength_9();
		float L_915;
		L_915 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_914, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_916 = V_0;
		float L_917 = L_916->get_forearmLength_9();
		float L_918;
		L_918 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_917, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_919;
		memset((&L_919), 0, sizeof(L_919));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_919), L_912, L_915, L_918, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_908, L_909, L_919);
		// skeleton.SetScale(leftHandHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_920 = ___skeleton1;
		int32_t L_921 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftHandHash_75();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_922 = V_0;
		float L_923 = L_922->get_handsSize_12();
		float L_924;
		L_924 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_923, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_925 = V_0;
		float L_926 = L_925->get_handsSize_12();
		float L_927;
		L_927 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_926, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_928 = V_0;
		float L_929 = L_928->get_handsSize_12();
		float L_930;
		L_930 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_929, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_931;
		memset((&L_931), 0, sizeof(L_931));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_931), L_924, L_927, L_930, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_920, L_921, L_931);
		// skeleton.SetScale(rightHandHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_932 = ___skeleton1;
		int32_t L_933 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightHandHash_76();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_934 = V_0;
		float L_935 = L_934->get_handsSize_12();
		float L_936;
		L_936 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_935, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_937 = V_0;
		float L_938 = L_937->get_handsSize_12();
		float L_939;
		L_939 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_938, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_940 = V_0;
		float L_941 = L_940->get_handsSize_12();
		float L_942;
		L_942 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_941, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_943;
		memset((&L_943), 0, sizeof(L_943));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_943), L_936, L_939, L_942, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_932, L_933, L_943);
		// skeleton.SetScale(leftFootHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_944 = ___skeleton1;
		int32_t L_945 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftFootHash_77();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_946 = V_0;
		float L_947 = L_946->get_feetSize_13();
		float L_948;
		L_948 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_947, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_949 = V_0;
		float L_950 = L_949->get_feetSize_13();
		float L_951;
		L_951 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_950, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_952 = V_0;
		float L_953 = L_952->get_feetSize_13();
		float L_954;
		L_954 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_953, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_955;
		memset((&L_955), 0, sizeof(L_955));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_955), L_948, L_951, L_954, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_944, L_945, L_955);
		// skeleton.SetScale(rightFootHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_956 = ___skeleton1;
		int32_t L_957 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightFootHash_78();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_958 = V_0;
		float L_959 = L_958->get_feetSize_13();
		float L_960;
		L_960 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_959, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_961 = V_0;
		float L_962 = L_961->get_feetSize_13();
		float L_963;
		L_963 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_962, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_964 = V_0;
		float L_965 = L_964->get_feetSize_13();
		float L_966;
		L_966 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_965, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_967;
		memset((&L_967), 0, sizeof(L_967));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_967), L_960, L_963, L_966, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_956, L_957, L_967);
		// skeleton.SetPositionRelative(leftUpLegHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp((umaDna.legSeparation - 0.5f) * -0.15f + (umaDna.lowerWeight - 0.5f) * -0.035f + (umaDna.legsSize - 0.5f) * 0.1f, -0.055f, 0.055f),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_968 = ___skeleton1;
		int32_t L_969 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftUpLegHash_79();
		int32_t L_970;
		L_970 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_971 = V_0;
		float L_972 = L_971->get_legSeparation_14();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_973 = V_0;
		float L_974 = L_973->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_975 = V_0;
		float L_976 = L_975->get_legsSize_19();
		float L_977;
		L_977 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_972, (float)(0.5f))), (float)(-0.150000006f))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_974, (float)(0.5f))), (float)(-0.0350000001f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_976, (float)(0.5f))), (float)(0.100000001f))))), (-0.0549999997f), (0.0549999997f), /*hidden argument*/NULL);
		int32_t L_978;
		L_978 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_979;
		memset((&L_979), 0, sizeof(L_979));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_979), ((float)((float)L_970)), L_977, ((float)((float)L_978)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_968, L_969, L_979, (1.0f));
		// skeleton.SetPositionRelative(rightUpLegHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp((umaDna.legSeparation - 0.5f) * 0.15f + (umaDna.lowerWeight - 0.5f) * 0.035f + (umaDna.legsSize - 0.5f) * -0.1f, -0.055f, 0.055f),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_980 = ___skeleton1;
		int32_t L_981 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightUpLegHash_80();
		int32_t L_982;
		L_982 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_983 = V_0;
		float L_984 = L_983->get_legSeparation_14();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_985 = V_0;
		float L_986 = L_985->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_987 = V_0;
		float L_988 = L_987->get_legsSize_19();
		float L_989;
		L_989 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_984, (float)(0.5f))), (float)(0.150000006f))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_986, (float)(0.5f))), (float)(0.0350000001f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_988, (float)(0.5f))), (float)(-0.100000001f))))), (-0.0549999997f), (0.0549999997f), /*hidden argument*/NULL);
		int32_t L_990;
		L_990 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_991;
		memset((&L_991), 0, sizeof(L_991));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_991), ((float)((float)L_982)), L_989, ((float)((float)L_990)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_980, L_981, L_991, (1.0f));
		// skeleton.SetPositionRelative(leftShoulderHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp((umaDna.upperMuscle - 0.5f) * -0.0235f, -0.025f, 0.015f),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_992 = ___skeleton1;
		int32_t L_993 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftShoulderHash_81();
		int32_t L_994;
		L_994 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_995 = V_0;
		float L_996 = L_995->get_upperMuscle_15();
		float L_997;
		L_997 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_996, (float)(0.5f))), (float)(-0.0234999992f))), (-0.0250000004f), (0.0149999997f), /*hidden argument*/NULL);
		int32_t L_998;
		L_998 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_999;
		memset((&L_999), 0, sizeof(L_999));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_999), ((float)((float)L_994)), L_997, ((float)((float)L_998)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_992, L_993, L_999, (1.0f));
		// skeleton.SetPositionRelative(rightShoulderHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp((umaDna.upperMuscle - 0.5f) * 0.0235f, -0.015f, 0.025f),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_1000 = ___skeleton1;
		int32_t L_1001 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightShoulderHash_82();
		int32_t L_1002;
		L_1002 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1003 = V_0;
		float L_1004 = L_1003->get_upperMuscle_15();
		float L_1005;
		L_1005 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1004, (float)(0.5f))), (float)(0.0234999992f))), (-0.0149999997f), (0.0250000004f), /*hidden argument*/NULL);
		int32_t L_1006;
		L_1006 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1007;
		memset((&L_1007), 0, sizeof(L_1007));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1007), ((float)((float)L_1002)), L_1005, ((float)((float)L_1006)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_1000, L_1001, L_1007, (1.0f));
		// skeleton.SetScale(mandibleHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.mandibleSize - 0.5f) * 0.35f, 0.35f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.mandibleSize - 0.5f) * 0.35f, 0.35f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.mandibleSize - 0.5f) * 0.35f, 0.35f, 1.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_1008 = ___skeleton1;
		int32_t L_1009 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_mandibleHash_83();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1010 = V_0;
		float L_1011 = L_1010->get_mandibleSize_36();
		float L_1012;
		L_1012 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1011, (float)(0.5f))), (float)(0.349999994f))))), (0.349999994f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1013 = V_0;
		float L_1014 = L_1013->get_mandibleSize_36();
		float L_1015;
		L_1015 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1014, (float)(0.5f))), (float)(0.349999994f))))), (0.349999994f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1016 = V_0;
		float L_1017 = L_1016->get_mandibleSize_36();
		float L_1018;
		L_1018 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1017, (float)(0.5f))), (float)(0.349999994f))))), (0.349999994f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1019;
		memset((&L_1019), 0, sizeof(L_1019));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1019), L_1012, L_1015, L_1018, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_1008, L_1009, L_1019);
		// float raceHeight = umaData.umaRecipe.raceData.raceHeight;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1020 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_1021;
		L_1021 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_1020, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_1022 = L_1021->get_raceData_0();
		float L_1023 = L_1022->get_raceHeight_24();
		V_3 = L_1023;
		// float raceRadius = umaData.umaRecipe.raceData.raceRadius;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1024 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_1025;
		L_1025 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_1024, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_1026 = L_1025->get_raceData_0();
		float L_1027 = L_1026->get_raceRadius_25();
		V_4 = L_1027;
		// float raceMass = umaData.umaRecipe.raceData.raceMass;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1028 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_1029;
		L_1029 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_1028, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_1030 = L_1029->get_raceData_0();
		float L_1031 = L_1030->get_raceMass_26();
		V_5 = L_1031;
		// umaData.characterHeight = raceHeight * overallScale * (0.425f + 0.6f * lowerBackScale) + ((umaDna.feetSize - 0.5f) * 0.20f);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1032 = ___umaData0;
		float L_1033 = V_3;
		float L_1034 = V_1;
		float L_1035 = V_2;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1036 = V_0;
		float L_1037 = L_1036->get_feetSize_13();
		L_1032->set_characterHeight_41(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1033, (float)L_1034)), (float)((float)il2cpp_codegen_add((float)(0.425000012f), (float)((float)il2cpp_codegen_multiply((float)(0.600000024f), (float)L_1035)))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1037, (float)(0.5f))), (float)(0.200000003f))))));
		// umaData.characterRadius = raceRadius + ((umaDna.height - 0.5f) * 0.32f) + ((umaDna.upperMuscle - 0.5f) * 0.01f);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1038 = ___umaData0;
		float L_1039 = V_4;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1040 = V_0;
		float L_1041 = L_1040->get_height_4();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1042 = V_0;
		float L_1043 = L_1042->get_upperMuscle_15();
		L_1038->set_characterRadius_42(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_1039, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1041, (float)(0.5f))), (float)(0.319999993f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1043, (float)(0.5f))), (float)(0.00999999978f))))));
		// umaData.characterMass = raceMass * overallScale + 28f * umaDna.upperWeight + 22f * umaDna.lowerWeight;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1044 = ___umaData0;
		float L_1045 = V_5;
		float L_1046 = V_1;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1047 = V_0;
		float L_1048 = L_1047->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1049 = V_0;
		float L_1050 = L_1049->get_lowerWeight_18();
		L_1044->set_characterMass_43(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1045, (float)L_1046)), (float)((float)il2cpp_codegen_multiply((float)(28.0f), (float)L_1048)))), (float)((float)il2cpp_codegen_multiply((float)(22.0f), (float)L_1050)))));
		// }
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
// System.Void UMA.HumanMaleDNAConverterBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanMaleDNAConverterBehaviour__ctor_m52C8A74134F00D922DE72F282E2C1C7A1C034FCA (HumanMaleDNAConverterBehaviour_t881F394515FB96ABD3724D7A5D54AD405AB444F5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanMaleDNAConverterBehaviour_UpdateUMAMaleDNABones_m25074687B08CECE4939620673F3A42859023FAB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public HumanMaleDNAConverterBehaviour()
		IL2CPP_RUNTIME_CLASS_INIT(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var);
		HumanoidDNAConverterBehaviour__ctor_m5E219325116E4581A0C08F6379FB9CC67C8F88AC(__this, /*hidden argument*/NULL);
		// this.ApplyDnaAction = UpdateUMAMaleDNABones;
		DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * L_0 = (DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 *)il2cpp_codegen_object_new(DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1_il2cpp_TypeInfo_var);
		DNAConvertDelegate__ctor_m952F609FDE4CAF628B38C5FF085DF5DE512D57CF(L_0, NULL, (intptr_t)((intptr_t)HumanMaleDNAConverterBehaviour_UpdateUMAMaleDNABones_m25074687B08CECE4939620673F3A42859023FAB2_RuntimeMethod_var), /*hidden argument*/NULL);
		DnaConverterBehaviour_set_ApplyDnaAction_m109107C3682D965772496EB3AA7DB43C0FA0CF21_inline(__this, L_0, /*hidden argument*/NULL);
		// this.DNAType = typeof(UMADnaHumanoid);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E(L_1, /*hidden argument*/NULL);
		DnaConverterBehaviour_set_DNAType_m95AB815DF252C02BBA9A0926B3F0C918019FC497_inline(__this, L_2, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.HumanMaleDNAConverterBehaviour::UpdateUMAMaleDNABones(UMA.UMAData,UMA.UMASkeleton)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HumanMaleDNAConverterBehaviour_UpdateUMAMaleDNABones_m25074687B08CECE4939620673F3A42859023FAB2 (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * ___skeleton1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAData_GetDna_TisUMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_m1EB03CCC9ED0211434198721DCF67EF43E8AB409_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	float V_5 = 0.0f;
	{
		// var umaDna = umaData.GetDna<UMADnaHumanoid>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_0 = ___umaData0;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1;
		L_1 = UMAData_GetDna_TisUMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_m1EB03CCC9ED0211434198721DCF67EF43E8AB409(L_0, /*hidden argument*/UMAData_GetDna_TisUMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F_m1EB03CCC9ED0211434198721DCF67EF43E8AB409_RuntimeMethod_var);
		V_0 = L_1;
		// skeleton.SetScale(headAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 1, 1),
		//     Mathf.Clamp(1 + (umaDna.headWidth - 0.5f) * 0.30f, 0.5f, 1.6f),
		//     Mathf.Clamp(1 , 1, 1)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_2 = ___skeleton1;
		IL2CPP_RUNTIME_CLASS_INIT(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var);
		int32_t L_3 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_headAdjustHash_10();
		int32_t L_4;
		L_4 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(1, 1, 1, /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_5 = V_0;
		float L_6 = L_5->get_headWidth_6();
		float L_7;
		L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_6, (float)(0.5f))), (float)(0.300000012f))))), (0.5f), (1.60000002f), /*hidden argument*/NULL);
		int32_t L_8;
		L_8 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(1, 1, 1, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)((float)L_4)), L_7, ((float)((float)L_8)), /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_2, L_3, L_9);
		// skeleton.SetScale(neckAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.neckThickness - 0.5f) * 0.80f, 0.5f, 1.6f),
		//     Mathf.Clamp(1 + (umaDna.neckThickness - 0.5f) * 1.2f, 0.5f, 1.6f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_10 = ___skeleton1;
		int32_t L_11 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_neckAdjustHash_11();
		float L_12;
		L_12 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_13 = V_0;
		float L_14 = L_13->get_neckThickness_7();
		float L_15;
		L_15 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_14, (float)(0.5f))), (float)(0.800000012f))))), (0.5f), (1.60000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_16 = V_0;
		float L_17 = L_16->get_neckThickness_7();
		float L_18;
		L_18 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_17, (float)(0.5f))), (float)(1.20000005f))))), (0.5f), (1.60000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_12, L_15, L_18, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_10, L_11, L_19);
		// skeleton.SetScale(leftOuterBreastHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_20 = ___skeleton1;
		int32_t L_21 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftOuterBreastHash_12();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_22 = V_0;
		float L_23 = L_22->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_24 = V_0;
		float L_25 = L_24->get_upperWeight_17();
		float L_26;
		L_26 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_23, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_25, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_27 = V_0;
		float L_28 = L_27->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_29 = V_0;
		float L_30 = L_29->get_upperWeight_17();
		float L_31;
		L_31 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_28, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_30, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_32 = V_0;
		float L_33 = L_32->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_34 = V_0;
		float L_35 = L_34->get_upperWeight_17();
		float L_36;
		L_36 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_33, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_35, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		memset((&L_37), 0, sizeof(L_37));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_37), L_26, L_31, L_36, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_20, L_21, L_37);
		// skeleton.SetScale(rightOuterBreastHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.breastSize - 0.5f) * 1.50f + (umaDna.upperWeight - 0.5f) * 0.10f, 0.6f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_38 = ___skeleton1;
		int32_t L_39 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightOuterBreastHash_13();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_40 = V_0;
		float L_41 = L_40->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_42 = V_0;
		float L_43 = L_42->get_upperWeight_17();
		float L_44;
		L_44 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_41, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_43, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_45 = V_0;
		float L_46 = L_45->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_47 = V_0;
		float L_48 = L_47->get_upperWeight_17();
		float L_49;
		L_49 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_46, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_48, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_50 = V_0;
		float L_51 = L_50->get_breastSize_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_52 = V_0;
		float L_53 = L_52->get_upperWeight_17();
		float L_54;
		L_54 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_51, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_53, (float)(0.5f))), (float)(0.100000001f))))), (0.600000024f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		memset((&L_55), 0, sizeof(L_55));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_55), L_44, L_49, L_54, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_38, L_39, L_55);
		// skeleton.SetScale(leftEyeHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f),
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f),
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_56 = ___skeleton1;
		int32_t L_57 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyeHash_14();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_58 = V_0;
		float L_59 = L_58->get_eyeSize_48();
		float L_60;
		L_60 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_59, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_61 = V_0;
		float L_62 = L_61->get_eyeSize_48();
		float L_63;
		L_63 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_62, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_64 = V_0;
		float L_65 = L_64->get_eyeSize_48();
		float L_66;
		L_66 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_65, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		memset((&L_67), 0, sizeof(L_67));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_67), L_60, L_63, L_66, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_56, L_57, L_67);
		// skeleton.SetScale(rightEyeHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f),
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f),
		//     Mathf.Clamp(1 + (umaDna.eyeSize - 0.5f) * 0.3f , 0.7f, 1.4f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_68 = ___skeleton1;
		int32_t L_69 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyeHash_15();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_70 = V_0;
		float L_71 = L_70->get_eyeSize_48();
		float L_72;
		L_72 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_71, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_73 = V_0;
		float L_74 = L_73->get_eyeSize_48();
		float L_75;
		L_75 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_74, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_76 = V_0;
		float L_77 = L_76->get_eyeSize_48();
		float L_78;
		L_78 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_77, (float)(0.5f))), (float)(0.300000012f))))), (0.699999988f), (1.39999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_79), L_72, L_75, L_78, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_68, L_69, L_79);
		// skeleton.SetRotation(leftEyeAdjustHash,
		//                      Quaternion.Euler(new Vector3((umaDna.eyeRotation - 0.5f) * 20, 0, 0)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_80 = ___skeleton1;
		int32_t L_81 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyeAdjustHash_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_82 = V_0;
		float L_83 = L_82->get_eyeRotation_47();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_84), ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_83, (float)(0.5f))), (float)(20.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_85;
		L_85 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_84, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_80, L_81, L_85);
		// skeleton.SetRotation(rightEyeAdjustHash,
		//                      Quaternion.Euler(new Vector3(-(umaDna.eyeRotation - 0.5f) * 20, 0, 0)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_86 = ___skeleton1;
		int32_t L_87 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyeAdjustHash_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_88 = V_0;
		float L_89 = L_88->get_eyeRotation_47();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		memset((&L_90), 0, sizeof(L_90));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_90), ((float)il2cpp_codegen_multiply((float)((-((float)il2cpp_codegen_subtract((float)L_89, (float)(0.5f))))), (float)(20.0f))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_91;
		L_91 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_90, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_86, L_87, L_91);
		// skeleton.SetScale(spine1AdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(0.9f + (umaDna.upperWeight - 0.5f) * 0.10f + (umaDna.upperMuscle - 0.5f) * 0.5f, 0.45f, 1.50f),
		//     Mathf.Clamp(0.7f + (umaDna.upperWeight - 0.5f) * 0.45f + (umaDna.upperMuscle - 0.5f) * 0.45f, 0.55f, 1.15f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_92 = ___skeleton1;
		int32_t L_93 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_spine1AdjustHash_18();
		float L_94;
		L_94 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_95 = V_0;
		float L_96 = L_95->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_97 = V_0;
		float L_98 = L_97->get_upperMuscle_15();
		float L_99;
		L_99 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.899999976f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_96, (float)(0.5f))), (float)(0.100000001f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_98, (float)(0.5f))), (float)(0.5f))))), (0.449999988f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_100 = V_0;
		float L_101 = L_100->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_102 = V_0;
		float L_103 = L_102->get_upperMuscle_15();
		float L_104;
		L_104 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.699999988f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_101, (float)(0.5f))), (float)(0.449999988f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_103, (float)(0.5f))), (float)(0.449999988f))))), (0.550000012f), (1.14999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_105), L_94, L_99, L_104, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_92, L_93, L_105);
		// skeleton.SetScale(spineAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(0.9f + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.45f, 0.75f, 1.350f),
		//     Mathf.Clamp(0.8f + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.25f, 0.75f, 1.350f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_106 = ___skeleton1;
		int32_t L_107 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_spineAdjustHash_19();
		float L_108;
		L_108 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_109 = V_0;
		float L_110 = L_109->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_111 = V_0;
		float L_112 = L_111->get_upperMuscle_15();
		float L_113;
		L_113 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.899999976f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_110, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_112, (float)(0.5f))), (float)(0.449999988f))))), (0.75f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_114 = V_0;
		float L_115 = L_114->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_116 = V_0;
		float L_117 = L_116->get_upperMuscle_15();
		float L_118;
		L_118 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.800000012f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_115, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_117, (float)(0.5f))), (float)(0.25f))))), (0.75f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_119;
		memset((&L_119), 0, sizeof(L_119));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_119), L_108, L_113, L_118, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_106, L_107, L_119);
		// skeleton.SetScale(lowerBackBellyHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.belly - 0.5f) * 1.0f, 0.35f, 1.75f),
		//     Mathf.Clamp(1 + (umaDna.belly - 0.5f) * 0.35f, 0.35f, 1.75f),
		//     Mathf.Clamp(1 + (umaDna.belly - 0.5f) * 1.25f, 0.35f, 1.75f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_120 = ___skeleton1;
		int32_t L_121 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lowerBackBellyHash_20();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_122 = V_0;
		float L_123 = L_122->get_belly_20();
		float L_124;
		L_124 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_123, (float)(0.5f))), (float)(1.0f))))), (0.349999994f), (1.75f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_125 = V_0;
		float L_126 = L_125->get_belly_20();
		float L_127;
		L_127 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_126, (float)(0.5f))), (float)(0.349999994f))))), (0.349999994f), (1.75f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_128 = V_0;
		float L_129 = L_128->get_belly_20();
		float L_130;
		L_130 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_129, (float)(0.5f))), (float)(1.25f))))), (0.349999994f), (1.75f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_131;
		memset((&L_131), 0, sizeof(L_131));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_131), L_124, L_127, L_130, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_120, L_121, L_131);
		// skeleton.SetScale(lowerBackAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.25f + (umaDna.lowerWeight - 0.5f) * 0.15f, 0.85f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.25f + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.waist - 0.5f) * 0.45f, 0.65f, 1.75f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.25f + (umaDna.lowerWeight - 0.5f) * 0.15f, 0.85f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_132 = ___skeleton1;
		int32_t L_133 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lowerBackAdjustHash_21();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_134 = V_0;
		float L_135 = L_134->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_136 = V_0;
		float L_137 = L_136->get_lowerWeight_18();
		float L_138;
		L_138 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_135, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_137, (float)(0.5f))), (float)(0.150000006f))))), (0.850000024f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_139 = V_0;
		float L_140 = L_139->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_141 = V_0;
		float L_142 = L_141->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_143 = V_0;
		float L_144 = L_143->get_waist_21();
		float L_145;
		L_145 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_140, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_142, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_144, (float)(0.5f))), (float)(0.449999988f))))), (0.649999976f), (1.75f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_146 = V_0;
		float L_147 = L_146->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_148 = V_0;
		float L_149 = L_148->get_lowerWeight_18();
		float L_150;
		L_150 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_147, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_149, (float)(0.5f))), (float)(0.150000006f))))), (0.850000024f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_151;
		memset((&L_151), 0, sizeof(L_151));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_151), L_138, L_145, L_150, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_132, L_133, L_151);
		// skeleton.SetScale(leftTrapeziusHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_152 = ___skeleton1;
		int32_t L_153 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftTrapeziusHash_22();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_154 = V_0;
		float L_155 = L_154->get_upperMuscle_15();
		float L_156;
		L_156 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_155, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_157 = V_0;
		float L_158 = L_157->get_upperMuscle_15();
		float L_159;
		L_159 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_158, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_160 = V_0;
		float L_161 = L_160->get_upperMuscle_15();
		float L_162;
		L_162 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_161, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_163;
		memset((&L_163), 0, sizeof(L_163));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_163), L_156, L_159, L_162, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_152, L_153, L_163);
		// skeleton.SetScale(rightTrapeziusHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.upperMuscle - 0.5f) * 1.35f, 0.65f, 1.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_164 = ___skeleton1;
		int32_t L_165 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightTrapeziusHash_23();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_166 = V_0;
		float L_167 = L_166->get_upperMuscle_15();
		float L_168;
		L_168 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_167, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_169 = V_0;
		float L_170 = L_169->get_upperMuscle_15();
		float L_171;
		L_171 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_170, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_172 = V_0;
		float L_173 = L_172->get_upperMuscle_15();
		float L_174;
		L_174 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_173, (float)(0.5f))), (float)(1.35000002f))))), (0.649999976f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_175;
		memset((&L_175), 0, sizeof(L_175));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_175), L_168, L_171, L_174, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_164, L_165, L_175);
		// skeleton.SetScale(leftArmAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.armWidth - 0.5f) * 0.65f, 0.65f, 1.65f),
		//     Mathf.Clamp(1 + (umaDna.armWidth - 0.5f) * 0.65f, 0.65f, 1.65f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_176 = ___skeleton1;
		int32_t L_177 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftArmAdjustHash_24();
		float L_178;
		L_178 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_179 = V_0;
		float L_180 = L_179->get_armWidth_10();
		float L_181;
		L_181 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_180, (float)(0.5f))), (float)(0.649999976f))))), (0.649999976f), (1.64999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_182 = V_0;
		float L_183 = L_182->get_armWidth_10();
		float L_184;
		L_184 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_183, (float)(0.5f))), (float)(0.649999976f))))), (0.649999976f), (1.64999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_185;
		memset((&L_185), 0, sizeof(L_185));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_185), L_178, L_181, L_184, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_176, L_177, L_185);
		// skeleton.SetScale(rightArmAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.armWidth - 0.5f) * 0.65f, 0.65f, 1.65f),
		//     Mathf.Clamp(1 + (umaDna.armWidth - 0.5f) * 0.65f, 0.65f, 1.65f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_186 = ___skeleton1;
		int32_t L_187 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightArmAdjustHash_25();
		float L_188;
		L_188 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_189 = V_0;
		float L_190 = L_189->get_armWidth_10();
		float L_191;
		L_191 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_190, (float)(0.5f))), (float)(0.649999976f))))), (0.649999976f), (1.64999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_192 = V_0;
		float L_193 = L_192->get_armWidth_10();
		float L_194;
		L_194 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_193, (float)(0.5f))), (float)(0.649999976f))))), (0.649999976f), (1.64999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195;
		memset((&L_195), 0, sizeof(L_195));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_195), L_188, L_191, L_194, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_186, L_187, L_195);
		// skeleton.SetScale(leftForeArmAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.65f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.65f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_196 = ___skeleton1;
		int32_t L_197 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftForeArmAdjustHash_26();
		float L_198;
		L_198 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_199 = V_0;
		float L_200 = L_199->get_forearmWidth_11();
		float L_201;
		L_201 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_200, (float)(0.5f))), (float)(0.649999976f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_202 = V_0;
		float L_203 = L_202->get_forearmWidth_11();
		float L_204;
		L_204 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_203, (float)(0.5f))), (float)(0.649999976f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_205;
		memset((&L_205), 0, sizeof(L_205));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_205), L_198, L_201, L_204, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_196, L_197, L_205);
		// skeleton.SetScale(rightForeArmAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.65f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.65f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_206 = ___skeleton1;
		int32_t L_207 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightForeArmAdjustHash_27();
		float L_208;
		L_208 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_209 = V_0;
		float L_210 = L_209->get_forearmWidth_11();
		float L_211;
		L_211 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_210, (float)(0.5f))), (float)(0.649999976f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_212 = V_0;
		float L_213 = L_212->get_forearmWidth_11();
		float L_214;
		L_214 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_213, (float)(0.5f))), (float)(0.649999976f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_215;
		memset((&L_215), 0, sizeof(L_215));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_215), L_208, L_211, L_214, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_206, L_207, L_215);
		// skeleton.SetScale(leftForeArmTwistAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.35f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.35f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_216 = ___skeleton1;
		int32_t L_217 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftForeArmTwistAdjustHash_28();
		float L_218;
		L_218 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_219 = V_0;
		float L_220 = L_219->get_forearmWidth_11();
		float L_221;
		L_221 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_220, (float)(0.5f))), (float)(0.349999994f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_222 = V_0;
		float L_223 = L_222->get_forearmWidth_11();
		float L_224;
		L_224 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_223, (float)(0.5f))), (float)(0.349999994f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_225;
		memset((&L_225), 0, sizeof(L_225));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_225), L_218, L_221, L_224, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_216, L_217, L_225);
		// skeleton.SetScale(rightForeArmTwistAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.35f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.forearmWidth - 0.5f) * 0.35f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_226 = ___skeleton1;
		int32_t L_227 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightForeArmTwistAdjustHash_29();
		float L_228;
		L_228 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_229 = V_0;
		float L_230 = L_229->get_forearmWidth_11();
		float L_231;
		L_231 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_230, (float)(0.5f))), (float)(0.349999994f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_232 = V_0;
		float L_233 = L_232->get_forearmWidth_11();
		float L_234;
		L_234 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_233, (float)(0.5f))), (float)(0.349999994f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_235;
		memset((&L_235), 0, sizeof(L_235));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_235), L_228, L_231, L_234, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_226, L_227, L_235);
		// skeleton.SetScale(leftShoulderAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.55f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.55f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_236 = ___skeleton1;
		int32_t L_237 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftShoulderAdjustHash_30();
		float L_238;
		L_238 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_239 = V_0;
		float L_240 = L_239->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_241 = V_0;
		float L_242 = L_241->get_upperMuscle_15();
		float L_243;
		L_243 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_240, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_242, (float)(0.5f))), (float)(0.550000012f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_244 = V_0;
		float L_245 = L_244->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_246 = V_0;
		float L_247 = L_246->get_upperMuscle_15();
		float L_248;
		L_248 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_245, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_247, (float)(0.5f))), (float)(0.550000012f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_249;
		memset((&L_249), 0, sizeof(L_249));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_249), L_238, L_243, L_248, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_236, L_237, L_249);
		// skeleton.SetScale(rightShoulderAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.55f, 0.75f, 1.25f),
		//     Mathf.Clamp(1 + (umaDna.upperWeight - 0.5f) * 0.35f + (umaDna.upperMuscle - 0.5f) * 0.55f, 0.75f, 1.25f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_250 = ___skeleton1;
		int32_t L_251 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightShoulderAdjustHash_31();
		float L_252;
		L_252 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_253 = V_0;
		float L_254 = L_253->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_255 = V_0;
		float L_256 = L_255->get_upperMuscle_15();
		float L_257;
		L_257 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_254, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_256, (float)(0.5f))), (float)(0.550000012f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_258 = V_0;
		float L_259 = L_258->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_260 = V_0;
		float L_261 = L_260->get_upperMuscle_15();
		float L_262;
		L_262 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_259, (float)(0.5f))), (float)(0.349999994f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_261, (float)(0.5f))), (float)(0.550000012f))))), (0.75f), (1.25f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_263;
		memset((&L_263), 0, sizeof(L_263));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_263), L_252, L_257, L_262, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_250, L_251, L_263);
		// skeleton.SetScale(leftUpLegAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.45f + (umaDna.lowerMuscle - 0.5f) * 0.15f - (umaDna.legsSize - 0.5f), 0.45f, 1.15f),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.45f + (umaDna.lowerMuscle - 0.5f) * 0.15f - (umaDna.legsSize - 0.5f), 0.45f, 1.15f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_264 = ___skeleton1;
		int32_t L_265 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftUpLegAdjustHash_32();
		float L_266;
		L_266 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_267 = V_0;
		float L_268 = L_267->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_269 = V_0;
		float L_270 = L_269->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_271 = V_0;
		float L_272 = L_271->get_legsSize_19();
		float L_273;
		L_273 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_268, (float)(0.5f))), (float)(0.449999988f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_270, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_subtract((float)L_272, (float)(0.5f))))), (0.449999988f), (1.14999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_274 = V_0;
		float L_275 = L_274->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_276 = V_0;
		float L_277 = L_276->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_278 = V_0;
		float L_279 = L_278->get_legsSize_19();
		float L_280;
		L_280 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_275, (float)(0.5f))), (float)(0.449999988f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_277, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_subtract((float)L_279, (float)(0.5f))))), (0.449999988f), (1.14999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_281;
		memset((&L_281), 0, sizeof(L_281));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_281), L_266, L_273, L_280, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_264, L_265, L_281);
		// skeleton.SetScale(rightUpLegAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.45f + (umaDna.lowerMuscle - 0.5f) * 0.15f - (umaDna.legsSize - 0.5f), 0.45f, 1.15f),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.45f + (umaDna.lowerMuscle - 0.5f) * 0.15f - (umaDna.legsSize - 0.5f), 0.45f, 1.15f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_282 = ___skeleton1;
		int32_t L_283 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightUpLegAdjustHash_33();
		float L_284;
		L_284 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_285 = V_0;
		float L_286 = L_285->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_287 = V_0;
		float L_288 = L_287->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_289 = V_0;
		float L_290 = L_289->get_legsSize_19();
		float L_291;
		L_291 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_286, (float)(0.5f))), (float)(0.449999988f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_288, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_subtract((float)L_290, (float)(0.5f))))), (0.449999988f), (1.14999998f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_292 = V_0;
		float L_293 = L_292->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_294 = V_0;
		float L_295 = L_294->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_296 = V_0;
		float L_297 = L_296->get_legsSize_19();
		float L_298;
		L_298 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_293, (float)(0.5f))), (float)(0.449999988f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_295, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_subtract((float)L_297, (float)(0.5f))))), (0.449999988f), (1.14999998f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_299;
		memset((&L_299), 0, sizeof(L_299));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_299), L_284, L_291, L_298, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_282, L_283, L_299);
		// skeleton.SetScale(leftLegAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.lowerMuscle - 0.5f) * 0.95f - (umaDna.legsSize - 0.5f), 0.65f, 1.45f),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.lowerMuscle - 0.5f) * 0.75f - (umaDna.legsSize - 0.5f), 0.65f, 1.45f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_300 = ___skeleton1;
		int32_t L_301 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLegAdjustHash_34();
		float L_302;
		L_302 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_303 = V_0;
		float L_304 = L_303->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_305 = V_0;
		float L_306 = L_305->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_307 = V_0;
		float L_308 = L_307->get_legsSize_19();
		float L_309;
		L_309 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_304, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_306, (float)(0.5f))), (float)(0.949999988f))))), (float)((float)il2cpp_codegen_subtract((float)L_308, (float)(0.5f))))), (0.649999976f), (1.45000005f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_310 = V_0;
		float L_311 = L_310->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_312 = V_0;
		float L_313 = L_312->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_314 = V_0;
		float L_315 = L_314->get_legsSize_19();
		float L_316;
		L_316 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_311, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_313, (float)(0.5f))), (float)(0.75f))))), (float)((float)il2cpp_codegen_subtract((float)L_315, (float)(0.5f))))), (0.649999976f), (1.45000005f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_317;
		memset((&L_317), 0, sizeof(L_317));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_317), L_302, L_309, L_316, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_300, L_301, L_317);
		// skeleton.SetScale(rightLegAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1, 0.6f, 2),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.lowerMuscle - 0.5f) * 0.95f - (umaDna.legsSize - 0.5f), 0.65f, 1.45f),
		//     Mathf.Clamp(1 + (umaDna.lowerWeight - 0.5f) * 0.15f + (umaDna.lowerMuscle - 0.5f) * 0.75f - (umaDna.legsSize - 0.5f), 0.65f, 1.45f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_318 = ___skeleton1;
		int32_t L_319 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLegAdjustHash_35();
		float L_320;
		L_320 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.600000024f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_321 = V_0;
		float L_322 = L_321->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_323 = V_0;
		float L_324 = L_323->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_325 = V_0;
		float L_326 = L_325->get_legsSize_19();
		float L_327;
		L_327 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_322, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_324, (float)(0.5f))), (float)(0.949999988f))))), (float)((float)il2cpp_codegen_subtract((float)L_326, (float)(0.5f))))), (0.649999976f), (1.45000005f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_328 = V_0;
		float L_329 = L_328->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_330 = V_0;
		float L_331 = L_330->get_lowerMuscle_16();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_332 = V_0;
		float L_333 = L_332->get_legsSize_19();
		float L_334;
		L_334 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_329, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_331, (float)(0.5f))), (float)(0.75f))))), (float)((float)il2cpp_codegen_subtract((float)L_333, (float)(0.5f))))), (0.649999976f), (1.45000005f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_335;
		memset((&L_335), 0, sizeof(L_335));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_335), L_320, L_327, L_334, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_318, L_319, L_335);
		// skeleton.SetScale(leftGluteusHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f),
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f),
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_336 = ___skeleton1;
		int32_t L_337 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftGluteusHash_36();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_338 = V_0;
		float L_339 = L_338->get_gluteusSize_22();
		float L_340;
		L_340 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_339, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_341 = V_0;
		float L_342 = L_341->get_gluteusSize_22();
		float L_343;
		L_343 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_342, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_344 = V_0;
		float L_345 = L_344->get_gluteusSize_22();
		float L_346;
		L_346 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_345, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_347;
		memset((&L_347), 0, sizeof(L_347));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_347), L_340, L_343, L_346, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_336, L_337, L_347);
		// skeleton.SetScale(rightGluteusHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f),
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f),
		//     Mathf.Clamp(1 + (umaDna.gluteusSize - 0.5f) * 1.35f , 0.25f, 2.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_348 = ___skeleton1;
		int32_t L_349 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightGluteusHash_37();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_350 = V_0;
		float L_351 = L_350->get_gluteusSize_22();
		float L_352;
		L_352 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_351, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_353 = V_0;
		float L_354 = L_353->get_gluteusSize_22();
		float L_355;
		L_355 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_354, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_356 = V_0;
		float L_357 = L_356->get_gluteusSize_22();
		float L_358;
		L_358 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_357, (float)(0.5f))), (float)(1.35000002f))))), (0.25f), (2.3499999f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_359;
		memset((&L_359), 0, sizeof(L_359));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_359), L_352, L_355, L_358, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_348, L_349, L_359);
		// skeleton.SetScale(leftEarAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_360 = ___skeleton1;
		int32_t L_361 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEarAdjustHash_38();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_362 = V_0;
		float L_363 = L_362->get_earsSize_23();
		float L_364;
		L_364 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_363, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_365 = V_0;
		float L_366 = L_365->get_earsSize_23();
		float L_367;
		L_367 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_366, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_368 = V_0;
		float L_369 = L_368->get_earsSize_23();
		float L_370;
		L_370 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_369, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_371;
		memset((&L_371), 0, sizeof(L_371));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_371), L_364, L_367, L_370, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_360, L_361, L_371);
		// skeleton.SetScale(rightEarAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.earsSize - 0.5f) * 1.0f, 0.75f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_372 = ___skeleton1;
		int32_t L_373 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEarAdjustHash_39();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_374 = V_0;
		float L_375 = L_374->get_earsSize_23();
		float L_376;
		L_376 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_375, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_377 = V_0;
		float L_378 = L_377->get_earsSize_23();
		float L_379;
		L_379 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_378, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_380 = V_0;
		float L_381 = L_380->get_earsSize_23();
		float L_382;
		L_382 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_381, (float)(0.5f))), (float)(1.0f))))), (0.75f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_383;
		memset((&L_383), 0, sizeof(L_383));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_383), L_376, L_379, L_382, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_372, L_373, L_383);
		// skeleton.SetPositionRelative(leftEarAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.headWidth - 0.5f) * -0.01f, -0.01f, 0.01f),
		//     Mathf.Clamp(0 + (umaDna.headWidth - 0.5f) * -0.03f, -0.03f, 0.03f),
		//     Mathf.Clamp(0 + (umaDna.earsPosition - 0.5f) * 0.02f, -0.02f, 0.02f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_384 = ___skeleton1;
		int32_t L_385 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEarAdjustHash_38();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_386 = V_0;
		float L_387 = L_386->get_headWidth_6();
		float L_388;
		L_388 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_387, (float)(0.5f))), (float)(-0.00999999978f))))), (-0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_389 = V_0;
		float L_390 = L_389->get_headWidth_6();
		float L_391;
		L_391 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_390, (float)(0.5f))), (float)(-0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_392 = V_0;
		float L_393 = L_392->get_earsPosition_24();
		float L_394;
		L_394 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_393, (float)(0.5f))), (float)(0.0199999996f))))), (-0.0199999996f), (0.0199999996f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_395;
		memset((&L_395), 0, sizeof(L_395));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_395), L_388, L_391, L_394, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_384, L_385, L_395, (1.0f));
		// skeleton.SetPositionRelative(rightEarAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.headWidth - 0.5f) * -0.01f, -0.01f, 0.01f),
		//     Mathf.Clamp(0 + (umaDna.headWidth - 0.5f) * 0.03f, -0.03f, 0.03f),
		//     Mathf.Clamp(0 + (umaDna.earsPosition - 0.5f) * 0.02f, -0.02f, 0.02f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_396 = ___skeleton1;
		int32_t L_397 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEarAdjustHash_39();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_398 = V_0;
		float L_399 = L_398->get_headWidth_6();
		float L_400;
		L_400 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_399, (float)(0.5f))), (float)(-0.00999999978f))))), (-0.00999999978f), (0.00999999978f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_401 = V_0;
		float L_402 = L_401->get_headWidth_6();
		float L_403;
		L_403 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_402, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_404 = V_0;
		float L_405 = L_404->get_earsPosition_24();
		float L_406;
		L_406 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_405, (float)(0.5f))), (float)(0.0199999996f))))), (-0.0199999996f), (0.0199999996f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_407;
		memset((&L_407), 0, sizeof(L_407));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_407), L_400, L_403, L_406, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_396, L_397, L_407, (1.0f));
		// skeleton.SetRotation(leftEarAdjustHash,
		//                      Quaternion.Euler(new Vector3(
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp((umaDna.earsRotation - 0.5f) * 40, -15, 40))));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_408 = ___skeleton1;
		int32_t L_409 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEarAdjustHash_38();
		int32_t L_410;
		L_410 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		int32_t L_411;
		L_411 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_412 = V_0;
		float L_413 = L_412->get_earsRotation_25();
		float L_414;
		L_414 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_413, (float)(0.5f))), (float)(40.0f))), (-15.0f), (40.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_415;
		memset((&L_415), 0, sizeof(L_415));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_415), ((float)((float)L_410)), ((float)((float)L_411)), L_414, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_416;
		L_416 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_415, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_408, L_409, L_416);
		// skeleton.SetRotation(rightEarAdjustHash,
		//                      Quaternion.Euler(new Vector3(
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp((umaDna.earsRotation - 0.5f) * -40, -40, 15))));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_417 = ___skeleton1;
		int32_t L_418 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEarAdjustHash_39();
		int32_t L_419;
		L_419 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		int32_t L_420;
		L_420 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_421 = V_0;
		float L_422 = L_421->get_earsRotation_25();
		float L_423;
		L_423 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_422, (float)(0.5f))), (float)(-40.0f))), (-40.0f), (15.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_424;
		memset((&L_424), 0, sizeof(L_424));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_424), ((float)((float)L_419)), ((float)((float)L_420)), L_423, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_425;
		L_425 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_424, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_417, L_418, L_425);
		// skeleton.SetScale(noseBaseAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.noseSize - 0.5f) * 1.5f, 0.25f, 3.0f),
		//     Mathf.Clamp(1 + (umaDna.noseSize - 0.5f) * 0.15f + (umaDna.noseWidth - 0.5f) * 1.0f, 0.25f, 3.0f),
		//     Mathf.Clamp(1 + (umaDna.noseSize - 0.5f) * 0.15f + (umaDna.noseFlatten - 0.5f) * 0.75f, 0.25f, 3.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_426 = ___skeleton1;
		int32_t L_427 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseBaseAdjustHash_40();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_428 = V_0;
		float L_429 = L_428->get_noseSize_26();
		float L_430;
		L_430 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_429, (float)(0.5f))), (float)(1.5f))))), (0.25f), (3.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_431 = V_0;
		float L_432 = L_431->get_noseSize_26();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_433 = V_0;
		float L_434 = L_433->get_noseWidth_28();
		float L_435;
		L_435 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_432, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_434, (float)(0.5f))), (float)(1.0f))))), (0.25f), (3.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_436 = V_0;
		float L_437 = L_436->get_noseSize_26();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_438 = V_0;
		float L_439 = L_438->get_noseFlatten_32();
		float L_440;
		L_440 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_437, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_439, (float)(0.5f))), (float)(0.75f))))), (0.25f), (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_441;
		memset((&L_441), 0, sizeof(L_441));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_441), L_430, L_435, L_440, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_426, L_427, L_441);
		// skeleton.SetScale(noseMiddleAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.noseCurve - 0.5f) * 1.5f + (umaDna.noseSize - 0.5f) * 1.0f, 0.5f, 3.0f),
		//     Mathf.Clamp(1 + (umaDna.noseCurve - 0.5f) * 0.15f + (umaDna.noseSize - 0.5f) * 0.25f + (umaDna.noseWidth - 0.5f) * 0.5f, 0.5f, 3.0f),
		//     Mathf.Clamp(1 + (umaDna.noseCurve - 0.5f) * 0.15f + (umaDna.noseSize - 0.5f) * 0.10f, 0.5f, 3.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_442 = ___skeleton1;
		int32_t L_443 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseMiddleAdjustHash_41();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_444 = V_0;
		float L_445 = L_444->get_noseCurve_27();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_446 = V_0;
		float L_447 = L_446->get_noseSize_26();
		float L_448;
		L_448 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_445, (float)(0.5f))), (float)(1.5f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_447, (float)(0.5f))), (float)(1.0f))))), (0.5f), (3.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_449 = V_0;
		float L_450 = L_449->get_noseCurve_27();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_451 = V_0;
		float L_452 = L_451->get_noseSize_26();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_453 = V_0;
		float L_454 = L_453->get_noseWidth_28();
		float L_455;
		L_455 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_450, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_452, (float)(0.5f))), (float)(0.25f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_454, (float)(0.5f))), (float)(0.5f))))), (0.5f), (3.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_456 = V_0;
		float L_457 = L_456->get_noseCurve_27();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_458 = V_0;
		float L_459 = L_458->get_noseSize_26();
		float L_460;
		L_460 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_457, (float)(0.5f))), (float)(0.150000006f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_459, (float)(0.5f))), (float)(0.100000001f))))), (0.5f), (3.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_461;
		memset((&L_461), 0, sizeof(L_461));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_461), L_448, L_455, L_460, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_442, L_443, L_461);
		// skeleton.SetRotation(noseBaseAdjustHash,
		//                      Quaternion.Euler(new Vector3(
		//     Mathf.Clamp(0, -30, 80),
		//     Mathf.Clamp((umaDna.noseInclination - 0.5f) * 60, -60, 30),
		//     Mathf.Clamp(0, -30, 80))));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_462 = ___skeleton1;
		int32_t L_463 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseBaseAdjustHash_40();
		int32_t L_464;
		L_464 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_465 = V_0;
		float L_466 = L_465->get_noseInclination_29();
		float L_467;
		L_467 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_466, (float)(0.5f))), (float)(60.0f))), (-60.0f), (30.0f), /*hidden argument*/NULL);
		int32_t L_468;
		L_468 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-30), ((int32_t)80), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_469;
		memset((&L_469), 0, sizeof(L_469));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_469), ((float)((float)L_464)), L_467, ((float)((float)L_468)), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_470;
		L_470 = Quaternion_Euler_m887ABE4F4DD563351E9874D63922C2F53969BBAB(L_469, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  >::Invoke(25 /* System.Void UMA.UMASkeleton::SetRotation(System.Int32,UnityEngine.Quaternion) */, L_462, L_463, L_470);
		// skeleton.SetPositionRelative(noseBaseAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.nosePronounced - 0.5f) * -0.025f, -0.025f, 0.025f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.025f, -0.025f, 0.025f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_471 = ___skeleton1;
		int32_t L_472 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseBaseAdjustHash_40();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_473 = V_0;
		float L_474 = L_473->get_nosePronounced_31();
		float L_475;
		L_475 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_474, (float)(0.5f))), (float)(-0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		float L_476;
		L_476 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_477 = V_0;
		float L_478 = L_477->get_nosePosition_30();
		float L_479;
		L_479 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_478, (float)(0.5f))), (float)(0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_480;
		memset((&L_480), 0, sizeof(L_480));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_480), L_475, L_476, L_479, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_471, L_472, L_480, (1.0f));
		// skeleton.SetPositionRelative(noseMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.nosePronounced - 0.5f) * -0.012f, -0.012f, 0.012f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.015f, -0.015f, 0.015f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_481 = ___skeleton1;
		int32_t L_482 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseMiddleAdjustHash_41();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_483 = V_0;
		float L_484 = L_483->get_nosePronounced_31();
		float L_485;
		L_485 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_484, (float)(0.5f))), (float)(-0.0120000001f))))), (-0.0120000001f), (0.0120000001f), /*hidden argument*/NULL);
		float L_486;
		L_486 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_487 = V_0;
		float L_488 = L_487->get_nosePosition_30();
		float L_489;
		L_489 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_488, (float)(0.5f))), (float)(0.0149999997f))))), (-0.0149999997f), (0.0149999997f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_490;
		memset((&L_490), 0, sizeof(L_490));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_490), L_485, L_486, L_489, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_481, L_482, L_490, (1.0f));
		// skeleton.SetPositionRelative(leftNoseAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.nosePronounced - 0.5f) * -0.025f, -0.025f, 0.025f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.025f, -0.025f, 0.025f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_491 = ___skeleton1;
		int32_t L_492 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftNoseAdjustHash_42();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_493 = V_0;
		float L_494 = L_493->get_nosePronounced_31();
		float L_495;
		L_495 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_494, (float)(0.5f))), (float)(-0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		float L_496;
		L_496 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_497 = V_0;
		float L_498 = L_497->get_nosePosition_30();
		float L_499;
		L_499 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_498, (float)(0.5f))), (float)(0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_500;
		memset((&L_500), 0, sizeof(L_500));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_500), L_495, L_496, L_499, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_491, L_492, L_500, (1.0f));
		// skeleton.SetPositionRelative(rightNoseAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.nosePronounced - 0.5f) * -0.025f, -0.025f, 0.025f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.025f, -0.025f, 0.025f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_501 = ___skeleton1;
		int32_t L_502 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightNoseAdjustHash_43();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_503 = V_0;
		float L_504 = L_503->get_nosePronounced_31();
		float L_505;
		L_505 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_504, (float)(0.5f))), (float)(-0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		float L_506;
		L_506 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_507 = V_0;
		float L_508 = L_507->get_nosePosition_30();
		float L_509;
		L_509 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_508, (float)(0.5f))), (float)(0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_510;
		memset((&L_510), 0, sizeof(L_510));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_510), L_505, L_506, L_509, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_501, L_502, L_510, (1.0f));
		// skeleton.SetPositionRelative(upperLipsAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.nosePosition - 0.5f) * 0.0045f, -0.0045f, 0.0045f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_511 = ___skeleton1;
		int32_t L_512 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_upperLipsAdjustHash_44();
		float L_513;
		L_513 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		float L_514;
		L_514 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_515 = V_0;
		float L_516 = L_515->get_nosePosition_30();
		float L_517;
		L_517 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_516, (float)(0.5f))), (float)(0.00449999981f))))), (-0.00449999981f), (0.00449999981f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_518;
		memset((&L_518), 0, sizeof(L_518));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_518), L_513, L_514, L_517, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_511, L_512, L_518, (1.0f));
		// skeleton.SetScale(mandibleAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.chinPronounced - 0.5f) * 0.18f, 0.55f, 1.75f),
		//     Mathf.Clamp(1 + (umaDna.chinSize - 0.5f) * 1.3f, 0.75f, 1.3f),
		//     Mathf.Clamp(1, 0.4f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_519 = ___skeleton1;
		int32_t L_520 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_mandibleAdjustHash_45();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_521 = V_0;
		float L_522 = L_521->get_chinPronounced_34();
		float L_523;
		L_523 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_522, (float)(0.5f))), (float)(0.180000007f))))), (0.550000012f), (1.75f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_524 = V_0;
		float L_525 = L_524->get_chinSize_33();
		float L_526;
		L_526 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_525, (float)(0.5f))), (float)(1.29999995f))))), (0.75f), (1.29999995f), /*hidden argument*/NULL);
		float L_527;
		L_527 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((1.0f), (0.400000006f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_528;
		memset((&L_528), 0, sizeof(L_528));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_528), L_523, L_526, L_527, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_519, L_520, L_528);
		// skeleton.SetPositionRelative(mandibleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.0125f, 0.0125f),
		//     Mathf.Clamp(0, -0.0125f, 0.0125f),
		//     Mathf.Clamp(0 + (umaDna.chinPosition - 0.5f) * 0.0075f, -0.0075f, 0.0075f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_529 = ___skeleton1;
		int32_t L_530 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_mandibleAdjustHash_45();
		float L_531;
		L_531 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0125000002f), (0.0125000002f), /*hidden argument*/NULL);
		float L_532;
		L_532 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0125000002f), (0.0125000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_533 = V_0;
		float L_534 = L_533->get_chinPosition_35();
		float L_535;
		L_535 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_534, (float)(0.5f))), (float)(0.00749999983f))))), (-0.00749999983f), (0.00749999983f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_536;
		memset((&L_536), 0, sizeof(L_536));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_536), L_531, L_532, L_535, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_529, L_530, L_536, (1.0f));
		// skeleton.SetPositionRelative(leftLowMaxilarAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.jawsSize - 0.5f) * 0.025f, -0.025f, 0.025f),
		//     Mathf.Clamp(0 + (umaDna.jawsPosition - 0.5f) * 0.03f, -0.03f, 0.03f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_537 = ___skeleton1;
		int32_t L_538 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLowMaxilarAdjustHash_46();
		float L_539;
		L_539 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_540 = V_0;
		float L_541 = L_540->get_jawsSize_37();
		float L_542;
		L_542 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_541, (float)(0.5f))), (float)(0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_543 = V_0;
		float L_544 = L_543->get_jawsPosition_38();
		float L_545;
		L_545 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_544, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_546;
		memset((&L_546), 0, sizeof(L_546));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_546), L_539, L_542, L_545, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_537, L_538, L_546, (1.0f));
		// skeleton.SetPositionRelative(rightLowMaxilarAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.jawsSize - 0.5f) * -0.025f, -0.025f, 0.025f),
		//     Mathf.Clamp(0 + (umaDna.jawsPosition - 0.5f) * 0.03f, -0.03f, 0.03f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_547 = ___skeleton1;
		int32_t L_548 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLowMaxilarAdjustHash_47();
		float L_549;
		L_549 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_550 = V_0;
		float L_551 = L_550->get_jawsSize_37();
		float L_552;
		L_552 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_551, (float)(0.5f))), (float)(-0.0250000004f))))), (-0.0250000004f), (0.0250000004f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_553 = V_0;
		float L_554 = L_553->get_jawsPosition_38();
		float L_555;
		L_555 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_554, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_556;
		memset((&L_556), 0, sizeof(L_556));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_556), L_549, L_552, L_555, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_547, L_548, L_556, (1.0f));
		// skeleton.SetScale(leftCheekAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f),
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f),
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_557 = ___skeleton1;
		int32_t L_558 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftCheekAdjustHash_48();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_559 = V_0;
		float L_560 = L_559->get_cheekSize_39();
		float L_561;
		L_561 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_560, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_562 = V_0;
		float L_563 = L_562->get_cheekSize_39();
		float L_564;
		L_564 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_563, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_565 = V_0;
		float L_566 = L_565->get_cheekSize_39();
		float L_567;
		L_567 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_566, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_568;
		memset((&L_568), 0, sizeof(L_568));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_568), L_561, L_564, L_567, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_557, L_558, L_568);
		// skeleton.SetScale(rightCheekAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f),
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f),
		//     Mathf.Clamp(1 + (umaDna.cheekSize - 0.5f) * 1.05f, 0.35f, 2.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_569 = ___skeleton1;
		int32_t L_570 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightCheekAdjustHash_49();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_571 = V_0;
		float L_572 = L_571->get_cheekSize_39();
		float L_573;
		L_573 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_572, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_574 = V_0;
		float L_575 = L_574->get_cheekSize_39();
		float L_576;
		L_576 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_575, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_577 = V_0;
		float L_578 = L_577->get_cheekSize_39();
		float L_579;
		L_579 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_578, (float)(0.5f))), (float)(1.04999995f))))), (0.349999994f), (2.04999995f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_580;
		memset((&L_580), 0, sizeof(L_580));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_580), L_573, L_576, L_579, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_569, L_570, L_580);
		// skeleton.SetPositionRelative(leftCheekAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.cheekPosition - 0.5f) * 0.03f, -0.03f, 0.03f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_581 = ___skeleton1;
		int32_t L_582 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftCheekAdjustHash_48();
		float L_583;
		L_583 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		float L_584;
		L_584 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_585 = V_0;
		float L_586 = L_585->get_cheekPosition_40();
		float L_587;
		L_587 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_586, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_588;
		memset((&L_588), 0, sizeof(L_588));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_588), L_583, L_584, L_587, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_581, L_582, L_588, (1.0f));
		// skeleton.SetPositionRelative(rightCheekAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.cheekPosition - 0.5f) * 0.03f, -0.03f, 0.03f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_589 = ___skeleton1;
		int32_t L_590 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightCheekAdjustHash_49();
		float L_591;
		L_591 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		float L_592;
		L_592 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_593 = V_0;
		float L_594 = L_593->get_cheekPosition_40();
		float L_595;
		L_595 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_594, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0299999993f), (0.0299999993f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_596;
		memset((&L_596), 0, sizeof(L_596));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_596), L_591, L_592, L_595, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_589, L_590, L_596, (1.0f));
		// skeleton.SetPositionRelative(leftLowCheekAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.lowCheekPronounced - 0.5f) * -0.07f, -0.07f, 0.07f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.lowCheekPosition - 0.5f) * 0.06f, -0.06f, 0.06f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_597 = ___skeleton1;
		int32_t L_598 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLowCheekAdjustHash_50();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_599 = V_0;
		float L_600 = L_599->get_lowCheekPronounced_41();
		float L_601;
		L_601 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_600, (float)(0.5f))), (float)(-0.0700000003f))))), (-0.0700000003f), (0.0700000003f), /*hidden argument*/NULL);
		float L_602;
		L_602 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_603 = V_0;
		float L_604 = L_603->get_lowCheekPosition_42();
		float L_605;
		L_605 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_604, (float)(0.5f))), (float)(0.0599999987f))))), (-0.0599999987f), (0.0599999987f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_606;
		memset((&L_606), 0, sizeof(L_606));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_606), L_601, L_602, L_605, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_597, L_598, L_606, (1.0f));
		// skeleton.SetPositionRelative(rightLowCheekAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.lowCheekPronounced - 0.5f) * -0.07f, -0.07f, 0.07f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.lowCheekPosition - 0.5f) * 0.06f, -0.06f, 0.06f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_607 = ___skeleton1;
		int32_t L_608 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLowCheekAdjustHash_51();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_609 = V_0;
		float L_610 = L_609->get_lowCheekPronounced_41();
		float L_611;
		L_611 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_610, (float)(0.5f))), (float)(-0.0700000003f))))), (-0.0700000003f), (0.0700000003f), /*hidden argument*/NULL);
		float L_612;
		L_612 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_613 = V_0;
		float L_614 = L_613->get_lowCheekPosition_42();
		float L_615;
		L_615 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_614, (float)(0.5f))), (float)(0.0599999987f))))), (-0.0599999987f), (0.0599999987f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_616;
		memset((&L_616), 0, sizeof(L_616));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_616), L_611, L_612, L_615, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_607, L_608, L_616, (1.0f));
		// skeleton.SetPositionRelative(noseTopAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.025f + (umaDna.foreheadSize - 0.5f) * -0.0015f, -0.015f, 0.0025f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_617 = ___skeleton1;
		int32_t L_618 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_noseTopAdjustHash_52();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_619 = V_0;
		float L_620 = L_619->get_foreheadSize_43();
		float L_621;
		L_621 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_620, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_622;
		L_622 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_623 = V_0;
		float L_624 = L_623->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_625 = V_0;
		float L_626 = L_625->get_foreheadSize_43();
		float L_627;
		L_627 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_624, (float)(0.5f))), (float)(-0.0250000004f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_626, (float)(0.5f))), (float)(-0.00150000001f))))), (-0.0149999997f), (0.00249999994f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_628;
		memset((&L_628), 0, sizeof(L_628));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_628), L_621, L_622, L_627, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_617, L_618, L_628, (1.0f));
		// skeleton.SetPositionRelative(leftEyebrowLowAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.02f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.015f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_629 = ___skeleton1;
		int32_t L_630 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyebrowLowAdjustHash_53();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_631 = V_0;
		float L_632 = L_631->get_foreheadSize_43();
		float L_633;
		L_633 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_632, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_634;
		L_634 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_635 = V_0;
		float L_636 = L_635->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_637 = V_0;
		float L_638 = L_637->get_foreheadSize_43();
		float L_639;
		L_639 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_636, (float)(0.5f))), (float)(-0.0199999996f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_638, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.0149999997f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_640;
		memset((&L_640), 0, sizeof(L_640));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_640), L_633, L_634, L_639, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_629, L_630, L_640, (1.0f));
		// skeleton.SetPositionRelative(leftEyebrowMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.05f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.025f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_641 = ___skeleton1;
		int32_t L_642 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyebrowMiddleAdjustHash_55();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_643 = V_0;
		float L_644 = L_643->get_foreheadSize_43();
		float L_645;
		L_645 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_644, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_646;
		L_646 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_647 = V_0;
		float L_648 = L_647->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_649 = V_0;
		float L_650 = L_649->get_foreheadSize_43();
		float L_651;
		L_651 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_648, (float)(0.5f))), (float)(-0.0500000007f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_650, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_652;
		memset((&L_652), 0, sizeof(L_652));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_652), L_645, L_646, L_651, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_641, L_642, L_652, (1.0f));
		// skeleton.SetPositionRelative(leftEyebrowUpAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.007f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.010f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_653 = ___skeleton1;
		int32_t L_654 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftEyebrowUpAdjustHash_57();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_655 = V_0;
		float L_656 = L_655->get_foreheadSize_43();
		float L_657;
		L_657 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_656, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_658;
		L_658 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_659 = V_0;
		float L_660 = L_659->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_661 = V_0;
		float L_662 = L_661->get_foreheadSize_43();
		float L_663;
		L_663 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_660, (float)(0.5f))), (float)(-0.00700000022f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_662, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.00999999978f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_664;
		memset((&L_664), 0, sizeof(L_664));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_664), L_657, L_658, L_663, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_653, L_654, L_664, (1.0f));
		// skeleton.SetPositionRelative(rightEyebrowLowAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.02f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.015f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_665 = ___skeleton1;
		int32_t L_666 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyebrowLowAdjustHash_54();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_667 = V_0;
		float L_668 = L_667->get_foreheadSize_43();
		float L_669;
		L_669 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_668, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_670;
		L_670 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_671 = V_0;
		float L_672 = L_671->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_673 = V_0;
		float L_674 = L_673->get_foreheadSize_43();
		float L_675;
		L_675 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_672, (float)(0.5f))), (float)(-0.0199999996f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_674, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.0149999997f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_676;
		memset((&L_676), 0, sizeof(L_676));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_676), L_669, L_670, L_675, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_665, L_666, L_676, (1.0f));
		// skeleton.SetPositionRelative(rightEyebrowMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.05f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.025f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_677 = ___skeleton1;
		int32_t L_678 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyebrowMiddleAdjustHash_56();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_679 = V_0;
		float L_680 = L_679->get_foreheadSize_43();
		float L_681;
		L_681 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_680, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_682;
		L_682 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_683 = V_0;
		float L_684 = L_683->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_685 = V_0;
		float L_686 = L_685->get_foreheadSize_43();
		float L_687;
		L_687 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_684, (float)(0.5f))), (float)(-0.0500000007f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_686, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_688;
		memset((&L_688), 0, sizeof(L_688));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_688), L_681, L_682, L_687, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_677, L_678, L_688, (1.0f));
		// skeleton.SetPositionRelative(rightEyebrowUpAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0 + (umaDna.foreheadSize - 0.5f) * -0.015f, -0.025f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.foreheadPosition - 0.5f) * -0.007f + (umaDna.foreheadSize - 0.5f) * -0.005f, -0.010f, 0.005f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_689 = ___skeleton1;
		int32_t L_690 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightEyebrowUpAdjustHash_58();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_691 = V_0;
		float L_692 = L_691->get_foreheadSize_43();
		float L_693;
		L_693 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_692, (float)(0.5f))), (float)(-0.0149999997f))))), (-0.0250000004f), (0.00499999989f), /*hidden argument*/NULL);
		float L_694;
		L_694 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_695 = V_0;
		float L_696 = L_695->get_foreheadPosition_44();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_697 = V_0;
		float L_698 = L_697->get_foreheadSize_43();
		float L_699;
		L_699 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_696, (float)(0.5f))), (float)(-0.00700000022f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_698, (float)(0.5f))), (float)(-0.00499999989f))))), (-0.00999999978f), (0.00499999989f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_700;
		memset((&L_700), 0, sizeof(L_700));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_700), L_693, L_694, L_699, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_689, L_690, L_700, (1.0f));
		// skeleton.SetScale(lipsSuperiorAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_701 = ___skeleton1;
		int32_t L_702 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lipsSuperiorAdjustHash_59();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_703 = V_0;
		float L_704 = L_703->get_lipsSize_45();
		float L_705;
		L_705 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_704, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_706 = V_0;
		float L_707 = L_706->get_lipsSize_45();
		float L_708;
		L_708 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_707, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_709 = V_0;
		float L_710 = L_709->get_lipsSize_45();
		float L_711;
		L_711 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_710, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_712;
		memset((&L_712), 0, sizeof(L_712));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_712), L_705, L_708, L_711, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_701, L_702, L_712);
		// skeleton.SetScale(lipsInferiorAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 1.0f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 1.0f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_713 = ___skeleton1;
		int32_t L_714 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lipsInferiorAdjustHash_60();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_715 = V_0;
		float L_716 = L_715->get_lipsSize_45();
		float L_717;
		L_717 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_716, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_718 = V_0;
		float L_719 = L_718->get_lipsSize_45();
		float L_720;
		L_720 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_719, (float)(0.5f))), (float)(1.0f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_721 = V_0;
		float L_722 = L_721->get_lipsSize_45();
		float L_723;
		L_723 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_722, (float)(0.5f))), (float)(1.0f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_724;
		memset((&L_724), 0, sizeof(L_724));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_724), L_717, L_720, L_723, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_713, L_714, L_724);
		// skeleton.SetScale(leftLipsSuperiorMiddleAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_725 = ___skeleton1;
		int32_t L_726 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsSuperiorMiddleAdjustHash_61();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_727 = V_0;
		float L_728 = L_727->get_lipsSize_45();
		float L_729;
		L_729 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_728, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_730 = V_0;
		float L_731 = L_730->get_lipsSize_45();
		float L_732;
		L_732 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_731, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_733 = V_0;
		float L_734 = L_733->get_lipsSize_45();
		float L_735;
		L_735 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_734, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_736;
		memset((&L_736), 0, sizeof(L_736));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_736), L_729, L_732, L_735, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_725, L_726, L_736);
		// skeleton.SetScale(rightLipsSuperiorMiddleAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_737 = ___skeleton1;
		int32_t L_738 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsSuperiorMiddleAdjustHash_62();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_739 = V_0;
		float L_740 = L_739->get_lipsSize_45();
		float L_741;
		L_741 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_740, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_742 = V_0;
		float L_743 = L_742->get_lipsSize_45();
		float L_744;
		L_744 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_743, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_745 = V_0;
		float L_746 = L_745->get_lipsSize_45();
		float L_747;
		L_747 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_746, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_748;
		memset((&L_748), 0, sizeof(L_748));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_748), L_741, L_744, L_747, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_737, L_738, L_748);
		// skeleton.SetScale(leftLipsInferiorAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_749 = ___skeleton1;
		int32_t L_750 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsInferiorAdjustHash_63();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_751 = V_0;
		float L_752 = L_751->get_lipsSize_45();
		float L_753;
		L_753 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_752, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_754 = V_0;
		float L_755 = L_754->get_lipsSize_45();
		float L_756;
		L_756 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_755, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_757 = V_0;
		float L_758 = L_757->get_lipsSize_45();
		float L_759;
		L_759 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_758, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_760;
		memset((&L_760), 0, sizeof(L_760));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_760), L_753, L_756, L_759, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_749, L_750, L_760);
		// skeleton.SetScale(rightLipsInferiorAdjustHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.05f, 1.0f, 1.05f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f),
		//     Mathf.Clamp(1 + (umaDna.lipsSize - 0.5f) * 0.9f, 0.65f, 1.5f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_761 = ___skeleton1;
		int32_t L_762 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsInferiorAdjustHash_64();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_763 = V_0;
		float L_764 = L_763->get_lipsSize_45();
		float L_765;
		L_765 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_764, (float)(0.5f))), (float)(0.0500000007f))))), (1.0f), (1.04999995f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_766 = V_0;
		float L_767 = L_766->get_lipsSize_45();
		float L_768;
		L_768 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_767, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_769 = V_0;
		float L_770 = L_769->get_lipsSize_45();
		float L_771;
		L_771 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_770, (float)(0.5f))), (float)(0.899999976f))))), (0.649999976f), (1.5f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_772;
		memset((&L_772), 0, sizeof(L_772));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_772), L_765, L_768, L_771, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_761, L_762, L_772);
		// skeleton.SetPositionRelative(lipsInferiorAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.lipsSize - 0.5f) * -0.008f, -0.1f, 0.1f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_773 = ___skeleton1;
		int32_t L_774 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lipsInferiorAdjustHash_60();
		float L_775;
		L_775 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		float L_776;
		L_776 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_777 = V_0;
		float L_778 = L_777->get_lipsSize_45();
		float L_779;
		L_779 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_778, (float)(0.5f))), (float)(-0.00800000038f))))), (-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_780;
		memset((&L_780), 0, sizeof(L_780));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_780), L_775, L_776, L_779, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_773, L_774, L_780, (1.0f));
		// skeleton.SetPositionRelative(leftLipsAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * 0.03f, -0.02f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_781 = ___skeleton1;
		int32_t L_782 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsAdjustHash_65();
		float L_783;
		L_783 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_784 = V_0;
		float L_785 = L_784->get_mouthSize_46();
		float L_786;
		L_786 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_785, (float)(0.5f))), (float)(0.0299999993f))))), (-0.0199999996f), (0.00499999989f), /*hidden argument*/NULL);
		float L_787;
		L_787 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_788;
		memset((&L_788), 0, sizeof(L_788));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_788), L_783, L_786, L_787, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_781, L_782, L_788, (1.0f));
		// skeleton.SetPositionRelative(rightLipsAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * -0.03f, -0.005f, 0.02f),
		//     Mathf.Clamp(0, -0.05f, 0.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_789 = ___skeleton1;
		int32_t L_790 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsAdjustHash_66();
		float L_791;
		L_791 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_792 = V_0;
		float L_793 = L_792->get_mouthSize_46();
		float L_794;
		L_794 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_793, (float)(0.5f))), (float)(-0.0299999993f))))), (-0.00499999989f), (0.0199999996f), /*hidden argument*/NULL);
		float L_795;
		L_795 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_796;
		memset((&L_796), 0, sizeof(L_796));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_796), L_791, L_794, L_795, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_789, L_790, L_796, (1.0f));
		// skeleton.SetPositionRelative(leftLipsSuperiorMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * 0.007f, -0.02f, 0.005f),
		//     Mathf.Clamp(0, -0.05f, 0.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_797 = ___skeleton1;
		int32_t L_798 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsSuperiorMiddleAdjustHash_61();
		float L_799;
		L_799 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_800 = V_0;
		float L_801 = L_800->get_mouthSize_46();
		float L_802;
		L_802 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_801, (float)(0.5f))), (float)(0.00700000022f))))), (-0.0199999996f), (0.00499999989f), /*hidden argument*/NULL);
		float L_803;
		L_803 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_804;
		memset((&L_804), 0, sizeof(L_804));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_804), L_799, L_802, L_803, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_797, L_798, L_804, (1.0f));
		// skeleton.SetPositionRelative(rightLipsSuperiorMiddleAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * -0.007f, -0.005f, 0.02f),
		//     Mathf.Clamp(0, -0.05f, 0.05f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_805 = ___skeleton1;
		int32_t L_806 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsSuperiorMiddleAdjustHash_62();
		float L_807;
		L_807 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_808 = V_0;
		float L_809 = L_808->get_mouthSize_46();
		float L_810;
		L_810 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_809, (float)(0.5f))), (float)(-0.00700000022f))))), (-0.00499999989f), (0.0199999996f), /*hidden argument*/NULL);
		float L_811;
		L_811 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_812;
		memset((&L_812), 0, sizeof(L_812));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_812), L_807, L_810, L_811, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_805, L_806, L_812, (1.0f));
		// skeleton.SetPositionRelative(leftLipsInferiorAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * 0.007f, -0.02f, 0.005f),
		//     Mathf.Clamp(0 + (umaDna.lipsSize - 0.5f) * -0.008f, -0.1f, 0.1f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_813 = ___skeleton1;
		int32_t L_814 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftLipsInferiorAdjustHash_63();
		float L_815;
		L_815 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_816 = V_0;
		float L_817 = L_816->get_mouthSize_46();
		float L_818;
		L_818 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_817, (float)(0.5f))), (float)(0.00700000022f))))), (-0.0199999996f), (0.00499999989f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_819 = V_0;
		float L_820 = L_819->get_lipsSize_45();
		float L_821;
		L_821 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_820, (float)(0.5f))), (float)(-0.00800000038f))))), (-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_822;
		memset((&L_822), 0, sizeof(L_822));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_822), L_815, L_818, L_821, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_813, L_814, L_822, (1.0f));
		// skeleton.SetPositionRelative(rightLipsInferiorAdjustHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -0.05f, 0.05f),
		//     Mathf.Clamp(0 + (umaDna.mouthSize - 0.5f) * -0.007f, -0.005f, 0.02f),
		//     Mathf.Clamp(0 + (umaDna.lipsSize - 0.5f) * -0.008f, -0.1f, 0.1f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_823 = ___skeleton1;
		int32_t L_824 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightLipsInferiorAdjustHash_64();
		float L_825;
		L_825 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87((0.0f), (-0.0500000007f), (0.0500000007f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_826 = V_0;
		float L_827 = L_826->get_mouthSize_46();
		float L_828;
		L_828 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_827, (float)(0.5f))), (float)(-0.00700000022f))))), (-0.00499999989f), (0.0199999996f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_829 = V_0;
		float L_830 = L_829->get_lipsSize_45();
		float L_831;
		L_831 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_830, (float)(0.5f))), (float)(-0.00800000038f))))), (-0.100000001f), (0.100000001f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_832;
		memset((&L_832), 0, sizeof(L_832));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_832), L_825, L_828, L_831, /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_823, L_824, L_832, (1.0f));
		// float overallScale = 0.88f + (umaDna.height - 0.5f) * 1.0f + (umaDna.legsSize - 0.5f) * 1.0f;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_833 = V_0;
		float L_834 = L_833->get_height_4();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_835 = V_0;
		float L_836 = L_835->get_legsSize_19();
		V_1 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(0.879999995f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_834, (float)(0.5f))), (float)(1.0f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_836, (float)(0.5f))), (float)(1.0f)))));
		// overallScale = Mathf.Clamp(overallScale, 0.5f, 2f);
		float L_837 = V_1;
		float L_838;
		L_838 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_837, (0.5f), (2.0f), /*hidden argument*/NULL);
		V_1 = L_838;
		// skeleton.SetScale(positionHash, new Vector3(overallScale, overallScale, overallScale));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_839 = ___skeleton1;
		int32_t L_840 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_positionHash_68();
		float L_841 = V_1;
		float L_842 = V_1;
		float L_843 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_844;
		memset((&L_844), 0, sizeof(L_844));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_844), L_841, L_842, L_843, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_839, L_840, L_844);
		// skeleton.SetPositionRelative(positionHash,
		//                      new Vector3(
		//     Mathf.Clamp((umaDna.feetSize - 0.5f) * -0.20f, -0.15f, 0.0675f),
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_845 = ___skeleton1;
		int32_t L_846 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_positionHash_68();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_847 = V_0;
		float L_848 = L_847->get_feetSize_13();
		float L_849;
		L_849 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_848, (float)(0.5f))), (float)(-0.200000003f))), (-0.150000006f), (0.0675000027f), /*hidden argument*/NULL);
		int32_t L_850;
		L_850 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		int32_t L_851;
		L_851 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_852;
		memset((&L_852), 0, sizeof(L_852));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_852), L_849, ((float)((float)L_850)), ((float)((float)L_851)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_845, L_846, L_852, (1.0f));
		// float lowerBackScale = Mathf.Clamp(1 - (umaDna.legsSize - 0.5f) * 1.0f, 0.5f, 3.0f);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_853 = V_0;
		float L_854 = L_853->get_legsSize_19();
		float L_855;
		L_855 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_854, (float)(0.5f))), (float)(1.0f))))), (0.5f), (3.0f), /*hidden argument*/NULL);
		V_2 = L_855;
		// skeleton.SetScale(lowerBackHash, new Vector3(lowerBackScale, lowerBackScale, lowerBackScale));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_856 = ___skeleton1;
		int32_t L_857 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_lowerBackHash_69();
		float L_858 = V_2;
		float L_859 = V_2;
		float L_860 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_861;
		memset((&L_861), 0, sizeof(L_861));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_861), L_858, L_859, L_860, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_856, L_857, L_861);
		// skeleton.SetScale(headHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.headSize - 0.5f) * 2.0f, 0.5f, 2),
		//     Mathf.Clamp(1 + (umaDna.headSize - 0.5f) * 2.0f, 0.5f, 2),
		//     Mathf.Clamp(1 + (umaDna.headSize - 0.5f) * 2.0f, 0.5f, 2)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_862 = ___skeleton1;
		int32_t L_863 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_headHash_70();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_864 = V_0;
		float L_865 = L_864->get_headSize_5();
		float L_866;
		L_866 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_865, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_867 = V_0;
		float L_868 = L_867->get_headSize_5();
		float L_869;
		L_869 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_868, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_870 = V_0;
		float L_871 = L_870->get_headSize_5();
		float L_872;
		L_872 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_871, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_873;
		memset((&L_873), 0, sizeof(L_873));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_873), L_866, L_869, L_872, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_862, L_863, L_873);
		// skeleton.SetScale(leftArmHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_874 = ___skeleton1;
		int32_t L_875 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftArmHash_71();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_876 = V_0;
		float L_877 = L_876->get_armLength_8();
		float L_878;
		L_878 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_877, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_879 = V_0;
		float L_880 = L_879->get_armLength_8();
		float L_881;
		L_881 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_880, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_882 = V_0;
		float L_883 = L_882->get_armLength_8();
		float L_884;
		L_884 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_883, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_885;
		memset((&L_885), 0, sizeof(L_885));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_885), L_878, L_881, L_884, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_874, L_875, L_885);
		// skeleton.SetScale(rightArmHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.armLength - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_886 = ___skeleton1;
		int32_t L_887 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightArmHash_72();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_888 = V_0;
		float L_889 = L_888->get_armLength_8();
		float L_890;
		L_890 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_889, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_891 = V_0;
		float L_892 = L_891->get_armLength_8();
		float L_893;
		L_893 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_892, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_894 = V_0;
		float L_895 = L_894->get_armLength_8();
		float L_896;
		L_896 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_895, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_897;
		memset((&L_897), 0, sizeof(L_897));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_897), L_890, L_893, L_896, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_886, L_887, L_897);
		// skeleton.SetScale(leftForeArmHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_898 = ___skeleton1;
		int32_t L_899 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftForeArmHash_73();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_900 = V_0;
		float L_901 = L_900->get_forearmLength_9();
		float L_902;
		L_902 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_901, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_903 = V_0;
		float L_904 = L_903->get_forearmLength_9();
		float L_905;
		L_905 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_904, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_906 = V_0;
		float L_907 = L_906->get_forearmLength_9();
		float L_908;
		L_908 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_907, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_909;
		memset((&L_909), 0, sizeof(L_909));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_909), L_902, L_905, L_908, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_898, L_899, L_909);
		// skeleton.SetScale(rightForeArmHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.forearmLength - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_910 = ___skeleton1;
		int32_t L_911 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightForeArmHash_74();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_912 = V_0;
		float L_913 = L_912->get_forearmLength_9();
		float L_914;
		L_914 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_913, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_915 = V_0;
		float L_916 = L_915->get_forearmLength_9();
		float L_917;
		L_917 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_916, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_918 = V_0;
		float L_919 = L_918->get_forearmLength_9();
		float L_920;
		L_920 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_919, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_921;
		memset((&L_921), 0, sizeof(L_921));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_921), L_914, L_917, L_920, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_910, L_911, L_921);
		// skeleton.SetScale(leftHandHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_922 = ___skeleton1;
		int32_t L_923 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftHandHash_75();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_924 = V_0;
		float L_925 = L_924->get_handsSize_12();
		float L_926;
		L_926 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_925, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_927 = V_0;
		float L_928 = L_927->get_handsSize_12();
		float L_929;
		L_929 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_928, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_930 = V_0;
		float L_931 = L_930->get_handsSize_12();
		float L_932;
		L_932 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_931, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_933;
		memset((&L_933), 0, sizeof(L_933));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_933), L_926, L_929, L_932, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_922, L_923, L_933);
		// skeleton.SetScale(rightHandHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.handsSize - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_934 = ___skeleton1;
		int32_t L_935 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightHandHash_76();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_936 = V_0;
		float L_937 = L_936->get_handsSize_12();
		float L_938;
		L_938 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_937, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_939 = V_0;
		float L_940 = L_939->get_handsSize_12();
		float L_941;
		L_941 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_940, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_942 = V_0;
		float L_943 = L_942->get_handsSize_12();
		float L_944;
		L_944 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_943, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_945;
		memset((&L_945), 0, sizeof(L_945));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_945), L_938, L_941, L_944, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_934, L_935, L_945);
		// skeleton.SetScale(leftFootHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_946 = ___skeleton1;
		int32_t L_947 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftFootHash_77();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_948 = V_0;
		float L_949 = L_948->get_feetSize_13();
		float L_950;
		L_950 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_949, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_951 = V_0;
		float L_952 = L_951->get_feetSize_13();
		float L_953;
		L_953 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_952, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_954 = V_0;
		float L_955 = L_954->get_feetSize_13();
		float L_956;
		L_956 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_955, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_957;
		memset((&L_957), 0, sizeof(L_957));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_957), L_950, L_953, L_956, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_946, L_947, L_957);
		// skeleton.SetScale(rightFootHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f),
		//     Mathf.Clamp(1 + (umaDna.feetSize - 0.5f) * 2.0f, 0.5f, 2.0f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_958 = ___skeleton1;
		int32_t L_959 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightFootHash_78();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_960 = V_0;
		float L_961 = L_960->get_feetSize_13();
		float L_962;
		L_962 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_961, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_963 = V_0;
		float L_964 = L_963->get_feetSize_13();
		float L_965;
		L_965 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_964, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_966 = V_0;
		float L_967 = L_966->get_feetSize_13();
		float L_968;
		L_968 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_967, (float)(0.5f))), (float)(2.0f))))), (0.5f), (2.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_969;
		memset((&L_969), 0, sizeof(L_969));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_969), L_962, L_965, L_968, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_958, L_959, L_969);
		// skeleton.SetPositionRelative(leftUpLegHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp((umaDna.legSeparation - 0.5f) * -0.15f + (umaDna.lowerWeight - 0.5f) * -0.035f + (umaDna.legsSize - 0.5f) * 0.1f, -0.055f, 0.055f),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_970 = ___skeleton1;
		int32_t L_971 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftUpLegHash_79();
		int32_t L_972;
		L_972 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_973 = V_0;
		float L_974 = L_973->get_legSeparation_14();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_975 = V_0;
		float L_976 = L_975->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_977 = V_0;
		float L_978 = L_977->get_legsSize_19();
		float L_979;
		L_979 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_974, (float)(0.5f))), (float)(-0.150000006f))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_976, (float)(0.5f))), (float)(-0.0350000001f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_978, (float)(0.5f))), (float)(0.100000001f))))), (-0.0549999997f), (0.0549999997f), /*hidden argument*/NULL);
		int32_t L_980;
		L_980 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_981;
		memset((&L_981), 0, sizeof(L_981));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_981), ((float)((float)L_972)), L_979, ((float)((float)L_980)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_970, L_971, L_981, (1.0f));
		// skeleton.SetPositionRelative(rightUpLegHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp((umaDna.legSeparation - 0.5f) * 0.15f + (umaDna.lowerWeight - 0.5f) * 0.035f + (umaDna.legsSize - 0.5f) * -0.1f, -0.055f, 0.055f),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_982 = ___skeleton1;
		int32_t L_983 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightUpLegHash_80();
		int32_t L_984;
		L_984 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_985 = V_0;
		float L_986 = L_985->get_legSeparation_14();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_987 = V_0;
		float L_988 = L_987->get_lowerWeight_18();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_989 = V_0;
		float L_990 = L_989->get_legsSize_19();
		float L_991;
		L_991 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_986, (float)(0.5f))), (float)(0.150000006f))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_988, (float)(0.5f))), (float)(0.0350000001f))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_990, (float)(0.5f))), (float)(-0.100000001f))))), (-0.0549999997f), (0.0549999997f), /*hidden argument*/NULL);
		int32_t L_992;
		L_992 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_993;
		memset((&L_993), 0, sizeof(L_993));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_993), ((float)((float)L_984)), L_991, ((float)((float)L_992)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_982, L_983, L_993, (1.0f));
		// skeleton.SetPositionRelative(leftShoulderHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp(-0.003f + (umaDna.upperMuscle - 0.5f) * -0.265f, -0.085f, 0.015f),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_994 = ___skeleton1;
		int32_t L_995 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_leftShoulderHash_81();
		int32_t L_996;
		L_996 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_997 = V_0;
		float L_998 = L_997->get_upperMuscle_15();
		float L_999;
		L_999 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(-0.00300000003f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_998, (float)(0.5f))), (float)(-0.264999986f))))), (-0.0850000009f), (0.0149999997f), /*hidden argument*/NULL);
		int32_t L_1000;
		L_1000 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1001;
		memset((&L_1001), 0, sizeof(L_1001));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1001), ((float)((float)L_996)), L_999, ((float)((float)L_1000)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_994, L_995, L_1001, (1.0f));
		// skeleton.SetPositionRelative(rightShoulderHash,
		//                      new Vector3(
		//     Mathf.Clamp(0, -10, 10),
		//     Mathf.Clamp(0.003f + (umaDna.upperMuscle - 0.5f) * 0.265f, -0.015f, 0.085f),
		//     Mathf.Clamp(0, -10, 10)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_1002 = ___skeleton1;
		int32_t L_1003 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_rightShoulderHash_82();
		int32_t L_1004;
		L_1004 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1005 = V_0;
		float L_1006 = L_1005->get_upperMuscle_15();
		float L_1007;
		L_1007 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(0.00300000003f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1006, (float)(0.5f))), (float)(0.264999986f))))), (-0.0149999997f), (0.0850000009f), /*hidden argument*/NULL);
		int32_t L_1008;
		L_1008 = Mathf_Clamp_mAD0781EB7470594CD4482DD64A0D739E4E539C3C(0, ((int32_t)-10), ((int32_t)10), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1009;
		memset((&L_1009), 0, sizeof(L_1009));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1009), ((float)((float)L_1004)), L_1007, ((float)((float)L_1008)), /*hidden argument*/NULL);
		VirtActionInvoker3< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , float >::Invoke(22 /* System.Void UMA.UMASkeleton::SetPositionRelative(System.Int32,UnityEngine.Vector3,System.Single) */, L_1002, L_1003, L_1009, (1.0f));
		// skeleton.SetScale(mandibleHash,
		//                   new Vector3(
		//     Mathf.Clamp(1 + (umaDna.mandibleSize - 0.5f) * 0.35f, 0.35f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.mandibleSize - 0.5f) * 0.35f, 0.35f, 1.35f),
		//     Mathf.Clamp(1 + (umaDna.mandibleSize - 0.5f) * 0.35f, 0.35f, 1.35f)));
		UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE * L_1010 = ___skeleton1;
		int32_t L_1011 = ((HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_StaticFields*)il2cpp_codegen_static_fields_for(HumanoidDNAConverterBehaviour_t15A4A39C6F011A86614D6F811BC2D762824432CD_il2cpp_TypeInfo_var))->get_mandibleHash_83();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1012 = V_0;
		float L_1013 = L_1012->get_mandibleSize_36();
		float L_1014;
		L_1014 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1013, (float)(0.5f))), (float)(0.349999994f))))), (0.349999994f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1015 = V_0;
		float L_1016 = L_1015->get_mandibleSize_36();
		float L_1017;
		L_1017 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1016, (float)(0.5f))), (float)(0.349999994f))))), (0.349999994f), (1.35000002f), /*hidden argument*/NULL);
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1018 = V_0;
		float L_1019 = L_1018->get_mandibleSize_36();
		float L_1020;
		L_1020 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1019, (float)(0.5f))), (float)(0.349999994f))))), (0.349999994f), (1.35000002f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1021;
		memset((&L_1021), 0, sizeof(L_1021));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1021), L_1014, L_1017, L_1020, /*hidden argument*/NULL);
		VirtActionInvoker2< int32_t, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  >::Invoke(23 /* System.Void UMA.UMASkeleton::SetScale(System.Int32,UnityEngine.Vector3) */, L_1010, L_1011, L_1021);
		// float raceHeight = umaData.umaRecipe.raceData.raceHeight;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1022 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_1023;
		L_1023 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_1022, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_1024 = L_1023->get_raceData_0();
		float L_1025 = L_1024->get_raceHeight_24();
		V_3 = L_1025;
		// float raceRadius = umaData.umaRecipe.raceData.raceRadius;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1026 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_1027;
		L_1027 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_1026, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_1028 = L_1027->get_raceData_0();
		float L_1029 = L_1028->get_raceRadius_25();
		V_4 = L_1029;
		// float raceMass = umaData.umaRecipe.raceData.raceMass;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1030 = ___umaData0;
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_1031;
		L_1031 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35(L_1030, /*hidden argument*/NULL);
		RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_1032 = L_1031->get_raceData_0();
		float L_1033 = L_1032->get_raceMass_26();
		V_5 = L_1033;
		// umaData.characterHeight = raceHeight * overallScale * (0.425f + 0.6f * lowerBackScale) + ((umaDna.feetSize - 0.5f) * 0.25f);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1034 = ___umaData0;
		float L_1035 = V_3;
		float L_1036 = V_1;
		float L_1037 = V_2;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1038 = V_0;
		float L_1039 = L_1038->get_feetSize_13();
		L_1034->set_characterHeight_41(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_multiply((float)L_1035, (float)L_1036)), (float)((float)il2cpp_codegen_add((float)(0.425000012f), (float)((float)il2cpp_codegen_multiply((float)(0.600000024f), (float)L_1037)))))), (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1039, (float)(0.5f))), (float)(0.25f))))));
		// umaData.characterRadius = raceRadius + ((umaDna.height - 0.5f) * 0.35f) + Mathf.Clamp01((umaDna.upperMuscle - 0.5f) * 0.19f);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1040 = ___umaData0;
		float L_1041 = V_4;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1042 = V_0;
		float L_1043 = L_1042->get_height_4();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1044 = V_0;
		float L_1045 = L_1044->get_upperMuscle_15();
		float L_1046;
		L_1046 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1045, (float)(0.5f))), (float)(0.189999998f))), /*hidden argument*/NULL);
		L_1040->set_characterRadius_42(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_1041, (float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_1043, (float)(0.5f))), (float)(0.349999994f))))), (float)L_1046)));
		// umaData.characterMass = raceMass * overallScale + 26f * umaDna.upperWeight + 26f * umaDna.lowerWeight;
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_1047 = ___umaData0;
		float L_1048 = V_5;
		float L_1049 = V_1;
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1050 = V_0;
		float L_1051 = L_1050->get_upperWeight_17();
		UMADnaHumanoid_tA6D509C323879D06EB2A248000D6D698FE3CE83F * L_1052 = V_0;
		float L_1053 = L_1052->get_lowerWeight_18();
		L_1047->set_characterMass_43(((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_1048, (float)L_1049)), (float)((float)il2cpp_codegen_multiply((float)(26.0f), (float)L_1051)))), (float)((float)il2cpp_codegen_multiply((float)(26.0f), (float)L_1053)))));
		// }
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
// System.Void UMA.Examples.Locomotion::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Locomotion_Start_mF0C4D0CB6E849CF6D11E207DF1B890D1D95D197F (Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_4(L_0);
		// if (animator == null) return;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1 = __this->get_animator_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001b;
		}
	}
	{
		// if (animator == null) return;
		return;
	}

IL_001b:
	{
		// if (animator.layerCount >= 2)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_3 = __this->get_animator_4();
		int32_t L_4;
		L_4 = Animator_get_layerCount_m9F7ED8546CE9F7A507C88C577919A9C5E4DFE4F6(L_3, /*hidden argument*/NULL);
		if ((((int32_t)L_4) < ((int32_t)2)))
		{
			goto IL_003a;
		}
	}
	{
		// animator.SetLayerWeight(1, 1);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_5 = __this->get_animator_4();
		Animator_SetLayerWeight_mFC527EAF68AAA25156B5A5B838FB9AB7231DDDF7(L_5, 1, (1.0f), /*hidden argument*/NULL);
	}

IL_003a:
	{
		// }
		return;
	}
}
// System.Void UMA.Examples.Locomotion::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Locomotion_Update_m6318985CF91157C9C05198791B66E987667F1A03 (Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (animator)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0 = __this->get_animator_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_0057;
		}
	}
	{
		// float h = Input.GetAxis("Horizontal");
		float L_2;
		L_2 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		V_0 = L_2;
		// float v = Input.GetAxis("Vertical");
		float L_3;
		L_3 = Input_GetAxis_m939297DEB2ECF8D8D09AD66EB69979AAD2B62326(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		V_1 = L_3;
		// animator.SetFloat("Speed", h * h + v * v);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_animator_4();
		float L_5 = V_0;
		float L_6 = V_0;
		float L_7 = V_1;
		float L_8 = V_1;
		Animator_SetFloat_mD731F47ED44C2D629F8E1C6DB15629C3E1B992A0(L_4, _stringLiteral5D2E3D85D1C3D4F42FAE33FB35C01C48241E0B32, ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_5, (float)L_6)), (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))), /*hidden argument*/NULL);
		// animator.SetFloat("Direction", h, DirectionDampTime, Time.deltaTime);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_9 = __this->get_animator_4();
		float L_10 = V_0;
		float L_11 = __this->get_DirectionDampTime_5();
		float L_12;
		L_12 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Animator_SetFloat_mA337A8EB0C377B41EAB2FAFC01320F9FD2DC6ED3(L_9, _stringLiteralF45B00322DC340FDDE1F3579CC8A6649FD735907, L_10, L_11, L_12, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0057:
	{
		// animator = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_13;
		L_13 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_animator_4(L_13);
		// }
		return;
	}
}
// System.Void UMA.Examples.Locomotion::OnCollisionEnter(UnityEngine.Collision)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Locomotion_OnCollisionEnter_mD38F92501ADAF471C726185790B7D40AB271F15E (Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * __this, Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0027;
		}
	}
	{
		// Debug.Log(collision.collider.name + ":" + name);
		Collision_tDC11F9B3834FD25DEB8C7DD1C51B635D240BBBF0 * L_1 = ___collision0;
		Collider_t5E81E43C2ECA0209A7C4528E84A632712D192B02 * L_2;
		L_2 = Collision_get_collider_m0AC4446E6B9168A0FB19DA376559C812E43779F8(L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_2, /*hidden argument*/NULL);
		String_t* L_4;
		L_4 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(__this, /*hidden argument*/NULL);
		String_t* L_5;
		L_5 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_3, _stringLiteral876C4B39B6E4D0187090400768899C71D99DE90D, L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Void UMA.Examples.Locomotion::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Locomotion__ctor_m37C5CE5F3FBED9AFEAD3B05B3E6F995698CCF1AE (Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * __this, const RuntimeMethod* method)
{
	{
		// public float DirectionDampTime = .25f;
		__this->set_DirectionDampTime_5((0.25f));
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
// System.Void UMA.Examples.LocomotionSlotScript::OnDnaApplied(UMA.UMAData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionSlotScript_OnDnaApplied_mAD671B02BE6240406E2D99342B527674DD0606F2 (LocomotionSlotScript_tC6F1D709E7F22799FF4F6DEC52CFC8FD1DED0F43 * __this, UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m5B078D319D4F6952735EDADA57E9F154F8D8F23A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m42C702C12C4EB19C03766DAF7282545805022F50_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var locomotion = umaData.GetComponent<Locomotion>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_0 = ___umaData0;
		Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * L_1;
		L_1 = Component_GetComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m5B078D319D4F6952735EDADA57E9F154F8D8F23A(L_0, /*hidden argument*/Component_GetComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m5B078D319D4F6952735EDADA57E9F154F8D8F23A_RuntimeMethod_var);
		// if (locomotion == null)
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// umaData.gameObject.AddComponent<Locomotion>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_3 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		Locomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4 * L_5;
		L_5 = GameObject_AddComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m42C702C12C4EB19C03766DAF7282545805022F50(L_4, /*hidden argument*/GameObject_AddComponent_TisLocomotion_tF6FD45D12A13FA907B1D06B56F5E75BB80F0A5A4_m42C702C12C4EB19C03766DAF7282545805022F50_RuntimeMethod_var);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UMA.Examples.LocomotionSlotScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LocomotionSlotScript__ctor_m0052B99715EEBCA424933054850F907D41F5F5A4 (LocomotionSlotScript_tC6F1D709E7F22799FF4F6DEC52CFC8FD1DED0F43 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnaConverterBehaviour_set_ApplyDnaAction_m109107C3682D965772496EB3AA7DB43C0FA0CF21_inline (DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6 * __this, DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * ___value0, const RuntimeMethod* method)
{
	{
		// set { _applyDnaAction = value; }
		DNAConvertDelegate_t18A4D76D4A624138F87B67B6330AC5BEED88D5D1 * L_0 = ___value0;
		__this->set__applyDnaAction_8(L_0);
		// set { _applyDnaAction = value; }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DnaConverterBehaviour_set_DNAType_m95AB815DF252C02BBA9A0926B3F0C918019FC497_inline (DnaConverterBehaviour_t5B81C92380F26591BA689893C34638759FCDE9E6 * __this, Type_t * ___value0, const RuntimeMethod* method)
{
	{
		// set { _dnaType = value; }
		Type_t * L_0 = ___value0;
		__this->set__dnaType_4(L_0);
		// set { _dnaType = value; }
		return;
	}
}

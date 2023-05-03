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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UMA.DNAConvertDelegate>>
struct Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMADnaBase>
struct Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>>
struct Dictionary_2_t564A1C71BCC245E5C1BB0CF242D286860BC5EC87;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.MeshHideAsset>>
struct Dictionary_2_t7B44D9A0564C9705D96B47DCC6B257D2B9EBA177;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>
struct Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF;
// System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>
struct Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF;
// System.Collections.Generic.Dictionary`2<System.String,UMA.DnaSetter>
struct Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_tB86B13980B9AA3D02B6088DAFB2F457C2C87A423;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85;
// System.Collections.Generic.Dictionary`2<System.String,UMA.UMATextRecipe>
struct Dictionary_2_tE4D36FD281D837A5185420A9CC47F4AF57978D8C;
// System.Collections.Generic.Dictionary`2<System.String,UMA.CharacterSystem.UMAWardrobeCollection>
struct Dictionary_2_t5ED6C4CDDEF9B6C60E3099AC77D21D19A8133200;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>>
struct Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2;
// System.Collections.Generic.Dictionary`2<System.Type,UMA.DNAConvertDelegate>
struct Dictionary_2_tCE17D359830A1305E94351EF4D2681529A1BB22C;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506;
// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation>
struct Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>
struct KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UMA.DnaSetter>
struct KeyCollection_t5568613F4833408340AC2DEF0B6698323A62A7DE;
// System.Collections.Generic.LinkedListNode`1<UMA.UMAData>
struct LinkedListNode_1_t58B04B7F807A8599357DEF495B9BAECB62B34286;
// System.Collections.Generic.List`1<UMA.AssetItem>
struct List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UMA.MeshHideAsset>
struct List_1_tA250F32315BA0619282BE94003BEA0BE8C58AA6C;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UMA.OverlayColorData>
struct List_1_tF13EF38A4E5EDC174BC4866BC9B5CF9580F9DD35;
// System.Collections.Generic.List`1<UMA.RaceData>
struct List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96;
// System.Collections.Generic.List`1<UnityEngine.Sprite>
struct List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UMA.UMADnaBase>
struct List_1_t6EB9C928712A968388ECB10159E456120E6DE71D;
// System.Collections.Generic.List`1<UMA.UMARandomizer>
struct List_1_tAC98EDD8F2BBF4264BD2802EE3E0BB2FB23CAA3C;
// System.Collections.Generic.List`1<UMA.UMASavedItem>
struct List_1_t180E55DE782EC1658BD5144F1BDE7963D5BC605F;
// System.Collections.Generic.List`1<UMA.UMATextRecipe>
struct List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58;
// System.Collections.Generic.List`1<UMA.CharacterSystem.WardrobeRecipeThumb>
struct List_1_t16B8E6BC2841BB83D52D2A19C0D8E25CA4954F0E;
// System.Collections.Generic.List`1<UMA.CharacterSystem.WardrobeSettings>
struct List_1_tFCE2D57BFD0BA10CD45A2EBE80B30A675E9A2857;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem>
struct List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033;
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween>
struct TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>
struct ValueCollection_t0157B9A64A523213ADA48676F325174ABACF9127;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UMA.DnaSetter>
struct ValueCollection_t0D2CB3243C7733E6CEEEA49E05A0485519E595E4;
// System.Collections.Generic.Dictionary`2/Entry<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>[]
struct EntryU5BU5D_tEE1B2D77DC430BEF38BDA8A199DC619AC0683E69;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UMA.DnaSetter>[]
struct EntryU5BU5D_tFEF477866CA91A689C021554E68FB58EE3315B13;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
// UMA.DNARangeAsset[]
struct DNARangeAssetU5BU5D_tB8ADF4F0FA7CB00B573B50A4E3B2F5E086A0A036;
// UMA.DnaConverterBehaviour[]
struct DnaConverterBehaviourU5BU5D_t72E1696A59110668A1B279529CFEDD250E8F5D30;
// DnaDef[]
struct DnaDefU5BU5D_tBA5F9DC1475CDC956608BAA6F436CFF903F60B50;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UMA.OverlayColorData[]
struct OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB;
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
// UMA.RaceData[]
struct RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// SharedColorDef[]
struct SharedColorDefU5BU5D_t54F007BDD7AB6D7B7202375444B09CB3E24DD7EB;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED;
// UMA.SlotData[]
struct SlotDataU5BU5D_t0E8AD71F47DF5ADA5BD2486C00490B7F6FBDBDDF;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UMA.UMARecipeBase[]
struct UMARecipeBaseU5BU5D_tD0B1BD7F4B191E0877EE80A9577CEAAD814807E6;
// UMA.UMARendererAsset[]
struct UMARendererAssetU5BU5D_t0039165EF8659578C2E0EF3BD5C20F3461DAE27B;
// UMA.UMATextRecipe[]
struct UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.Dropdown/OptionData[]
struct OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UMA.CharacterSystem.Examples.AvailableColorsHandler
struct AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999;
// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55;
// UMA.BlendShapeSettings
struct BlendShapeSettings_tB123D8AB02898CF0D0B7218F215CE4CE4197C042;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonTimer
struct ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// ChangeScene
struct ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919;
// CharacterCreator
struct CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677;
// CharacterSelection
struct CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// UMA.DNAConverterList
struct DNAConverterList_t66CB0C5C4C19C39E9FE66C5A01FB7BDA89962511;
// UMA.CharacterSystem.Examples.DNAHandler
struct DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB;
// UMA.DnaSetter
struct DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F;
// UnityEngine.UI.Dropdown
struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96;
// UMA.CharacterSystem.DynamicCharacterAvatar
struct DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameExclusive
struct GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7;
// GameInclusive
struct GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t32463C505981FAA3FE78829467992AC7309CD9CA;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// LoadAvatar2
struct LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD;
// LoadCustom
struct LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B;
// LoadCustomAvatar
struct LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994;
// LoadRandomAv
struct LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UMA.O3nArmLowerLegTwistSlotScript
struct O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954;
// UMA.O3nShoulderUpperLegTwistSlotScript
struct O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB;
// O3nTwistBone
struct O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// UMA.OverlayColorData
struct OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1;
// UMA.RaceData
struct RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F;
// RandomAvSaveLoad
struct RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody
struct Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UMA.CharacterSystem.Examples.SampleCode
struct SampleCode_tE1C986A981756357400275304187A303DCBB2173;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Runtime.Serialization.SerializationBinder
struct SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8;
// UMA.SharedColorTable
struct SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UMA.CharacterSystem.Examples.SlotHandler
struct SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TrialSave
struct TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A;
// UMA.TwistBones
struct TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B;
// UMA.UMAAssetIndexer
struct UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01;
// UMA.UMAContextBase
struct UMAContextBase_tBAD660674F16E458A89FD79D142BE0EC5FF63345;
// UMA.UMAData
struct UMAData_t696E4E970704E7893146E28998A230A9F2947B3C;
// UMA.UMADataEvent
struct UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196;
// UMA.UMADataWardrobeEvent
struct UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68;
// UMA.UMADnaBase
struct UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40;
// UMA.PoseTools.UMAExpressionSet
struct UMAExpressionSet_t2711A291A7CD5C716D0D3580E2E257BF72B79B94;
// UMA.UMAGeneratorBase
struct UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3;
// UMA.UMAMaterialPropertyBlock
struct UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869;
// UMA.Examples.UMAMouseOrbitImproved
struct UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F;
// UMA.UMAPredefinedDNA
struct UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4;
// UMA.UMARandomAvatar
struct UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6;
// UMA.UMARandomAvatarEvent
struct UMARandomAvatarEvent_tEED218D50DAEAA9738CE034830E7E540AFEBAAC7;
// UMA.UMARecipeBase
struct UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35;
// UMA.UMARendererAsset
struct UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2;
// UMA.UMASkeleton
struct UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE;
// UMA.UMATextRecipe
struct UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB;
// UMA.CharacterSystem.UMAWardrobeCollection
struct UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70;
// UMA.UmaTPose
struct UmaTPose_t14C98D5B3053667973FFD791510A8865E1D455DC;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UMA.CharacterSystem.WardrobeCollectionList
struct WardrobeCollectionList_tDF1126122BACFA757C57648A5C42812306061259;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// ButtonTimer/<HideAndShow>d__4
struct U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E;
// UnityEngine.UI.Dropdown/DropdownEvent
struct DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB;
// UnityEngine.UI.Dropdown/OptionData
struct OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857;
// UnityEngine.UI.Dropdown/OptionDataList
struct OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6;
// UMA.CharacterSystem.DynamicCharacterAvatar/ColorValueList
struct ColorValueList_t65000025F6E180B4D5D336663748D11A776298D3;
// UMA.CharacterSystem.DynamicCharacterAvatar/RaceAnimatorList
struct RaceAnimatorList_t19B3D5E77D2E3E7F8A9E5DACAF3F61130319BA61;
// UMA.CharacterSystem.DynamicCharacterAvatar/RaceSetter
struct RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259;
// UMA.CharacterSystem.DynamicCharacterAvatar/WardrobeRecipeList
struct WardrobeRecipeList_t5E4BDB3C79380FB514E4E60765AAFCC3C6612B1F;
// GameExclusive/<LeftCoroutine>d__11
struct U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD;
// GameExclusive/<RightCoroutine>d__10
struct U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783;
// GameInclusive/<LeftCoroutine>d__11
struct U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD;
// GameInclusive/<RightCoroutine>d__10
struct U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// UMA.RaceData/CrossCompatibilitySettingsList
struct CrossCompatibilitySettingsList_tF1D11A46A6F989CF59E3F26CF01D2922A62CE349;
// UMA.RaceData/RaceThumbnails
struct RaceThumbnails_tEE7AD76E4EEC2BF6EA26E64D61ADD1BF2308FDB1;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;
// UMA.UMAAssetIndexer/recipeEqualityComparer
struct recipeEqualityComparer_t9CC68FA7FE9E46F7DBC08CD0F802D59FF811CBD2;
// UMA.UMAData/GeneratedMaterials
struct GeneratedMaterials_tB1112A090548BA0EAEF788D774FE1A871F64A644;
// UMA.UMAData/UMARecipe
struct UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A;
// UMA.UMAPackedRecipeBase/UMAPackRecipe
struct UMAPackRecipe_t0CAC7FA6FE47936263E8EBEB36971985ED76443C;

IL2CPP_EXTERN_C RuntimeClass* BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GCSettings_t92BF9239338986C848BEF0E727E1C778CDF2991B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0_FieldInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1_FieldInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral037EE6A8A023183C182957198023405E8306A376;
IL2CPP_EXTERN_C String_t* _stringLiteral0D8A9A1053A04F52278067AA2C8C01393B73E1FB;
IL2CPP_EXTERN_C String_t* _stringLiteral1B2DB56936EB9A0DB371C3941914C096708C58C3;
IL2CPP_EXTERN_C String_t* _stringLiteral1FC789D6FB567A7987F96BB7297CFBE8EE0D9EBA;
IL2CPP_EXTERN_C String_t* _stringLiteral216BE49149EE02BAF0A69B7205E935137B5BC958;
IL2CPP_EXTERN_C String_t* _stringLiteral23350A9A9AEB534C98ECBB990C00686A947C2E7F;
IL2CPP_EXTERN_C String_t* _stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66;
IL2CPP_EXTERN_C String_t* _stringLiteral2ED1B95092052436243304C697B6CB32763B37EA;
IL2CPP_EXTERN_C String_t* _stringLiteral32E28DCE9B4C8E87D063F5DC223C7ECE78C2EFB9;
IL2CPP_EXTERN_C String_t* _stringLiteral356A55D895E0ABE0E49C4421E703959CC450EC34;
IL2CPP_EXTERN_C String_t* _stringLiteral37994BF2F1A314EEE52B673623BD6BCBB00F8673;
IL2CPP_EXTERN_C String_t* _stringLiteral3B8D824B6267D88922B3F8C8296F0EACC30304D1;
IL2CPP_EXTERN_C String_t* _stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486;
IL2CPP_EXTERN_C String_t* _stringLiteral3F0BE10DA9F0686FC95C7CC99A9CC6EB6B01C05C;
IL2CPP_EXTERN_C String_t* _stringLiteral3F7452D5FAE9022D1E68A86EA6BED43FAFB5938C;
IL2CPP_EXTERN_C String_t* _stringLiteral418458993EFF66ED729D65872B2ABB86080A4888;
IL2CPP_EXTERN_C String_t* _stringLiteral487D96405807119C8CB64C0514674348940A8CF6;
IL2CPP_EXTERN_C String_t* _stringLiteral4D78A26E6D27FCFE02FCE139BDBB407790B95DD6;
IL2CPP_EXTERN_C String_t* _stringLiteral524A77A332F34CE558BC016B830DD5805230675B;
IL2CPP_EXTERN_C String_t* _stringLiteral5FF0D40E421B4818495991589A990529C375DB25;
IL2CPP_EXTERN_C String_t* _stringLiteral6643C7A965CB229F372E43667477C5B4A6794775;
IL2CPP_EXTERN_C String_t* _stringLiteral67A1131EE2F805164B96DF19310337312D949250;
IL2CPP_EXTERN_C String_t* _stringLiteral6EEB80C8A8F32A2D30600BC00772330BBF60DE0D;
IL2CPP_EXTERN_C String_t* _stringLiteral72ECFB5D9492E2645DB734DD728282A27B469DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral77C7529126A4EB596366238764473C5A4FAA909A;
IL2CPP_EXTERN_C String_t* _stringLiteral79CD5128013897716AA775978601FCF42D9CA664;
IL2CPP_EXTERN_C String_t* _stringLiteral7B0A4071F2ED0A9EA98B51ABCE47D2C719F5150C;
IL2CPP_EXTERN_C String_t* _stringLiteral805255141B10BE518EBA90F30D503F4364601E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral8061DE162455ABCA18D46260348A74FD112CCAC9;
IL2CPP_EXTERN_C String_t* _stringLiteral84438A51C4EBAF43047DCC49F53E6B3580D02208;
IL2CPP_EXTERN_C String_t* _stringLiteral85D9D22051ABA913D5F1CA8FFD438E826BF94AA1;
IL2CPP_EXTERN_C String_t* _stringLiteral88717C5E8781CAC09A8C18F5E26A539548E00786;
IL2CPP_EXTERN_C String_t* _stringLiteral8A14DD8545BFE05E15F604EE1D63C5B005F6CCA3;
IL2CPP_EXTERN_C String_t* _stringLiteral8A33DB43D006D06CBF6FFB5902BE726881A9CFB7;
IL2CPP_EXTERN_C String_t* _stringLiteral8D514BD805A6F8917E7828E05D6D16A535C725C7;
IL2CPP_EXTERN_C String_t* _stringLiteral993876B5468A8257D90C8330F2490774281620B7;
IL2CPP_EXTERN_C String_t* _stringLiteral9B7E1925F0B7C615657862E884592BF4645DEBD9;
IL2CPP_EXTERN_C String_t* _stringLiteral9C6BD7B69D18B96EDBCB52CD962E0E1AE708D1BE;
IL2CPP_EXTERN_C String_t* _stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B;
IL2CPP_EXTERN_C String_t* _stringLiteralA187DE08954E5ABCF10B0EE046363CBFC907651E;
IL2CPP_EXTERN_C String_t* _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827;
IL2CPP_EXTERN_C String_t* _stringLiteralAA34E616C62811814A9C4237E34B166AA816F1BA;
IL2CPP_EXTERN_C String_t* _stringLiteralAC7761F124DAC4EB02FE582988B4679E4D789115;
IL2CPP_EXTERN_C String_t* _stringLiteralAFC0B9264940C179CA2F820446F3EC1C0FE4472B;
IL2CPP_EXTERN_C String_t* _stringLiteralB33E05F366CCDE593E338D4A635F5FE032FF42B8;
IL2CPP_EXTERN_C String_t* _stringLiteralB92D1621B5A4F556A0563343E5FAF02C7C735C34;
IL2CPP_EXTERN_C String_t* _stringLiteralBE33C7E2060BCA48B74F818EB430B951CF972FA1;
IL2CPP_EXTERN_C String_t* _stringLiteralBEF6E32AB85AE3AF4E4D6DBD57A24317B1061800;
IL2CPP_EXTERN_C String_t* _stringLiteralC2A09F82E876F1FA5AEC18B79F5D811111BA8104;
IL2CPP_EXTERN_C String_t* _stringLiteralC6E630502633FE4CB9EEE7D8581CA33DF8AAF71E;
IL2CPP_EXTERN_C String_t* _stringLiteralC9BF6BE3CD043C6FC6EF73F975AF6758E4476CEE;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FB0CB2033F2D6B7891E1DFF032E2B44049634A;
IL2CPP_EXTERN_C String_t* _stringLiteralCA108AC4F6F5145DAB9D705CFA24616F617BD53E;
IL2CPP_EXTERN_C String_t* _stringLiteralCB9FA5E5716338BA651A60441E558577C980650F;
IL2CPP_EXTERN_C String_t* _stringLiteralCE8C791C37FBCE9510C147701F437D0955B5F9E6;
IL2CPP_EXTERN_C String_t* _stringLiteralD2C0EDA351E3C5E187658030A07D668ABEADA6B2;
IL2CPP_EXTERN_C String_t* _stringLiteralD604DE67B9B156E6B1314590402528DCC29D9791;
IL2CPP_EXTERN_C String_t* _stringLiteralD770F1B2D8400071A596306999013D140FF4568A;
IL2CPP_EXTERN_C String_t* _stringLiteralDA3489FF24B08CCCCACF35D4B5633E1459621EE9;
IL2CPP_EXTERN_C String_t* _stringLiteralDD247934374031AF8B7436BD979FC7FAB5993BF3;
IL2CPP_EXTERN_C String_t* _stringLiteralDD538C884DAED184538CD5F6E7642ED6C940B20B;
IL2CPP_EXTERN_C String_t* _stringLiteralE31262F8FE7C8A5C9CCB2D00F34623AF1BD14D90;
IL2CPP_EXTERN_C String_t* _stringLiteralE516FCC6C9366F4198FE00E134AB909DCE944C39;
IL2CPP_EXTERN_C String_t* _stringLiteralE61CC100AB41786B4E1EF83FD5E46EAAB61F4126;
IL2CPP_EXTERN_C String_t* _stringLiteralE85A7E15D9C7E1FFCF20A55B56D62BE6E7772140;
IL2CPP_EXTERN_C String_t* _stringLiteralE9D8ED9C84425C467F5ECEE0DE067FC9433CFA5D;
IL2CPP_EXTERN_C String_t* _stringLiteralF90BA92F528A43D73FD429CD65E096D02C07996F;
IL2CPP_EXTERN_C String_t* _stringLiteralFDDA80AAFEEE36751BF8D3C7C7235115A381F789;
IL2CPP_EXTERN_C String_t* _stringLiteralFE211060505342920A37CD05D9CD93CF8E039826;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_mCBD9158E6965C024FE2B904FD874885C1B3447F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_mAD9E9C47A06A69046B4926ECD6A14C2956848597_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m8306B8A4EEA224F44D8B9F85ABF60756314F9C0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m88F5FE96C0A33A124F3D714A1A58980084CFEB85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mCEAE52184BE7C9FAAA54C71E56AA39401FBB4969_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m16DACBE2B714DBB52B5C87F3BC0E83D1F760B11A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8C9A2A78B40C55194B54A4EC3EC188C2338F536B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m94881ED67136E2B79A3DCBC0295B3AF3032F1AC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m841CCACC416F2848F67424F2093D149ACB74C45C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mC1BF66647F1BC02F7A295B483D644BF8B3386F45_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mD75CFCF83DABD5D2413068EB24666047951EEF2B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_mF7463B7FF1EB66FA82ED62D3DC9BB4EDAFBA622F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999_m04C9268882F3914438D7514320C2270BC06D9513_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB_mB23A8DE09E38C9F34AB176DBCA35A356BC414D49_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisDynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4_m8E44127D1BE4D290EFE211D3530832D7548EE713_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_m6EE92304ABF90A606E8A1D9FDFEDDCDBF82B7861_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A_m2C2D0414BB247EDF110AAAAC5FB6DA1D7EF89B75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_m62A7A86F70B7B5909A7573D6B4346509AC420826_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m6A5558B971D947E045A9B931391FEC1C4CC7505D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mCE3DEFF4CAFCCDEA23F5EA3D784ECF78370CC8EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m7433A79923D10FB340C0E299BBAE5BAB5338DA5C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CHideAndShowU3Ed__4_System_Collections_IEnumerator_Reset_mB6BC8C3A35F4DEA4F66BDD03A96D8AD73DCFC37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLeftCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m02F115F1E4D87D8732D25448CC4B122345E744BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLeftCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m35F372F08E8B45F91EB5A7201302800A6C0D6A3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRightCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m64DB9E8D1DF62991C2D3538D26991A361313CE7C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CRightCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m9824C045341A29CDA23A4256C64DEEAF7564920A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UMAAssetIndexer_GetAllAssets_TisRaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F_m554B6DA5359C05AC736508ACE91600660B44FF75_RuntimeMethod_var;
struct DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C_marshaled_com;
struct DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152_marshaled_com;
struct SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB;
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>
struct  Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tEE1B2D77DC430BEF38BDA8A199DC619AC0683E69* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0157B9A64A523213ADA48676F325174ABACF9127 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___entries_1)); }
	inline EntryU5BU5D_tEE1B2D77DC430BEF38BDA8A199DC619AC0683E69* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tEE1B2D77DC430BEF38BDA8A199DC619AC0683E69** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tEE1B2D77DC430BEF38BDA8A199DC619AC0683E69* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___keys_7)); }
	inline KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ___values_8)); }
	inline ValueCollection_t0157B9A64A523213ADA48676F325174ABACF9127 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0157B9A64A523213ADA48676F325174ABACF9127 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0157B9A64A523213ADA48676F325174ABACF9127 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UMA.DnaSetter>
struct  Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tFEF477866CA91A689C021554E68FB58EE3315B13* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t5568613F4833408340AC2DEF0B6698323A62A7DE * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0D2CB3243C7733E6CEEEA49E05A0485519E595E4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___entries_1)); }
	inline EntryU5BU5D_tFEF477866CA91A689C021554E68FB58EE3315B13* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tFEF477866CA91A689C021554E68FB58EE3315B13** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tFEF477866CA91A689C021554E68FB58EE3315B13* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___keys_7)); }
	inline KeyCollection_t5568613F4833408340AC2DEF0B6698323A62A7DE * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t5568613F4833408340AC2DEF0B6698323A62A7DE ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t5568613F4833408340AC2DEF0B6698323A62A7DE * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ___values_8)); }
	inline ValueCollection_t0D2CB3243C7733E6CEEEA49E05A0485519E595E4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0D2CB3243C7733E6CEEEA49E05A0485519E595E4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0D2CB3243C7733E6CEEEA49E05A0485519E595E4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>
struct  KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5, ___dictionary_0)); }
	inline Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UMA.RaceData>
struct  List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96, ____items_1)); }
	inline RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127* get__items_1() const { return ____items_1; }
	inline RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96_StaticFields, ____emptyArray_5)); }
	inline RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127* get__emptyArray_5() const { return ____emptyArray_5; }
	inline RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(RaceDataU5BU5D_t3896E0840871AECDF46E79D9C6651E7240E91127* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UMA.UMATextRecipe>
struct  List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58, ____items_1)); }
	inline UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D* get__items_1() const { return ____items_1; }
	inline UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58_StaticFields, ____emptyArray_5)); }
	inline UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UMATextRecipeU5BU5D_t04EAF0E3BC3F6C1C298701B97846C0345BDB7A9D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>
struct  List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____items_1)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__items_1() const { return ____items_1; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4_StaticFields, ____emptyArray_5)); }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* get__emptyArray_5() const { return ____emptyArray_5; }
	inline OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(OptionDataU5BU5D_t76E953160486FF629DE132F60738702D374E11A5* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// UMA.DnaSetter
struct  DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F  : public RuntimeObject
{
public:
	// System.String UMA.DnaSetter::Name
	String_t* ___Name_0;
	// System.Single UMA.DnaSetter::Value
	float ___Value_1;
	// System.String UMA.DnaSetter::Category
	String_t* ___Category_2;
	// System.Int32 UMA.DnaSetter::<OwnerIndex>k__BackingField
	int32_t ___U3COwnerIndexU3Ek__BackingField_3;
	// UMA.UMADnaBase UMA.DnaSetter::Owner
	UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 * ___Owner_4;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F, ___Value_1)); }
	inline float get_Value_1() const { return ___Value_1; }
	inline float* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(float value)
	{
		___Value_1 = value;
	}

	inline static int32_t get_offset_of_Category_2() { return static_cast<int32_t>(offsetof(DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F, ___Category_2)); }
	inline String_t* get_Category_2() const { return ___Category_2; }
	inline String_t** get_address_of_Category_2() { return &___Category_2; }
	inline void set_Category_2(String_t* value)
	{
		___Category_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Category_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3COwnerIndexU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F, ___U3COwnerIndexU3Ek__BackingField_3)); }
	inline int32_t get_U3COwnerIndexU3Ek__BackingField_3() const { return ___U3COwnerIndexU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3COwnerIndexU3Ek__BackingField_3() { return &___U3COwnerIndexU3Ek__BackingField_3; }
	inline void set_U3COwnerIndexU3Ek__BackingField_3(int32_t value)
	{
		___U3COwnerIndexU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_Owner_4() { return static_cast<int32_t>(offsetof(DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F, ___Owner_4)); }
	inline UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 * get_Owner_4() const { return ___Owner_4; }
	inline UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 ** get_address_of_Owner_4() { return &___Owner_4; }
	inline void set_Owner_4(UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 * value)
	{
		___Owner_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Owner_4), (void*)value);
	}
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

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
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

// ButtonTimer/<HideAndShow>d__4
struct  U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E  : public RuntimeObject
{
public:
	// System.Int32 ButtonTimer/<HideAndShow>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object ButtonTimer/<HideAndShow>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// ButtonTimer ButtonTimer/<HideAndShow>d__4::<>4__this
	ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * ___U3CU3E4__this_2;
	// System.Single ButtonTimer/<HideAndShow>d__4::delay
	float ___delay_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E, ___U3CU3E4__this_2)); }
	inline ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_delay_3() { return static_cast<int32_t>(offsetof(U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E, ___delay_3)); }
	inline float get_delay_3() const { return ___delay_3; }
	inline float* get_address_of_delay_3() { return &___delay_3; }
	inline void set_delay_3(float value)
	{
		___delay_3 = value;
	}
};


// UnityEngine.UI.Dropdown/OptionData
struct  OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857  : public RuntimeObject
{
public:
	// System.String UnityEngine.UI.Dropdown/OptionData::m_Text
	String_t* ___m_Text_0;
	// UnityEngine.Sprite UnityEngine.UI.Dropdown/OptionData::m_Image
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Image_1;

public:
	inline static int32_t get_offset_of_m_Text_0() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Text_0)); }
	inline String_t* get_m_Text_0() const { return ___m_Text_0; }
	inline String_t** get_address_of_m_Text_0() { return &___m_Text_0; }
	inline void set_m_Text_0(String_t* value)
	{
		___m_Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857, ___m_Image_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Image_1() const { return ___m_Image_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Image_1), (void*)value);
	}
};


// UMA.CharacterSystem.DynamicCharacterAvatar/RaceSetter
struct  RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259  : public RuntimeObject
{
public:
	// System.String UMA.CharacterSystem.DynamicCharacterAvatar/RaceSetter::name
	String_t* ___name_0;
	// UMA.RaceData UMA.CharacterSystem.DynamicCharacterAvatar/RaceSetter::_data
	RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * ____data_1;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of__data_1() { return static_cast<int32_t>(offsetof(RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259, ____data_1)); }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * get__data_1() const { return ____data_1; }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F ** get_address_of__data_1() { return &____data_1; }
	inline void set__data_1(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * value)
	{
		____data_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_1), (void*)value);
	}
};


// GameExclusive/<LeftCoroutine>d__11
struct  U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD  : public RuntimeObject
{
public:
	// System.Int32 GameExclusive/<LeftCoroutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameExclusive/<LeftCoroutine>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameExclusive GameExclusive/<LeftCoroutine>d__11::<>4__this
	GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD, ___U3CU3E4__this_2)); }
	inline GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameExclusive/<RightCoroutine>d__10
struct  U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783  : public RuntimeObject
{
public:
	// System.Int32 GameExclusive/<RightCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameExclusive/<RightCoroutine>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameExclusive GameExclusive/<RightCoroutine>d__10::<>4__this
	GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783, ___U3CU3E4__this_2)); }
	inline GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameInclusive/<LeftCoroutine>d__11
struct  U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD  : public RuntimeObject
{
public:
	// System.Int32 GameInclusive/<LeftCoroutine>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameInclusive/<LeftCoroutine>d__11::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameInclusive GameInclusive/<LeftCoroutine>d__11::<>4__this
	GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD, ___U3CU3E4__this_2)); }
	inline GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// GameInclusive/<RightCoroutine>d__10
struct  U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415  : public RuntimeObject
{
public:
	// System.Int32 GameInclusive/<RightCoroutine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameInclusive/<RightCoroutine>d__10::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// GameInclusive GameInclusive/<RightCoroutine>d__10::<>4__this
	GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415, ___U3CU3E4__this_2)); }
	inline GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
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


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<UMA.RaceData>
struct  Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B, ___list_0)); }
	inline List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * get_list_0() const { return ___list_0; }
	inline List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B, ___current_3)); }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * get_current_3() const { return ___current_3; }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>
struct  Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	RuntimeObject * ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031, ___currentKey_3)); }
	inline RuntimeObject * get_currentKey_3() const { return ___currentKey_3; }
	inline RuntimeObject ** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(RuntimeObject * value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>
struct  Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D, ___dictionary_0)); }
	inline Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D, ___currentKey_3)); }
	inline String_t* get_currentKey_3() const { return ___currentKey_3; }
	inline String_t** get_address_of_currentKey_3() { return &___currentKey_3; }
	inline void set_currentKey_3(String_t* value)
	{
		___currentKey_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentKey_3), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Collections.Generic.KeyValuePair`2<System.String,UMA.DnaSetter>
struct  KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244, ___value_1)); }
	inline DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * get_value_1() const { return ___value_1; }
	inline DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// AvatarDefinition
struct  AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 
{
public:
	// System.String AvatarDefinition::RaceName
	String_t* ___RaceName_0;
	// System.String[] AvatarDefinition::Wardrobe
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___Wardrobe_1;
	// SharedColorDef[] AvatarDefinition::Colors
	SharedColorDefU5BU5D_t54F007BDD7AB6D7B7202375444B09CB3E24DD7EB* ___Colors_2;
	// DnaDef[] AvatarDefinition::Dna
	DnaDefU5BU5D_tBA5F9DC1475CDC956608BAA6F436CFF903F60B50* ___Dna_3;

public:
	inline static int32_t get_offset_of_RaceName_0() { return static_cast<int32_t>(offsetof(AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5, ___RaceName_0)); }
	inline String_t* get_RaceName_0() const { return ___RaceName_0; }
	inline String_t** get_address_of_RaceName_0() { return &___RaceName_0; }
	inline void set_RaceName_0(String_t* value)
	{
		___RaceName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaceName_0), (void*)value);
	}

	inline static int32_t get_offset_of_Wardrobe_1() { return static_cast<int32_t>(offsetof(AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5, ___Wardrobe_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_Wardrobe_1() const { return ___Wardrobe_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_Wardrobe_1() { return &___Wardrobe_1; }
	inline void set_Wardrobe_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___Wardrobe_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Wardrobe_1), (void*)value);
	}

	inline static int32_t get_offset_of_Colors_2() { return static_cast<int32_t>(offsetof(AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5, ___Colors_2)); }
	inline SharedColorDefU5BU5D_t54F007BDD7AB6D7B7202375444B09CB3E24DD7EB* get_Colors_2() const { return ___Colors_2; }
	inline SharedColorDefU5BU5D_t54F007BDD7AB6D7B7202375444B09CB3E24DD7EB** get_address_of_Colors_2() { return &___Colors_2; }
	inline void set_Colors_2(SharedColorDefU5BU5D_t54F007BDD7AB6D7B7202375444B09CB3E24DD7EB* value)
	{
		___Colors_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Colors_2), (void*)value);
	}

	inline static int32_t get_offset_of_Dna_3() { return static_cast<int32_t>(offsetof(AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5, ___Dna_3)); }
	inline DnaDefU5BU5D_tBA5F9DC1475CDC956608BAA6F436CFF903F60B50* get_Dna_3() const { return ___Dna_3; }
	inline DnaDefU5BU5D_tBA5F9DC1475CDC956608BAA6F436CFF903F60B50** get_address_of_Dna_3() { return &___Dna_3; }
	inline void set_Dna_3(DnaDefU5BU5D_tBA5F9DC1475CDC956608BAA6F436CFF903F60B50* value)
	{
		___Dna_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Dna_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of AvatarDefinition
struct AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5_marshaled_pinvoke
{
	char* ___RaceName_0;
	char** ___Wardrobe_1;
	SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152_marshaled_pinvoke* ___Colors_2;
	DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C_marshaled_pinvoke* ___Dna_3;
};
// Native definition for COM marshalling of AvatarDefinition
struct AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5_marshaled_com
{
	Il2CppChar* ___RaceName_0;
	Il2CppChar** ___Wardrobe_1;
	SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152_marshaled_com* ___Colors_2;
	DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C_marshaled_com* ___Dna_3;
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


// System.Byte
struct  Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
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


// System.Int64
struct  Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
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


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
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


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
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


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct  __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F__padding[32];
	};

public:
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct  Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___dictionary_0)); }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___current_3)); }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UMA.DnaSetter>
struct  Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224, ___dictionary_0)); }
	inline Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224, ___current_3)); }
	inline KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields
{
public:
	// System.Int64 <PrivateImplementationDetails>::04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061
	int64_t ___04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED
	__StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  ___F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1;

public:
	inline static int32_t get_offset_of_U304ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0)); }
	inline int64_t get_U304ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0() const { return ___04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0; }
	inline int64_t* get_address_of_U304ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0() { return &___04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0; }
	inline void set_U304ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0(int64_t value)
	{
		___04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0 = value;
	}

	inline static int32_t get_offset_of_F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528_StaticFields, ___F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1)); }
	inline __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  get_F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1() const { return ___F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1; }
	inline __StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F * get_address_of_F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1() { return &___F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1; }
	inline void set_F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1(__StaticArrayInitTypeSizeU3D32_t1DFB229ADDC86DD5A295F9C768E8E5D0DF92913F  value)
	{
		___F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1 = value;
	}
};


// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
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
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
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

// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle
struct  FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterAssemblyStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterAssemblyStyle_t176037936039C0AEAEDFF283CD0E53E721D4CEF2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.FormatterTypeStyle
struct  FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.FormatterTypeStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FormatterTypeStyle_tE84DD5CF7A3D4E07A4881B66CE1AE112677A4E6A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.GCLargeObjectHeapCompactionMode
struct  GCLargeObjectHeapCompactionMode_t6F08087461D993E599179451C02156990F7B486F 
{
public:
	// System.Int32 System.Runtime.GCLargeObjectHeapCompactionMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(GCLargeObjectHeapCompactionMode_t6F08087461D993E599179451C02156990F7B486F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.KeyCode
struct  KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// UMA.OverlayColorData
struct  OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1  : public RuntimeObject
{
public:
	// System.Int32 UMA.OverlayColorData::instance
	int32_t ___instance_1;
	// System.String UMA.OverlayColorData::name
	String_t* ___name_4;
	// UnityEngine.Color[] UMA.OverlayColorData::channelMask
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___channelMask_5;
	// UnityEngine.Color[] UMA.OverlayColorData::channelAdditiveMask
	ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* ___channelAdditiveMask_6;
	// UMA.UMAMaterialPropertyBlock UMA.OverlayColorData::PropertyBlock
	UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869 * ___PropertyBlock_7;

public:
	inline static int32_t get_offset_of_instance_1() { return static_cast<int32_t>(offsetof(OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1, ___instance_1)); }
	inline int32_t get_instance_1() const { return ___instance_1; }
	inline int32_t* get_address_of_instance_1() { return &___instance_1; }
	inline void set_instance_1(int32_t value)
	{
		___instance_1 = value;
	}

	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_4), (void*)value);
	}

	inline static int32_t get_offset_of_channelMask_5() { return static_cast<int32_t>(offsetof(OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1, ___channelMask_5)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_channelMask_5() const { return ___channelMask_5; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_channelMask_5() { return &___channelMask_5; }
	inline void set_channelMask_5(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___channelMask_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelMask_5), (void*)value);
	}

	inline static int32_t get_offset_of_channelAdditiveMask_6() { return static_cast<int32_t>(offsetof(OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1, ___channelAdditiveMask_6)); }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* get_channelAdditiveMask_6() const { return ___channelAdditiveMask_6; }
	inline ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834** get_address_of_channelAdditiveMask_6() { return &___channelAdditiveMask_6; }
	inline void set_channelAdditiveMask_6(ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* value)
	{
		___channelAdditiveMask_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channelAdditiveMask_6), (void*)value);
	}

	inline static int32_t get_offset_of_PropertyBlock_7() { return static_cast<int32_t>(offsetof(OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1, ___PropertyBlock_7)); }
	inline UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869 * get_PropertyBlock_7() const { return ___PropertyBlock_7; }
	inline UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869 ** get_address_of_PropertyBlock_7() { return &___PropertyBlock_7; }
	inline void set_PropertyBlock_7(UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869 * value)
	{
		___PropertyBlock_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyBlock_7), (void*)value);
	}
};

struct OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1_StaticFields
{
public:
	// System.Int32 UMA.OverlayColorData::currentinstance
	int32_t ___currentinstance_0;
	// UnityEngine.Color UMA.OverlayColorData::EmptyAdditive
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___EmptyAdditive_2;

public:
	inline static int32_t get_offset_of_currentinstance_0() { return static_cast<int32_t>(offsetof(OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1_StaticFields, ___currentinstance_0)); }
	inline int32_t get_currentinstance_0() const { return ___currentinstance_0; }
	inline int32_t* get_address_of_currentinstance_0() { return &___currentinstance_0; }
	inline void set_currentinstance_0(int32_t value)
	{
		___currentinstance_0 = value;
	}

	inline static int32_t get_offset_of_EmptyAdditive_2() { return static_cast<int32_t>(offsetof(OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1_StaticFields, ___EmptyAdditive_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_EmptyAdditive_2() const { return ___EmptyAdditive_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_EmptyAdditive_2() { return &___EmptyAdditive_2; }
	inline void set_EmptyAdditive_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___EmptyAdditive_2 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// System.Runtime.Serialization.StreamingContextStates
struct  StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3 
{
public:
	// System.Int32 System.Runtime.Serialization.StreamingContextStates::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StreamingContextStates_tF4C7FE6D6121BD4C67699869C8269A60B36B42C3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Runtime.Serialization.Formatters.TypeFilterLevel
struct  TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D 
{
public:
	// System.Int32 System.Runtime.Serialization.Formatters.TypeFilterLevel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeFilterLevel_t7ED94310B4D2D5C697A19E0CE2327A7DC5B39C4D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UMA.CharacterSystem.DynamicCharacterAvatar/ChangeRaceOptions
struct  ChangeRaceOptions_t1ACDF2C8C0B22FBE8E565860BA8118B44B3A25B5 
{
public:
	// System.Int32 UMA.CharacterSystem.DynamicCharacterAvatar/ChangeRaceOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ChangeRaceOptions_t1ACDF2C8C0B22FBE8E565860BA8118B44B3A25B5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UMA.CharacterSystem.DynamicCharacterAvatar/LoadOptions
struct  LoadOptions_t3E154855D512FA366D513AC76C76C16EB77EF8CC 
{
public:
	// System.Int32 UMA.CharacterSystem.DynamicCharacterAvatar/LoadOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LoadOptions_t3E154855D512FA366D513AC76C76C16EB77EF8CC, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UMA.CharacterSystem.DynamicCharacterAvatar/SaveOptions
struct  SaveOptions_tB35AB5B2D0B5D8C91FCCD241A3ED11BD42E0B67D 
{
public:
	// System.Int32 UMA.CharacterSystem.DynamicCharacterAvatar/SaveOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(SaveOptions_tB35AB5B2D0B5D8C91FCCD241A3ED11BD42E0B67D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UMA.CharacterSystem.DynamicCharacterAvatar/loadPathTypes
struct  loadPathTypes_t775E73E753D1EE7EEB9E76D6B41CEC2C009BF279 
{
public:
	// System.Int32 UMA.CharacterSystem.DynamicCharacterAvatar/loadPathTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(loadPathTypes_t775E73E753D1EE7EEB9E76D6B41CEC2C009BF279, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UMA.CharacterSystem.DynamicCharacterAvatar/savePathTypes
struct  savePathTypes_t221B76F0EE1ABB875B0130195FA08D192B02B212 
{
public:
	// System.Int32 UMA.CharacterSystem.DynamicCharacterAvatar/savePathTypes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(savePathTypes_t221B76F0EE1ABB875B0130195FA08D192B02B212, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
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


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
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
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
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


// UMA.Examples.UMAMouseOrbitImproved/mouseBtnOpts
struct  mouseBtnOpts_t6E084525F7A53306DE1E3894DF12829E42C99F81 
{
public:
	// System.Int32 UMA.Examples.UMAMouseOrbitImproved/mouseBtnOpts::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(mouseBtnOpts_t6E084525F7A53306DE1E3894DF12829E42C99F81, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UMA.Examples.UMAMouseOrbitImproved/targetOpts
struct  targetOpts_tC66B092E79843160F6FD49B4BD8C3F3084700A02 
{
public:
	// System.Int32 UMA.Examples.UMAMouseOrbitImproved/targetOpts::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(targetOpts_tC66B092E79843160F6FD49B4BD8C3F3084700A02, ___value___2)); }
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


// System.Runtime.GCSettings
struct  GCSettings_t92BF9239338986C848BEF0E727E1C778CDF2991B  : public RuntimeObject
{
public:

public:
};

struct GCSettings_t92BF9239338986C848BEF0E727E1C778CDF2991B_StaticFields
{
public:
	// System.Runtime.GCLargeObjectHeapCompactionMode System.Runtime.GCSettings::<LargeObjectHeapCompactionMode>k__BackingField
	int32_t ___U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(GCSettings_t92BF9239338986C848BEF0E727E1C778CDF2991B_StaticFields, ___U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0)); }
	inline int32_t get_U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0() const { return ___U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0() { return &___U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0; }
	inline void set_U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0(int32_t value)
	{
		___U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0 = value;
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
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

// System.Runtime.Serialization.StreamingContext
struct  StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 
{
public:
	// System.Object System.Runtime.Serialization.StreamingContext::m_additionalContext
	RuntimeObject * ___m_additionalContext_0;
	// System.Runtime.Serialization.StreamingContextStates System.Runtime.Serialization.StreamingContext::m_state
	int32_t ___m_state_1;

public:
	inline static int32_t get_offset_of_m_additionalContext_0() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_additionalContext_0)); }
	inline RuntimeObject * get_m_additionalContext_0() const { return ___m_additionalContext_0; }
	inline RuntimeObject ** get_address_of_m_additionalContext_0() { return &___m_additionalContext_0; }
	inline void set_m_additionalContext_0(RuntimeObject * value)
	{
		___m_additionalContext_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_additionalContext_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505, ___m_state_1)); }
	inline int32_t get_m_state_1() const { return ___m_state_1; }
	inline int32_t* get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(int32_t value)
	{
		___m_state_1 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_pinvoke
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};
// Native definition for COM marshalling of System.Runtime.Serialization.StreamingContext
struct StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505_marshaled_com
{
	Il2CppIUnknown* ___m_additionalContext_0;
	int32_t ___m_state_1;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
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


// System.Runtime.Serialization.Formatters.Binary.BinaryFormatter
struct  BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55  : public RuntimeObject
{
public:
	// System.Runtime.Serialization.ISurrogateSelector System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_surrogates
	RuntimeObject* ___m_surrogates_0;
	// System.Runtime.Serialization.StreamingContext System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_context
	StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  ___m_context_1;
	// System.Runtime.Serialization.SerializationBinder System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_binder
	SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * ___m_binder_2;
	// System.Runtime.Serialization.Formatters.FormatterTypeStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_typeFormat
	int32_t ___m_typeFormat_3;
	// System.Runtime.Serialization.Formatters.FormatterAssemblyStyle System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_assemblyFormat
	int32_t ___m_assemblyFormat_4;
	// System.Runtime.Serialization.Formatters.TypeFilterLevel System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_securityLevel
	int32_t ___m_securityLevel_5;
	// System.Object[] System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::m_crossAppDomainArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___m_crossAppDomainArray_6;

public:
	inline static int32_t get_offset_of_m_surrogates_0() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_surrogates_0)); }
	inline RuntimeObject* get_m_surrogates_0() const { return ___m_surrogates_0; }
	inline RuntimeObject** get_address_of_m_surrogates_0() { return &___m_surrogates_0; }
	inline void set_m_surrogates_0(RuntimeObject* value)
	{
		___m_surrogates_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_surrogates_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_context_1() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_context_1)); }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  get_m_context_1() const { return ___m_context_1; }
	inline StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505 * get_address_of_m_context_1() { return &___m_context_1; }
	inline void set_m_context_1(StreamingContext_t5888E7E8C81AB6EF3B14FDDA6674F458076A8505  value)
	{
		___m_context_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_context_1))->___m_additionalContext_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_binder_2() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_binder_2)); }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * get_m_binder_2() const { return ___m_binder_2; }
	inline SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 ** get_address_of_m_binder_2() { return &___m_binder_2; }
	inline void set_m_binder_2(SerializationBinder_t600A2077818E43FC641208357D8B809A10F1EAB8 * value)
	{
		___m_binder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_binder_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_typeFormat_3() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_typeFormat_3)); }
	inline int32_t get_m_typeFormat_3() const { return ___m_typeFormat_3; }
	inline int32_t* get_address_of_m_typeFormat_3() { return &___m_typeFormat_3; }
	inline void set_m_typeFormat_3(int32_t value)
	{
		___m_typeFormat_3 = value;
	}

	inline static int32_t get_offset_of_m_assemblyFormat_4() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_assemblyFormat_4)); }
	inline int32_t get_m_assemblyFormat_4() const { return ___m_assemblyFormat_4; }
	inline int32_t* get_address_of_m_assemblyFormat_4() { return &___m_assemblyFormat_4; }
	inline void set_m_assemblyFormat_4(int32_t value)
	{
		___m_assemblyFormat_4 = value;
	}

	inline static int32_t get_offset_of_m_securityLevel_5() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_securityLevel_5)); }
	inline int32_t get_m_securityLevel_5() const { return ___m_securityLevel_5; }
	inline int32_t* get_address_of_m_securityLevel_5() { return &___m_securityLevel_5; }
	inline void set_m_securityLevel_5(int32_t value)
	{
		___m_securityLevel_5 = value;
	}

	inline static int32_t get_offset_of_m_crossAppDomainArray_6() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55, ___m_crossAppDomainArray_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_m_crossAppDomainArray_6() const { return ___m_crossAppDomainArray_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_m_crossAppDomainArray_6() { return &___m_crossAppDomainArray_6; }
	inline void set_m_crossAppDomainArray_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___m_crossAppDomainArray_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_crossAppDomainArray_6), (void*)value);
	}
};

struct BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,System.Runtime.Serialization.Formatters.Binary.TypeInformation> System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::typeNameCache
	Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * ___typeNameCache_7;

public:
	inline static int32_t get_offset_of_typeNameCache_7() { return static_cast<int32_t>(offsetof(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_StaticFields, ___typeNameCache_7)); }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * get_typeNameCache_7() const { return ___typeNameCache_7; }
	inline Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 ** get_address_of_typeNameCache_7() { return &___typeNameCache_7; }
	inline void set_typeNameCache_7(Dictionary_2_tCAA954C180FE22A5909DC97DB48233904AC1A885 * value)
	{
		___typeNameCache_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___typeNameCache_7), (void*)value);
	}
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
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


// UMA.SharedColorTable
struct  SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Int32 UMA.SharedColorTable::channelCount
	int32_t ___channelCount_4;
	// System.String UMA.SharedColorTable::sharedColorName
	String_t* ___sharedColorName_5;
	// UMA.OverlayColorData[] UMA.SharedColorTable::colors
	OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* ___colors_6;

public:
	inline static int32_t get_offset_of_channelCount_4() { return static_cast<int32_t>(offsetof(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779, ___channelCount_4)); }
	inline int32_t get_channelCount_4() const { return ___channelCount_4; }
	inline int32_t* get_address_of_channelCount_4() { return &___channelCount_4; }
	inline void set_channelCount_4(int32_t value)
	{
		___channelCount_4 = value;
	}

	inline static int32_t get_offset_of_sharedColorName_5() { return static_cast<int32_t>(offsetof(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779, ___sharedColorName_5)); }
	inline String_t* get_sharedColorName_5() const { return ___sharedColorName_5; }
	inline String_t** get_address_of_sharedColorName_5() { return &___sharedColorName_5; }
	inline void set_sharedColorName_5(String_t* value)
	{
		___sharedColorName_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sharedColorName_5), (void*)value);
	}

	inline static int32_t get_offset_of_colors_6() { return static_cast<int32_t>(offsetof(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779, ___colors_6)); }
	inline OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* get_colors_6() const { return ___colors_6; }
	inline OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB** get_address_of_colors_6() { return &___colors_6; }
	inline void set_colors_6(OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* value)
	{
		___colors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___colors_6), (void*)value);
	}
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UMA.UMAAssetIndexer
struct  UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>> UMA.UMAAssetIndexer::raceRecipes
	Dictionary_2_t564A1C71BCC245E5C1BB0CF242D286860BC5EC87 * ___raceRecipes_5;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Type> UMA.UMAAssetIndexer::TypeToLookup
	Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * ___TypeToLookup_10;
	// System.Collections.Generic.List`1<System.String> UMA.UMAAssetIndexer::IndexedTypeNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___IndexedTypeNames_11;
	// System.Collections.Generic.List`1<UMA.AssetItem> UMA.UMAAssetIndexer::SerializedItems
	List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 * ___SerializedItems_12;
	// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>> UMA.UMAAssetIndexer::TypeLookup
	Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 * ___TypeLookup_13;
	// System.Type[] UMA.UMAAssetIndexer::Types
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___Types_14;
	// UMA.UMAAssetIndexer/recipeEqualityComparer UMA.UMAAssetIndexer::req
	recipeEqualityComparer_t9CC68FA7FE9E46F7DBC08CD0F802D59FF811CBD2 * ___req_16;

public:
	inline static int32_t get_offset_of_raceRecipes_5() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01, ___raceRecipes_5)); }
	inline Dictionary_2_t564A1C71BCC245E5C1BB0CF242D286860BC5EC87 * get_raceRecipes_5() const { return ___raceRecipes_5; }
	inline Dictionary_2_t564A1C71BCC245E5C1BB0CF242D286860BC5EC87 ** get_address_of_raceRecipes_5() { return &___raceRecipes_5; }
	inline void set_raceRecipes_5(Dictionary_2_t564A1C71BCC245E5C1BB0CF242D286860BC5EC87 * value)
	{
		___raceRecipes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raceRecipes_5), (void*)value);
	}

	inline static int32_t get_offset_of_TypeToLookup_10() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01, ___TypeToLookup_10)); }
	inline Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * get_TypeToLookup_10() const { return ___TypeToLookup_10; }
	inline Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 ** get_address_of_TypeToLookup_10() { return &___TypeToLookup_10; }
	inline void set_TypeToLookup_10(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * value)
	{
		___TypeToLookup_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeToLookup_10), (void*)value);
	}

	inline static int32_t get_offset_of_IndexedTypeNames_11() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01, ___IndexedTypeNames_11)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_IndexedTypeNames_11() const { return ___IndexedTypeNames_11; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_IndexedTypeNames_11() { return &___IndexedTypeNames_11; }
	inline void set_IndexedTypeNames_11(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___IndexedTypeNames_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___IndexedTypeNames_11), (void*)value);
	}

	inline static int32_t get_offset_of_SerializedItems_12() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01, ___SerializedItems_12)); }
	inline List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 * get_SerializedItems_12() const { return ___SerializedItems_12; }
	inline List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 ** get_address_of_SerializedItems_12() { return &___SerializedItems_12; }
	inline void set_SerializedItems_12(List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 * value)
	{
		___SerializedItems_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SerializedItems_12), (void*)value);
	}

	inline static int32_t get_offset_of_TypeLookup_13() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01, ___TypeLookup_13)); }
	inline Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 * get_TypeLookup_13() const { return ___TypeLookup_13; }
	inline Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 ** get_address_of_TypeLookup_13() { return &___TypeLookup_13; }
	inline void set_TypeLookup_13(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 * value)
	{
		___TypeLookup_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeLookup_13), (void*)value);
	}

	inline static int32_t get_offset_of_Types_14() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01, ___Types_14)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_Types_14() const { return ___Types_14; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_Types_14() { return &___Types_14; }
	inline void set_Types_14(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___Types_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Types_14), (void*)value);
	}

	inline static int32_t get_offset_of_req_16() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01, ___req_16)); }
	inline recipeEqualityComparer_t9CC68FA7FE9E46F7DBC08CD0F802D59FF811CBD2 * get_req_16() const { return ___req_16; }
	inline recipeEqualityComparer_t9CC68FA7FE9E46F7DBC08CD0F802D59FF811CBD2 ** get_address_of_req_16() { return &___req_16; }
	inline void set_req_16(recipeEqualityComparer_t9CC68FA7FE9E46F7DBC08CD0F802D59FF811CBD2 * value)
	{
		___req_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___req_16), (void*)value);
	}
};

struct UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_StaticFields
{
public:
	// System.Single UMA.UMAAssetIndexer::DefaultLife
	float ___DefaultLife_4;
	// System.String UMA.UMAAssetIndexer::SortOrder
	String_t* ___SortOrder_6;
	// System.String[] UMA.UMAAssetIndexer::SortOrders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___SortOrders_7;
	// System.Collections.Generic.Dictionary`2<System.String,System.Type> UMA.UMAAssetIndexer::TypeFromString
	Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * ___TypeFromString_8;
	// System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem> UMA.UMAAssetIndexer::GuidTypes
	Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * ___GuidTypes_9;
	// UMA.UMAAssetIndexer UMA.UMAAssetIndexer::theIndexer
	UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * ___theIndexer_15;

public:
	inline static int32_t get_offset_of_DefaultLife_4() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_StaticFields, ___DefaultLife_4)); }
	inline float get_DefaultLife_4() const { return ___DefaultLife_4; }
	inline float* get_address_of_DefaultLife_4() { return &___DefaultLife_4; }
	inline void set_DefaultLife_4(float value)
	{
		___DefaultLife_4 = value;
	}

	inline static int32_t get_offset_of_SortOrder_6() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_StaticFields, ___SortOrder_6)); }
	inline String_t* get_SortOrder_6() const { return ___SortOrder_6; }
	inline String_t** get_address_of_SortOrder_6() { return &___SortOrder_6; }
	inline void set_SortOrder_6(String_t* value)
	{
		___SortOrder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SortOrder_6), (void*)value);
	}

	inline static int32_t get_offset_of_SortOrders_7() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_StaticFields, ___SortOrders_7)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_SortOrders_7() const { return ___SortOrders_7; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_SortOrders_7() { return &___SortOrders_7; }
	inline void set_SortOrders_7(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___SortOrders_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SortOrders_7), (void*)value);
	}

	inline static int32_t get_offset_of_TypeFromString_8() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_StaticFields, ___TypeFromString_8)); }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * get_TypeFromString_8() const { return ___TypeFromString_8; }
	inline Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 ** get_address_of_TypeFromString_8() { return &___TypeFromString_8; }
	inline void set_TypeFromString_8(Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85 * value)
	{
		___TypeFromString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeFromString_8), (void*)value);
	}

	inline static int32_t get_offset_of_GuidTypes_9() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_StaticFields, ___GuidTypes_9)); }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * get_GuidTypes_9() const { return ___GuidTypes_9; }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF ** get_address_of_GuidTypes_9() { return &___GuidTypes_9; }
	inline void set_GuidTypes_9(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * value)
	{
		___GuidTypes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GuidTypes_9), (void*)value);
	}

	inline static int32_t get_offset_of_theIndexer_15() { return static_cast<int32_t>(offsetof(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_StaticFields, ___theIndexer_15)); }
	inline UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * get_theIndexer_15() const { return ___theIndexer_15; }
	inline UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 ** get_address_of_theIndexer_15() { return &___theIndexer_15; }
	inline void set_theIndexer_15(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * value)
	{
		___theIndexer_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___theIndexer_15), (void*)value);
	}
};


// UMA.UMARecipeBase
struct  UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UMA.UMAData/UMARecipe UMA.UMARecipeBase::umaRecipe
	UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * ___umaRecipe_4;
	// System.Boolean UMA.UMARecipeBase::cached
	bool ___cached_5;
	// System.String UMA.UMARecipeBase::label
	String_t* ___label_6;
	// System.Boolean UMA.UMARecipeBase::resourcesOnly
	bool ___resourcesOnly_7;

public:
	inline static int32_t get_offset_of_umaRecipe_4() { return static_cast<int32_t>(offsetof(UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35, ___umaRecipe_4)); }
	inline UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * get_umaRecipe_4() const { return ___umaRecipe_4; }
	inline UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A ** get_address_of_umaRecipe_4() { return &___umaRecipe_4; }
	inline void set_umaRecipe_4(UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * value)
	{
		___umaRecipe_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaRecipe_4), (void*)value);
	}

	inline static int32_t get_offset_of_cached_5() { return static_cast<int32_t>(offsetof(UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35, ___cached_5)); }
	inline bool get_cached_5() const { return ___cached_5; }
	inline bool* get_address_of_cached_5() { return &___cached_5; }
	inline void set_cached_5(bool value)
	{
		___cached_5 = value;
	}

	inline static int32_t get_offset_of_label_6() { return static_cast<int32_t>(offsetof(UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35, ___label_6)); }
	inline String_t* get_label_6() const { return ___label_6; }
	inline String_t** get_address_of_label_6() { return &___label_6; }
	inline void set_label_6(String_t* value)
	{
		___label_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___label_6), (void*)value);
	}

	inline static int32_t get_offset_of_resourcesOnly_7() { return static_cast<int32_t>(offsetof(UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35, ___resourcesOnly_7)); }
	inline bool get_resourcesOnly_7() const { return ___resourcesOnly_7; }
	inline bool* get_address_of_resourcesOnly_7() { return &___resourcesOnly_7; }
	inline void set_resourcesOnly_7(bool value)
	{
		___resourcesOnly_7 = value;
	}
};

struct UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35_StaticFields
{
public:
	// System.Type[] UMA.UMARecipeBase::recipeFormats
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___recipeFormats_8;

public:
	inline static int32_t get_offset_of_recipeFormats_8() { return static_cast<int32_t>(offsetof(UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35_StaticFields, ___recipeFormats_8)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_recipeFormats_8() const { return ___recipeFormats_8; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_recipeFormats_8() { return &___recipeFormats_8; }
	inline void set_recipeFormats_8(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___recipeFormats_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recipeFormats_8), (void*)value);
	}
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


// UMA.UMAPackedRecipeBase
struct  UMAPackedRecipeBase_t5BD5C2A7FEB6745C08E9DC1B6A9C009344B9F785  : public UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35
{
public:

public:
};


// UMA.CharacterSystem.Examples.AvailableColorsHandler
struct  AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar UMA.CharacterSystem.Examples.AvailableColorsHandler::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// UMA.SharedColorTable UMA.CharacterSystem.Examples.AvailableColorsHandler::Colors
	SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * ___Colors_5;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.AvailableColorsHandler::ColorPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ColorPanel_6;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.AvailableColorsHandler::ColorButtonPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ColorButtonPrefab_7;
	// System.String UMA.CharacterSystem.Examples.AvailableColorsHandler::ColorName
	String_t* ___ColorName_8;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.AvailableColorsHandler::LabelPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LabelPrefab_9;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_Colors_5() { return static_cast<int32_t>(offsetof(AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999, ___Colors_5)); }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * get_Colors_5() const { return ___Colors_5; }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 ** get_address_of_Colors_5() { return &___Colors_5; }
	inline void set_Colors_5(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * value)
	{
		___Colors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Colors_5), (void*)value);
	}

	inline static int32_t get_offset_of_ColorPanel_6() { return static_cast<int32_t>(offsetof(AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999, ___ColorPanel_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ColorPanel_6() const { return ___ColorPanel_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ColorPanel_6() { return &___ColorPanel_6; }
	inline void set_ColorPanel_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ColorPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_ColorButtonPrefab_7() { return static_cast<int32_t>(offsetof(AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999, ___ColorButtonPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ColorButtonPrefab_7() const { return ___ColorButtonPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ColorButtonPrefab_7() { return &___ColorButtonPrefab_7; }
	inline void set_ColorButtonPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ColorButtonPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorButtonPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_ColorName_8() { return static_cast<int32_t>(offsetof(AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999, ___ColorName_8)); }
	inline String_t* get_ColorName_8() const { return ___ColorName_8; }
	inline String_t** get_address_of_ColorName_8() { return &___ColorName_8; }
	inline void set_ColorName_8(String_t* value)
	{
		___ColorName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorName_8), (void*)value);
	}

	inline static int32_t get_offset_of_LabelPrefab_9() { return static_cast<int32_t>(offsetof(AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999, ___LabelPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LabelPrefab_9() const { return ___LabelPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LabelPrefab_9() { return &___LabelPrefab_9; }
	inline void set_LabelPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LabelPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LabelPrefab_9), (void*)value);
	}
};


// ButtonTimer
struct  ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button ButtonTimer::NextButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___NextButton_4;
	// System.Single ButtonTimer::TimeDelay
	float ___TimeDelay_5;

public:
	inline static int32_t get_offset_of_NextButton_4() { return static_cast<int32_t>(offsetof(ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95, ___NextButton_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_NextButton_4() const { return ___NextButton_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_NextButton_4() { return &___NextButton_4; }
	inline void set_NextButton_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___NextButton_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NextButton_4), (void*)value);
	}

	inline static int32_t get_offset_of_TimeDelay_5() { return static_cast<int32_t>(offsetof(ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95, ___TimeDelay_5)); }
	inline float get_TimeDelay_5() const { return ___TimeDelay_5; }
	inline float* get_address_of_TimeDelay_5() { return &___TimeDelay_5; }
	inline void set_TimeDelay_5(float value)
	{
		___TimeDelay_5 = value;
	}
};


// ChangeScene
struct  ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// CharacterCreator
struct  CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar CharacterCreator::avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___avatar_4;

public:
	inline static int32_t get_offset_of_avatar_4() { return static_cast<int32_t>(offsetof(CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677, ___avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_avatar_4() const { return ___avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_avatar_4() { return &___avatar_4; }
	inline void set_avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatar_4), (void*)value);
	}
};


// CharacterSelection
struct  CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject[] CharacterSelection::characterList
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___characterList_4;
	// System.Int32 CharacterSelection::index
	int32_t ___index_5;

public:
	inline static int32_t get_offset_of_characterList_4() { return static_cast<int32_t>(offsetof(CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291, ___characterList_4)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_characterList_4() const { return ___characterList_4; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_characterList_4() { return &___characterList_4; }
	inline void set_characterList_4(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___characterList_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterList_4), (void*)value);
	}

	inline static int32_t get_offset_of_index_5() { return static_cast<int32_t>(offsetof(CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291, ___index_5)); }
	inline int32_t get_index_5() const { return ___index_5; }
	inline int32_t* get_address_of_index_5() { return &___index_5; }
	inline void set_index_5(int32_t value)
	{
		___index_5 = value;
	}
};


// UMA.CharacterSystem.Examples.DNAHandler
struct  DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.DNAHandler::SelectionPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SelectionPanel_4;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.DNAHandler::DnaPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DnaPrefab_5;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.DNAHandler::LabelPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LabelPrefab_6;
	// UMA.DnaSetter UMA.CharacterSystem.Examples.DNAHandler::DNA
	DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * ___DNA_7;
	// UMA.CharacterSystem.DynamicCharacterAvatar UMA.CharacterSystem.Examples.DNAHandler::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_8;

public:
	inline static int32_t get_offset_of_SelectionPanel_4() { return static_cast<int32_t>(offsetof(DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB, ___SelectionPanel_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SelectionPanel_4() const { return ___SelectionPanel_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SelectionPanel_4() { return &___SelectionPanel_4; }
	inline void set_SelectionPanel_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SelectionPanel_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SelectionPanel_4), (void*)value);
	}

	inline static int32_t get_offset_of_DnaPrefab_5() { return static_cast<int32_t>(offsetof(DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB, ___DnaPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DnaPrefab_5() const { return ___DnaPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DnaPrefab_5() { return &___DnaPrefab_5; }
	inline void set_DnaPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DnaPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DnaPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_LabelPrefab_6() { return static_cast<int32_t>(offsetof(DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB, ___LabelPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LabelPrefab_6() const { return ___LabelPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LabelPrefab_6() { return &___LabelPrefab_6; }
	inline void set_LabelPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LabelPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LabelPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_DNA_7() { return static_cast<int32_t>(offsetof(DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB, ___DNA_7)); }
	inline DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * get_DNA_7() const { return ___DNA_7; }
	inline DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F ** get_address_of_DNA_7() { return &___DNA_7; }
	inline void set_DNA_7(DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * value)
	{
		___DNA_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DNA_7), (void*)value);
	}

	inline static int32_t get_offset_of_Avatar_8() { return static_cast<int32_t>(offsetof(DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB, ___Avatar_8)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_8() const { return ___Avatar_8; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_8() { return &___Avatar_8; }
	inline void set_Avatar_8(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_8), (void*)value);
	}
};


// GameExclusive
struct  GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button GameExclusive::Start
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Start_4;
	// UnityEngine.UI.Button GameExclusive::PassLeft
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PassLeft_5;
	// UnityEngine.UI.Button GameExclusive::PassRight
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PassRight_6;
	// UnityEngine.UI.Button GameExclusive::Catch
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Catch_7;
	// UnityEngine.UI.Text GameExclusive::Introduction
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Introduction_8;
	// UnityEngine.GameObject GameExclusive::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_9;
	// UnityEngine.UI.Button GameExclusive::Waiting
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Waiting_10;

public:
	inline static int32_t get_offset_of_Start_4() { return static_cast<int32_t>(offsetof(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7, ___Start_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Start_4() const { return ___Start_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Start_4() { return &___Start_4; }
	inline void set_Start_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Start_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Start_4), (void*)value);
	}

	inline static int32_t get_offset_of_PassLeft_5() { return static_cast<int32_t>(offsetof(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7, ___PassLeft_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PassLeft_5() const { return ___PassLeft_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PassLeft_5() { return &___PassLeft_5; }
	inline void set_PassLeft_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PassLeft_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PassLeft_5), (void*)value);
	}

	inline static int32_t get_offset_of_PassRight_6() { return static_cast<int32_t>(offsetof(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7, ___PassRight_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PassRight_6() const { return ___PassRight_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PassRight_6() { return &___PassRight_6; }
	inline void set_PassRight_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PassRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PassRight_6), (void*)value);
	}

	inline static int32_t get_offset_of_Catch_7() { return static_cast<int32_t>(offsetof(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7, ___Catch_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Catch_7() const { return ___Catch_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Catch_7() { return &___Catch_7; }
	inline void set_Catch_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Catch_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Catch_7), (void*)value);
	}

	inline static int32_t get_offset_of_Introduction_8() { return static_cast<int32_t>(offsetof(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7, ___Introduction_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Introduction_8() const { return ___Introduction_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Introduction_8() { return &___Introduction_8; }
	inline void set_Introduction_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Introduction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Introduction_8), (void*)value);
	}

	inline static int32_t get_offset_of_Ball_9() { return static_cast<int32_t>(offsetof(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7, ___Ball_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_9() const { return ___Ball_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_9() { return &___Ball_9; }
	inline void set_Ball_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_9), (void*)value);
	}

	inline static int32_t get_offset_of_Waiting_10() { return static_cast<int32_t>(offsetof(GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7, ___Waiting_10)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Waiting_10() const { return ___Waiting_10; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Waiting_10() { return &___Waiting_10; }
	inline void set_Waiting_10(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Waiting_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Waiting_10), (void*)value);
	}
};


// GameInclusive
struct  GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Button GameInclusive::Start
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Start_4;
	// UnityEngine.UI.Button GameInclusive::PassLeft
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PassLeft_5;
	// UnityEngine.UI.Button GameInclusive::PassRight
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___PassRight_6;
	// UnityEngine.UI.Button GameInclusive::Catch
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Catch_7;
	// UnityEngine.UI.Text GameInclusive::Introduction
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Introduction_8;
	// UnityEngine.GameObject GameInclusive::Ball
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ball_9;
	// UnityEngine.UI.Button GameInclusive::Waiting
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___Waiting_10;

public:
	inline static int32_t get_offset_of_Start_4() { return static_cast<int32_t>(offsetof(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED, ___Start_4)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Start_4() const { return ___Start_4; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Start_4() { return &___Start_4; }
	inline void set_Start_4(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Start_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Start_4), (void*)value);
	}

	inline static int32_t get_offset_of_PassLeft_5() { return static_cast<int32_t>(offsetof(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED, ___PassLeft_5)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PassLeft_5() const { return ___PassLeft_5; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PassLeft_5() { return &___PassLeft_5; }
	inline void set_PassLeft_5(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PassLeft_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PassLeft_5), (void*)value);
	}

	inline static int32_t get_offset_of_PassRight_6() { return static_cast<int32_t>(offsetof(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED, ___PassRight_6)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_PassRight_6() const { return ___PassRight_6; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_PassRight_6() { return &___PassRight_6; }
	inline void set_PassRight_6(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___PassRight_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PassRight_6), (void*)value);
	}

	inline static int32_t get_offset_of_Catch_7() { return static_cast<int32_t>(offsetof(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED, ___Catch_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Catch_7() const { return ___Catch_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Catch_7() { return &___Catch_7; }
	inline void set_Catch_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Catch_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Catch_7), (void*)value);
	}

	inline static int32_t get_offset_of_Introduction_8() { return static_cast<int32_t>(offsetof(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED, ___Introduction_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Introduction_8() const { return ___Introduction_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Introduction_8() { return &___Introduction_8; }
	inline void set_Introduction_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Introduction_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Introduction_8), (void*)value);
	}

	inline static int32_t get_offset_of_Ball_9() { return static_cast<int32_t>(offsetof(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED, ___Ball_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ball_9() const { return ___Ball_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ball_9() { return &___Ball_9; }
	inline void set_Ball_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ball_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ball_9), (void*)value);
	}

	inline static int32_t get_offset_of_Waiting_10() { return static_cast<int32_t>(offsetof(GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED, ___Waiting_10)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_Waiting_10() const { return ___Waiting_10; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_Waiting_10() { return &___Waiting_10; }
	inline void set_Waiting_10(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___Waiting_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Waiting_10), (void*)value);
	}
};


// LoadAvatar2
struct  LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar LoadAvatar2::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// System.String LoadAvatar2::betweenscenes
	String_t* ___betweenscenes_5;
	// System.String LoadAvatar2::saveString
	String_t* ___saveString_6;
	// System.String LoadAvatar2::avatarString
	String_t* ___avatarString_7;
	// System.String LoadAvatar2::compressedString
	String_t* ___compressedString_8;
	// System.Int32 LoadAvatar2::saveStringSize
	int32_t ___saveStringSize_9;
	// System.Int32 LoadAvatar2::avatarStringSize
	int32_t ___avatarStringSize_10;
	// System.Int32 LoadAvatar2::compressedStringSize
	int32_t ___compressedStringSize_11;
	// System.Int32 LoadAvatar2::asciiStringSize
	int32_t ___asciiStringSize_12;
	// System.Int32 LoadAvatar2::binarySize
	int32_t ___binarySize_13;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_betweenscenes_5() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___betweenscenes_5)); }
	inline String_t* get_betweenscenes_5() const { return ___betweenscenes_5; }
	inline String_t** get_address_of_betweenscenes_5() { return &___betweenscenes_5; }
	inline void set_betweenscenes_5(String_t* value)
	{
		___betweenscenes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betweenscenes_5), (void*)value);
	}

	inline static int32_t get_offset_of_saveString_6() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___saveString_6)); }
	inline String_t* get_saveString_6() const { return ___saveString_6; }
	inline String_t** get_address_of_saveString_6() { return &___saveString_6; }
	inline void set_saveString_6(String_t* value)
	{
		___saveString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveString_6), (void*)value);
	}

	inline static int32_t get_offset_of_avatarString_7() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___avatarString_7)); }
	inline String_t* get_avatarString_7() const { return ___avatarString_7; }
	inline String_t** get_address_of_avatarString_7() { return &___avatarString_7; }
	inline void set_avatarString_7(String_t* value)
	{
		___avatarString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatarString_7), (void*)value);
	}

	inline static int32_t get_offset_of_compressedString_8() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___compressedString_8)); }
	inline String_t* get_compressedString_8() const { return ___compressedString_8; }
	inline String_t** get_address_of_compressedString_8() { return &___compressedString_8; }
	inline void set_compressedString_8(String_t* value)
	{
		___compressedString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compressedString_8), (void*)value);
	}

	inline static int32_t get_offset_of_saveStringSize_9() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___saveStringSize_9)); }
	inline int32_t get_saveStringSize_9() const { return ___saveStringSize_9; }
	inline int32_t* get_address_of_saveStringSize_9() { return &___saveStringSize_9; }
	inline void set_saveStringSize_9(int32_t value)
	{
		___saveStringSize_9 = value;
	}

	inline static int32_t get_offset_of_avatarStringSize_10() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___avatarStringSize_10)); }
	inline int32_t get_avatarStringSize_10() const { return ___avatarStringSize_10; }
	inline int32_t* get_address_of_avatarStringSize_10() { return &___avatarStringSize_10; }
	inline void set_avatarStringSize_10(int32_t value)
	{
		___avatarStringSize_10 = value;
	}

	inline static int32_t get_offset_of_compressedStringSize_11() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___compressedStringSize_11)); }
	inline int32_t get_compressedStringSize_11() const { return ___compressedStringSize_11; }
	inline int32_t* get_address_of_compressedStringSize_11() { return &___compressedStringSize_11; }
	inline void set_compressedStringSize_11(int32_t value)
	{
		___compressedStringSize_11 = value;
	}

	inline static int32_t get_offset_of_asciiStringSize_12() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___asciiStringSize_12)); }
	inline int32_t get_asciiStringSize_12() const { return ___asciiStringSize_12; }
	inline int32_t* get_address_of_asciiStringSize_12() { return &___asciiStringSize_12; }
	inline void set_asciiStringSize_12(int32_t value)
	{
		___asciiStringSize_12 = value;
	}

	inline static int32_t get_offset_of_binarySize_13() { return static_cast<int32_t>(offsetof(LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD, ___binarySize_13)); }
	inline int32_t get_binarySize_13() const { return ___binarySize_13; }
	inline int32_t* get_address_of_binarySize_13() { return &___binarySize_13; }
	inline void set_binarySize_13(int32_t value)
	{
		___binarySize_13 = value;
	}
};


// LoadCustom
struct  LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar LoadCustom::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// System.String LoadCustom::betweenscenes
	String_t* ___betweenscenes_5;
	// System.String LoadCustom::saveString
	String_t* ___saveString_6;
	// System.String LoadCustom::avatarString
	String_t* ___avatarString_7;
	// System.String LoadCustom::compressedString
	String_t* ___compressedString_8;
	// System.Int32 LoadCustom::saveStringSize
	int32_t ___saveStringSize_9;
	// System.Int32 LoadCustom::avatarStringSize
	int32_t ___avatarStringSize_10;
	// System.Int32 LoadCustom::compressedStringSize
	int32_t ___compressedStringSize_11;
	// System.Int32 LoadCustom::asciiStringSize
	int32_t ___asciiStringSize_12;
	// System.Int32 LoadCustom::binarySize
	int32_t ___binarySize_13;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_betweenscenes_5() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___betweenscenes_5)); }
	inline String_t* get_betweenscenes_5() const { return ___betweenscenes_5; }
	inline String_t** get_address_of_betweenscenes_5() { return &___betweenscenes_5; }
	inline void set_betweenscenes_5(String_t* value)
	{
		___betweenscenes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betweenscenes_5), (void*)value);
	}

	inline static int32_t get_offset_of_saveString_6() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___saveString_6)); }
	inline String_t* get_saveString_6() const { return ___saveString_6; }
	inline String_t** get_address_of_saveString_6() { return &___saveString_6; }
	inline void set_saveString_6(String_t* value)
	{
		___saveString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveString_6), (void*)value);
	}

	inline static int32_t get_offset_of_avatarString_7() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___avatarString_7)); }
	inline String_t* get_avatarString_7() const { return ___avatarString_7; }
	inline String_t** get_address_of_avatarString_7() { return &___avatarString_7; }
	inline void set_avatarString_7(String_t* value)
	{
		___avatarString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatarString_7), (void*)value);
	}

	inline static int32_t get_offset_of_compressedString_8() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___compressedString_8)); }
	inline String_t* get_compressedString_8() const { return ___compressedString_8; }
	inline String_t** get_address_of_compressedString_8() { return &___compressedString_8; }
	inline void set_compressedString_8(String_t* value)
	{
		___compressedString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compressedString_8), (void*)value);
	}

	inline static int32_t get_offset_of_saveStringSize_9() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___saveStringSize_9)); }
	inline int32_t get_saveStringSize_9() const { return ___saveStringSize_9; }
	inline int32_t* get_address_of_saveStringSize_9() { return &___saveStringSize_9; }
	inline void set_saveStringSize_9(int32_t value)
	{
		___saveStringSize_9 = value;
	}

	inline static int32_t get_offset_of_avatarStringSize_10() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___avatarStringSize_10)); }
	inline int32_t get_avatarStringSize_10() const { return ___avatarStringSize_10; }
	inline int32_t* get_address_of_avatarStringSize_10() { return &___avatarStringSize_10; }
	inline void set_avatarStringSize_10(int32_t value)
	{
		___avatarStringSize_10 = value;
	}

	inline static int32_t get_offset_of_compressedStringSize_11() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___compressedStringSize_11)); }
	inline int32_t get_compressedStringSize_11() const { return ___compressedStringSize_11; }
	inline int32_t* get_address_of_compressedStringSize_11() { return &___compressedStringSize_11; }
	inline void set_compressedStringSize_11(int32_t value)
	{
		___compressedStringSize_11 = value;
	}

	inline static int32_t get_offset_of_asciiStringSize_12() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___asciiStringSize_12)); }
	inline int32_t get_asciiStringSize_12() const { return ___asciiStringSize_12; }
	inline int32_t* get_address_of_asciiStringSize_12() { return &___asciiStringSize_12; }
	inline void set_asciiStringSize_12(int32_t value)
	{
		___asciiStringSize_12 = value;
	}

	inline static int32_t get_offset_of_binarySize_13() { return static_cast<int32_t>(offsetof(LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B, ___binarySize_13)); }
	inline int32_t get_binarySize_13() const { return ___binarySize_13; }
	inline int32_t* get_address_of_binarySize_13() { return &___binarySize_13; }
	inline void set_binarySize_13(int32_t value)
	{
		___binarySize_13 = value;
	}
};


// LoadCustomAvatar
struct  LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar LoadCustomAvatar::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// System.String LoadCustomAvatar::betweenscenes
	String_t* ___betweenscenes_5;
	// System.String LoadCustomAvatar::saveString
	String_t* ___saveString_6;
	// System.String LoadCustomAvatar::avatarString
	String_t* ___avatarString_7;
	// System.String LoadCustomAvatar::compressedString
	String_t* ___compressedString_8;
	// System.Int32 LoadCustomAvatar::saveStringSize
	int32_t ___saveStringSize_9;
	// System.Int32 LoadCustomAvatar::avatarStringSize
	int32_t ___avatarStringSize_10;
	// System.Int32 LoadCustomAvatar::compressedStringSize
	int32_t ___compressedStringSize_11;
	// System.Int32 LoadCustomAvatar::asciiStringSize
	int32_t ___asciiStringSize_12;
	// System.Int32 LoadCustomAvatar::binarySize
	int32_t ___binarySize_13;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_betweenscenes_5() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___betweenscenes_5)); }
	inline String_t* get_betweenscenes_5() const { return ___betweenscenes_5; }
	inline String_t** get_address_of_betweenscenes_5() { return &___betweenscenes_5; }
	inline void set_betweenscenes_5(String_t* value)
	{
		___betweenscenes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betweenscenes_5), (void*)value);
	}

	inline static int32_t get_offset_of_saveString_6() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___saveString_6)); }
	inline String_t* get_saveString_6() const { return ___saveString_6; }
	inline String_t** get_address_of_saveString_6() { return &___saveString_6; }
	inline void set_saveString_6(String_t* value)
	{
		___saveString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveString_6), (void*)value);
	}

	inline static int32_t get_offset_of_avatarString_7() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___avatarString_7)); }
	inline String_t* get_avatarString_7() const { return ___avatarString_7; }
	inline String_t** get_address_of_avatarString_7() { return &___avatarString_7; }
	inline void set_avatarString_7(String_t* value)
	{
		___avatarString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatarString_7), (void*)value);
	}

	inline static int32_t get_offset_of_compressedString_8() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___compressedString_8)); }
	inline String_t* get_compressedString_8() const { return ___compressedString_8; }
	inline String_t** get_address_of_compressedString_8() { return &___compressedString_8; }
	inline void set_compressedString_8(String_t* value)
	{
		___compressedString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compressedString_8), (void*)value);
	}

	inline static int32_t get_offset_of_saveStringSize_9() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___saveStringSize_9)); }
	inline int32_t get_saveStringSize_9() const { return ___saveStringSize_9; }
	inline int32_t* get_address_of_saveStringSize_9() { return &___saveStringSize_9; }
	inline void set_saveStringSize_9(int32_t value)
	{
		___saveStringSize_9 = value;
	}

	inline static int32_t get_offset_of_avatarStringSize_10() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___avatarStringSize_10)); }
	inline int32_t get_avatarStringSize_10() const { return ___avatarStringSize_10; }
	inline int32_t* get_address_of_avatarStringSize_10() { return &___avatarStringSize_10; }
	inline void set_avatarStringSize_10(int32_t value)
	{
		___avatarStringSize_10 = value;
	}

	inline static int32_t get_offset_of_compressedStringSize_11() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___compressedStringSize_11)); }
	inline int32_t get_compressedStringSize_11() const { return ___compressedStringSize_11; }
	inline int32_t* get_address_of_compressedStringSize_11() { return &___compressedStringSize_11; }
	inline void set_compressedStringSize_11(int32_t value)
	{
		___compressedStringSize_11 = value;
	}

	inline static int32_t get_offset_of_asciiStringSize_12() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___asciiStringSize_12)); }
	inline int32_t get_asciiStringSize_12() const { return ___asciiStringSize_12; }
	inline int32_t* get_address_of_asciiStringSize_12() { return &___asciiStringSize_12; }
	inline void set_asciiStringSize_12(int32_t value)
	{
		___asciiStringSize_12 = value;
	}

	inline static int32_t get_offset_of_binarySize_13() { return static_cast<int32_t>(offsetof(LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994, ___binarySize_13)); }
	inline int32_t get_binarySize_13() const { return ___binarySize_13; }
	inline int32_t* get_address_of_binarySize_13() { return &___binarySize_13; }
	inline void set_binarySize_13(int32_t value)
	{
		___binarySize_13 = value;
	}
};


// LoadRandomAv
struct  LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar LoadRandomAv::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// System.String LoadRandomAv::betweenscenes
	String_t* ___betweenscenes_5;
	// System.String LoadRandomAv::saveString
	String_t* ___saveString_6;
	// System.String LoadRandomAv::avatarString
	String_t* ___avatarString_7;
	// System.String LoadRandomAv::compressedString
	String_t* ___compressedString_8;
	// System.Int32 LoadRandomAv::saveStringSize
	int32_t ___saveStringSize_9;
	// System.Int32 LoadRandomAv::avatarStringSize
	int32_t ___avatarStringSize_10;
	// System.Int32 LoadRandomAv::compressedStringSize
	int32_t ___compressedStringSize_11;
	// System.Int32 LoadRandomAv::asciiStringSize
	int32_t ___asciiStringSize_12;
	// System.Int32 LoadRandomAv::binarySize
	int32_t ___binarySize_13;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_betweenscenes_5() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___betweenscenes_5)); }
	inline String_t* get_betweenscenes_5() const { return ___betweenscenes_5; }
	inline String_t** get_address_of_betweenscenes_5() { return &___betweenscenes_5; }
	inline void set_betweenscenes_5(String_t* value)
	{
		___betweenscenes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betweenscenes_5), (void*)value);
	}

	inline static int32_t get_offset_of_saveString_6() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___saveString_6)); }
	inline String_t* get_saveString_6() const { return ___saveString_6; }
	inline String_t** get_address_of_saveString_6() { return &___saveString_6; }
	inline void set_saveString_6(String_t* value)
	{
		___saveString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveString_6), (void*)value);
	}

	inline static int32_t get_offset_of_avatarString_7() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___avatarString_7)); }
	inline String_t* get_avatarString_7() const { return ___avatarString_7; }
	inline String_t** get_address_of_avatarString_7() { return &___avatarString_7; }
	inline void set_avatarString_7(String_t* value)
	{
		___avatarString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatarString_7), (void*)value);
	}

	inline static int32_t get_offset_of_compressedString_8() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___compressedString_8)); }
	inline String_t* get_compressedString_8() const { return ___compressedString_8; }
	inline String_t** get_address_of_compressedString_8() { return &___compressedString_8; }
	inline void set_compressedString_8(String_t* value)
	{
		___compressedString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compressedString_8), (void*)value);
	}

	inline static int32_t get_offset_of_saveStringSize_9() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___saveStringSize_9)); }
	inline int32_t get_saveStringSize_9() const { return ___saveStringSize_9; }
	inline int32_t* get_address_of_saveStringSize_9() { return &___saveStringSize_9; }
	inline void set_saveStringSize_9(int32_t value)
	{
		___saveStringSize_9 = value;
	}

	inline static int32_t get_offset_of_avatarStringSize_10() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___avatarStringSize_10)); }
	inline int32_t get_avatarStringSize_10() const { return ___avatarStringSize_10; }
	inline int32_t* get_address_of_avatarStringSize_10() { return &___avatarStringSize_10; }
	inline void set_avatarStringSize_10(int32_t value)
	{
		___avatarStringSize_10 = value;
	}

	inline static int32_t get_offset_of_compressedStringSize_11() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___compressedStringSize_11)); }
	inline int32_t get_compressedStringSize_11() const { return ___compressedStringSize_11; }
	inline int32_t* get_address_of_compressedStringSize_11() { return &___compressedStringSize_11; }
	inline void set_compressedStringSize_11(int32_t value)
	{
		___compressedStringSize_11 = value;
	}

	inline static int32_t get_offset_of_asciiStringSize_12() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___asciiStringSize_12)); }
	inline int32_t get_asciiStringSize_12() const { return ___asciiStringSize_12; }
	inline int32_t* get_address_of_asciiStringSize_12() { return &___asciiStringSize_12; }
	inline void set_asciiStringSize_12(int32_t value)
	{
		___asciiStringSize_12 = value;
	}

	inline static int32_t get_offset_of_binarySize_13() { return static_cast<int32_t>(offsetof(LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03, ___binarySize_13)); }
	inline int32_t get_binarySize_13() const { return ___binarySize_13; }
	inline int32_t* get_address_of_binarySize_13() { return &___binarySize_13; }
	inline void set_binarySize_13(int32_t value)
	{
		___binarySize_13 = value;
	}
};


// UMA.O3nArmLowerLegTwistSlotScript
struct  O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields
{
public:
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::leftHandHash
	int32_t ___leftHandHash_4;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::rightHandHash
	int32_t ___rightHandHash_5;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::leftTwistHash
	int32_t ___leftTwistHash_6;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::rightTwistHash
	int32_t ___rightTwistHash_7;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::leftFootHash
	int32_t ___leftFootHash_8;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::rightFootHash
	int32_t ___rightFootHash_9;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::leftFootTwistHash
	int32_t ___leftFootTwistHash_10;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::rightFootTwistHash
	int32_t ___rightFootTwistHash_11;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::leftUpperArmTwistHash
	int32_t ___leftUpperArmTwistHash_12;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::rightUpperArmTwistHash
	int32_t ___rightUpperArmTwistHash_13;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::leftClavicleHash
	int32_t ___leftClavicleHash_14;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::rightClavicleHash
	int32_t ___rightClavicleHash_15;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::leftThighTwistHash
	int32_t ___leftThighTwistHash_16;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::rightThighTwistHash
	int32_t ___rightThighTwistHash_17;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::leftThighHash
	int32_t ___leftThighHash_18;
	// System.Int32 UMA.O3nArmLowerLegTwistSlotScript::rightThighHash
	int32_t ___rightThighHash_19;
	// System.Boolean UMA.O3nArmLowerLegTwistSlotScript::hashesFound
	bool ___hashesFound_20;

public:
	inline static int32_t get_offset_of_leftHandHash_4() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___leftHandHash_4)); }
	inline int32_t get_leftHandHash_4() const { return ___leftHandHash_4; }
	inline int32_t* get_address_of_leftHandHash_4() { return &___leftHandHash_4; }
	inline void set_leftHandHash_4(int32_t value)
	{
		___leftHandHash_4 = value;
	}

	inline static int32_t get_offset_of_rightHandHash_5() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___rightHandHash_5)); }
	inline int32_t get_rightHandHash_5() const { return ___rightHandHash_5; }
	inline int32_t* get_address_of_rightHandHash_5() { return &___rightHandHash_5; }
	inline void set_rightHandHash_5(int32_t value)
	{
		___rightHandHash_5 = value;
	}

	inline static int32_t get_offset_of_leftTwistHash_6() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___leftTwistHash_6)); }
	inline int32_t get_leftTwistHash_6() const { return ___leftTwistHash_6; }
	inline int32_t* get_address_of_leftTwistHash_6() { return &___leftTwistHash_6; }
	inline void set_leftTwistHash_6(int32_t value)
	{
		___leftTwistHash_6 = value;
	}

	inline static int32_t get_offset_of_rightTwistHash_7() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___rightTwistHash_7)); }
	inline int32_t get_rightTwistHash_7() const { return ___rightTwistHash_7; }
	inline int32_t* get_address_of_rightTwistHash_7() { return &___rightTwistHash_7; }
	inline void set_rightTwistHash_7(int32_t value)
	{
		___rightTwistHash_7 = value;
	}

	inline static int32_t get_offset_of_leftFootHash_8() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___leftFootHash_8)); }
	inline int32_t get_leftFootHash_8() const { return ___leftFootHash_8; }
	inline int32_t* get_address_of_leftFootHash_8() { return &___leftFootHash_8; }
	inline void set_leftFootHash_8(int32_t value)
	{
		___leftFootHash_8 = value;
	}

	inline static int32_t get_offset_of_rightFootHash_9() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___rightFootHash_9)); }
	inline int32_t get_rightFootHash_9() const { return ___rightFootHash_9; }
	inline int32_t* get_address_of_rightFootHash_9() { return &___rightFootHash_9; }
	inline void set_rightFootHash_9(int32_t value)
	{
		___rightFootHash_9 = value;
	}

	inline static int32_t get_offset_of_leftFootTwistHash_10() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___leftFootTwistHash_10)); }
	inline int32_t get_leftFootTwistHash_10() const { return ___leftFootTwistHash_10; }
	inline int32_t* get_address_of_leftFootTwistHash_10() { return &___leftFootTwistHash_10; }
	inline void set_leftFootTwistHash_10(int32_t value)
	{
		___leftFootTwistHash_10 = value;
	}

	inline static int32_t get_offset_of_rightFootTwistHash_11() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___rightFootTwistHash_11)); }
	inline int32_t get_rightFootTwistHash_11() const { return ___rightFootTwistHash_11; }
	inline int32_t* get_address_of_rightFootTwistHash_11() { return &___rightFootTwistHash_11; }
	inline void set_rightFootTwistHash_11(int32_t value)
	{
		___rightFootTwistHash_11 = value;
	}

	inline static int32_t get_offset_of_leftUpperArmTwistHash_12() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___leftUpperArmTwistHash_12)); }
	inline int32_t get_leftUpperArmTwistHash_12() const { return ___leftUpperArmTwistHash_12; }
	inline int32_t* get_address_of_leftUpperArmTwistHash_12() { return &___leftUpperArmTwistHash_12; }
	inline void set_leftUpperArmTwistHash_12(int32_t value)
	{
		___leftUpperArmTwistHash_12 = value;
	}

	inline static int32_t get_offset_of_rightUpperArmTwistHash_13() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___rightUpperArmTwistHash_13)); }
	inline int32_t get_rightUpperArmTwistHash_13() const { return ___rightUpperArmTwistHash_13; }
	inline int32_t* get_address_of_rightUpperArmTwistHash_13() { return &___rightUpperArmTwistHash_13; }
	inline void set_rightUpperArmTwistHash_13(int32_t value)
	{
		___rightUpperArmTwistHash_13 = value;
	}

	inline static int32_t get_offset_of_leftClavicleHash_14() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___leftClavicleHash_14)); }
	inline int32_t get_leftClavicleHash_14() const { return ___leftClavicleHash_14; }
	inline int32_t* get_address_of_leftClavicleHash_14() { return &___leftClavicleHash_14; }
	inline void set_leftClavicleHash_14(int32_t value)
	{
		___leftClavicleHash_14 = value;
	}

	inline static int32_t get_offset_of_rightClavicleHash_15() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___rightClavicleHash_15)); }
	inline int32_t get_rightClavicleHash_15() const { return ___rightClavicleHash_15; }
	inline int32_t* get_address_of_rightClavicleHash_15() { return &___rightClavicleHash_15; }
	inline void set_rightClavicleHash_15(int32_t value)
	{
		___rightClavicleHash_15 = value;
	}

	inline static int32_t get_offset_of_leftThighTwistHash_16() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___leftThighTwistHash_16)); }
	inline int32_t get_leftThighTwistHash_16() const { return ___leftThighTwistHash_16; }
	inline int32_t* get_address_of_leftThighTwistHash_16() { return &___leftThighTwistHash_16; }
	inline void set_leftThighTwistHash_16(int32_t value)
	{
		___leftThighTwistHash_16 = value;
	}

	inline static int32_t get_offset_of_rightThighTwistHash_17() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___rightThighTwistHash_17)); }
	inline int32_t get_rightThighTwistHash_17() const { return ___rightThighTwistHash_17; }
	inline int32_t* get_address_of_rightThighTwistHash_17() { return &___rightThighTwistHash_17; }
	inline void set_rightThighTwistHash_17(int32_t value)
	{
		___rightThighTwistHash_17 = value;
	}

	inline static int32_t get_offset_of_leftThighHash_18() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___leftThighHash_18)); }
	inline int32_t get_leftThighHash_18() const { return ___leftThighHash_18; }
	inline int32_t* get_address_of_leftThighHash_18() { return &___leftThighHash_18; }
	inline void set_leftThighHash_18(int32_t value)
	{
		___leftThighHash_18 = value;
	}

	inline static int32_t get_offset_of_rightThighHash_19() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___rightThighHash_19)); }
	inline int32_t get_rightThighHash_19() const { return ___rightThighHash_19; }
	inline int32_t* get_address_of_rightThighHash_19() { return &___rightThighHash_19; }
	inline void set_rightThighHash_19(int32_t value)
	{
		___rightThighHash_19 = value;
	}

	inline static int32_t get_offset_of_hashesFound_20() { return static_cast<int32_t>(offsetof(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields, ___hashesFound_20)); }
	inline bool get_hashesFound_20() const { return ___hashesFound_20; }
	inline bool* get_address_of_hashesFound_20() { return &___hashesFound_20; }
	inline void set_hashesFound_20(bool value)
	{
		___hashesFound_20 = value;
	}
};


// UMA.O3nShoulderUpperLegTwistSlotScript
struct  O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields
{
public:
	// System.Int32 UMA.O3nShoulderUpperLegTwistSlotScript::leftShoulderHash
	int32_t ___leftShoulderHash_4;
	// System.Int32 UMA.O3nShoulderUpperLegTwistSlotScript::rightShoulderHash
	int32_t ___rightShoulderHash_5;
	// System.Int32 UMA.O3nShoulderUpperLegTwistSlotScript::leftShoulderTwistHash
	int32_t ___leftShoulderTwistHash_6;
	// System.Int32 UMA.O3nShoulderUpperLegTwistSlotScript::rightShoulerTwistHash
	int32_t ___rightShoulerTwistHash_7;
	// System.Int32 UMA.O3nShoulderUpperLegTwistSlotScript::leftThighHash
	int32_t ___leftThighHash_8;
	// System.Int32 UMA.O3nShoulderUpperLegTwistSlotScript::rightThighHash
	int32_t ___rightThighHash_9;
	// System.Int32 UMA.O3nShoulderUpperLegTwistSlotScript::leftThighTwistHash
	int32_t ___leftThighTwistHash_10;
	// System.Int32 UMA.O3nShoulderUpperLegTwistSlotScript::rightThighTwistHash
	int32_t ___rightThighTwistHash_11;
	// System.Boolean UMA.O3nShoulderUpperLegTwistSlotScript::hashesFound
	bool ___hashesFound_12;

public:
	inline static int32_t get_offset_of_leftShoulderHash_4() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___leftShoulderHash_4)); }
	inline int32_t get_leftShoulderHash_4() const { return ___leftShoulderHash_4; }
	inline int32_t* get_address_of_leftShoulderHash_4() { return &___leftShoulderHash_4; }
	inline void set_leftShoulderHash_4(int32_t value)
	{
		___leftShoulderHash_4 = value;
	}

	inline static int32_t get_offset_of_rightShoulderHash_5() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___rightShoulderHash_5)); }
	inline int32_t get_rightShoulderHash_5() const { return ___rightShoulderHash_5; }
	inline int32_t* get_address_of_rightShoulderHash_5() { return &___rightShoulderHash_5; }
	inline void set_rightShoulderHash_5(int32_t value)
	{
		___rightShoulderHash_5 = value;
	}

	inline static int32_t get_offset_of_leftShoulderTwistHash_6() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___leftShoulderTwistHash_6)); }
	inline int32_t get_leftShoulderTwistHash_6() const { return ___leftShoulderTwistHash_6; }
	inline int32_t* get_address_of_leftShoulderTwistHash_6() { return &___leftShoulderTwistHash_6; }
	inline void set_leftShoulderTwistHash_6(int32_t value)
	{
		___leftShoulderTwistHash_6 = value;
	}

	inline static int32_t get_offset_of_rightShoulerTwistHash_7() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___rightShoulerTwistHash_7)); }
	inline int32_t get_rightShoulerTwistHash_7() const { return ___rightShoulerTwistHash_7; }
	inline int32_t* get_address_of_rightShoulerTwistHash_7() { return &___rightShoulerTwistHash_7; }
	inline void set_rightShoulerTwistHash_7(int32_t value)
	{
		___rightShoulerTwistHash_7 = value;
	}

	inline static int32_t get_offset_of_leftThighHash_8() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___leftThighHash_8)); }
	inline int32_t get_leftThighHash_8() const { return ___leftThighHash_8; }
	inline int32_t* get_address_of_leftThighHash_8() { return &___leftThighHash_8; }
	inline void set_leftThighHash_8(int32_t value)
	{
		___leftThighHash_8 = value;
	}

	inline static int32_t get_offset_of_rightThighHash_9() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___rightThighHash_9)); }
	inline int32_t get_rightThighHash_9() const { return ___rightThighHash_9; }
	inline int32_t* get_address_of_rightThighHash_9() { return &___rightThighHash_9; }
	inline void set_rightThighHash_9(int32_t value)
	{
		___rightThighHash_9 = value;
	}

	inline static int32_t get_offset_of_leftThighTwistHash_10() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___leftThighTwistHash_10)); }
	inline int32_t get_leftThighTwistHash_10() const { return ___leftThighTwistHash_10; }
	inline int32_t* get_address_of_leftThighTwistHash_10() { return &___leftThighTwistHash_10; }
	inline void set_leftThighTwistHash_10(int32_t value)
	{
		___leftThighTwistHash_10 = value;
	}

	inline static int32_t get_offset_of_rightThighTwistHash_11() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___rightThighTwistHash_11)); }
	inline int32_t get_rightThighTwistHash_11() const { return ___rightThighTwistHash_11; }
	inline int32_t* get_address_of_rightThighTwistHash_11() { return &___rightThighTwistHash_11; }
	inline void set_rightThighTwistHash_11(int32_t value)
	{
		___rightThighTwistHash_11 = value;
	}

	inline static int32_t get_offset_of_hashesFound_12() { return static_cast<int32_t>(offsetof(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields, ___hashesFound_12)); }
	inline bool get_hashesFound_12() const { return ___hashesFound_12; }
	inline bool* get_address_of_hashesFound_12() { return &___hashesFound_12; }
	inline void set_hashesFound_12(bool value)
	{
		___hashesFound_12 = value;
	}
};


// O3nTwistBone
struct  O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single O3nTwistBone::twistValue
	float ___twistValue_4;
	// System.Single[] O3nTwistBone::twistValues
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___twistValues_5;
	// System.Single O3nTwistBone::twistLimit
	float ___twistLimit_6;
	// UnityEngine.Transform[] O3nTwistBone::twistBone
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___twistBone_7;
	// UnityEngine.Transform[] O3nTwistBone::refBone
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___refBone_8;
	// UnityEngine.Vector3[] O3nTwistBone::axisVector
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___axisVector_9;
	// UnityEngine.Quaternion[] O3nTwistBone::originalRefRotation
	QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* ___originalRefRotation_10;
	// System.Boolean[] O3nTwistBone::shoulderTwist
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___shoulderTwist_11;
	// System.Boolean[] O3nTwistBone::enabled
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___enabled_12;
	// System.Single[] O3nTwistBone::originalRefRotationAngle
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___originalRefRotationAngle_13;
	// System.Single[] O3nTwistBone::twistRotation
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___twistRotation_14;
	// UnityEngine.Vector3 O3nTwistBone::rotated
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rotated_15;

public:
	inline static int32_t get_offset_of_twistValue_4() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___twistValue_4)); }
	inline float get_twistValue_4() const { return ___twistValue_4; }
	inline float* get_address_of_twistValue_4() { return &___twistValue_4; }
	inline void set_twistValue_4(float value)
	{
		___twistValue_4 = value;
	}

	inline static int32_t get_offset_of_twistValues_5() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___twistValues_5)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_twistValues_5() const { return ___twistValues_5; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_twistValues_5() { return &___twistValues_5; }
	inline void set_twistValues_5(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___twistValues_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___twistValues_5), (void*)value);
	}

	inline static int32_t get_offset_of_twistLimit_6() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___twistLimit_6)); }
	inline float get_twistLimit_6() const { return ___twistLimit_6; }
	inline float* get_address_of_twistLimit_6() { return &___twistLimit_6; }
	inline void set_twistLimit_6(float value)
	{
		___twistLimit_6 = value;
	}

	inline static int32_t get_offset_of_twistBone_7() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___twistBone_7)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_twistBone_7() const { return ___twistBone_7; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_twistBone_7() { return &___twistBone_7; }
	inline void set_twistBone_7(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___twistBone_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___twistBone_7), (void*)value);
	}

	inline static int32_t get_offset_of_refBone_8() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___refBone_8)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_refBone_8() const { return ___refBone_8; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_refBone_8() { return &___refBone_8; }
	inline void set_refBone_8(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___refBone_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___refBone_8), (void*)value);
	}

	inline static int32_t get_offset_of_axisVector_9() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___axisVector_9)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_axisVector_9() const { return ___axisVector_9; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_axisVector_9() { return &___axisVector_9; }
	inline void set_axisVector_9(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___axisVector_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___axisVector_9), (void*)value);
	}

	inline static int32_t get_offset_of_originalRefRotation_10() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___originalRefRotation_10)); }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* get_originalRefRotation_10() const { return ___originalRefRotation_10; }
	inline QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6** get_address_of_originalRefRotation_10() { return &___originalRefRotation_10; }
	inline void set_originalRefRotation_10(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* value)
	{
		___originalRefRotation_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalRefRotation_10), (void*)value);
	}

	inline static int32_t get_offset_of_shoulderTwist_11() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___shoulderTwist_11)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_shoulderTwist_11() const { return ___shoulderTwist_11; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_shoulderTwist_11() { return &___shoulderTwist_11; }
	inline void set_shoulderTwist_11(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___shoulderTwist_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shoulderTwist_11), (void*)value);
	}

	inline static int32_t get_offset_of_enabled_12() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___enabled_12)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_enabled_12() const { return ___enabled_12; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_enabled_12() { return &___enabled_12; }
	inline void set_enabled_12(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___enabled_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enabled_12), (void*)value);
	}

	inline static int32_t get_offset_of_originalRefRotationAngle_13() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___originalRefRotationAngle_13)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_originalRefRotationAngle_13() const { return ___originalRefRotationAngle_13; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_originalRefRotationAngle_13() { return &___originalRefRotationAngle_13; }
	inline void set_originalRefRotationAngle_13(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___originalRefRotationAngle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___originalRefRotationAngle_13), (void*)value);
	}

	inline static int32_t get_offset_of_twistRotation_14() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___twistRotation_14)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_twistRotation_14() const { return ___twistRotation_14; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_twistRotation_14() { return &___twistRotation_14; }
	inline void set_twistRotation_14(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___twistRotation_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___twistRotation_14), (void*)value);
	}

	inline static int32_t get_offset_of_rotated_15() { return static_cast<int32_t>(offsetof(O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8, ___rotated_15)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rotated_15() const { return ___rotated_15; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rotated_15() { return &___rotated_15; }
	inline void set_rotated_15(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rotated_15 = value;
	}
};


// RandomAvSaveLoad
struct  RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar RandomAvSaveLoad::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// UMA.UMARandomAvatar RandomAvSaveLoad::Randomizer
	UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * ___Randomizer_5;
	// UMA.Examples.UMAMouseOrbitImproved RandomAvSaveLoad::Orbiter
	UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * ___Orbiter_6;
	// System.Boolean RandomAvSaveLoad::useAvatarDefinition
	bool ___useAvatarDefinition_7;
	// System.Boolean RandomAvSaveLoad::useCompressedString
	bool ___useCompressedString_8;
	// System.String RandomAvSaveLoad::betweenscenes
	String_t* ___betweenscenes_9;
	// System.String RandomAvSaveLoad::saveString
	String_t* ___saveString_10;
	// System.String RandomAvSaveLoad::avatarString
	String_t* ___avatarString_11;
	// System.String RandomAvSaveLoad::compressedString
	String_t* ___compressedString_12;
	// System.Int32 RandomAvSaveLoad::saveStringSize
	int32_t ___saveStringSize_13;
	// System.Int32 RandomAvSaveLoad::avatarStringSize
	int32_t ___avatarStringSize_14;
	// System.Int32 RandomAvSaveLoad::compressedStringSize
	int32_t ___compressedStringSize_15;
	// System.Int32 RandomAvSaveLoad::asciiStringSize
	int32_t ___asciiStringSize_16;
	// System.Int32 RandomAvSaveLoad::binarySize
	int32_t ___binarySize_17;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_Randomizer_5() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___Randomizer_5)); }
	inline UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * get_Randomizer_5() const { return ___Randomizer_5; }
	inline UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 ** get_address_of_Randomizer_5() { return &___Randomizer_5; }
	inline void set_Randomizer_5(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * value)
	{
		___Randomizer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Randomizer_5), (void*)value);
	}

	inline static int32_t get_offset_of_Orbiter_6() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___Orbiter_6)); }
	inline UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * get_Orbiter_6() const { return ___Orbiter_6; }
	inline UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F ** get_address_of_Orbiter_6() { return &___Orbiter_6; }
	inline void set_Orbiter_6(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * value)
	{
		___Orbiter_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Orbiter_6), (void*)value);
	}

	inline static int32_t get_offset_of_useAvatarDefinition_7() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___useAvatarDefinition_7)); }
	inline bool get_useAvatarDefinition_7() const { return ___useAvatarDefinition_7; }
	inline bool* get_address_of_useAvatarDefinition_7() { return &___useAvatarDefinition_7; }
	inline void set_useAvatarDefinition_7(bool value)
	{
		___useAvatarDefinition_7 = value;
	}

	inline static int32_t get_offset_of_useCompressedString_8() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___useCompressedString_8)); }
	inline bool get_useCompressedString_8() const { return ___useCompressedString_8; }
	inline bool* get_address_of_useCompressedString_8() { return &___useCompressedString_8; }
	inline void set_useCompressedString_8(bool value)
	{
		___useCompressedString_8 = value;
	}

	inline static int32_t get_offset_of_betweenscenes_9() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___betweenscenes_9)); }
	inline String_t* get_betweenscenes_9() const { return ___betweenscenes_9; }
	inline String_t** get_address_of_betweenscenes_9() { return &___betweenscenes_9; }
	inline void set_betweenscenes_9(String_t* value)
	{
		___betweenscenes_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betweenscenes_9), (void*)value);
	}

	inline static int32_t get_offset_of_saveString_10() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___saveString_10)); }
	inline String_t* get_saveString_10() const { return ___saveString_10; }
	inline String_t** get_address_of_saveString_10() { return &___saveString_10; }
	inline void set_saveString_10(String_t* value)
	{
		___saveString_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveString_10), (void*)value);
	}

	inline static int32_t get_offset_of_avatarString_11() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___avatarString_11)); }
	inline String_t* get_avatarString_11() const { return ___avatarString_11; }
	inline String_t** get_address_of_avatarString_11() { return &___avatarString_11; }
	inline void set_avatarString_11(String_t* value)
	{
		___avatarString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatarString_11), (void*)value);
	}

	inline static int32_t get_offset_of_compressedString_12() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___compressedString_12)); }
	inline String_t* get_compressedString_12() const { return ___compressedString_12; }
	inline String_t** get_address_of_compressedString_12() { return &___compressedString_12; }
	inline void set_compressedString_12(String_t* value)
	{
		___compressedString_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compressedString_12), (void*)value);
	}

	inline static int32_t get_offset_of_saveStringSize_13() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___saveStringSize_13)); }
	inline int32_t get_saveStringSize_13() const { return ___saveStringSize_13; }
	inline int32_t* get_address_of_saveStringSize_13() { return &___saveStringSize_13; }
	inline void set_saveStringSize_13(int32_t value)
	{
		___saveStringSize_13 = value;
	}

	inline static int32_t get_offset_of_avatarStringSize_14() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___avatarStringSize_14)); }
	inline int32_t get_avatarStringSize_14() const { return ___avatarStringSize_14; }
	inline int32_t* get_address_of_avatarStringSize_14() { return &___avatarStringSize_14; }
	inline void set_avatarStringSize_14(int32_t value)
	{
		___avatarStringSize_14 = value;
	}

	inline static int32_t get_offset_of_compressedStringSize_15() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___compressedStringSize_15)); }
	inline int32_t get_compressedStringSize_15() const { return ___compressedStringSize_15; }
	inline int32_t* get_address_of_compressedStringSize_15() { return &___compressedStringSize_15; }
	inline void set_compressedStringSize_15(int32_t value)
	{
		___compressedStringSize_15 = value;
	}

	inline static int32_t get_offset_of_asciiStringSize_16() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___asciiStringSize_16)); }
	inline int32_t get_asciiStringSize_16() const { return ___asciiStringSize_16; }
	inline int32_t* get_address_of_asciiStringSize_16() { return &___asciiStringSize_16; }
	inline void set_asciiStringSize_16(int32_t value)
	{
		___asciiStringSize_16 = value;
	}

	inline static int32_t get_offset_of_binarySize_17() { return static_cast<int32_t>(offsetof(RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9, ___binarySize_17)); }
	inline int32_t get_binarySize_17() const { return ___binarySize_17; }
	inline int32_t* get_address_of_binarySize_17() { return &___binarySize_17; }
	inline void set_binarySize_17(int32_t value)
	{
		___binarySize_17 = value;
	}
};


// UMA.CharacterSystem.Examples.SampleCode
struct  SampleCode_tE1C986A981756357400275304187A303DCBB2173  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar UMA.CharacterSystem.Examples.SampleCode::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::SlotPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SlotPrefab_5;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::WardrobePrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WardrobePrefab_6;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::SlotPanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___SlotPanel_7;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::WardrobePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WardrobePanel_8;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::ColorPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ColorPrefab_9;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::DnaPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DnaPrefab_10;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::LabelPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LabelPrefab_11;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::GeneralHelpText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___GeneralHelpText_12;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::WardrobeHelpText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WardrobeHelpText_13;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::ColorsHelpText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ColorsHelpText_14;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::DnaHelpText
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___DnaHelpText_15;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::AvatarPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___AvatarPrefab_16;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::NoBuildPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___NoBuildPrefab_17;
	// UMA.Examples.UMAMouseOrbitImproved UMA.CharacterSystem.Examples.SampleCode::Orbiter
	UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * ___Orbiter_18;
	// UMA.SharedColorTable UMA.CharacterSystem.Examples.SampleCode::HairColor
	SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * ___HairColor_19;
	// UMA.SharedColorTable UMA.CharacterSystem.Examples.SampleCode::SkinColor
	SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * ___SkinColor_20;
	// UMA.SharedColorTable UMA.CharacterSystem.Examples.SampleCode::EyesColor
	SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * ___EyesColor_21;
	// UMA.SharedColorTable UMA.CharacterSystem.Examples.SampleCode::ClothingColor
	SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * ___ClothingColor_22;
	// UnityEngine.UI.Dropdown UMA.CharacterSystem.Examples.SampleCode::RaceDropdown
	Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * ___RaceDropdown_23;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SampleCode::CharacterUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___CharacterUI_24;
	// System.Boolean UMA.CharacterSystem.Examples.SampleCode::PreloadAndUnload
	bool ___PreloadAndUnload_25;
	// UnityEngine.UI.Slider UMA.CharacterSystem.Examples.SampleCode::TestSlider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___TestSlider_26;
	// UMA.CharacterSystem.UMAWardrobeCollection UMA.CharacterSystem.Examples.SampleCode::CollectionToAdd
	UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70 * ___CollectionToAdd_27;
	// System.Boolean UMA.CharacterSystem.Examples.SampleCode::UseHighresModels
	bool ___UseHighresModels_28;
	// System.String UMA.CharacterSystem.Examples.SampleCode::betweenscenes
	String_t* ___betweenscenes_29;
	// System.String UMA.CharacterSystem.Examples.SampleCode::saveString
	String_t* ___saveString_30;
	// System.String UMA.CharacterSystem.Examples.SampleCode::avatarString
	String_t* ___avatarString_31;
	// System.String UMA.CharacterSystem.Examples.SampleCode::compressedString
	String_t* ___compressedString_32;
	// System.Int32 UMA.CharacterSystem.Examples.SampleCode::saveStringSize
	int32_t ___saveStringSize_33;
	// System.Int32 UMA.CharacterSystem.Examples.SampleCode::avatarStringSize
	int32_t ___avatarStringSize_34;
	// System.Int32 UMA.CharacterSystem.Examples.SampleCode::compressedStringSize
	int32_t ___compressedStringSize_35;
	// System.Int32 UMA.CharacterSystem.Examples.SampleCode::asciiStringSize
	int32_t ___asciiStringSize_36;
	// System.Int32 UMA.CharacterSystem.Examples.SampleCode::binarySize
	int32_t ___binarySize_37;
	// System.Collections.Generic.List`1<UMA.RaceData> UMA.CharacterSystem.Examples.SampleCode::races
	List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * ___races_38;
	// UMA.SharedColorTable UMA.CharacterSystem.Examples.SampleCode::SkinColors
	SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * ___SkinColors_39;
	// UMA.SharedColorTable UMA.CharacterSystem.Examples.SampleCode::HairColors
	SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * ___HairColors_40;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_SlotPrefab_5() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___SlotPrefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SlotPrefab_5() const { return ___SlotPrefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SlotPrefab_5() { return &___SlotPrefab_5; }
	inline void set_SlotPrefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SlotPrefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlotPrefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_WardrobePrefab_6() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___WardrobePrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WardrobePrefab_6() const { return ___WardrobePrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WardrobePrefab_6() { return &___WardrobePrefab_6; }
	inline void set_WardrobePrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WardrobePrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WardrobePrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_SlotPanel_7() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___SlotPanel_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_SlotPanel_7() const { return ___SlotPanel_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_SlotPanel_7() { return &___SlotPanel_7; }
	inline void set_SlotPanel_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___SlotPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlotPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_WardrobePanel_8() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___WardrobePanel_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WardrobePanel_8() const { return ___WardrobePanel_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WardrobePanel_8() { return &___WardrobePanel_8; }
	inline void set_WardrobePanel_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WardrobePanel_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WardrobePanel_8), (void*)value);
	}

	inline static int32_t get_offset_of_ColorPrefab_9() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___ColorPrefab_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ColorPrefab_9() const { return ___ColorPrefab_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ColorPrefab_9() { return &___ColorPrefab_9; }
	inline void set_ColorPrefab_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ColorPrefab_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorPrefab_9), (void*)value);
	}

	inline static int32_t get_offset_of_DnaPrefab_10() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___DnaPrefab_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DnaPrefab_10() const { return ___DnaPrefab_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DnaPrefab_10() { return &___DnaPrefab_10; }
	inline void set_DnaPrefab_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DnaPrefab_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DnaPrefab_10), (void*)value);
	}

	inline static int32_t get_offset_of_LabelPrefab_11() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___LabelPrefab_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LabelPrefab_11() const { return ___LabelPrefab_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LabelPrefab_11() { return &___LabelPrefab_11; }
	inline void set_LabelPrefab_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LabelPrefab_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LabelPrefab_11), (void*)value);
	}

	inline static int32_t get_offset_of_GeneralHelpText_12() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___GeneralHelpText_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_GeneralHelpText_12() const { return ___GeneralHelpText_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_GeneralHelpText_12() { return &___GeneralHelpText_12; }
	inline void set_GeneralHelpText_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___GeneralHelpText_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GeneralHelpText_12), (void*)value);
	}

	inline static int32_t get_offset_of_WardrobeHelpText_13() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___WardrobeHelpText_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WardrobeHelpText_13() const { return ___WardrobeHelpText_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WardrobeHelpText_13() { return &___WardrobeHelpText_13; }
	inline void set_WardrobeHelpText_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WardrobeHelpText_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WardrobeHelpText_13), (void*)value);
	}

	inline static int32_t get_offset_of_ColorsHelpText_14() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___ColorsHelpText_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ColorsHelpText_14() const { return ___ColorsHelpText_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ColorsHelpText_14() { return &___ColorsHelpText_14; }
	inline void set_ColorsHelpText_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ColorsHelpText_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorsHelpText_14), (void*)value);
	}

	inline static int32_t get_offset_of_DnaHelpText_15() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___DnaHelpText_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_DnaHelpText_15() const { return ___DnaHelpText_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_DnaHelpText_15() { return &___DnaHelpText_15; }
	inline void set_DnaHelpText_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___DnaHelpText_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DnaHelpText_15), (void*)value);
	}

	inline static int32_t get_offset_of_AvatarPrefab_16() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___AvatarPrefab_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_AvatarPrefab_16() const { return ___AvatarPrefab_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_AvatarPrefab_16() { return &___AvatarPrefab_16; }
	inline void set_AvatarPrefab_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___AvatarPrefab_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AvatarPrefab_16), (void*)value);
	}

	inline static int32_t get_offset_of_NoBuildPrefab_17() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___NoBuildPrefab_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_NoBuildPrefab_17() const { return ___NoBuildPrefab_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_NoBuildPrefab_17() { return &___NoBuildPrefab_17; }
	inline void set_NoBuildPrefab_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___NoBuildPrefab_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NoBuildPrefab_17), (void*)value);
	}

	inline static int32_t get_offset_of_Orbiter_18() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___Orbiter_18)); }
	inline UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * get_Orbiter_18() const { return ___Orbiter_18; }
	inline UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F ** get_address_of_Orbiter_18() { return &___Orbiter_18; }
	inline void set_Orbiter_18(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * value)
	{
		___Orbiter_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Orbiter_18), (void*)value);
	}

	inline static int32_t get_offset_of_HairColor_19() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___HairColor_19)); }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * get_HairColor_19() const { return ___HairColor_19; }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 ** get_address_of_HairColor_19() { return &___HairColor_19; }
	inline void set_HairColor_19(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * value)
	{
		___HairColor_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HairColor_19), (void*)value);
	}

	inline static int32_t get_offset_of_SkinColor_20() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___SkinColor_20)); }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * get_SkinColor_20() const { return ___SkinColor_20; }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 ** get_address_of_SkinColor_20() { return &___SkinColor_20; }
	inline void set_SkinColor_20(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * value)
	{
		___SkinColor_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkinColor_20), (void*)value);
	}

	inline static int32_t get_offset_of_EyesColor_21() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___EyesColor_21)); }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * get_EyesColor_21() const { return ___EyesColor_21; }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 ** get_address_of_EyesColor_21() { return &___EyesColor_21; }
	inline void set_EyesColor_21(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * value)
	{
		___EyesColor_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EyesColor_21), (void*)value);
	}

	inline static int32_t get_offset_of_ClothingColor_22() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___ClothingColor_22)); }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * get_ClothingColor_22() const { return ___ClothingColor_22; }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 ** get_address_of_ClothingColor_22() { return &___ClothingColor_22; }
	inline void set_ClothingColor_22(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * value)
	{
		___ClothingColor_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClothingColor_22), (void*)value);
	}

	inline static int32_t get_offset_of_RaceDropdown_23() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___RaceDropdown_23)); }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * get_RaceDropdown_23() const { return ___RaceDropdown_23; }
	inline Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 ** get_address_of_RaceDropdown_23() { return &___RaceDropdown_23; }
	inline void set_RaceDropdown_23(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * value)
	{
		___RaceDropdown_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RaceDropdown_23), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterUI_24() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___CharacterUI_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_CharacterUI_24() const { return ___CharacterUI_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_CharacterUI_24() { return &___CharacterUI_24; }
	inline void set_CharacterUI_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___CharacterUI_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterUI_24), (void*)value);
	}

	inline static int32_t get_offset_of_PreloadAndUnload_25() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___PreloadAndUnload_25)); }
	inline bool get_PreloadAndUnload_25() const { return ___PreloadAndUnload_25; }
	inline bool* get_address_of_PreloadAndUnload_25() { return &___PreloadAndUnload_25; }
	inline void set_PreloadAndUnload_25(bool value)
	{
		___PreloadAndUnload_25 = value;
	}

	inline static int32_t get_offset_of_TestSlider_26() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___TestSlider_26)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_TestSlider_26() const { return ___TestSlider_26; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_TestSlider_26() { return &___TestSlider_26; }
	inline void set_TestSlider_26(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___TestSlider_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TestSlider_26), (void*)value);
	}

	inline static int32_t get_offset_of_CollectionToAdd_27() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___CollectionToAdd_27)); }
	inline UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70 * get_CollectionToAdd_27() const { return ___CollectionToAdd_27; }
	inline UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70 ** get_address_of_CollectionToAdd_27() { return &___CollectionToAdd_27; }
	inline void set_CollectionToAdd_27(UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70 * value)
	{
		___CollectionToAdd_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CollectionToAdd_27), (void*)value);
	}

	inline static int32_t get_offset_of_UseHighresModels_28() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___UseHighresModels_28)); }
	inline bool get_UseHighresModels_28() const { return ___UseHighresModels_28; }
	inline bool* get_address_of_UseHighresModels_28() { return &___UseHighresModels_28; }
	inline void set_UseHighresModels_28(bool value)
	{
		___UseHighresModels_28 = value;
	}

	inline static int32_t get_offset_of_betweenscenes_29() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___betweenscenes_29)); }
	inline String_t* get_betweenscenes_29() const { return ___betweenscenes_29; }
	inline String_t** get_address_of_betweenscenes_29() { return &___betweenscenes_29; }
	inline void set_betweenscenes_29(String_t* value)
	{
		___betweenscenes_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betweenscenes_29), (void*)value);
	}

	inline static int32_t get_offset_of_saveString_30() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___saveString_30)); }
	inline String_t* get_saveString_30() const { return ___saveString_30; }
	inline String_t** get_address_of_saveString_30() { return &___saveString_30; }
	inline void set_saveString_30(String_t* value)
	{
		___saveString_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveString_30), (void*)value);
	}

	inline static int32_t get_offset_of_avatarString_31() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___avatarString_31)); }
	inline String_t* get_avatarString_31() const { return ___avatarString_31; }
	inline String_t** get_address_of_avatarString_31() { return &___avatarString_31; }
	inline void set_avatarString_31(String_t* value)
	{
		___avatarString_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatarString_31), (void*)value);
	}

	inline static int32_t get_offset_of_compressedString_32() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___compressedString_32)); }
	inline String_t* get_compressedString_32() const { return ___compressedString_32; }
	inline String_t** get_address_of_compressedString_32() { return &___compressedString_32; }
	inline void set_compressedString_32(String_t* value)
	{
		___compressedString_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compressedString_32), (void*)value);
	}

	inline static int32_t get_offset_of_saveStringSize_33() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___saveStringSize_33)); }
	inline int32_t get_saveStringSize_33() const { return ___saveStringSize_33; }
	inline int32_t* get_address_of_saveStringSize_33() { return &___saveStringSize_33; }
	inline void set_saveStringSize_33(int32_t value)
	{
		___saveStringSize_33 = value;
	}

	inline static int32_t get_offset_of_avatarStringSize_34() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___avatarStringSize_34)); }
	inline int32_t get_avatarStringSize_34() const { return ___avatarStringSize_34; }
	inline int32_t* get_address_of_avatarStringSize_34() { return &___avatarStringSize_34; }
	inline void set_avatarStringSize_34(int32_t value)
	{
		___avatarStringSize_34 = value;
	}

	inline static int32_t get_offset_of_compressedStringSize_35() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___compressedStringSize_35)); }
	inline int32_t get_compressedStringSize_35() const { return ___compressedStringSize_35; }
	inline int32_t* get_address_of_compressedStringSize_35() { return &___compressedStringSize_35; }
	inline void set_compressedStringSize_35(int32_t value)
	{
		___compressedStringSize_35 = value;
	}

	inline static int32_t get_offset_of_asciiStringSize_36() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___asciiStringSize_36)); }
	inline int32_t get_asciiStringSize_36() const { return ___asciiStringSize_36; }
	inline int32_t* get_address_of_asciiStringSize_36() { return &___asciiStringSize_36; }
	inline void set_asciiStringSize_36(int32_t value)
	{
		___asciiStringSize_36 = value;
	}

	inline static int32_t get_offset_of_binarySize_37() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___binarySize_37)); }
	inline int32_t get_binarySize_37() const { return ___binarySize_37; }
	inline int32_t* get_address_of_binarySize_37() { return &___binarySize_37; }
	inline void set_binarySize_37(int32_t value)
	{
		___binarySize_37 = value;
	}

	inline static int32_t get_offset_of_races_38() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___races_38)); }
	inline List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * get_races_38() const { return ___races_38; }
	inline List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 ** get_address_of_races_38() { return &___races_38; }
	inline void set_races_38(List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * value)
	{
		___races_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___races_38), (void*)value);
	}

	inline static int32_t get_offset_of_SkinColors_39() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___SkinColors_39)); }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * get_SkinColors_39() const { return ___SkinColors_39; }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 ** get_address_of_SkinColors_39() { return &___SkinColors_39; }
	inline void set_SkinColors_39(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * value)
	{
		___SkinColors_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SkinColors_39), (void*)value);
	}

	inline static int32_t get_offset_of_HairColors_40() { return static_cast<int32_t>(offsetof(SampleCode_tE1C986A981756357400275304187A303DCBB2173, ___HairColors_40)); }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * get_HairColors_40() const { return ___HairColors_40; }
	inline SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 ** get_address_of_HairColors_40() { return &___HairColors_40; }
	inline void set_HairColors_40(SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * value)
	{
		___HairColors_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HairColors_40), (void*)value);
	}
};


// UMA.CharacterSystem.Examples.SlotHandler
struct  SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar UMA.CharacterSystem.Examples.SlotHandler::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SlotHandler::WardrobePanel
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WardrobePanel_5;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SlotHandler::WardrobeButtonPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___WardrobeButtonPrefab_6;
	// UnityEngine.GameObject UMA.CharacterSystem.Examples.SlotHandler::LabelPrefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___LabelPrefab_7;
	// System.String UMA.CharacterSystem.Examples.SlotHandler::SlotName
	String_t* ___SlotName_8;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_WardrobePanel_5() { return static_cast<int32_t>(offsetof(SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A, ___WardrobePanel_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WardrobePanel_5() const { return ___WardrobePanel_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WardrobePanel_5() { return &___WardrobePanel_5; }
	inline void set_WardrobePanel_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WardrobePanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WardrobePanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_WardrobeButtonPrefab_6() { return static_cast<int32_t>(offsetof(SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A, ___WardrobeButtonPrefab_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_WardrobeButtonPrefab_6() const { return ___WardrobeButtonPrefab_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_WardrobeButtonPrefab_6() { return &___WardrobeButtonPrefab_6; }
	inline void set_WardrobeButtonPrefab_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___WardrobeButtonPrefab_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WardrobeButtonPrefab_6), (void*)value);
	}

	inline static int32_t get_offset_of_LabelPrefab_7() { return static_cast<int32_t>(offsetof(SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A, ___LabelPrefab_7)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_LabelPrefab_7() const { return ___LabelPrefab_7; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_LabelPrefab_7() { return &___LabelPrefab_7; }
	inline void set_LabelPrefab_7(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___LabelPrefab_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LabelPrefab_7), (void*)value);
	}

	inline static int32_t get_offset_of_SlotName_8() { return static_cast<int32_t>(offsetof(SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A, ___SlotName_8)); }
	inline String_t* get_SlotName_8() const { return ___SlotName_8; }
	inline String_t** get_address_of_SlotName_8() { return &___SlotName_8; }
	inline void set_SlotName_8(String_t* value)
	{
		___SlotName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SlotName_8), (void*)value);
	}
};


// TrialSave
struct  TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.CharacterSystem.DynamicCharacterAvatar TrialSave::Avatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar_4;
	// UMA.UMARandomAvatar TrialSave::Randomizer
	UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * ___Randomizer_5;
	// System.Boolean TrialSave::useAvatarDefinition
	bool ___useAvatarDefinition_6;
	// System.Boolean TrialSave::useCompressedString
	bool ___useCompressedString_7;
	// System.String TrialSave::betweenscenes
	String_t* ___betweenscenes_8;
	// System.String TrialSave::saveString
	String_t* ___saveString_9;
	// System.String TrialSave::avatarString
	String_t* ___avatarString_10;
	// System.String TrialSave::compressedString
	String_t* ___compressedString_11;
	// System.Int32 TrialSave::saveStringSize
	int32_t ___saveStringSize_12;
	// System.Int32 TrialSave::avatarStringSize
	int32_t ___avatarStringSize_13;
	// System.Int32 TrialSave::compressedStringSize
	int32_t ___compressedStringSize_14;
	// System.Int32 TrialSave::asciiStringSize
	int32_t ___asciiStringSize_15;
	// System.Int32 TrialSave::binarySize
	int32_t ___binarySize_16;

public:
	inline static int32_t get_offset_of_Avatar_4() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___Avatar_4)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_Avatar_4() const { return ___Avatar_4; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_Avatar_4() { return &___Avatar_4; }
	inline void set_Avatar_4(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___Avatar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Avatar_4), (void*)value);
	}

	inline static int32_t get_offset_of_Randomizer_5() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___Randomizer_5)); }
	inline UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * get_Randomizer_5() const { return ___Randomizer_5; }
	inline UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 ** get_address_of_Randomizer_5() { return &___Randomizer_5; }
	inline void set_Randomizer_5(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * value)
	{
		___Randomizer_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Randomizer_5), (void*)value);
	}

	inline static int32_t get_offset_of_useAvatarDefinition_6() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___useAvatarDefinition_6)); }
	inline bool get_useAvatarDefinition_6() const { return ___useAvatarDefinition_6; }
	inline bool* get_address_of_useAvatarDefinition_6() { return &___useAvatarDefinition_6; }
	inline void set_useAvatarDefinition_6(bool value)
	{
		___useAvatarDefinition_6 = value;
	}

	inline static int32_t get_offset_of_useCompressedString_7() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___useCompressedString_7)); }
	inline bool get_useCompressedString_7() const { return ___useCompressedString_7; }
	inline bool* get_address_of_useCompressedString_7() { return &___useCompressedString_7; }
	inline void set_useCompressedString_7(bool value)
	{
		___useCompressedString_7 = value;
	}

	inline static int32_t get_offset_of_betweenscenes_8() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___betweenscenes_8)); }
	inline String_t* get_betweenscenes_8() const { return ___betweenscenes_8; }
	inline String_t** get_address_of_betweenscenes_8() { return &___betweenscenes_8; }
	inline void set_betweenscenes_8(String_t* value)
	{
		___betweenscenes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___betweenscenes_8), (void*)value);
	}

	inline static int32_t get_offset_of_saveString_9() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___saveString_9)); }
	inline String_t* get_saveString_9() const { return ___saveString_9; }
	inline String_t** get_address_of_saveString_9() { return &___saveString_9; }
	inline void set_saveString_9(String_t* value)
	{
		___saveString_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveString_9), (void*)value);
	}

	inline static int32_t get_offset_of_avatarString_10() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___avatarString_10)); }
	inline String_t* get_avatarString_10() const { return ___avatarString_10; }
	inline String_t** get_address_of_avatarString_10() { return &___avatarString_10; }
	inline void set_avatarString_10(String_t* value)
	{
		___avatarString_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___avatarString_10), (void*)value);
	}

	inline static int32_t get_offset_of_compressedString_11() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___compressedString_11)); }
	inline String_t* get_compressedString_11() const { return ___compressedString_11; }
	inline String_t** get_address_of_compressedString_11() { return &___compressedString_11; }
	inline void set_compressedString_11(String_t* value)
	{
		___compressedString_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compressedString_11), (void*)value);
	}

	inline static int32_t get_offset_of_saveStringSize_12() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___saveStringSize_12)); }
	inline int32_t get_saveStringSize_12() const { return ___saveStringSize_12; }
	inline int32_t* get_address_of_saveStringSize_12() { return &___saveStringSize_12; }
	inline void set_saveStringSize_12(int32_t value)
	{
		___saveStringSize_12 = value;
	}

	inline static int32_t get_offset_of_avatarStringSize_13() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___avatarStringSize_13)); }
	inline int32_t get_avatarStringSize_13() const { return ___avatarStringSize_13; }
	inline int32_t* get_address_of_avatarStringSize_13() { return &___avatarStringSize_13; }
	inline void set_avatarStringSize_13(int32_t value)
	{
		___avatarStringSize_13 = value;
	}

	inline static int32_t get_offset_of_compressedStringSize_14() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___compressedStringSize_14)); }
	inline int32_t get_compressedStringSize_14() const { return ___compressedStringSize_14; }
	inline int32_t* get_address_of_compressedStringSize_14() { return &___compressedStringSize_14; }
	inline void set_compressedStringSize_14(int32_t value)
	{
		___compressedStringSize_14 = value;
	}

	inline static int32_t get_offset_of_asciiStringSize_15() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___asciiStringSize_15)); }
	inline int32_t get_asciiStringSize_15() const { return ___asciiStringSize_15; }
	inline int32_t* get_address_of_asciiStringSize_15() { return &___asciiStringSize_15; }
	inline void set_asciiStringSize_15(int32_t value)
	{
		___asciiStringSize_15 = value;
	}

	inline static int32_t get_offset_of_binarySize_16() { return static_cast<int32_t>(offsetof(TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A, ___binarySize_16)); }
	inline int32_t get_binarySize_16() const { return ___binarySize_16; }
	inline int32_t* get_address_of_binarySize_16() { return &___binarySize_16; }
	inline void set_binarySize_16(int32_t value)
	{
		___binarySize_16 = value;
	}
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


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UMA.UMAAvatarBase
struct  UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.UMAContextBase UMA.UMAAvatarBase::context
	UMAContextBase_tBAD660674F16E458A89FD79D142BE0EC5FF63345 * ___context_4;
	// UMA.UMAData UMA.UMAAvatarBase::umaData
	UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData_5;
	// UMA.UMARendererAsset UMA.UMAAvatarBase::defaultRendererAsset
	UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2 * ___defaultRendererAsset_6;
	// UMA.UMARecipeBase UMA.UMAAvatarBase::umaRecipe
	UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35 * ___umaRecipe_7;
	// UMA.UMARecipeBase[] UMA.UMAAvatarBase::umaAdditionalRecipes
	UMARecipeBaseU5BU5D_tD0B1BD7F4B191E0877EE80A9577CEAAD814807E6* ___umaAdditionalRecipes_8;
	// UMA.UMAGeneratorBase UMA.UMAAvatarBase::umaGenerator
	UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3 * ___umaGenerator_9;
	// UnityEngine.RuntimeAnimatorController UMA.UMAAvatarBase::animationController
	RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * ___animationController_10;
	// UMA.RaceData UMA.UMAAvatarBase::umaRace
	RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * ___umaRace_11;
	// UMA.UMADataEvent UMA.UMAAvatarBase::CharacterCreated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterCreated_12;
	// UMA.UMADataEvent UMA.UMAAvatarBase::CharacterBegun
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterBegun_13;
	// UMA.UMADataEvent UMA.UMAAvatarBase::CharacterDestroyed
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterDestroyed_14;
	// UMA.UMADataEvent UMA.UMAAvatarBase::CharacterUpdated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterUpdated_15;
	// UMA.UMADataEvent UMA.UMAAvatarBase::CharacterDnaUpdated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___CharacterDnaUpdated_16;
	// UMA.UMADataEvent UMA.UMAAvatarBase::AnimatorStateSaved
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___AnimatorStateSaved_17;
	// UMA.UMADataEvent UMA.UMAAvatarBase::AnimatorStateRestored
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___AnimatorStateRestored_18;

public:
	inline static int32_t get_offset_of_context_4() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___context_4)); }
	inline UMAContextBase_tBAD660674F16E458A89FD79D142BE0EC5FF63345 * get_context_4() const { return ___context_4; }
	inline UMAContextBase_tBAD660674F16E458A89FD79D142BE0EC5FF63345 ** get_address_of_context_4() { return &___context_4; }
	inline void set_context_4(UMAContextBase_tBAD660674F16E458A89FD79D142BE0EC5FF63345 * value)
	{
		___context_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___context_4), (void*)value);
	}

	inline static int32_t get_offset_of_umaData_5() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___umaData_5)); }
	inline UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * get_umaData_5() const { return ___umaData_5; }
	inline UMAData_t696E4E970704E7893146E28998A230A9F2947B3C ** get_address_of_umaData_5() { return &___umaData_5; }
	inline void set_umaData_5(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * value)
	{
		___umaData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaData_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultRendererAsset_6() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___defaultRendererAsset_6)); }
	inline UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2 * get_defaultRendererAsset_6() const { return ___defaultRendererAsset_6; }
	inline UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2 ** get_address_of_defaultRendererAsset_6() { return &___defaultRendererAsset_6; }
	inline void set_defaultRendererAsset_6(UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2 * value)
	{
		___defaultRendererAsset_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultRendererAsset_6), (void*)value);
	}

	inline static int32_t get_offset_of_umaRecipe_7() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___umaRecipe_7)); }
	inline UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35 * get_umaRecipe_7() const { return ___umaRecipe_7; }
	inline UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35 ** get_address_of_umaRecipe_7() { return &___umaRecipe_7; }
	inline void set_umaRecipe_7(UMARecipeBase_t419BB6B480EFD3594EFB6D3C7992D52163AAAB35 * value)
	{
		___umaRecipe_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaRecipe_7), (void*)value);
	}

	inline static int32_t get_offset_of_umaAdditionalRecipes_8() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___umaAdditionalRecipes_8)); }
	inline UMARecipeBaseU5BU5D_tD0B1BD7F4B191E0877EE80A9577CEAAD814807E6* get_umaAdditionalRecipes_8() const { return ___umaAdditionalRecipes_8; }
	inline UMARecipeBaseU5BU5D_tD0B1BD7F4B191E0877EE80A9577CEAAD814807E6** get_address_of_umaAdditionalRecipes_8() { return &___umaAdditionalRecipes_8; }
	inline void set_umaAdditionalRecipes_8(UMARecipeBaseU5BU5D_tD0B1BD7F4B191E0877EE80A9577CEAAD814807E6* value)
	{
		___umaAdditionalRecipes_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaAdditionalRecipes_8), (void*)value);
	}

	inline static int32_t get_offset_of_umaGenerator_9() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___umaGenerator_9)); }
	inline UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3 * get_umaGenerator_9() const { return ___umaGenerator_9; }
	inline UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3 ** get_address_of_umaGenerator_9() { return &___umaGenerator_9; }
	inline void set_umaGenerator_9(UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3 * value)
	{
		___umaGenerator_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaGenerator_9), (void*)value);
	}

	inline static int32_t get_offset_of_animationController_10() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___animationController_10)); }
	inline RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * get_animationController_10() const { return ___animationController_10; }
	inline RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB ** get_address_of_animationController_10() { return &___animationController_10; }
	inline void set_animationController_10(RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB * value)
	{
		___animationController_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animationController_10), (void*)value);
	}

	inline static int32_t get_offset_of_umaRace_11() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___umaRace_11)); }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * get_umaRace_11() const { return ___umaRace_11; }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F ** get_address_of_umaRace_11() { return &___umaRace_11; }
	inline void set_umaRace_11(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * value)
	{
		___umaRace_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaRace_11), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterCreated_12() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___CharacterCreated_12)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterCreated_12() const { return ___CharacterCreated_12; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterCreated_12() { return &___CharacterCreated_12; }
	inline void set_CharacterCreated_12(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterCreated_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterCreated_12), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterBegun_13() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___CharacterBegun_13)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterBegun_13() const { return ___CharacterBegun_13; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterBegun_13() { return &___CharacterBegun_13; }
	inline void set_CharacterBegun_13(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterBegun_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterBegun_13), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterDestroyed_14() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___CharacterDestroyed_14)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterDestroyed_14() const { return ___CharacterDestroyed_14; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterDestroyed_14() { return &___CharacterDestroyed_14; }
	inline void set_CharacterDestroyed_14(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterDestroyed_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterDestroyed_14), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterUpdated_15() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___CharacterUpdated_15)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterUpdated_15() const { return ___CharacterUpdated_15; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterUpdated_15() { return &___CharacterUpdated_15; }
	inline void set_CharacterUpdated_15(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterUpdated_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterUpdated_15), (void*)value);
	}

	inline static int32_t get_offset_of_CharacterDnaUpdated_16() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___CharacterDnaUpdated_16)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_CharacterDnaUpdated_16() const { return ___CharacterDnaUpdated_16; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_CharacterDnaUpdated_16() { return &___CharacterDnaUpdated_16; }
	inline void set_CharacterDnaUpdated_16(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___CharacterDnaUpdated_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CharacterDnaUpdated_16), (void*)value);
	}

	inline static int32_t get_offset_of_AnimatorStateSaved_17() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___AnimatorStateSaved_17)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_AnimatorStateSaved_17() const { return ___AnimatorStateSaved_17; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_AnimatorStateSaved_17() { return &___AnimatorStateSaved_17; }
	inline void set_AnimatorStateSaved_17(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___AnimatorStateSaved_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimatorStateSaved_17), (void*)value);
	}

	inline static int32_t get_offset_of_AnimatorStateRestored_18() { return static_cast<int32_t>(offsetof(UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9, ___AnimatorStateRestored_18)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_AnimatorStateRestored_18() const { return ___AnimatorStateRestored_18; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_AnimatorStateRestored_18() { return &___AnimatorStateRestored_18; }
	inline void set_AnimatorStateRestored_18(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___AnimatorStateRestored_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AnimatorStateRestored_18), (void*)value);
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


// UMA.Examples.UMAMouseOrbitImproved
struct  UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UMA.Examples.UMAMouseOrbitImproved/mouseBtnOpts UMA.Examples.UMAMouseOrbitImproved::mouseButtonToUse
	int32_t ___mouseButtonToUse_4;
	// UnityEngine.Transform UMA.Examples.UMAMouseOrbitImproved::target
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___target_5;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::distance
	float ___distance_6;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::xSpeed
	float ___xSpeed_7;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::ySpeed
	float ___ySpeed_8;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::scrollrate
	float ___scrollrate_9;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::yMinLimit
	float ___yMinLimit_10;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::yMaxLimit
	float ___yMaxLimit_11;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::distanceMin
	float ___distanceMin_12;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::distanceMax
	float ___distanceMax_13;
	// UnityEngine.Vector3 UMA.Examples.UMAMouseOrbitImproved::Offset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Offset_14;
	// System.Boolean UMA.Examples.UMAMouseOrbitImproved::AlwaysOn
	bool ___AlwaysOn_15;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::ZoomSensitivity
	float ___ZoomSensitivity_16;
	// System.Boolean UMA.Examples.UMAMouseOrbitImproved::singleTouchOrbiting
	bool ___singleTouchOrbiting_17;
	// System.Boolean UMA.Examples.UMAMouseOrbitImproved::pinchToZoom
	bool ___pinchToZoom_18;
	// System.Boolean UMA.Examples.UMAMouseOrbitImproved::Clip
	bool ___Clip_19;
	// UMA.Examples.UMAMouseOrbitImproved/targetOpts UMA.Examples.UMAMouseOrbitImproved::TargetBone
	int32_t ___TargetBone_20;
	// System.String[] UMA.Examples.UMAMouseOrbitImproved::targetStrings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___targetStrings_21;
	// UMA.UMAData UMA.Examples.UMAMouseOrbitImproved::umaData
	UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData_22;
	// UnityEngine.Rigidbody UMA.Examples.UMAMouseOrbitImproved::_rigidbody
	Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * ____rigidbody_23;
	// UnityEngine.GameObject UMA.Examples.UMAMouseOrbitImproved::TargetGO
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___TargetGO_24;
	// System.Boolean UMA.Examples.UMAMouseOrbitImproved::switchingTarget
	bool ___switchingTarget_25;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::smoothing
	float ___smoothing_26;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::defaultx
	float ___defaultx_27;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::defaulty
	float ___defaulty_28;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::defaultdistance
	float ___defaultdistance_29;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::x
	float ___x_30;
	// System.Single UMA.Examples.UMAMouseOrbitImproved::y
	float ___y_31;

public:
	inline static int32_t get_offset_of_mouseButtonToUse_4() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___mouseButtonToUse_4)); }
	inline int32_t get_mouseButtonToUse_4() const { return ___mouseButtonToUse_4; }
	inline int32_t* get_address_of_mouseButtonToUse_4() { return &___mouseButtonToUse_4; }
	inline void set_mouseButtonToUse_4(int32_t value)
	{
		___mouseButtonToUse_4 = value;
	}

	inline static int32_t get_offset_of_target_5() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___target_5)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_target_5() const { return ___target_5; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_target_5() { return &___target_5; }
	inline void set_target_5(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___target_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___target_5), (void*)value);
	}

	inline static int32_t get_offset_of_distance_6() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___distance_6)); }
	inline float get_distance_6() const { return ___distance_6; }
	inline float* get_address_of_distance_6() { return &___distance_6; }
	inline void set_distance_6(float value)
	{
		___distance_6 = value;
	}

	inline static int32_t get_offset_of_xSpeed_7() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___xSpeed_7)); }
	inline float get_xSpeed_7() const { return ___xSpeed_7; }
	inline float* get_address_of_xSpeed_7() { return &___xSpeed_7; }
	inline void set_xSpeed_7(float value)
	{
		___xSpeed_7 = value;
	}

	inline static int32_t get_offset_of_ySpeed_8() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___ySpeed_8)); }
	inline float get_ySpeed_8() const { return ___ySpeed_8; }
	inline float* get_address_of_ySpeed_8() { return &___ySpeed_8; }
	inline void set_ySpeed_8(float value)
	{
		___ySpeed_8 = value;
	}

	inline static int32_t get_offset_of_scrollrate_9() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___scrollrate_9)); }
	inline float get_scrollrate_9() const { return ___scrollrate_9; }
	inline float* get_address_of_scrollrate_9() { return &___scrollrate_9; }
	inline void set_scrollrate_9(float value)
	{
		___scrollrate_9 = value;
	}

	inline static int32_t get_offset_of_yMinLimit_10() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___yMinLimit_10)); }
	inline float get_yMinLimit_10() const { return ___yMinLimit_10; }
	inline float* get_address_of_yMinLimit_10() { return &___yMinLimit_10; }
	inline void set_yMinLimit_10(float value)
	{
		___yMinLimit_10 = value;
	}

	inline static int32_t get_offset_of_yMaxLimit_11() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___yMaxLimit_11)); }
	inline float get_yMaxLimit_11() const { return ___yMaxLimit_11; }
	inline float* get_address_of_yMaxLimit_11() { return &___yMaxLimit_11; }
	inline void set_yMaxLimit_11(float value)
	{
		___yMaxLimit_11 = value;
	}

	inline static int32_t get_offset_of_distanceMin_12() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___distanceMin_12)); }
	inline float get_distanceMin_12() const { return ___distanceMin_12; }
	inline float* get_address_of_distanceMin_12() { return &___distanceMin_12; }
	inline void set_distanceMin_12(float value)
	{
		___distanceMin_12 = value;
	}

	inline static int32_t get_offset_of_distanceMax_13() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___distanceMax_13)); }
	inline float get_distanceMax_13() const { return ___distanceMax_13; }
	inline float* get_address_of_distanceMax_13() { return &___distanceMax_13; }
	inline void set_distanceMax_13(float value)
	{
		___distanceMax_13 = value;
	}

	inline static int32_t get_offset_of_Offset_14() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___Offset_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Offset_14() const { return ___Offset_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Offset_14() { return &___Offset_14; }
	inline void set_Offset_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Offset_14 = value;
	}

	inline static int32_t get_offset_of_AlwaysOn_15() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___AlwaysOn_15)); }
	inline bool get_AlwaysOn_15() const { return ___AlwaysOn_15; }
	inline bool* get_address_of_AlwaysOn_15() { return &___AlwaysOn_15; }
	inline void set_AlwaysOn_15(bool value)
	{
		___AlwaysOn_15 = value;
	}

	inline static int32_t get_offset_of_ZoomSensitivity_16() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___ZoomSensitivity_16)); }
	inline float get_ZoomSensitivity_16() const { return ___ZoomSensitivity_16; }
	inline float* get_address_of_ZoomSensitivity_16() { return &___ZoomSensitivity_16; }
	inline void set_ZoomSensitivity_16(float value)
	{
		___ZoomSensitivity_16 = value;
	}

	inline static int32_t get_offset_of_singleTouchOrbiting_17() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___singleTouchOrbiting_17)); }
	inline bool get_singleTouchOrbiting_17() const { return ___singleTouchOrbiting_17; }
	inline bool* get_address_of_singleTouchOrbiting_17() { return &___singleTouchOrbiting_17; }
	inline void set_singleTouchOrbiting_17(bool value)
	{
		___singleTouchOrbiting_17 = value;
	}

	inline static int32_t get_offset_of_pinchToZoom_18() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___pinchToZoom_18)); }
	inline bool get_pinchToZoom_18() const { return ___pinchToZoom_18; }
	inline bool* get_address_of_pinchToZoom_18() { return &___pinchToZoom_18; }
	inline void set_pinchToZoom_18(bool value)
	{
		___pinchToZoom_18 = value;
	}

	inline static int32_t get_offset_of_Clip_19() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___Clip_19)); }
	inline bool get_Clip_19() const { return ___Clip_19; }
	inline bool* get_address_of_Clip_19() { return &___Clip_19; }
	inline void set_Clip_19(bool value)
	{
		___Clip_19 = value;
	}

	inline static int32_t get_offset_of_TargetBone_20() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___TargetBone_20)); }
	inline int32_t get_TargetBone_20() const { return ___TargetBone_20; }
	inline int32_t* get_address_of_TargetBone_20() { return &___TargetBone_20; }
	inline void set_TargetBone_20(int32_t value)
	{
		___TargetBone_20 = value;
	}

	inline static int32_t get_offset_of_targetStrings_21() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___targetStrings_21)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_targetStrings_21() const { return ___targetStrings_21; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_targetStrings_21() { return &___targetStrings_21; }
	inline void set_targetStrings_21(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___targetStrings_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetStrings_21), (void*)value);
	}

	inline static int32_t get_offset_of_umaData_22() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___umaData_22)); }
	inline UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * get_umaData_22() const { return ___umaData_22; }
	inline UMAData_t696E4E970704E7893146E28998A230A9F2947B3C ** get_address_of_umaData_22() { return &___umaData_22; }
	inline void set_umaData_22(UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * value)
	{
		___umaData_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___umaData_22), (void*)value);
	}

	inline static int32_t get_offset_of__rigidbody_23() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ____rigidbody_23)); }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * get__rigidbody_23() const { return ____rigidbody_23; }
	inline Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A ** get_address_of__rigidbody_23() { return &____rigidbody_23; }
	inline void set__rigidbody_23(Rigidbody_t101F2E2F9F16E765A77429B2DE4527D2047A887A * value)
	{
		____rigidbody_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rigidbody_23), (void*)value);
	}

	inline static int32_t get_offset_of_TargetGO_24() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___TargetGO_24)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_TargetGO_24() const { return ___TargetGO_24; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_TargetGO_24() { return &___TargetGO_24; }
	inline void set_TargetGO_24(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___TargetGO_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TargetGO_24), (void*)value);
	}

	inline static int32_t get_offset_of_switchingTarget_25() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___switchingTarget_25)); }
	inline bool get_switchingTarget_25() const { return ___switchingTarget_25; }
	inline bool* get_address_of_switchingTarget_25() { return &___switchingTarget_25; }
	inline void set_switchingTarget_25(bool value)
	{
		___switchingTarget_25 = value;
	}

	inline static int32_t get_offset_of_smoothing_26() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___smoothing_26)); }
	inline float get_smoothing_26() const { return ___smoothing_26; }
	inline float* get_address_of_smoothing_26() { return &___smoothing_26; }
	inline void set_smoothing_26(float value)
	{
		___smoothing_26 = value;
	}

	inline static int32_t get_offset_of_defaultx_27() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___defaultx_27)); }
	inline float get_defaultx_27() const { return ___defaultx_27; }
	inline float* get_address_of_defaultx_27() { return &___defaultx_27; }
	inline void set_defaultx_27(float value)
	{
		___defaultx_27 = value;
	}

	inline static int32_t get_offset_of_defaulty_28() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___defaulty_28)); }
	inline float get_defaulty_28() const { return ___defaulty_28; }
	inline float* get_address_of_defaulty_28() { return &___defaulty_28; }
	inline void set_defaulty_28(float value)
	{
		___defaulty_28 = value;
	}

	inline static int32_t get_offset_of_defaultdistance_29() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___defaultdistance_29)); }
	inline float get_defaultdistance_29() const { return ___defaultdistance_29; }
	inline float* get_address_of_defaultdistance_29() { return &___defaultdistance_29; }
	inline void set_defaultdistance_29(float value)
	{
		___defaultdistance_29 = value;
	}

	inline static int32_t get_offset_of_x_30() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___x_30)); }
	inline float get_x_30() const { return ___x_30; }
	inline float* get_address_of_x_30() { return &___x_30; }
	inline void set_x_30(float value)
	{
		___x_30 = value;
	}

	inline static int32_t get_offset_of_y_31() { return static_cast<int32_t>(offsetof(UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F, ___y_31)); }
	inline float get_y_31() const { return ___y_31; }
	inline float* get_address_of_y_31() { return &___y_31; }
	inline void set_y_31(float value)
	{
		___y_31 = value;
	}
};


// UMA.UMARandomAvatar
struct  UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.List`1<UMA.UMARandomizer> UMA.UMARandomAvatar::Randomizers
	List_1_tAC98EDD8F2BBF4264BD2802EE3E0BB2FB23CAA3C * ___Randomizers_4;
	// UnityEngine.GameObject UMA.UMARandomAvatar::prefab
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___prefab_5;
	// UnityEngine.GameObject UMA.UMARandomAvatar::ParentObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___ParentObject_6;
	// System.Boolean UMA.UMARandomAvatar::ShowPlaceholder
	bool ___ShowPlaceholder_7;
	// System.Boolean UMA.UMARandomAvatar::GenerateGrid
	bool ___GenerateGrid_8;
	// System.Int32 UMA.UMARandomAvatar::GridXSize
	int32_t ___GridXSize_9;
	// System.Int32 UMA.UMARandomAvatar::GridZSize
	int32_t ___GridZSize_10;
	// System.Single UMA.UMARandomAvatar::GridDistance
	float ___GridDistance_11;
	// System.Single UMA.UMARandomAvatar::RandomOffset
	float ___RandomOffset_12;
	// System.Boolean UMA.UMARandomAvatar::RandomRotation
	bool ___RandomRotation_13;
	// System.String UMA.UMARandomAvatar::NameBase
	String_t* ___NameBase_14;
	// UMA.UMARandomAvatarEvent UMA.UMARandomAvatar::RandomAvatarGenerated
	UMARandomAvatarEvent_tEED218D50DAEAA9738CE034830E7E540AFEBAAC7 * ___RandomAvatarGenerated_15;
	// UMA.CharacterSystem.DynamicCharacterAvatar UMA.UMARandomAvatar::RandomAvatar
	DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___RandomAvatar_16;
	// UnityEngine.GameObject UMA.UMARandomAvatar::character
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___character_17;

public:
	inline static int32_t get_offset_of_Randomizers_4() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___Randomizers_4)); }
	inline List_1_tAC98EDD8F2BBF4264BD2802EE3E0BB2FB23CAA3C * get_Randomizers_4() const { return ___Randomizers_4; }
	inline List_1_tAC98EDD8F2BBF4264BD2802EE3E0BB2FB23CAA3C ** get_address_of_Randomizers_4() { return &___Randomizers_4; }
	inline void set_Randomizers_4(List_1_tAC98EDD8F2BBF4264BD2802EE3E0BB2FB23CAA3C * value)
	{
		___Randomizers_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Randomizers_4), (void*)value);
	}

	inline static int32_t get_offset_of_prefab_5() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___prefab_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_prefab_5() const { return ___prefab_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_prefab_5() { return &___prefab_5; }
	inline void set_prefab_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___prefab_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prefab_5), (void*)value);
	}

	inline static int32_t get_offset_of_ParentObject_6() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___ParentObject_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_ParentObject_6() const { return ___ParentObject_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_ParentObject_6() { return &___ParentObject_6; }
	inline void set_ParentObject_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___ParentObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParentObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_ShowPlaceholder_7() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___ShowPlaceholder_7)); }
	inline bool get_ShowPlaceholder_7() const { return ___ShowPlaceholder_7; }
	inline bool* get_address_of_ShowPlaceholder_7() { return &___ShowPlaceholder_7; }
	inline void set_ShowPlaceholder_7(bool value)
	{
		___ShowPlaceholder_7 = value;
	}

	inline static int32_t get_offset_of_GenerateGrid_8() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___GenerateGrid_8)); }
	inline bool get_GenerateGrid_8() const { return ___GenerateGrid_8; }
	inline bool* get_address_of_GenerateGrid_8() { return &___GenerateGrid_8; }
	inline void set_GenerateGrid_8(bool value)
	{
		___GenerateGrid_8 = value;
	}

	inline static int32_t get_offset_of_GridXSize_9() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___GridXSize_9)); }
	inline int32_t get_GridXSize_9() const { return ___GridXSize_9; }
	inline int32_t* get_address_of_GridXSize_9() { return &___GridXSize_9; }
	inline void set_GridXSize_9(int32_t value)
	{
		___GridXSize_9 = value;
	}

	inline static int32_t get_offset_of_GridZSize_10() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___GridZSize_10)); }
	inline int32_t get_GridZSize_10() const { return ___GridZSize_10; }
	inline int32_t* get_address_of_GridZSize_10() { return &___GridZSize_10; }
	inline void set_GridZSize_10(int32_t value)
	{
		___GridZSize_10 = value;
	}

	inline static int32_t get_offset_of_GridDistance_11() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___GridDistance_11)); }
	inline float get_GridDistance_11() const { return ___GridDistance_11; }
	inline float* get_address_of_GridDistance_11() { return &___GridDistance_11; }
	inline void set_GridDistance_11(float value)
	{
		___GridDistance_11 = value;
	}

	inline static int32_t get_offset_of_RandomOffset_12() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___RandomOffset_12)); }
	inline float get_RandomOffset_12() const { return ___RandomOffset_12; }
	inline float* get_address_of_RandomOffset_12() { return &___RandomOffset_12; }
	inline void set_RandomOffset_12(float value)
	{
		___RandomOffset_12 = value;
	}

	inline static int32_t get_offset_of_RandomRotation_13() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___RandomRotation_13)); }
	inline bool get_RandomRotation_13() const { return ___RandomRotation_13; }
	inline bool* get_address_of_RandomRotation_13() { return &___RandomRotation_13; }
	inline void set_RandomRotation_13(bool value)
	{
		___RandomRotation_13 = value;
	}

	inline static int32_t get_offset_of_NameBase_14() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___NameBase_14)); }
	inline String_t* get_NameBase_14() const { return ___NameBase_14; }
	inline String_t** get_address_of_NameBase_14() { return &___NameBase_14; }
	inline void set_NameBase_14(String_t* value)
	{
		___NameBase_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___NameBase_14), (void*)value);
	}

	inline static int32_t get_offset_of_RandomAvatarGenerated_15() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___RandomAvatarGenerated_15)); }
	inline UMARandomAvatarEvent_tEED218D50DAEAA9738CE034830E7E540AFEBAAC7 * get_RandomAvatarGenerated_15() const { return ___RandomAvatarGenerated_15; }
	inline UMARandomAvatarEvent_tEED218D50DAEAA9738CE034830E7E540AFEBAAC7 ** get_address_of_RandomAvatarGenerated_15() { return &___RandomAvatarGenerated_15; }
	inline void set_RandomAvatarGenerated_15(UMARandomAvatarEvent_tEED218D50DAEAA9738CE034830E7E540AFEBAAC7 * value)
	{
		___RandomAvatarGenerated_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomAvatarGenerated_15), (void*)value);
	}

	inline static int32_t get_offset_of_RandomAvatar_16() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___RandomAvatar_16)); }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * get_RandomAvatar_16() const { return ___RandomAvatar_16; }
	inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 ** get_address_of_RandomAvatar_16() { return &___RandomAvatar_16; }
	inline void set_RandomAvatar_16(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * value)
	{
		___RandomAvatar_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RandomAvatar_16), (void*)value);
	}

	inline static int32_t get_offset_of_character_17() { return static_cast<int32_t>(offsetof(UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6, ___character_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_character_17() const { return ___character_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_character_17() { return &___character_17; }
	inline void set_character_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___character_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___character_17), (void*)value);
	}
};


// UMA.UMATextRecipe
struct  UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB  : public UMAPackedRecipeBase_t5BD5C2A7FEB6745C08E9DC1B6A9C009344B9F785
{
public:
	// System.String UMA.UMATextRecipe::recipeType
	String_t* ___recipeType_9;
	// System.String UMA.UMATextRecipe::DisplayValue
	String_t* ___DisplayValue_10;
	// System.Collections.Generic.List`1<System.String> UMA.UMATextRecipe::compatibleRaces
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___compatibleRaces_11;
	// System.Collections.Generic.List`1<UMA.CharacterSystem.WardrobeRecipeThumb> UMA.UMATextRecipe::wardrobeRecipeThumbs
	List_1_t16B8E6BC2841BB83D52D2A19C0D8E25CA4954F0E * ___wardrobeRecipeThumbs_12;
	// System.String UMA.UMATextRecipe::wardrobeSlot
	String_t* ___wardrobeSlot_13;
	// System.Collections.Generic.List`1<System.String> UMA.UMATextRecipe::Hides
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___Hides_14;
	// System.Collections.Generic.List`1<System.String> UMA.UMATextRecipe::HideTags
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___HideTags_15;
	// System.Collections.Generic.List`1<System.String> UMA.UMATextRecipe::suppressWardrobeSlots
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___suppressWardrobeSlots_16;
	// System.Collections.Generic.List`1<UMA.CharacterSystem.WardrobeSettings> UMA.UMATextRecipe::activeWardrobeSet
	List_1_tFCE2D57BFD0BA10CD45A2EBE80B30A675E9A2857 * ___activeWardrobeSet_17;
	// System.Collections.Generic.List`1<UMA.MeshHideAsset> UMA.UMATextRecipe::MeshHideAssets
	List_1_tA250F32315BA0619282BE94003BEA0BE8C58AA6C * ___MeshHideAssets_18;
	// UMA.UMAPredefinedDNA UMA.UMATextRecipe::OverrideDNA
	UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * ___OverrideDNA_19;
	// System.String UMA.UMATextRecipe::recipeString
	String_t* ___recipeString_20;

public:
	inline static int32_t get_offset_of_recipeType_9() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___recipeType_9)); }
	inline String_t* get_recipeType_9() const { return ___recipeType_9; }
	inline String_t** get_address_of_recipeType_9() { return &___recipeType_9; }
	inline void set_recipeType_9(String_t* value)
	{
		___recipeType_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recipeType_9), (void*)value);
	}

	inline static int32_t get_offset_of_DisplayValue_10() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___DisplayValue_10)); }
	inline String_t* get_DisplayValue_10() const { return ___DisplayValue_10; }
	inline String_t** get_address_of_DisplayValue_10() { return &___DisplayValue_10; }
	inline void set_DisplayValue_10(String_t* value)
	{
		___DisplayValue_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DisplayValue_10), (void*)value);
	}

	inline static int32_t get_offset_of_compatibleRaces_11() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___compatibleRaces_11)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_compatibleRaces_11() const { return ___compatibleRaces_11; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_compatibleRaces_11() { return &___compatibleRaces_11; }
	inline void set_compatibleRaces_11(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___compatibleRaces_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___compatibleRaces_11), (void*)value);
	}

	inline static int32_t get_offset_of_wardrobeRecipeThumbs_12() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___wardrobeRecipeThumbs_12)); }
	inline List_1_t16B8E6BC2841BB83D52D2A19C0D8E25CA4954F0E * get_wardrobeRecipeThumbs_12() const { return ___wardrobeRecipeThumbs_12; }
	inline List_1_t16B8E6BC2841BB83D52D2A19C0D8E25CA4954F0E ** get_address_of_wardrobeRecipeThumbs_12() { return &___wardrobeRecipeThumbs_12; }
	inline void set_wardrobeRecipeThumbs_12(List_1_t16B8E6BC2841BB83D52D2A19C0D8E25CA4954F0E * value)
	{
		___wardrobeRecipeThumbs_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wardrobeRecipeThumbs_12), (void*)value);
	}

	inline static int32_t get_offset_of_wardrobeSlot_13() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___wardrobeSlot_13)); }
	inline String_t* get_wardrobeSlot_13() const { return ___wardrobeSlot_13; }
	inline String_t** get_address_of_wardrobeSlot_13() { return &___wardrobeSlot_13; }
	inline void set_wardrobeSlot_13(String_t* value)
	{
		___wardrobeSlot_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wardrobeSlot_13), (void*)value);
	}

	inline static int32_t get_offset_of_Hides_14() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___Hides_14)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_Hides_14() const { return ___Hides_14; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_Hides_14() { return &___Hides_14; }
	inline void set_Hides_14(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___Hides_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Hides_14), (void*)value);
	}

	inline static int32_t get_offset_of_HideTags_15() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___HideTags_15)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_HideTags_15() const { return ___HideTags_15; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_HideTags_15() { return &___HideTags_15; }
	inline void set_HideTags_15(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___HideTags_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HideTags_15), (void*)value);
	}

	inline static int32_t get_offset_of_suppressWardrobeSlots_16() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___suppressWardrobeSlots_16)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_suppressWardrobeSlots_16() const { return ___suppressWardrobeSlots_16; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_suppressWardrobeSlots_16() { return &___suppressWardrobeSlots_16; }
	inline void set_suppressWardrobeSlots_16(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___suppressWardrobeSlots_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___suppressWardrobeSlots_16), (void*)value);
	}

	inline static int32_t get_offset_of_activeWardrobeSet_17() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___activeWardrobeSet_17)); }
	inline List_1_tFCE2D57BFD0BA10CD45A2EBE80B30A675E9A2857 * get_activeWardrobeSet_17() const { return ___activeWardrobeSet_17; }
	inline List_1_tFCE2D57BFD0BA10CD45A2EBE80B30A675E9A2857 ** get_address_of_activeWardrobeSet_17() { return &___activeWardrobeSet_17; }
	inline void set_activeWardrobeSet_17(List_1_tFCE2D57BFD0BA10CD45A2EBE80B30A675E9A2857 * value)
	{
		___activeWardrobeSet_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeWardrobeSet_17), (void*)value);
	}

	inline static int32_t get_offset_of_MeshHideAssets_18() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___MeshHideAssets_18)); }
	inline List_1_tA250F32315BA0619282BE94003BEA0BE8C58AA6C * get_MeshHideAssets_18() const { return ___MeshHideAssets_18; }
	inline List_1_tA250F32315BA0619282BE94003BEA0BE8C58AA6C ** get_address_of_MeshHideAssets_18() { return &___MeshHideAssets_18; }
	inline void set_MeshHideAssets_18(List_1_tA250F32315BA0619282BE94003BEA0BE8C58AA6C * value)
	{
		___MeshHideAssets_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MeshHideAssets_18), (void*)value);
	}

	inline static int32_t get_offset_of_OverrideDNA_19() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___OverrideDNA_19)); }
	inline UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * get_OverrideDNA_19() const { return ___OverrideDNA_19; }
	inline UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 ** get_address_of_OverrideDNA_19() { return &___OverrideDNA_19; }
	inline void set_OverrideDNA_19(UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * value)
	{
		___OverrideDNA_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OverrideDNA_19), (void*)value);
	}

	inline static int32_t get_offset_of_recipeString_20() { return static_cast<int32_t>(offsetof(UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB, ___recipeString_20)); }
	inline String_t* get_recipeString_20() const { return ___recipeString_20; }
	inline String_t** get_address_of_recipeString_20() { return &___recipeString_20; }
	inline void set_recipeString_20(String_t* value)
	{
		___recipeString_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___recipeString_20), (void*)value);
	}
};


// UMA.CharacterSystem.DynamicCharacterAvatar
struct  DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4  : public UMAAvatarBase_tC9C443D8DF27FD214ECAE95ABE5ECA5ED9A3CCC9
{
public:
	// System.Single UMA.CharacterSystem.DynamicCharacterAvatar::DelayUnload
	float ___DelayUnload_19;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::BundleCheck
	bool ___BundleCheck_20;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::KeepAnimatorController
	bool ___KeepAnimatorController_21;
	// UMA.UMADataEvent UMA.CharacterSystem.DynamicCharacterAvatar::RecipeUpdated
	UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * ___RecipeUpdated_22;
	// UMA.UMADataWardrobeEvent UMA.CharacterSystem.DynamicCharacterAvatar::WardrobeAdded
	UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68 * ___WardrobeAdded_23;
	// UMA.UMADataWardrobeEvent UMA.CharacterSystem.DynamicCharacterAvatar::WardrobeRemoved
	UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68 * ___WardrobeRemoved_24;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::hide
	bool ___hide_25;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::lastHide
	bool ___lastHide_26;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::loadBlendShapes
	bool ___loadBlendShapes_27;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::keepAvatar
	bool ___keepAvatar_28;
	// UMA.CharacterSystem.DynamicCharacterAvatar/RaceSetter UMA.CharacterSystem.DynamicCharacterAvatar::activeRace
	RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * ___activeRace_29;
	// UMA.RaceData UMA.CharacterSystem.DynamicCharacterAvatar::previousRace
	RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * ___previousRace_30;
	// UMA.CharacterSystem.DynamicCharacterAvatar/ChangeRaceOptions UMA.CharacterSystem.DynamicCharacterAvatar::defaultChangeRaceOptions
	int32_t ___defaultChangeRaceOptions_31;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::cacheCurrentState
	bool ___cacheCurrentState_32;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::rebuildSkeleton
	bool ___rebuildSkeleton_33;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::alwaysRebuildSkeleton
	bool ___alwaysRebuildSkeleton_34;
	// System.Collections.Generic.Dictionary`2<System.String,UMA.UMATextRecipe> UMA.CharacterSystem.DynamicCharacterAvatar::_wardrobeRecipes
	Dictionary_2_tE4D36FD281D837A5185420A9CC47F4AF57978D8C * ____wardrobeRecipes_35;
	// System.Collections.Generic.Dictionary`2<System.String,UMA.CharacterSystem.UMAWardrobeCollection> UMA.CharacterSystem.DynamicCharacterAvatar::_wardrobeCollections
	Dictionary_2_t5ED6C4CDDEF9B6C60E3099AC77D21D19A8133200 * ____wardrobeCollections_36;
	// UMA.CharacterSystem.DynamicCharacterAvatar/WardrobeRecipeList UMA.CharacterSystem.DynamicCharacterAvatar::preloadWardrobeRecipes
	WardrobeRecipeList_t5E4BDB3C79380FB514E4E60765AAFCC3C6612B1F * ___preloadWardrobeRecipes_37;
	// UMA.CharacterSystem.DynamicCharacterAvatar/RaceAnimatorList UMA.CharacterSystem.DynamicCharacterAvatar::raceAnimationControllers
	RaceAnimatorList_t19B3D5E77D2E3E7F8A9E5DACAF3F61130319BA61 * ___raceAnimationControllers_38;
	// UMA.CharacterSystem.DynamicCharacterAvatar/ColorValueList UMA.CharacterSystem.DynamicCharacterAvatar::characterColors
	ColorValueList_t65000025F6E180B4D5D336663748D11A776298D3 * ___characterColors_39;
	// UMA.UMAPredefinedDNA UMA.CharacterSystem.DynamicCharacterAvatar::predefinedDNA
	UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * ___predefinedDNA_40;
	// UMA.UMAPredefinedDNA UMA.CharacterSystem.DynamicCharacterAvatar::savedDNA
	UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * ___savedDNA_41;
	// UMA.UMAPredefinedDNA UMA.CharacterSystem.DynamicCharacterAvatar::overrideDNA
	UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * ___overrideDNA_42;
	// UMA.CharacterSystem.DynamicCharacterAvatar/loadPathTypes UMA.CharacterSystem.DynamicCharacterAvatar::loadPathType
	int32_t ___loadPathType_43;
	// System.String UMA.CharacterSystem.DynamicCharacterAvatar::loadPath
	String_t* ___loadPath_44;
	// System.String UMA.CharacterSystem.DynamicCharacterAvatar::loadFilename
	String_t* ___loadFilename_45;
	// System.String UMA.CharacterSystem.DynamicCharacterAvatar::loadString
	String_t* ___loadString_46;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::loadFileOnStart
	bool ___loadFileOnStart_47;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::ForceSlotMaterials
	bool ___ForceSlotMaterials_48;
	// System.Single UMA.CharacterSystem.DynamicCharacterAvatar::AtlasResolutionScale
	float ___AtlasResolutionScale_49;
	// UMA.CharacterSystem.DynamicCharacterAvatar/LoadOptions UMA.CharacterSystem.DynamicCharacterAvatar::defaultLoadOptions
	int32_t ___defaultLoadOptions_50;
	// UMA.CharacterSystem.DynamicCharacterAvatar/savePathTypes UMA.CharacterSystem.DynamicCharacterAvatar::savePathType
	int32_t ___savePathType_51;
	// System.String UMA.CharacterSystem.DynamicCharacterAvatar::savePath
	String_t* ___savePath_52;
	// System.String UMA.CharacterSystem.DynamicCharacterAvatar::saveFilename
	String_t* ___saveFilename_53;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::makeUniqueFilename
	bool ___makeUniqueFilename_54;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::ensureSharedColors
	bool ___ensureSharedColors_55;
	// UMA.CharacterSystem.DynamicCharacterAvatar/SaveOptions UMA.CharacterSystem.DynamicCharacterAvatar::defaultSaveOptions
	int32_t ___defaultSaveOptions_56;
	// UnityEngine.Vector3 UMA.CharacterSystem.DynamicCharacterAvatar::BoundsOffset
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___BoundsOffset_57;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::_buildCharacterEnabled
	bool ____buildCharacterEnabled_58;
	// System.Collections.Generic.Dictionary`2<System.String,System.String> UMA.CharacterSystem.DynamicCharacterAvatar::cacheStates
	Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * ___cacheStates_59;
	// System.Collections.Generic.List`1<System.String> UMA.CharacterSystem.DynamicCharacterAvatar::requiredAssetsToCheck
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___requiredAssetsToCheck_60;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::_isFirstSettingsBuild
	bool ____isFirstSettingsBuild_61;
	// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::wasCrossCompatibleBuild
	bool ___wasCrossCompatibleBuild_62;
	// System.Collections.Generic.List`1<System.String> UMA.CharacterSystem.DynamicCharacterAvatar::crossCompatibleRaces
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___crossCompatibleRaces_63;

public:
	inline static int32_t get_offset_of_DelayUnload_19() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___DelayUnload_19)); }
	inline float get_DelayUnload_19() const { return ___DelayUnload_19; }
	inline float* get_address_of_DelayUnload_19() { return &___DelayUnload_19; }
	inline void set_DelayUnload_19(float value)
	{
		___DelayUnload_19 = value;
	}

	inline static int32_t get_offset_of_BundleCheck_20() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___BundleCheck_20)); }
	inline bool get_BundleCheck_20() const { return ___BundleCheck_20; }
	inline bool* get_address_of_BundleCheck_20() { return &___BundleCheck_20; }
	inline void set_BundleCheck_20(bool value)
	{
		___BundleCheck_20 = value;
	}

	inline static int32_t get_offset_of_KeepAnimatorController_21() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___KeepAnimatorController_21)); }
	inline bool get_KeepAnimatorController_21() const { return ___KeepAnimatorController_21; }
	inline bool* get_address_of_KeepAnimatorController_21() { return &___KeepAnimatorController_21; }
	inline void set_KeepAnimatorController_21(bool value)
	{
		___KeepAnimatorController_21 = value;
	}

	inline static int32_t get_offset_of_RecipeUpdated_22() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___RecipeUpdated_22)); }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * get_RecipeUpdated_22() const { return ___RecipeUpdated_22; }
	inline UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 ** get_address_of_RecipeUpdated_22() { return &___RecipeUpdated_22; }
	inline void set_RecipeUpdated_22(UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196 * value)
	{
		___RecipeUpdated_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RecipeUpdated_22), (void*)value);
	}

	inline static int32_t get_offset_of_WardrobeAdded_23() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___WardrobeAdded_23)); }
	inline UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68 * get_WardrobeAdded_23() const { return ___WardrobeAdded_23; }
	inline UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68 ** get_address_of_WardrobeAdded_23() { return &___WardrobeAdded_23; }
	inline void set_WardrobeAdded_23(UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68 * value)
	{
		___WardrobeAdded_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WardrobeAdded_23), (void*)value);
	}

	inline static int32_t get_offset_of_WardrobeRemoved_24() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___WardrobeRemoved_24)); }
	inline UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68 * get_WardrobeRemoved_24() const { return ___WardrobeRemoved_24; }
	inline UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68 ** get_address_of_WardrobeRemoved_24() { return &___WardrobeRemoved_24; }
	inline void set_WardrobeRemoved_24(UMADataWardrobeEvent_t58E3E8A40E56911412318266C1DD9B9E56C9DA68 * value)
	{
		___WardrobeRemoved_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___WardrobeRemoved_24), (void*)value);
	}

	inline static int32_t get_offset_of_hide_25() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___hide_25)); }
	inline bool get_hide_25() const { return ___hide_25; }
	inline bool* get_address_of_hide_25() { return &___hide_25; }
	inline void set_hide_25(bool value)
	{
		___hide_25 = value;
	}

	inline static int32_t get_offset_of_lastHide_26() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___lastHide_26)); }
	inline bool get_lastHide_26() const { return ___lastHide_26; }
	inline bool* get_address_of_lastHide_26() { return &___lastHide_26; }
	inline void set_lastHide_26(bool value)
	{
		___lastHide_26 = value;
	}

	inline static int32_t get_offset_of_loadBlendShapes_27() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___loadBlendShapes_27)); }
	inline bool get_loadBlendShapes_27() const { return ___loadBlendShapes_27; }
	inline bool* get_address_of_loadBlendShapes_27() { return &___loadBlendShapes_27; }
	inline void set_loadBlendShapes_27(bool value)
	{
		___loadBlendShapes_27 = value;
	}

	inline static int32_t get_offset_of_keepAvatar_28() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___keepAvatar_28)); }
	inline bool get_keepAvatar_28() const { return ___keepAvatar_28; }
	inline bool* get_address_of_keepAvatar_28() { return &___keepAvatar_28; }
	inline void set_keepAvatar_28(bool value)
	{
		___keepAvatar_28 = value;
	}

	inline static int32_t get_offset_of_activeRace_29() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___activeRace_29)); }
	inline RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * get_activeRace_29() const { return ___activeRace_29; }
	inline RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 ** get_address_of_activeRace_29() { return &___activeRace_29; }
	inline void set_activeRace_29(RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * value)
	{
		___activeRace_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___activeRace_29), (void*)value);
	}

	inline static int32_t get_offset_of_previousRace_30() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___previousRace_30)); }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * get_previousRace_30() const { return ___previousRace_30; }
	inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F ** get_address_of_previousRace_30() { return &___previousRace_30; }
	inline void set_previousRace_30(RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * value)
	{
		___previousRace_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___previousRace_30), (void*)value);
	}

	inline static int32_t get_offset_of_defaultChangeRaceOptions_31() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___defaultChangeRaceOptions_31)); }
	inline int32_t get_defaultChangeRaceOptions_31() const { return ___defaultChangeRaceOptions_31; }
	inline int32_t* get_address_of_defaultChangeRaceOptions_31() { return &___defaultChangeRaceOptions_31; }
	inline void set_defaultChangeRaceOptions_31(int32_t value)
	{
		___defaultChangeRaceOptions_31 = value;
	}

	inline static int32_t get_offset_of_cacheCurrentState_32() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___cacheCurrentState_32)); }
	inline bool get_cacheCurrentState_32() const { return ___cacheCurrentState_32; }
	inline bool* get_address_of_cacheCurrentState_32() { return &___cacheCurrentState_32; }
	inline void set_cacheCurrentState_32(bool value)
	{
		___cacheCurrentState_32 = value;
	}

	inline static int32_t get_offset_of_rebuildSkeleton_33() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___rebuildSkeleton_33)); }
	inline bool get_rebuildSkeleton_33() const { return ___rebuildSkeleton_33; }
	inline bool* get_address_of_rebuildSkeleton_33() { return &___rebuildSkeleton_33; }
	inline void set_rebuildSkeleton_33(bool value)
	{
		___rebuildSkeleton_33 = value;
	}

	inline static int32_t get_offset_of_alwaysRebuildSkeleton_34() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___alwaysRebuildSkeleton_34)); }
	inline bool get_alwaysRebuildSkeleton_34() const { return ___alwaysRebuildSkeleton_34; }
	inline bool* get_address_of_alwaysRebuildSkeleton_34() { return &___alwaysRebuildSkeleton_34; }
	inline void set_alwaysRebuildSkeleton_34(bool value)
	{
		___alwaysRebuildSkeleton_34 = value;
	}

	inline static int32_t get_offset_of__wardrobeRecipes_35() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ____wardrobeRecipes_35)); }
	inline Dictionary_2_tE4D36FD281D837A5185420A9CC47F4AF57978D8C * get__wardrobeRecipes_35() const { return ____wardrobeRecipes_35; }
	inline Dictionary_2_tE4D36FD281D837A5185420A9CC47F4AF57978D8C ** get_address_of__wardrobeRecipes_35() { return &____wardrobeRecipes_35; }
	inline void set__wardrobeRecipes_35(Dictionary_2_tE4D36FD281D837A5185420A9CC47F4AF57978D8C * value)
	{
		____wardrobeRecipes_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wardrobeRecipes_35), (void*)value);
	}

	inline static int32_t get_offset_of__wardrobeCollections_36() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ____wardrobeCollections_36)); }
	inline Dictionary_2_t5ED6C4CDDEF9B6C60E3099AC77D21D19A8133200 * get__wardrobeCollections_36() const { return ____wardrobeCollections_36; }
	inline Dictionary_2_t5ED6C4CDDEF9B6C60E3099AC77D21D19A8133200 ** get_address_of__wardrobeCollections_36() { return &____wardrobeCollections_36; }
	inline void set__wardrobeCollections_36(Dictionary_2_t5ED6C4CDDEF9B6C60E3099AC77D21D19A8133200 * value)
	{
		____wardrobeCollections_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____wardrobeCollections_36), (void*)value);
	}

	inline static int32_t get_offset_of_preloadWardrobeRecipes_37() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___preloadWardrobeRecipes_37)); }
	inline WardrobeRecipeList_t5E4BDB3C79380FB514E4E60765AAFCC3C6612B1F * get_preloadWardrobeRecipes_37() const { return ___preloadWardrobeRecipes_37; }
	inline WardrobeRecipeList_t5E4BDB3C79380FB514E4E60765AAFCC3C6612B1F ** get_address_of_preloadWardrobeRecipes_37() { return &___preloadWardrobeRecipes_37; }
	inline void set_preloadWardrobeRecipes_37(WardrobeRecipeList_t5E4BDB3C79380FB514E4E60765AAFCC3C6612B1F * value)
	{
		___preloadWardrobeRecipes_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___preloadWardrobeRecipes_37), (void*)value);
	}

	inline static int32_t get_offset_of_raceAnimationControllers_38() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___raceAnimationControllers_38)); }
	inline RaceAnimatorList_t19B3D5E77D2E3E7F8A9E5DACAF3F61130319BA61 * get_raceAnimationControllers_38() const { return ___raceAnimationControllers_38; }
	inline RaceAnimatorList_t19B3D5E77D2E3E7F8A9E5DACAF3F61130319BA61 ** get_address_of_raceAnimationControllers_38() { return &___raceAnimationControllers_38; }
	inline void set_raceAnimationControllers_38(RaceAnimatorList_t19B3D5E77D2E3E7F8A9E5DACAF3F61130319BA61 * value)
	{
		___raceAnimationControllers_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___raceAnimationControllers_38), (void*)value);
	}

	inline static int32_t get_offset_of_characterColors_39() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___characterColors_39)); }
	inline ColorValueList_t65000025F6E180B4D5D336663748D11A776298D3 * get_characterColors_39() const { return ___characterColors_39; }
	inline ColorValueList_t65000025F6E180B4D5D336663748D11A776298D3 ** get_address_of_characterColors_39() { return &___characterColors_39; }
	inline void set_characterColors_39(ColorValueList_t65000025F6E180B4D5D336663748D11A776298D3 * value)
	{
		___characterColors_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___characterColors_39), (void*)value);
	}

	inline static int32_t get_offset_of_predefinedDNA_40() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___predefinedDNA_40)); }
	inline UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * get_predefinedDNA_40() const { return ___predefinedDNA_40; }
	inline UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 ** get_address_of_predefinedDNA_40() { return &___predefinedDNA_40; }
	inline void set_predefinedDNA_40(UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * value)
	{
		___predefinedDNA_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___predefinedDNA_40), (void*)value);
	}

	inline static int32_t get_offset_of_savedDNA_41() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___savedDNA_41)); }
	inline UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * get_savedDNA_41() const { return ___savedDNA_41; }
	inline UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 ** get_address_of_savedDNA_41() { return &___savedDNA_41; }
	inline void set_savedDNA_41(UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * value)
	{
		___savedDNA_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savedDNA_41), (void*)value);
	}

	inline static int32_t get_offset_of_overrideDNA_42() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___overrideDNA_42)); }
	inline UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * get_overrideDNA_42() const { return ___overrideDNA_42; }
	inline UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 ** get_address_of_overrideDNA_42() { return &___overrideDNA_42; }
	inline void set_overrideDNA_42(UMAPredefinedDNA_t5E3BDB7882ED907E5EBBE225EAF42A643B7C87D4 * value)
	{
		___overrideDNA_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___overrideDNA_42), (void*)value);
	}

	inline static int32_t get_offset_of_loadPathType_43() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___loadPathType_43)); }
	inline int32_t get_loadPathType_43() const { return ___loadPathType_43; }
	inline int32_t* get_address_of_loadPathType_43() { return &___loadPathType_43; }
	inline void set_loadPathType_43(int32_t value)
	{
		___loadPathType_43 = value;
	}

	inline static int32_t get_offset_of_loadPath_44() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___loadPath_44)); }
	inline String_t* get_loadPath_44() const { return ___loadPath_44; }
	inline String_t** get_address_of_loadPath_44() { return &___loadPath_44; }
	inline void set_loadPath_44(String_t* value)
	{
		___loadPath_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadPath_44), (void*)value);
	}

	inline static int32_t get_offset_of_loadFilename_45() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___loadFilename_45)); }
	inline String_t* get_loadFilename_45() const { return ___loadFilename_45; }
	inline String_t** get_address_of_loadFilename_45() { return &___loadFilename_45; }
	inline void set_loadFilename_45(String_t* value)
	{
		___loadFilename_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadFilename_45), (void*)value);
	}

	inline static int32_t get_offset_of_loadString_46() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___loadString_46)); }
	inline String_t* get_loadString_46() const { return ___loadString_46; }
	inline String_t** get_address_of_loadString_46() { return &___loadString_46; }
	inline void set_loadString_46(String_t* value)
	{
		___loadString_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadString_46), (void*)value);
	}

	inline static int32_t get_offset_of_loadFileOnStart_47() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___loadFileOnStart_47)); }
	inline bool get_loadFileOnStart_47() const { return ___loadFileOnStart_47; }
	inline bool* get_address_of_loadFileOnStart_47() { return &___loadFileOnStart_47; }
	inline void set_loadFileOnStart_47(bool value)
	{
		___loadFileOnStart_47 = value;
	}

	inline static int32_t get_offset_of_ForceSlotMaterials_48() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___ForceSlotMaterials_48)); }
	inline bool get_ForceSlotMaterials_48() const { return ___ForceSlotMaterials_48; }
	inline bool* get_address_of_ForceSlotMaterials_48() { return &___ForceSlotMaterials_48; }
	inline void set_ForceSlotMaterials_48(bool value)
	{
		___ForceSlotMaterials_48 = value;
	}

	inline static int32_t get_offset_of_AtlasResolutionScale_49() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___AtlasResolutionScale_49)); }
	inline float get_AtlasResolutionScale_49() const { return ___AtlasResolutionScale_49; }
	inline float* get_address_of_AtlasResolutionScale_49() { return &___AtlasResolutionScale_49; }
	inline void set_AtlasResolutionScale_49(float value)
	{
		___AtlasResolutionScale_49 = value;
	}

	inline static int32_t get_offset_of_defaultLoadOptions_50() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___defaultLoadOptions_50)); }
	inline int32_t get_defaultLoadOptions_50() const { return ___defaultLoadOptions_50; }
	inline int32_t* get_address_of_defaultLoadOptions_50() { return &___defaultLoadOptions_50; }
	inline void set_defaultLoadOptions_50(int32_t value)
	{
		___defaultLoadOptions_50 = value;
	}

	inline static int32_t get_offset_of_savePathType_51() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___savePathType_51)); }
	inline int32_t get_savePathType_51() const { return ___savePathType_51; }
	inline int32_t* get_address_of_savePathType_51() { return &___savePathType_51; }
	inline void set_savePathType_51(int32_t value)
	{
		___savePathType_51 = value;
	}

	inline static int32_t get_offset_of_savePath_52() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___savePath_52)); }
	inline String_t* get_savePath_52() const { return ___savePath_52; }
	inline String_t** get_address_of_savePath_52() { return &___savePath_52; }
	inline void set_savePath_52(String_t* value)
	{
		___savePath_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___savePath_52), (void*)value);
	}

	inline static int32_t get_offset_of_saveFilename_53() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___saveFilename_53)); }
	inline String_t* get_saveFilename_53() const { return ___saveFilename_53; }
	inline String_t** get_address_of_saveFilename_53() { return &___saveFilename_53; }
	inline void set_saveFilename_53(String_t* value)
	{
		___saveFilename_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___saveFilename_53), (void*)value);
	}

	inline static int32_t get_offset_of_makeUniqueFilename_54() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___makeUniqueFilename_54)); }
	inline bool get_makeUniqueFilename_54() const { return ___makeUniqueFilename_54; }
	inline bool* get_address_of_makeUniqueFilename_54() { return &___makeUniqueFilename_54; }
	inline void set_makeUniqueFilename_54(bool value)
	{
		___makeUniqueFilename_54 = value;
	}

	inline static int32_t get_offset_of_ensureSharedColors_55() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___ensureSharedColors_55)); }
	inline bool get_ensureSharedColors_55() const { return ___ensureSharedColors_55; }
	inline bool* get_address_of_ensureSharedColors_55() { return &___ensureSharedColors_55; }
	inline void set_ensureSharedColors_55(bool value)
	{
		___ensureSharedColors_55 = value;
	}

	inline static int32_t get_offset_of_defaultSaveOptions_56() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___defaultSaveOptions_56)); }
	inline int32_t get_defaultSaveOptions_56() const { return ___defaultSaveOptions_56; }
	inline int32_t* get_address_of_defaultSaveOptions_56() { return &___defaultSaveOptions_56; }
	inline void set_defaultSaveOptions_56(int32_t value)
	{
		___defaultSaveOptions_56 = value;
	}

	inline static int32_t get_offset_of_BoundsOffset_57() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___BoundsOffset_57)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_BoundsOffset_57() const { return ___BoundsOffset_57; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_BoundsOffset_57() { return &___BoundsOffset_57; }
	inline void set_BoundsOffset_57(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___BoundsOffset_57 = value;
	}

	inline static int32_t get_offset_of__buildCharacterEnabled_58() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ____buildCharacterEnabled_58)); }
	inline bool get__buildCharacterEnabled_58() const { return ____buildCharacterEnabled_58; }
	inline bool* get_address_of__buildCharacterEnabled_58() { return &____buildCharacterEnabled_58; }
	inline void set__buildCharacterEnabled_58(bool value)
	{
		____buildCharacterEnabled_58 = value;
	}

	inline static int32_t get_offset_of_cacheStates_59() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___cacheStates_59)); }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * get_cacheStates_59() const { return ___cacheStates_59; }
	inline Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 ** get_address_of_cacheStates_59() { return &___cacheStates_59; }
	inline void set_cacheStates_59(Dictionary_2_tDE3227CA5E7A32F5070BD24C69F42204A3ADE9D5 * value)
	{
		___cacheStates_59 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cacheStates_59), (void*)value);
	}

	inline static int32_t get_offset_of_requiredAssetsToCheck_60() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___requiredAssetsToCheck_60)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_requiredAssetsToCheck_60() const { return ___requiredAssetsToCheck_60; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_requiredAssetsToCheck_60() { return &___requiredAssetsToCheck_60; }
	inline void set_requiredAssetsToCheck_60(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___requiredAssetsToCheck_60 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___requiredAssetsToCheck_60), (void*)value);
	}

	inline static int32_t get_offset_of__isFirstSettingsBuild_61() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ____isFirstSettingsBuild_61)); }
	inline bool get__isFirstSettingsBuild_61() const { return ____isFirstSettingsBuild_61; }
	inline bool* get_address_of__isFirstSettingsBuild_61() { return &____isFirstSettingsBuild_61; }
	inline void set__isFirstSettingsBuild_61(bool value)
	{
		____isFirstSettingsBuild_61 = value;
	}

	inline static int32_t get_offset_of_wasCrossCompatibleBuild_62() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___wasCrossCompatibleBuild_62)); }
	inline bool get_wasCrossCompatibleBuild_62() const { return ___wasCrossCompatibleBuild_62; }
	inline bool* get_address_of_wasCrossCompatibleBuild_62() { return &___wasCrossCompatibleBuild_62; }
	inline void set_wasCrossCompatibleBuild_62(bool value)
	{
		___wasCrossCompatibleBuild_62 = value;
	}

	inline static int32_t get_offset_of_crossCompatibleRaces_63() { return static_cast<int32_t>(offsetof(DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4, ___crossCompatibleRaces_63)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_crossCompatibleRaces_63() const { return ___crossCompatibleRaces_63; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_crossCompatibleRaces_63() { return &___crossCompatibleRaces_63; }
	inline void set_crossCompatibleRaces_63(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___crossCompatibleRaces_63 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___crossCompatibleRaces_63), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UMA.CharacterSystem.UMAWardrobeCollection
struct  UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70  : public UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Sprite> UMA.CharacterSystem.UMAWardrobeCollection::coverImages
	List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * ___coverImages_21;
	// UMA.CharacterSystem.WardrobeCollectionList UMA.CharacterSystem.UMAWardrobeCollection::wardrobeCollection
	WardrobeCollectionList_tDF1126122BACFA757C57648A5C42812306061259 * ___wardrobeCollection_22;
	// System.Collections.Generic.List`1<System.String> UMA.CharacterSystem.UMAWardrobeCollection::arbitraryRecipes
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___arbitraryRecipes_23;

public:
	inline static int32_t get_offset_of_coverImages_21() { return static_cast<int32_t>(offsetof(UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70, ___coverImages_21)); }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * get_coverImages_21() const { return ___coverImages_21; }
	inline List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 ** get_address_of_coverImages_21() { return &___coverImages_21; }
	inline void set_coverImages_21(List_1_t99B54448C695C6F7103A0DE4320F1A7EF7B30880 * value)
	{
		___coverImages_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___coverImages_21), (void*)value);
	}

	inline static int32_t get_offset_of_wardrobeCollection_22() { return static_cast<int32_t>(offsetof(UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70, ___wardrobeCollection_22)); }
	inline WardrobeCollectionList_tDF1126122BACFA757C57648A5C42812306061259 * get_wardrobeCollection_22() const { return ___wardrobeCollection_22; }
	inline WardrobeCollectionList_tDF1126122BACFA757C57648A5C42812306061259 ** get_address_of_wardrobeCollection_22() { return &___wardrobeCollection_22; }
	inline void set_wardrobeCollection_22(WardrobeCollectionList_tDF1126122BACFA757C57648A5C42812306061259 * value)
	{
		___wardrobeCollection_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wardrobeCollection_22), (void*)value);
	}

	inline static int32_t get_offset_of_arbitraryRecipes_23() { return static_cast<int32_t>(offsetof(UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70, ___arbitraryRecipes_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_arbitraryRecipes_23() const { return ___arbitraryRecipes_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_arbitraryRecipes_23() { return &___arbitraryRecipes_23; }
	inline void set_arbitraryRecipes_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___arbitraryRecipes_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___arbitraryRecipes_23), (void*)value);
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.Dropdown
struct  Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Dropdown::m_Template
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_Template_20;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_CaptionText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_CaptionText_21;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_CaptionImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_CaptionImage_22;
	// UnityEngine.UI.Text UnityEngine.UI.Dropdown::m_ItemText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___m_ItemText_23;
	// UnityEngine.UI.Image UnityEngine.UI.Dropdown::m_ItemImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_ItemImage_24;
	// System.Int32 UnityEngine.UI.Dropdown::m_Value
	int32_t ___m_Value_25;
	// UnityEngine.UI.Dropdown/OptionDataList UnityEngine.UI.Dropdown::m_Options
	OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * ___m_Options_26;
	// UnityEngine.UI.Dropdown/DropdownEvent UnityEngine.UI.Dropdown::m_OnValueChanged
	DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * ___m_OnValueChanged_27;
	// System.Single UnityEngine.UI.Dropdown::m_AlphaFadeSpeed
	float ___m_AlphaFadeSpeed_28;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Dropdown
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Dropdown_29;
	// UnityEngine.GameObject UnityEngine.UI.Dropdown::m_Blocker
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_Blocker_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/DropdownItem> UnityEngine.UI.Dropdown::m_Items
	List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * ___m_Items_31;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.FloatTween> UnityEngine.UI.Dropdown::m_AlphaTweenRunner
	TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * ___m_AlphaTweenRunner_32;
	// System.Boolean UnityEngine.UI.Dropdown::validTemplate
	bool ___validTemplate_33;

public:
	inline static int32_t get_offset_of_m_Template_20() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Template_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_Template_20() const { return ___m_Template_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_Template_20() { return &___m_Template_20; }
	inline void set_m_Template_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_Template_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Template_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionText_21() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionText_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_CaptionText_21() const { return ___m_CaptionText_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_CaptionText_21() { return &___m_CaptionText_21; }
	inline void set_m_CaptionText_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_CaptionText_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionText_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_CaptionImage_22() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_CaptionImage_22)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_CaptionImage_22() const { return ___m_CaptionImage_22; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_CaptionImage_22() { return &___m_CaptionImage_22; }
	inline void set_m_CaptionImage_22(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_CaptionImage_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CaptionImage_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemText_23() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemText_23)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_m_ItemText_23() const { return ___m_ItemText_23; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_m_ItemText_23() { return &___m_ItemText_23; }
	inline void set_m_ItemText_23(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___m_ItemText_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemText_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemImage_24() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_ItemImage_24)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_ItemImage_24() const { return ___m_ItemImage_24; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_ItemImage_24() { return &___m_ItemImage_24; }
	inline void set_m_ItemImage_24(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_ItemImage_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ItemImage_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Value_25() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Value_25)); }
	inline int32_t get_m_Value_25() const { return ___m_Value_25; }
	inline int32_t* get_address_of_m_Value_25() { return &___m_Value_25; }
	inline void set_m_Value_25(int32_t value)
	{
		___m_Value_25 = value;
	}

	inline static int32_t get_offset_of_m_Options_26() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Options_26)); }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * get_m_Options_26() const { return ___m_Options_26; }
	inline OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 ** get_address_of_m_Options_26() { return &___m_Options_26; }
	inline void set_m_Options_26(OptionDataList_t524EBDB7A2B178269FD5B4740108D0EC6404B4B6 * value)
	{
		___m_Options_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Options_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_OnValueChanged_27)); }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(DropdownEvent_tEB2C75C3DBC789936B31D9A979FD62E047846CFB * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaFadeSpeed_28() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaFadeSpeed_28)); }
	inline float get_m_AlphaFadeSpeed_28() const { return ___m_AlphaFadeSpeed_28; }
	inline float* get_address_of_m_AlphaFadeSpeed_28() { return &___m_AlphaFadeSpeed_28; }
	inline void set_m_AlphaFadeSpeed_28(float value)
	{
		___m_AlphaFadeSpeed_28 = value;
	}

	inline static int32_t get_offset_of_m_Dropdown_29() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Dropdown_29)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Dropdown_29() const { return ___m_Dropdown_29; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Dropdown_29() { return &___m_Dropdown_29; }
	inline void set_m_Dropdown_29(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Dropdown_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Dropdown_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_Blocker_30() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Blocker_30)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_Blocker_30() const { return ___m_Blocker_30; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_Blocker_30() { return &___m_Blocker_30; }
	inline void set_m_Blocker_30(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_Blocker_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Blocker_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_Items_31() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_Items_31)); }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * get_m_Items_31() const { return ___m_Items_31; }
	inline List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 ** get_address_of_m_Items_31() { return &___m_Items_31; }
	inline void set_m_Items_31(List_1_t4CFF6A6E1A912AE4990A34B2AA4A1FE2C9FB0033 * value)
	{
		___m_Items_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Items_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_AlphaTweenRunner_32() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___m_AlphaTweenRunner_32)); }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * get_m_AlphaTweenRunner_32() const { return ___m_AlphaTweenRunner_32; }
	inline TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D ** get_address_of_m_AlphaTweenRunner_32() { return &___m_AlphaTweenRunner_32; }
	inline void set_m_AlphaTweenRunner_32(TweenRunner_1_t428873023FD8831B6DCE3CBD53ADD7D37AC8222D * value)
	{
		___m_AlphaTweenRunner_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AlphaTweenRunner_32), (void*)value);
	}

	inline static int32_t get_offset_of_validTemplate_33() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96, ___validTemplate_33)); }
	inline bool get_validTemplate_33() const { return ___validTemplate_33; }
	inline bool* get_address_of_validTemplate_33() { return &___validTemplate_33; }
	inline void set_validTemplate_33(bool value)
	{
		___validTemplate_33 = value;
	}
};

struct Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields
{
public:
	// UnityEngine.UI.Dropdown/OptionData UnityEngine.UI.Dropdown::s_NoOptionData
	OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___s_NoOptionData_34;

public:
	inline static int32_t get_offset_of_s_NoOptionData_34() { return static_cast<int32_t>(offsetof(Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96_StaticFields, ___s_NoOptionData_34)); }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * get_s_NoOptionData_34() const { return ___s_NoOptionData_34; }
	inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 ** get_address_of_s_NoOptionData_34() { return &___s_NoOptionData_34; }
	inline void set_s_NoOptionData_34(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * value)
	{
		___s_NoOptionData_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_NoOptionData_34), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
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


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
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
// UnityEngine.Quaternion[]
struct QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  m_Items[1];

public:
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  m_Items[1];

public:
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		m_Items[index] = value;
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// UMA.OverlayColorData[]
struct OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * m_Items[1];

public:
	inline OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Color[]
struct ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  m_Items[1];

public:
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.SkinnedMeshRenderer[]
struct SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * m_Items[1];

public:
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> UMA.UMAAssetIndexer::GetAllAssets<System.Object>(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * UMAAssetIndexer_GetAllAssets_TisRuntimeObject_m5C461362FA53F207A625DA96D64372E4B5A32CC0_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___foldersToSearch0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031  KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method);

// System.Collections.IEnumerator ButtonTimer::HideAndShow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonTimer_HideAndShow_m36A59E0F2A516201CCD1A1CA327164AA7384B6FA (ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * __this, float ___delay0, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// System.Void ButtonTimer/<HideAndShow>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideAndShowU3Ed__4__ctor_m23D8D1737426200CD12D0E01836F8B0940E11847 (U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092 (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::ChangeRace(System.String,UMA.CharacterSystem.DynamicCharacterAvatar/ChangeRaceOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, String_t* ___racename0, int32_t ___customChangeRaceOptions1, bool ___ForceChange2, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Transform::get_childCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, int32_t ___index0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___exists0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Collections.IEnumerator GameExclusive::LeftCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameExclusive_LeftCoroutine_m924ABDB2990ABC75C9053653675FD6D94F1E2A8A (GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameExclusive::RightCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameExclusive_RightCoroutine_m436DA065EC6948000CCC250D52D88A08716B7C6C (GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * __this, const RuntimeMethod* method);
// System.Void GameExclusive/<RightCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRightCoroutineU3Ed__10__ctor_m32CD981E5AD9331FA812956640821CB2ACAAB13C (U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameExclusive/<LeftCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeftCoroutineU3Ed__11__ctor_m105B279617E3DA89549687F5C228255E27517512 (U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Collections.IEnumerator GameInclusive::LeftCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameInclusive_LeftCoroutine_mFD20F256D0512A72C7BA9ED9A899FF9B2BD909E7 (GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * __this, const RuntimeMethod* method);
// System.Collections.IEnumerator GameInclusive::RightCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameInclusive_RightCoroutine_mE1F9F6C6C5E0F35E311F8A1B3C0120E9533E3F75 (GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * __this, const RuntimeMethod* method);
// System.Void GameInclusive/<RightCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRightCoroutineU3Ed__10__ctor_m444B835547924E5D72CE39830A6F14D2061C0D01 (U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void GameInclusive/<LeftCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeftCoroutineU3Ed__11__ctor_m4C631C6E42F602A6DB61369B74632EB673894DDE (U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::print(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::LoadFromRecipeString(System.String,UMA.CharacterSystem.DynamicCharacterAvatar/LoadOptions,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_LoadFromRecipeString_m816316D9E1229F716A6E7EEF98E59A71A5378EF7 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, String_t* ___settingsToLoad0, int32_t ___customLoadOptions1, bool ___ClearWardrobe2, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::BuildCharacter(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, bool ___RestoreDNA0, bool ___skipBundleCheck1, bool ___useBundleParameter2, const RuntimeMethod* method);
// System.String UMA.CharacterSystem.DynamicCharacterAvatar::GetAvatarDefinitionString(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, bool ___skipDefaults0, const RuntimeMethod* method);
// System.String UMA.CharacterSystem.DynamicCharacterAvatar::GetCurrentRecipe(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, bool ___backwardsCompatible0, const RuntimeMethod* method);
// AvatarDefinition UMA.CharacterSystem.DynamicCharacterAvatar::GetAvatarDefinition(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, bool ___skipRaceDefaults0, const RuntimeMethod* method);
// System.String AvatarDefinition::ToCompressedString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD (AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 * __this, String_t* ___seperator0, const RuntimeMethod* method);
// System.Byte[] AvatarDefinition::ToASCIIString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1 (AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 * __this, const RuntimeMethod* method);
// System.Void System.Runtime.Serialization.Formatters.Binary.BinaryFormatter::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126 (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * __this, const RuntimeMethod* method);
// System.Byte[] BinaryDefinition::ToBinary(System.Runtime.Serialization.Formatters.Binary.BinaryFormatter,AvatarDefinition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3 (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * ___bf0, AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  ___adf1, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.Int32 UMA.UMAUtils::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47 (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.GameObject UMA.UMAData::GetBoneGameObject(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82 (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * __this, int32_t ___boneHash0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485 (RuntimeObject * ___message0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<O3nTwistBone>()
inline O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * GameObject_GetComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_m6EE92304ABF90A606E8A1D9FDFEDDCDBF82B7861 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<O3nTwistBone>()
inline O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * GameObject_AddComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_mF7463B7FF1EB66FA82ED62D3DC9BB4EDAFBA622F (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F (RuntimeArray * ___array0, RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  ___fldHandle1, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<UMA.TwistBones>()
inline TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mBDBD6EC58A4409E35E4C5D08757C36E4938256B1_gshared)(__this, method);
}
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87 (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_localRotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::DeltaAngle(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_DeltaAngle_mB1BD0E139ACCAE694968F7D9CB096C60F69CE9FE (float ___current0, float ___target1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// System.Single O3nTwistBone::ClampAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float O3nTwistBone_ClampAngle_m8988429B6F283FF74A614EA46D4343F58E3B4B3B (O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * __this, float ___angle0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localEulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UMA.UMARandomAvatar::Randomize(UMA.CharacterSystem.DynamicCharacterAvatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMARandomAvatar_Randomize_mFAC79A3C9CF88FB6E50765186AE86C0389454EF9 (UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * __this, DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar0, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633 (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method);
// System.Void UMA.Examples.UMAMouseOrbitImproved::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMAMouseOrbitImproved_Reset_m53B3A4D5CDB7EF29044174ABB505DC07F0554504 (UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * __this, const RuntimeMethod* method);
// UMA.UMAAssetIndexer UMA.UMAAssetIndexer::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * UMAAssetIndexer_get_Instance_m40EB4986AB0F7BD2583F65EE1B7E41461718A9F1 (const RuntimeMethod* method);
// System.Collections.Generic.List`1<!!0> UMA.UMAAssetIndexer::GetAllAssets<UMA.RaceData>(System.String[])
inline List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * UMAAssetIndexer_GetAllAssets_TisRaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F_m554B6DA5359C05AC736508ACE91600660B44FF75 (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___foldersToSearch0, const RuntimeMethod* method)
{
	return ((  List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * (*) (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*))UMAAssetIndexer_GetAllAssets_TisRuntimeObject_m5C461362FA53F207A625DA96D64372E4B5A32CC0_gshared)(__this, ___foldersToSearch0, method);
}
// System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData> UnityEngine.UI.Dropdown::get_options()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Clear()
inline void List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496 (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UMA.RaceData>::GetEnumerator()
inline Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B  List_1_GetEnumerator_m6A5558B971D947E045A9B931391FEC1C4CC7505D (List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B  (*) (List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UMA.RaceData>::get_Current()
inline RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * Enumerator_get_Current_mD75CFCF83DABD5D2413068EB24666047951EEF2B_inline (Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B * __this, const RuntimeMethod* method)
{
	return ((  RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * (*) (Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Dropdown/OptionData::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675 (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, String_t* ___text0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::Add(!0)
inline void List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<UMA.RaceData>::MoveNext()
inline bool Enumerator_MoveNext_m16DACBE2B714DBB52B5C87F3BC0E83D1F760B11A (Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UMA.RaceData>::Dispose()
inline void Enumerator_Dispose_m88F5FE96C0A33A124F3D714A1A58980084CFEB85 (Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Dropdown::set_value(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dropdown_set_value_mE4418D205D53F8A3AD23B957D1A8CD71489CB3B9 (Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * __this, int32_t ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.Examples.SampleCode::ChangeSex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_ChangeSex_mCFCBB86DC30F93070B9D8199A1217FAE16B846FA (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method);
// System.Int32 System.Convert::ToInt32(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Convert_ToInt32_mAFAE7DA97BACA9CEC03D40A2D322093B122B02FE (float ___value0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>> UMA.CharacterSystem.DynamicCharacterAvatar::get_AvailableRecipes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * DynamicCharacterAvatar_get_AvailableRecipes_m28BFB3360A20445EE37BE82DD317074487F5F308 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>::get_Item(!0)
inline List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C (Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * (*) (Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Int32 System.Collections.Generic.List`1<UMA.UMATextRecipe>::get_Count()
inline int32_t List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_inline (List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Single UnityEngine.UI.Slider::get_maxValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Slider::set_maxValue(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, float ___value0, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UMA.UMATextRecipe>::get_Item(System.Int32)
inline UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB * List_1_get_Item_mCE3DEFF4CAFCCDEA23F5EA3D784ECF78370CC8EB_inline (List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB * (*) (List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.Boolean UMA.CharacterSystem.DynamicCharacterAvatar::SetSlot(UMA.UMATextRecipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool DynamicCharacterAvatar_SetSlot_mCDEC043D07648C538278284FA40EF6BDA43CC557 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB * ___utr0, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.Resources::UnloadUnusedAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70 (const RuntimeMethod* method);
// System.Void System.Runtime.GCSettings::set_LargeObjectHeapCompactionMode(System.Runtime.GCLargeObjectHeapCompactionMode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCSettings_set_LargeObjectHeapCompactionMode_mE16301541EC0EED3C4F3445F1F16997DBD7EAF51_inline (int32_t ___value0, const RuntimeMethod* method);
// System.Void System.GC::Collect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9 (const RuntimeMethod* method);
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UMA.UMAUtils::DestroySceneObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMAUtils_DestroySceneObject_m53E185DA7317A05369247518903C2D420A9565C9 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.Examples.SampleCode::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.String,UMA.DnaSetter> UMA.CharacterSystem.DynamicCharacterAvatar::GetDNA(UMA.UMAData/UMARecipe)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 * DynamicCharacterAvatar_GetDNA_mB27AD9E1B2C460380913CD0F85622863EF877FC4 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * ___recipe0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UMA.DnaSetter>::GetEnumerator()
inline Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224  Dictionary_2_GetEnumerator_mCBD9158E6965C024FE2B904FD874885C1B3447F6 (Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224  (*) (Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UMA.DnaSetter>::get_Current()
inline KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  Enumerator_get_Current_m841CCACC416F2848F67424F2093D149ACB74C45C_inline (Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  (*) (Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared)(___original0, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UMA.CharacterSystem.Examples.DNAHandler>()
inline DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB * GameObject_GetComponent_TisDNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB_mB23A8DE09E38C9F34AB176DBCA35A356BC414D49 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UMA.DnaSetter>::get_Value()
inline DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_inline (KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244 * __this, const RuntimeMethod* method)
{
	return ((  DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * (*) (KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Void UMA.CharacterSystem.Examples.DNAHandler::Setup(UMA.CharacterSystem.DynamicCharacterAvatar,UMA.DnaSetter,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DNAHandler_Setup_m6CA37CB613650C96B56CBAC6A0A718997BE5AEBF (DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB * __this, DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___avatar0, DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * ___dna1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___panel2, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponentInChildren<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponentInChildren_TisRuntimeObject_mC8FC6687C66150FA89090C2A7733B2EE2E1315FD_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___p0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UMA.DnaSetter>::MoveNext()
inline bool Enumerator_MoveNext_m94881ED67136E2B79A3DCBC0295B3AF3032F1AC2 (Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,UMA.DnaSetter>::Dispose()
inline void Enumerator_Dispose_mCEAE52184BE7C9FAAA54C71E56AA39401FBB4969 (Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *, const RuntimeMethod*))Enumerator_Dispose_m85CA135BAB22C9F0C87C84AB90FF6740D1859279_gshared)(__this, method);
}
// UMA.OverlayColorData[] UMA.CharacterSystem.DynamicCharacterAvatar::get_CurrentSharedColors()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* DynamicCharacterAvatar_get_CurrentSharedColors_mF5428775687F1B19B4B63F7CBDFC16EDE730F907 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UMA.CharacterSystem.Examples.AvailableColorsHandler>()
inline AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * GameObject_GetComponent_TisAvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999_m04C9268882F3914438D7514320C2270BC06D9513 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.String System.String::ToLower()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D (String_t* __this, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.Examples.AvailableColorsHandler::Setup(UMA.CharacterSystem.DynamicCharacterAvatar,System.String,UnityEngine.GameObject,UMA.SharedColorTable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AvailableColorsHandler_Setup_m6433447444B99CEFBA905C307EBD4DC7D0A91D0A (AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * __this, DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___avatar0, String_t* ___colorName1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___colorPanel2, SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * ___colorTable3, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>::get_Keys()
inline KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 * Dictionary_2_get_Keys_mAD9E9C47A06A69046B4926ECD6A14C2956848597 (Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 * (*) (Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>::GetEnumerator()
inline Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D  KeyCollection_GetEnumerator_m62A7A86F70B7B5909A7573D6B4346509AC420826 (KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D  (*) (KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>::get_Current()
inline String_t* Enumerator_get_Current_mC1BF66647F1BC02F7A295B483D644BF8B3386F45_inline (Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *, const RuntimeMethod*))Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline)(__this, method);
}
// !!0 UnityEngine.GameObject::GetComponent<UMA.CharacterSystem.Examples.SlotHandler>()
inline SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A * GameObject_GetComponent_TisSlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A_m2C2D0414BB247EDF110AAAAC5FB6DA1D7EF89B75 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UMA.CharacterSystem.Examples.SlotHandler::Setup(UMA.CharacterSystem.DynamicCharacterAvatar,System.String,UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SlotHandler_Setup_mEB05EEFD40A749F074AB09EDBD4C6B95816E756A (SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A * __this, DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___avatar0, String_t* ___slotName1, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wardrobePanel2, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>::MoveNext()
inline bool Enumerator_MoveNext_m8C9A2A78B40C55194B54A4EC3EC188C2338F536B (Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *, const RuntimeMethod*))Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>::Dispose()
inline void Enumerator_Dispose_m8306B8A4EEA224F44D8B9F85ABF60756314F9C0F (Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *, const RuntimeMethod*))Enumerator_Dispose_m5440E65428351CA6F19B1804D172DCB5E9C59C98_gshared)(__this, method);
}
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UMA.CharacterSystem.DynamicCharacterAvatar>()
inline DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * GameObject_GetComponent_TisDynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4_m8E44127D1BE4D290EFE211D3530832D7548EE713 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localPosition(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// UMA.OverlayColorData UMA.CharacterSystem.DynamicCharacterAvatar::GetColor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * DynamicCharacterAvatar_GetColor_m2A28CA6FD84D05FA3D118F13E3AB0E89CE080C58 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, String_t* ___Name0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::SetRawColor(System.String,UMA.OverlayColorData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_SetRawColor_m85F8B9BF6CB400F5453968AE792A810EE46F5A5F (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, String_t* ___Name0, OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * ___colorData1, bool ___UpdateTexture2, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<UnityEngine.UI.Dropdown/OptionData>::get_Item(System.Int32)
inline OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * (*) (List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 *, int32_t, const RuntimeMethod*))List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline)(__this, ___index0, method);
}
// System.String UnityEngine.UI.Dropdown/OptionData::get_text()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::set_RacePreset(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_set_RacePreset_m16BD08714396E485CDBCF12231BA425B12A72041 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::set_BuildCharacterEnabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_set_BuildCharacterEnabled_m0B440D0571A78E8A1D576B8B23642018622209B3 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::ChangeRace(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_ChangeRace_m8BFF46998577EB189EFADBC2EAF77A5FB8173186 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, String_t* ___racename0, bool ___force1, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<UnityEngine.SkinnedMeshRenderer>()
inline SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* Object_FindObjectsOfType_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m7433A79923D10FB340C0E299BBAE5BAB5338DA5C (const RuntimeMethod* method)
{
	return ((  SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared)(method);
}
// System.Boolean UnityEngine.SkinnedMeshRenderer::get_updateWhenOffscreen()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SkinnedMeshRenderer_get_updateWhenOffscreen_m5D67231AA7E0E036807004350FAA341080FDAA4E (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SkinnedMeshRenderer::set_updateWhenOffscreen(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SkinnedMeshRenderer_set_updateWhenOffscreen_m369009154E1B8DC275EFB808CEF274720F7F5DD7 (SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.Examples.SampleCode::RandomizeAvatar(UMA.CharacterSystem.DynamicCharacterAvatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_RandomizeAvatar_m8199F7E109A9B30F4118D060A2A4D885F70473E8 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar0, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::ClearSlot(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_ClearSlot_mA1957F919BE1C2A94F37015EB147F16E98330CDD (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, String_t* ___ws0, const RuntimeMethod* method);
// System.Single UnityEngine.Random::get_value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872 (const RuntimeMethod* method);
// System.Void UMA.DnaSetter::Set(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DnaSetter_Set_m0951D7AFF7E280A78672BDBD082447BDBC5B119C (DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * __this, float ___val0, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::SetColor(System.String,UMA.OverlayColorData,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_SetColor_mC99BF4A06A16D701750DDC0A66D0D40485F2B010 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, String_t* ___Name0, OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * ___colorData1, bool ___UpdateTexture2, const RuntimeMethod* method);
// System.Void UMA.CharacterSystem.DynamicCharacterAvatar::ForceUpdate(System.Boolean,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DynamicCharacterAvatar_ForceUpdate_mC138DB7C6F0EBCC9D29A6BF04952EDD274C57FB5 (DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * __this, bool ___DnaDirty0, bool ___TextureDirty1, bool ___MeshDirty2, const RuntimeMethod* method);
// System.Void UnityEngine.Application::OpenURL(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E (String_t* ___url0, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Translate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ButtonTimer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTimer_Start_mA38A4A9D17434237422801284C3FFB079AD66E2D (ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(HideAndShow(TimeDelay)); //for three minutes use 180f
		float L_0 = __this->get_TimeDelay_5();
		RuntimeObject* L_1;
		L_1 = ButtonTimer_HideAndShow_m36A59E0F2A516201CCD1A1CA327164AA7384B6FA(__this, L_0, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_2;
		L_2 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ButtonTimer::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTimer_Update_m2C7B23C4919EFABA2770A4D8A7DC3A19AB899A6C (ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator ButtonTimer::HideAndShow(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ButtonTimer_HideAndShow_m36A59E0F2A516201CCD1A1CA327164AA7384B6FA (ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * __this, float ___delay0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * L_0 = (U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E *)il2cpp_codegen_object_new(U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E_il2cpp_TypeInfo_var);
		U3CHideAndShowU3Ed__4__ctor_m23D8D1737426200CD12D0E01836F8B0940E11847(L_0, 0, /*hidden argument*/NULL);
		U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * L_2 = L_1;
		float L_3 = ___delay0;
		L_2->set_delay_3(L_3);
		return L_2;
	}
}
// System.Void ButtonTimer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonTimer__ctor_m892265FDA25BFAA40652635A6D6B8F31F2A5F52A (ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * __this, const RuntimeMethod* method)
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
// System.Void ChangeScene::LetsChangeScene(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_LetsChangeScene_m10810A05F3C11A70BBBDF9B9FF6A0E41F66D5BAD (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, String_t* ___scenename0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(scenename);
		String_t* L_0 = ___scenename0;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::CustomMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_CustomMain_m43768F1D6C39A64F6D5FBB83A6E0A733F95D0DA2 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral524A77A332F34CE558BC016B830DD5805230675B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("1Welcome");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral524A77A332F34CE558BC016B830DD5805230675B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::GoCustomization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_GoCustomization_m2FAD24A50CADEFCB6919B79F6E64A1DBE72D4BEC (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA187DE08954E5ABCF10B0EE046363CBFC907651E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("2UMA DCS");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralA187DE08954E5ABCF10B0EE046363CBFC907651E, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::MeetCustomAvatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_MeetCustomAvatar_mD3914308ACF60D2B8462EDEB5F9DCF140BA761D4 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A14DD8545BFE05E15F604EE1D63C5B005F6CCA3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("2AvatarImport");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral8A14DD8545BFE05E15F604EE1D63C5B005F6CCA3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::CustomExclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_CustomExclusion_mA8FF676A29D25F292AB3CF9A86A6019CC99758BD (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral79CD5128013897716AA775978601FCF42D9CA664);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("3Exclusive");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral79CD5128013897716AA775978601FCF42D9CA664, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::Custom3Survey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_Custom3Survey_m5344A9523747E2BD13A1E1EA048B592ED17FB9F9 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBEF6E32AB85AE3AF4E4D6DBD57A24317B1061800);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("3Survey");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralBEF6E32AB85AE3AF4E4D6DBD57A24317B1061800, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::CustomInclusion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_CustomInclusion_mF82B2A537CC22A0910B87EB110307E436317D234 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE61CC100AB41786B4E1EF83FD5E46EAAB61F4126);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("4Inclusive");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE61CC100AB41786B4E1EF83FD5E46EAAB61F4126, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::Custom4Survey()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_Custom4Survey_mA6E70A4DBBA32D73A89BA75F6D6FA477329B78FC (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD538C884DAED184538CD5F6E7642ED6C940B20B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("4Survey");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralDD538C884DAED184538CD5F6E7642ED6C940B20B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::CustomFinish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_CustomFinish_mF62938CB10BE049C5C0BDF63EAA1BC7DF2A8493A (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8A33DB43D006D06CBF6FFB5902BE726881A9CFB7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("5Finish");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral8A33DB43D006D06CBF6FFB5902BE726881A9CFB7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::AssignedMain()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_AssignedMain_m7C76191B9FC4E89AF1222C77D913C30FF97F8DDC (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9BF6BE3CD043C6FC6EF73F975AF6758E4476CEE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("1Welcome_Assigned");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralC9BF6BE3CD043C6FC6EF73F975AF6758E4476CEE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::AssignedMeetAvatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_AssignedMeetAvatar_m6EEC9A4A7B4B43FCD8F2D201DCDA5238E8ECAB78 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9C6BD7B69D18B96EDBCB52CD962E0E1AE708D1BE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("2AvatarImport_Assigned");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9C6BD7B69D18B96EDBCB52CD962E0E1AE708D1BE, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::AssignedExclusiveCond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_AssignedExclusiveCond_m383A3B7D8474C283890CE012F93929AACB2127F5 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE516FCC6C9366F4198FE00E134AB909DCE944C39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("3Exclusive_Assigned");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE516FCC6C9366F4198FE00E134AB909DCE944C39, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::AssignedSurvey3Cond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_AssignedSurvey3Cond_m902735594CA8F8D3C8E0D2AD71F496CFC77F4851 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAFC0B9264940C179CA2F820446F3EC1C0FE4472B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("3Survey_Assigned");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAFC0B9264940C179CA2F820446F3EC1C0FE4472B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::AssignedInclusiveCond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_AssignedInclusiveCond_mA9E28FC5F04C44559D8AFA5325C172906A1F5082 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE85A7E15D9C7E1FFCF20A55B56D62BE6E7772140);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("4Inclusive_Assigned");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE85A7E15D9C7E1FFCF20A55B56D62BE6E7772140, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::AssignedSurvey4Cond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_AssignedSurvey4Cond_mDC61F039F75BC604E8DBDC38678DE62219340AA0 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDDA80AAFEEE36751BF8D3C7C7235115A381F789);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("4Survey_Assigned");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralFDDA80AAFEEE36751BF8D3C7C7235115A381F789, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::AssignedFinishCond()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene_AssignedFinishCond_mFAC0F8D6E3C8B95CE66ED3FDDEDE6FA7EEF89FBB (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAA34E616C62811814A9C4237E34B166AA816F1BA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("5Finish_Assigned");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralAA34E616C62811814A9C4237E34B166AA816F1BA, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ChangeScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChangeScene__ctor_m4B5E6457BC8ADD899516038BA745E96E48F2C9E0 (ChangeScene_t911C7BF5D7321A9752D54B4F7A49C0BC816EA919 * __this, const RuntimeMethod* method)
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
// System.Void CharacterCreator::SwitchGender(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterCreator_SwitchGender_m4B92D111084F91D135FDFDEAFEEF74771A2C8EBE (CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * __this, bool ___male0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88717C5E8781CAC09A8C18F5E26A539548E00786);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB92D1621B5A4F556A0563343E5FAF02C7C735C34);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (male && avatar.activeRace.name != "HumanMaleDCS")
		bool L_0 = ___male0;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_1 = __this->get_avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_2 = L_1->get_activeRace_29();
		String_t* L_3 = L_2->get_name_0();
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_3, _stringLiteral88717C5E8781CAC09A8C18F5E26A539548E00786, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// avatar.ChangeRace("HumanMaleDCS");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_5 = __this->get_avatar_4();
		bool L_6;
		L_6 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_5, _stringLiteral88717C5E8781CAC09A8C18F5E26A539548E00786, 0, (bool)0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (!male && avatar.activeRace.name != "HumanFemaleDCS")
		bool L_7 = ___male0;
		if (L_7)
		{
			goto IL_0064;
		}
	}
	{
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_8 = __this->get_avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_9 = L_8->get_activeRace_29();
		String_t* L_10 = L_9->get_name_0();
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralB92D1621B5A4F556A0563343E5FAF02C7C735C34, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// avatar.ChangeRace("HumanFemaleDCS");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_12 = __this->get_avatar_4();
		bool L_13;
		L_13 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_12, _stringLiteralB92D1621B5A4F556A0563343E5FAF02C7C735C34, 0, (bool)0, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void CharacterCreator::SwitchRace1(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterCreator_SwitchRace1_m0705D9DD06AB424E78B0B87F9C4AEBF112DC83DC (CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * __this, bool ___male0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EEB80C8A8F32A2D30600BC00772330BBF60DE0D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D514BD805A6F8917E7828E05D6D16A535C725C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (male && avatar.activeRace.name != "Werewolf")
		bool L_0 = ___male0;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_1 = __this->get_avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_2 = L_1->get_activeRace_29();
		String_t* L_3 = L_2->get_name_0();
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_3, _stringLiteral8D514BD805A6F8917E7828E05D6D16A535C725C7, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// avatar.ChangeRace("Werewolf");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_5 = __this->get_avatar_4();
		bool L_6;
		L_6 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_5, _stringLiteral8D514BD805A6F8917E7828E05D6D16A535C725C7, 0, (bool)0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (!male && avatar.activeRace.name != "ToonFemale")
		bool L_7 = ___male0;
		if (L_7)
		{
			goto IL_0064;
		}
	}
	{
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_8 = __this->get_avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_9 = L_8->get_activeRace_29();
		String_t* L_10 = L_9->get_name_0();
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteral6EEB80C8A8F32A2D30600BC00772330BBF60DE0D, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// avatar.ChangeRace("ToonFemale");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_12 = __this->get_avatar_4();
		bool L_13;
		L_13 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_12, _stringLiteral6EEB80C8A8F32A2D30600BC00772330BBF60DE0D, 0, (bool)0, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void CharacterCreator::SwitchRace2(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterCreator_SwitchRace2_m302A5F29B947672B3BE718FD5EBB5418CF0AC3A5 (CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * __this, bool ___male0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FF0D40E421B4818495991589A990529C375DB25);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD604DE67B9B156E6B1314590402528DCC29D9791);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF90BA92F528A43D73FD429CD65E096D02C07996F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (male && avatar.activeRace.name != "ElfMale")
		bool L_0 = ___male0;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_1 = __this->get_avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_2 = L_1->get_activeRace_29();
		String_t* L_3 = L_2->get_name_0();
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_3, _stringLiteralD604DE67B9B156E6B1314590402528DCC29D9791, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// avatar.ChangeRace("Elf Male");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_5 = __this->get_avatar_4();
		bool L_6;
		L_6 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_5, _stringLiteralF90BA92F528A43D73FD429CD65E096D02C07996F, 0, (bool)0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (!male && avatar.activeRace.name != "HumanGirl")
		bool L_7 = ___male0;
		if (L_7)
		{
			goto IL_0064;
		}
	}
	{
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_8 = __this->get_avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_9 = L_8->get_activeRace_29();
		String_t* L_10 = L_9->get_name_0();
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteral5FF0D40E421B4818495991589A990529C375DB25, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// avatar.ChangeRace("HumanGirl");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_12 = __this->get_avatar_4();
		bool L_13;
		L_13 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_12, _stringLiteral5FF0D40E421B4818495991589A990529C375DB25, 0, (bool)0, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void CharacterCreator::SwitchRace3(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterCreator_SwitchRace3_m352670E5D0089E7B61276DEC3FAF862F64D1E9FA (CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * __this, bool ___male0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral32E28DCE9B4C8E87D063F5DC223C7ECE78C2EFB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD247934374031AF8B7436BD979FC7FAB5993BF3);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (male && avatar.activeRace.name != "HumanMaleHighPoly")
		bool L_0 = ___male0;
		if (!L_0)
		{
			goto IL_0032;
		}
	}
	{
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_1 = __this->get_avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_2 = L_1->get_activeRace_29();
		String_t* L_3 = L_2->get_name_0();
		bool L_4;
		L_4 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_3, _stringLiteral32E28DCE9B4C8E87D063F5DC223C7ECE78C2EFB9, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0032;
		}
	}
	{
		// avatar.ChangeRace("HumanMaleHighPoly");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_5 = __this->get_avatar_4();
		bool L_6;
		L_6 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_5, _stringLiteral32E28DCE9B4C8E87D063F5DC223C7ECE78C2EFB9, 0, (bool)0, /*hidden argument*/NULL);
	}

IL_0032:
	{
		// if (!male && avatar.activeRace.name != "HumanFemaleHighPoly")
		bool L_7 = ___male0;
		if (L_7)
		{
			goto IL_0064;
		}
	}
	{
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_8 = __this->get_avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_9 = L_8->get_activeRace_29();
		String_t* L_10 = L_9->get_name_0();
		bool L_11;
		L_11 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_10, _stringLiteralDD247934374031AF8B7436BD979FC7FAB5993BF3, /*hidden argument*/NULL);
		if (!L_11)
		{
			goto IL_0064;
		}
	}
	{
		// avatar.ChangeRace("HumanFemaleHighPoly");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_12 = __this->get_avatar_4();
		bool L_13;
		L_13 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_12, _stringLiteralDD247934374031AF8B7436BD979FC7FAB5993BF3, 0, (bool)0, /*hidden argument*/NULL);
	}

IL_0064:
	{
		// }
		return;
	}
}
// System.Void CharacterCreator::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterCreator__ctor_m1318466FD40ABDE65A619F476E4EF015F2D6C329 (CharacterCreator_t1BAC65331F0CC733DE84F71C4C03CD41D91C8677 * __this, const RuntimeMethod* method)
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
// System.Void CharacterSelection::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelection_Start_m3CA03CFCB370D52E36B20D2935330351B3C9B869 (CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FC789D6FB567A7987F96BB7297CFBE8EE0D9EBA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_1 = NULL;
	int32_t V_2 = 0;
	{
		// index = PlayerPrefs.GetInt("CharacterSelected");
		int32_t L_0;
		L_0 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral1FC789D6FB567A7987F96BB7297CFBE8EE0D9EBA, /*hidden argument*/NULL);
		__this->set_index_5(L_0);
		// characterList = new GameObject[transform.childCount];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_2;
		L_2 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_1, /*hidden argument*/NULL);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = (GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642*)SZArrayNew(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642_il2cpp_TypeInfo_var, (uint32_t)L_2);
		__this->set_characterList_4(L_3);
		// for(int i =0; i<transform.childCount; i++){
		V_0 = 0;
		goto IL_0047;
	}

IL_002a:
	{
		// characterList[i] = transform.GetChild(i).gameObject;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_characterList_4();
		int32_t L_5 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_7 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Transform_GetChild_mA7D94BEFF0144F76561D9B8FED61C5C939EC1F1C(L_6, L_7, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_4, L_9);
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)L_9);
		// for(int i =0; i<transform.childCount; i++){
		int32_t L_10 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0047:
	{
		// for(int i =0; i<transform.childCount; i++){
		int32_t L_11 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_13;
		L_13 = Transform_get_childCount_mCBED4F6D3F6A7386C4D97C2C3FD25C383A0BCD05(L_12, /*hidden argument*/NULL);
		if ((((int32_t)L_11) < ((int32_t)L_13)))
		{
			goto IL_002a;
		}
	}
	{
		// foreach (GameObject go in characterList)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = __this->get_characterList_4();
		V_1 = L_14;
		V_2 = 0;
		goto IL_006d;
	}

IL_0060:
	{
		// foreach (GameObject go in characterList)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = V_1;
		int32_t L_16 = V_2;
		int32_t L_17 = L_16;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_15)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17));
		// go.SetActive(false);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)0, /*hidden argument*/NULL);
		int32_t L_19 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1));
	}

IL_006d:
	{
		// foreach (GameObject go in characterList)
		int32_t L_20 = V_2;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = V_1;
		if ((((int32_t)L_20) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length))))))
		{
			goto IL_0060;
		}
	}
	{
		// if(characterList[index])
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_22 = __this->get_characterList_4();
		int32_t L_23 = __this->get_index_5();
		int32_t L_24 = L_23;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = (L_22)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_24));
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_26;
		L_26 = Object_op_Implicit_mC8214E4F028CC2F036CC82BDB81D102A02893499(L_25, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_009a;
		}
	}
	{
		// characterList[index].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = __this->get_characterList_4();
		int32_t L_28 = __this->get_index_5();
		int32_t L_29 = L_28;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = (L_27)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_29));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)1, /*hidden argument*/NULL);
	}

IL_009a:
	{
		// }
		return;
	}
}
// System.Void CharacterSelection::ToggleLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelection_ToggleLeft_m48922585C2884644847D10410CA72921066B5A7A (CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291 * __this, const RuntimeMethod* method)
{
	{
		// characterList[index].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_characterList_4();
		int32_t L_1 = __this->get_index_5();
		int32_t L_2 = L_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = (L_0)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_2));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// index--;
		int32_t L_4 = __this->get_index_5();
		__this->set_index_5(((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)1)));
		// if(index<0)
		int32_t L_5 = __this->get_index_5();
		if ((((int32_t)L_5) >= ((int32_t)0)))
		{
			goto IL_003a;
		}
	}
	{
		// index = characterList.Length-1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = __this->get_characterList_4();
		__this->set_index_5(((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))), (int32_t)1)));
	}

IL_003a:
	{
		// characterList[index].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = __this->get_characterList_4();
		int32_t L_8 = __this->get_index_5();
		int32_t L_9 = L_8;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_7)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_9));
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterSelection::confirm()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelection_confirm_m5D3343CC78AF3785D3E5E4C25629A5124F3C24F9 (CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FC789D6FB567A7987F96BB7297CFBE8EE0D9EBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral993876B5468A8257D90C8330F2490774281620B7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("CharacterSelected", index);
		int32_t L_0 = __this->get_index_5();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral1FC789D6FB567A7987F96BB7297CFBE8EE0D9EBA, L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("3Inclusive");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral993876B5468A8257D90C8330F2490774281620B7, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterSelection::confirmEx()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelection_confirmEx_m821EEBBFFF62BC7CC4645CC3F1B390EE8B13772D (CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FC789D6FB567A7987F96BB7297CFBE8EE0D9EBA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B8D824B6267D88922B3F8C8296F0EACC30304D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetInt("CharacterSelected", index);
		int32_t L_0 = __this->get_index_5();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral1FC789D6FB567A7987F96BB7297CFBE8EE0D9EBA, L_0, /*hidden argument*/NULL);
		// SceneManager.LoadScene("4Exclusive");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3B8D824B6267D88922B3F8C8296F0EACC30304D1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CharacterSelection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CharacterSelection__ctor_m29887E6FA0AA75CCF50E8062F343044867CE7B9D (CharacterSelection_tE3A4D6352ED31929C0397101C95D6D4C28187291 * __this, const RuntimeMethod* method)
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
// System.Void GameExclusive::PressedStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameExclusive_PressedStart_m6C93F224F9AADCC08826DC652C583ED17C291A44 (GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * __this, const RuntimeMethod* method)
{
	{
		// Start.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_Start_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// Introduction.gameObject.SetActive(false);;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_Introduction_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// PassLeft.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameExclusive::PressedPassLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameExclusive_PressedPassLeft_m536D68BFF6DD2923EA7BD3D72FCE64E10E827B6A (GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(LeftCoroutine());
		RuntimeObject* L_0;
		L_0 = GameExclusive_LeftCoroutine_m924ABDB2990ABC75C9053653675FD6D94F1E2A8A(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameExclusive::PressedPassRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameExclusive_PressedPassRight_mB078D3F73110A3AC0C3BC43AFC87B70EDC8778B3 (GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(RightCoroutine());
		RuntimeObject* L_0;
		L_0 = GameExclusive_RightCoroutine_m436DA065EC6948000CCC250D52D88A08716B7C6C(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameExclusive::RightCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameExclusive_RightCoroutine_m436DA065EC6948000CCC250D52D88A08716B7C6C (GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * L_0 = (U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 *)il2cpp_codegen_object_new(U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783_il2cpp_TypeInfo_var);
		U3CRightCoroutineU3Ed__10__ctor_m32CD981E5AD9331FA812956640821CB2ACAAB13C(L_0, 0, /*hidden argument*/NULL);
		U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameExclusive::LeftCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameExclusive_LeftCoroutine_m924ABDB2990ABC75C9053653675FD6D94F1E2A8A (GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * L_0 = (U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD *)il2cpp_codegen_object_new(U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD_il2cpp_TypeInfo_var);
		U3CLeftCoroutineU3Ed__11__ctor_m105B279617E3DA89549687F5C228255E27517512(L_0, 0, /*hidden argument*/NULL);
		U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameExclusive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameExclusive__ctor_m5DDACEF3EF917B0920E908032237EC3CB43DEDE0 (GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * __this, const RuntimeMethod* method)
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
// System.Void GameInclusive::PressedStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInclusive_PressedStart_m5E29A5CFBB2EA580E91C665C2FAA7CEDFF250494 (GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * __this, const RuntimeMethod* method)
{
	{
		// Start.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_Start_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// Introduction.gameObject.SetActive(false);;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_Introduction_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// PassLeft.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = __this->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameInclusive::PressedPassLeft()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInclusive_PressedPassLeft_m8A6989785AE93B4A0FF5CDBE3D7C35D51591A545 (GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(LeftCoroutine());
		RuntimeObject* L_0;
		L_0 = GameInclusive_LeftCoroutine_mFD20F256D0512A72C7BA9ED9A899FF9B2BD909E7(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameInclusive::PressedPassRight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInclusive_PressedPassRight_m00B9B821DB5E466482DAE1ADCAEF5F50B8748AF5 (GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(RightCoroutine());
		RuntimeObject* L_0;
		L_0 = GameInclusive_RightCoroutine_mE1F9F6C6C5E0F35E311F8A1B3C0120E9533E3F75(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameInclusive::RightCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameInclusive_RightCoroutine_mE1F9F6C6C5E0F35E311F8A1B3C0120E9533E3F75 (GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * L_0 = (U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 *)il2cpp_codegen_object_new(U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415_il2cpp_TypeInfo_var);
		U3CRightCoroutineU3Ed__10__ctor_m444B835547924E5D72CE39830A6F14D2061C0D01(L_0, 0, /*hidden argument*/NULL);
		U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Collections.IEnumerator GameInclusive::LeftCoroutine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameInclusive_LeftCoroutine_mFD20F256D0512A72C7BA9ED9A899FF9B2BD909E7 (GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * L_0 = (U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD *)il2cpp_codegen_object_new(U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD_il2cpp_TypeInfo_var);
		U3CLeftCoroutineU3Ed__11__ctor_m4C631C6E42F602A6DB61369B74632EB673894DDE(L_0, 0, /*hidden argument*/NULL);
		U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * L_1 = L_0;
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void GameInclusive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameInclusive__ctor_m2AD4E43C5A864A77679B98A13AE6F0ACC3F28991 (GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * __this, const RuntimeMethod* method)
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
// System.Void LoadAvatar2::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAvatar2_Start_mFE91DA23A0BE142AE35590F98E11F845F4D5B537 (LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37994BF2F1A314EEE52B673623BD6BCBB00F8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9FA5E5716338BA651A60441E558577C980650F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// betweenscenes = PlayerPrefs.GetString("saveString"); //might need to remove ""
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_5(L_0);
		// print(betweenscenes);
		String_t* L_1 = __this->get_betweenscenes_5();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_1, /*hidden argument*/NULL);
		// Avatar.LoadFromRecipeString(betweenscenes); //if this doesn't work try calling the load UMA function
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3 = __this->get_betweenscenes_5();
		DynamicCharacterAvatar_LoadFromRecipeString_m816316D9E1229F716A6E7EEF98E59A71A5378EF7(L_2, L_3, 0, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("CRIES 1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCB9FA5E5716338BA651A60441E558577C980650F, /*hidden argument*/NULL);
		// Avatar.BuildCharacter();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0(L_4, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("CRIES 2");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral37994BF2F1A314EEE52B673623BD6BCBB00F8673, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadAvatar2::SaveUMA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAvatar2_SaveUMA_mD618ED65D75D16C3AF5BC085EAEE6B4836F17B44 (LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		String_t* L_1;
		L_1 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_7(L_1);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3;
		L_3 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_6(L_3);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_5;
		L_5 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_4, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_8(L_6);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_12(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_10 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_10, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_11 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_12;
		L_12 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_11, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_10, L_12, /*hidden argument*/NULL);
		__this->set_binarySize_13(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_14 = __this->get_saveString_6();
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		__this->set_saveStringSize_9(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_16 = __this->get_avatarString_7();
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		__this->set_avatarStringSize_10(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_18 = __this->get_compressedString_8();
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		__this->set_compressedStringSize_11(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		// }
		return;
	}
}
// System.Void LoadAvatar2::Loaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAvatar2_Loaded_m93613365E6A66E7A345FCA7DD1C0310547CB5C7C (LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B7E1925F0B7C615657862E884592BF4645DEBD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Scene3");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9B7E1925F0B7C615657862E884592BF4645DEBD9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadAvatar2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadAvatar2__ctor_mD561C86559A2653BAE95856D7996360B987CBC66 (LoadAvatar2_tF962629B2A20434686E422B2F19A742D1110D1FD * __this, const RuntimeMethod* method)
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
// System.Void LoadCustom::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCustom_Start_mE577CEEADC9D90B0BC012D5967A892D074B6E3E1 (LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37994BF2F1A314EEE52B673623BD6BCBB00F8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9FA5E5716338BA651A60441E558577C980650F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// betweenscenes = PlayerPrefs.GetString("saveString"); //might need to remove ""
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_5(L_0);
		// print(betweenscenes);
		String_t* L_1 = __this->get_betweenscenes_5();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_1, /*hidden argument*/NULL);
		// Avatar.LoadFromRecipeString(betweenscenes); //if this doesn't work try calling the load UMA function
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3 = __this->get_betweenscenes_5();
		DynamicCharacterAvatar_LoadFromRecipeString_m816316D9E1229F716A6E7EEF98E59A71A5378EF7(L_2, L_3, 0, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("CRIES 1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCB9FA5E5716338BA651A60441E558577C980650F, /*hidden argument*/NULL);
		// Avatar.BuildCharacter();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0(L_4, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("CRIES 2");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral37994BF2F1A314EEE52B673623BD6BCBB00F8673, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadCustom::SaveUMA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCustom_SaveUMA_m28DF1736B8255EAB178B7996FD296011084502D9 (LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		String_t* L_1;
		L_1 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_7(L_1);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3;
		L_3 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_6(L_3);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_5;
		L_5 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_4, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_8(L_6);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_12(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_10 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_10, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_11 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_12;
		L_12 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_11, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_10, L_12, /*hidden argument*/NULL);
		__this->set_binarySize_13(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_14 = __this->get_saveString_6();
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		__this->set_saveStringSize_9(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_16 = __this->get_avatarString_7();
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		__this->set_avatarStringSize_10(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_18 = __this->get_compressedString_8();
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		__this->set_compressedStringSize_11(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		// }
		return;
	}
}
// System.Void LoadCustom::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCustom_Next_mB5D4C1477E4AD69EA2333C29F453EA92A68A557E (LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B8D824B6267D88922B3F8C8296F0EACC30304D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("4Exclusive");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral3B8D824B6267D88922B3F8C8296F0EACC30304D1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadCustom::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCustom__ctor_m70DB3B08DCF550E37465E3E3831657F708FC3AEA (LoadCustom_t2A5362D4E74B2A09DC456DF9F68DFF99CE386A1B * __this, const RuntimeMethod* method)
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
// System.Void LoadCustomAvatar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCustomAvatar_Start_mFDFA257F165C5EAEA95A4AD3DFB227F05EF7D363 (LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral37994BF2F1A314EEE52B673623BD6BCBB00F8673);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB9FA5E5716338BA651A60441E558577C980650F);
		s_Il2CppMethodInitialized = true;
	}
	{
		// betweenscenes = PlayerPrefs.GetString("saveString"); //might need to remove ""
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_5(L_0);
		// print(betweenscenes);
		String_t* L_1 = __this->get_betweenscenes_5();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_1, /*hidden argument*/NULL);
		// Avatar.LoadFromRecipeString(betweenscenes); //if this doesn't work try calling the load UMA function
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3 = __this->get_betweenscenes_5();
		DynamicCharacterAvatar_LoadFromRecipeString_m816316D9E1229F716A6E7EEF98E59A71A5378EF7(L_2, L_3, 0, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("CRIES 1");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralCB9FA5E5716338BA651A60441E558577C980650F, /*hidden argument*/NULL);
		// Avatar.BuildCharacter();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0(L_4, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("CRIES 2");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral37994BF2F1A314EEE52B673623BD6BCBB00F8673, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadCustomAvatar::SaveUMA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCustomAvatar_SaveUMA_m8526E3186142778AD87B2275D6FD5603EDD5C35C (LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		String_t* L_1;
		L_1 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_7(L_1);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3;
		L_3 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_6(L_3);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_5;
		L_5 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_4, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_8(L_6);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_12(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_10 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_10, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_11 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_12;
		L_12 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_11, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_10, L_12, /*hidden argument*/NULL);
		__this->set_binarySize_13(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_14 = __this->get_saveString_6();
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		__this->set_saveStringSize_9(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_16 = __this->get_avatarString_7();
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		__this->set_avatarStringSize_10(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_18 = __this->get_compressedString_8();
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		__this->set_compressedStringSize_11(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		// }
		return;
	}
}
// System.Void LoadCustomAvatar::Loaded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCustomAvatar_Loaded_m702153E8422DE555D7B76650949E113AA4004136 (LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B7E1925F0B7C615657862E884592BF4645DEBD9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("Scene3");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteral9B7E1925F0B7C615657862E884592BF4645DEBD9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadCustomAvatar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadCustomAvatar__ctor_mAE1BB06251029F17AEAFA2AE9736D9749305D8BC (LoadCustomAvatar_tDA2E7419AEB78BEFFBD0B9CEC21F570553662994 * __this, const RuntimeMethod* method)
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
// System.Void LoadRandomAv::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadRandomAv_Start_m02191617343C84571D8B65C49EB3DE8615022B50 (LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2ED1B95092052436243304C697B6CB32763B37EA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC6E630502633FE4CB9EEE7D8581CA33DF8AAF71E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// betweenscenes = PlayerPrefs.GetString("saveString"); //might need to remove ""
		String_t* L_0;
		L_0 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_5(L_0);
		// print(betweenscenes);
		String_t* L_1 = __this->get_betweenscenes_5();
		MonoBehaviour_print_m4F113B89EC1C221CAC6EC64365E6DAD0AF86F090(L_1, /*hidden argument*/NULL);
		// Avatar.LoadFromRecipeString(betweenscenes); //if this doesn't work try calling the load UMA function
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3 = __this->get_betweenscenes_5();
		DynamicCharacterAvatar_LoadFromRecipeString_m816316D9E1229F716A6E7EEF98E59A71A5378EF7(L_2, L_3, 0, (bool)0, /*hidden argument*/NULL);
		// Debug.Log("Avatar Loaded from meet scene");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralC6E630502633FE4CB9EEE7D8581CA33DF8AAF71E, /*hidden argument*/NULL);
		// Avatar.BuildCharacter();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0(L_4, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		// Debug.Log("Avatar Built from recipe");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral2ED1B95092052436243304C697B6CB32763B37EA, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LoadRandomAv::SaveUMA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadRandomAv_SaveUMA_mA437BFDB6FC112D2B529629251567EFC115733F2 (LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		String_t* L_1;
		L_1 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_7(L_1);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3;
		L_3 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_6(L_3);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_5;
		L_5 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_4, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_8(L_6);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_12(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_10 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_10, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_11 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_12;
		L_12 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_11, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_10, L_12, /*hidden argument*/NULL);
		__this->set_binarySize_13(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_14 = __this->get_saveString_6();
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		__this->set_saveStringSize_9(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_16 = __this->get_avatarString_7();
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		__this->set_avatarStringSize_10(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_18 = __this->get_compressedString_8();
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		__this->set_compressedStringSize_11(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		// }
		return;
	}
}
// System.Void LoadRandomAv::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadRandomAv__ctor_m9B9AE9A6230DAEE5848CF908147552C76E73F03D (LoadRandomAv_t53884C4274773E2C939C49ED5B3126D0F4335E03 * __this, const RuntimeMethod* method)
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
// System.Void UMA.O3nArmLowerLegTwistSlotScript::OnDnaApplied(UMA.UMAData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nArmLowerLegTwistSlotScript_OnDnaApplied_m1649FFA6570DEF0C9B42A8D16C44E6E79B1021BF (O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954 * __this, UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_mF7463B7FF1EB66FA82ED62D3DC9BB4EDAFBA622F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_m6EE92304ABF90A606E8A1D9FDFEDDCDBF82B7861_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1_FieldInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral037EE6A8A023183C182957198023405E8306A376);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D8A9A1053A04F52278067AA2C8C01393B73E1FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B2DB56936EB9A0DB371C3941914C096708C58C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral23350A9A9AEB534C98ECBB990C00686A947C2E7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral356A55D895E0ABE0E49C4421E703959CC450EC34);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F0BE10DA9F0686FC95C7CC99A9CC6EB6B01C05C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral487D96405807119C8CB64C0514674348940A8CF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ECFB5D9492E2645DB734DD728282A27B469DE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7B0A4071F2ED0A9EA98B51ABCE47D2C719F5150C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral805255141B10BE518EBA90F30D503F4364601E1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85D9D22051ABA913D5F1CA8FFD438E826BF94AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC7761F124DAC4EB02FE582988B4679E4D789115);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE33C7E2060BCA48B74F818EB430B951CF972FA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2A09F82E876F1FA5AEC18B79F5D811111BA8104);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9FB0CB2033F2D6B7891E1DFF032E2B44049634A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2C0EDA351E3C5E187658030A07D668ABEADA6B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE211060505342920A37CD05D9CD93CF8E039826);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_7 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_8 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_9 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_10 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_11 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_12 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_13 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_14 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_15 = NULL;
	O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * V_16 = NULL;
	O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * V_17 = NULL;
	{
		// if (!hashesFound)
		IL2CPP_RUNTIME_CLASS_INIT(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var);
		bool L_0 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_hashesFound_20();
		if (L_0)
		{
			goto IL_0100;
		}
	}
	{
		// leftHandHash = UMAUtils.StringToHash("hand_L");
		IL2CPP_RUNTIME_CLASS_INIT(UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralC2A09F82E876F1FA5AEC18B79F5D811111BA8104, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_leftHandHash_4(L_1);
		// rightHandHash = UMAUtils.StringToHash("hand_R");
		int32_t L_2;
		L_2 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral356A55D895E0ABE0E49C4421E703959CC450EC34, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_rightHandHash_5(L_2);
		// leftTwistHash = UMAUtils.StringToHash("LowerarmAdjustTwist_L");
		int32_t L_3;
		L_3 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral037EE6A8A023183C182957198023405E8306A376, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_leftTwistHash_6(L_3);
		// rightTwistHash = UMAUtils.StringToHash("LowerarmAdjustTwist_R");
		int32_t L_4;
		L_4 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral805255141B10BE518EBA90F30D503F4364601E1D, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_rightTwistHash_7(L_4);
		// leftFootHash = UMAUtils.StringToHash("Foot_L");
		int32_t L_5;
		L_5 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral487D96405807119C8CB64C0514674348940A8CF6, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_leftFootHash_8(L_5);
		// rightFootHash = UMAUtils.StringToHash("Foot_R");
		int32_t L_6;
		L_6 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral7B0A4071F2ED0A9EA98B51ABCE47D2C719F5150C, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_rightFootHash_9(L_6);
		// leftFootTwistHash = UMAUtils.StringToHash("CalfAdjustTwist_L");
		int32_t L_7;
		L_7 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral0D8A9A1053A04F52278067AA2C8C01393B73E1FB, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_leftFootTwistHash_10(L_7);
		// rightFootTwistHash = UMAUtils.StringToHash("CalfAdjustTwist_R");
		int32_t L_8;
		L_8 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral23350A9A9AEB534C98ECBB990C00686A947C2E7F, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_rightFootTwistHash_11(L_8);
		// leftUpperArmTwistHash = UMAUtils.StringToHash("UpperarmAdjustTwist_L");
		int32_t L_9;
		L_9 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral3F0BE10DA9F0686FC95C7CC99A9CC6EB6B01C05C, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_leftUpperArmTwistHash_12(L_9);
		// rightUpperArmTwistHash = UMAUtils.StringToHash("UpperarmAdjustTwist_R");
		int32_t L_10;
		L_10 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral72ECFB5D9492E2645DB734DD728282A27B469DE2, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_rightUpperArmTwistHash_13(L_10);
		// leftClavicleHash = UMAUtils.StringToHash("Upperarm_L");
		int32_t L_11;
		L_11 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralBE33C7E2060BCA48B74F818EB430B951CF972FA1, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_leftClavicleHash_14(L_11);
		// rightClavicleHash = UMAUtils.StringToHash("Upperarm_R");
		int32_t L_12;
		L_12 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral1B2DB56936EB9A0DB371C3941914C096708C58C3, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_rightClavicleHash_15(L_12);
		// leftThighTwistHash = UMAUtils.StringToHash("ThighAdjustTwist_L");
		int32_t L_13;
		L_13 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralD2C0EDA351E3C5E187658030A07D668ABEADA6B2, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_leftThighTwistHash_16(L_13);
		// rightThighTwistHash = UMAUtils.StringToHash("ThighAdjustTwist_R");
		int32_t L_14;
		L_14 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralFE211060505342920A37CD05D9CD93CF8E039826, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_rightThighTwistHash_17(L_14);
		// leftThighHash = UMAUtils.StringToHash("Thigh_L");
		int32_t L_15;
		L_15 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral85D9D22051ABA913D5F1CA8FFD438E826BF94AA1, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_leftThighHash_18(L_15);
		// rightThighHash = UMAUtils.StringToHash("Thigh_R");
		int32_t L_16;
		L_16 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralAC7761F124DAC4EB02FE582988B4679E4D789115, /*hidden argument*/NULL);
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_rightThighHash_19(L_16);
		// hashesFound = true;
		((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->set_hashesFound_20((bool)1);
	}

IL_0100:
	{
		// GameObject leftHand = umaData.GetBoneGameObject(leftHandHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_17 = ___umaData0;
		IL2CPP_RUNTIME_CLASS_INIT(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var);
		int32_t L_18 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_leftHandHash_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_17, L_18, /*hidden argument*/NULL);
		V_0 = L_19;
		// GameObject rightHand = umaData.GetBoneGameObject(rightHandHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_20 = ___umaData0;
		int32_t L_21 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_rightHandHash_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_20, L_21, /*hidden argument*/NULL);
		V_1 = L_22;
		// GameObject leftTwist = umaData.GetBoneGameObject(leftTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_23 = ___umaData0;
		int32_t L_24 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_leftTwistHash_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25;
		L_25 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_23, L_24, /*hidden argument*/NULL);
		V_2 = L_25;
		// GameObject rightTwist = umaData.GetBoneGameObject(rightTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_26 = ___umaData0;
		int32_t L_27 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_rightTwistHash_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
		L_28 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_26, L_27, /*hidden argument*/NULL);
		V_3 = L_28;
		// GameObject leftFoot = umaData.GetBoneGameObject(leftFootHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_29 = ___umaData0;
		int32_t L_30 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_leftFootHash_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_29, L_30, /*hidden argument*/NULL);
		V_4 = L_31;
		// GameObject rightFoot = umaData.GetBoneGameObject(rightFootHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_32 = ___umaData0;
		int32_t L_33 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_rightFootHash_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_32, L_33, /*hidden argument*/NULL);
		V_5 = L_34;
		// GameObject leftFootTwist = umaData.GetBoneGameObject(leftFootTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_35 = ___umaData0;
		int32_t L_36 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_leftFootTwistHash_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_35, L_36, /*hidden argument*/NULL);
		V_6 = L_37;
		// GameObject rightFootTwist = umaData.GetBoneGameObject(rightFootTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_38 = ___umaData0;
		int32_t L_39 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_rightFootTwistHash_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_38, L_39, /*hidden argument*/NULL);
		V_7 = L_40;
		// GameObject leftUpperArmTwist = umaData.GetBoneGameObject(leftUpperArmTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_41 = ___umaData0;
		int32_t L_42 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_leftUpperArmTwistHash_12();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_41, L_42, /*hidden argument*/NULL);
		V_8 = L_43;
		// GameObject rightUpperArmTwist = umaData.GetBoneGameObject(rightUpperArmTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_44 = ___umaData0;
		int32_t L_45 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_rightUpperArmTwistHash_13();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_44, L_45, /*hidden argument*/NULL);
		V_9 = L_46;
		// GameObject leftUpperArm = umaData.GetBoneGameObject(leftClavicleHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_47 = ___umaData0;
		int32_t L_48 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_leftClavicleHash_14();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_47, L_48, /*hidden argument*/NULL);
		V_10 = L_49;
		// GameObject rightUpperArm = umaData.GetBoneGameObject(rightClavicleHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_50 = ___umaData0;
		int32_t L_51 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_rightClavicleHash_15();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_50, L_51, /*hidden argument*/NULL);
		V_11 = L_52;
		// GameObject leftThighTwist = umaData.GetBoneGameObject(leftThighTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_53 = ___umaData0;
		int32_t L_54 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_leftThighTwistHash_16();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55;
		L_55 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_53, L_54, /*hidden argument*/NULL);
		V_12 = L_55;
		// GameObject rightThighTwist = umaData.GetBoneGameObject(rightThighTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_56 = ___umaData0;
		int32_t L_57 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_rightThighTwistHash_17();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58;
		L_58 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_56, L_57, /*hidden argument*/NULL);
		V_13 = L_58;
		// GameObject leftThigh = umaData.GetBoneGameObject(leftThighHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_59 = ___umaData0;
		int32_t L_60 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_leftThighHash_18();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61;
		L_61 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_59, L_60, /*hidden argument*/NULL);
		V_14 = L_61;
		// GameObject rightThigh = umaData.GetBoneGameObject(rightThighHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_62 = ___umaData0;
		int32_t L_63 = ((O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_StaticFields*)il2cpp_codegen_static_fields_for(O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954_il2cpp_TypeInfo_var))->get_rightThighHash_19();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64;
		L_64 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_62, L_63, /*hidden argument*/NULL);
		V_15 = L_64;
		// if ((leftHand == null) || (rightHand == null) || (leftTwist == null) || (rightTwist == null)
		//     || (leftFoot == null) || (rightFoot == null) || (leftFootTwist == null) || (rightFootTwist == null)
		//     || (leftUpperArm == null) || (rightUpperArm == null) || (leftUpperArmTwist == null) || (rightUpperArmTwist == null)
		//     || (leftThighTwist == null) || (rightThighTwist == null) || (leftThigh == null) || (rightThigh == null))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_66;
		L_66 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_65, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_66)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_68;
		L_68 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_67, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_68)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_69, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_70)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_72;
		L_72 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_71, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_72)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_74;
		L_74 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_73, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_74)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_76;
		L_76 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_75, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_76)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_77, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_78)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_80;
		L_80 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_79, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_80)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_81 = V_10;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_82;
		L_82 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_81, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_82)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_83 = V_11;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_83, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_84)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_85 = V_8;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_86;
		L_86 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_85, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_86)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_87 = V_9;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_88;
		L_88 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_87, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_88)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_89 = V_12;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_90;
		L_90 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_89, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_90)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_91 = V_13;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_91, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_92)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_93 = V_14;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_94;
		L_94 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_93, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_94)
		{
			goto IL_0271;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_95 = V_15;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_96;
		L_96 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_95, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_96)
		{
			goto IL_0287;
		}
	}

IL_0271:
	{
		// Debug.LogError("Failed to add o3n Twist to: " + umaData.name);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_97 = ___umaData0;
		String_t* L_98;
		L_98 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_97, /*hidden argument*/NULL);
		String_t* L_99;
		L_99 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralC9FB0CB2033F2D6B7891E1DFF032E2B44049634A, L_98, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_99, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0287:
	{
		// O3nTwistBone old = umaData.umaRoot.GetComponent<O3nTwistBone>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_100 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_101 = L_100->get_umaRoot_35();
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_102;
		L_102 = GameObject_GetComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_m6EE92304ABF90A606E8A1D9FDFEDDCDBF82B7861(L_101, /*hidden argument*/GameObject_GetComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_m6EE92304ABF90A606E8A1D9FDFEDDCDBF82B7861_RuntimeMethod_var);
		V_16 = L_102;
		// if (old != null)
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_103 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_104;
		L_104 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_103, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_104)
		{
			goto IL_02a5;
		}
	}
	{
		// DestroyImmediate(old);
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_105 = V_16;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_DestroyImmediate_mCCED69F4D4C9A4FA3AC30A142CF3D7F085F7C422(L_105, /*hidden argument*/NULL);
	}

IL_02a5:
	{
		// var twist = umaData.umaRoot.AddComponent<O3nTwistBone>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_106 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_107 = L_106->get_umaRoot_35();
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_108;
		L_108 = GameObject_AddComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_mF7463B7FF1EB66FA82ED62D3DC9BB4EDAFBA622F(L_107, /*hidden argument*/GameObject_AddComponent_TisO3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8_mF7463B7FF1EB66FA82ED62D3DC9BB4EDAFBA622F_RuntimeMethod_var);
		V_17 = L_108;
		// twist.twistValue = 1.0f;
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_109 = V_17;
		L_109->set_twistValue_4((1.0f));
		// twist.twistValues = new float[] { 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.5f, 0.5f };
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_110 = V_17;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_111 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)8);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_112 = L_111;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_113 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____F67E7E82E1F5599C704A6B0096CF600DBC2CD84B0203F216A29297FDD3BC00ED_1_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_112, L_113, /*hidden argument*/NULL);
		L_110->set_twistValues_5(L_112);
		// twist.twistBone = new Transform[] {leftTwist.transform, rightTwist.transform, leftFootTwist.transform, rightFootTwist.transform, leftUpperArmTwist.transform, rightUpperArmTwist.transform, leftThighTwist.transform, rightThighTwist.transform};
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_114 = V_17;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_115 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)8);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_116 = L_115;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_117 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_118;
		L_118 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_117, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_116, L_118);
		(L_116)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_118);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_119 = L_116;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_120 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_121;
		L_121 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_120, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_119, L_121);
		(L_119)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_121);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_122 = L_119;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_123 = V_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_124;
		L_124 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_123, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_122, L_124);
		(L_122)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_124);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_125 = L_122;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_126 = V_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_127;
		L_127 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_126, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_125, L_127);
		(L_125)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_127);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_128 = L_125;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_129 = V_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_130;
		L_130 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_129, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_128, L_130);
		(L_128)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_130);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_131 = L_128;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_132 = V_9;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_133;
		L_133 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_132, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_131, L_133);
		(L_131)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_133);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_134 = L_131;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_135 = V_12;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_136;
		L_136 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_135, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_134, L_136);
		(L_134)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_136);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_137 = L_134;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_138 = V_13;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_139;
		L_139 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_138, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_137, L_139);
		(L_137)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_139);
		L_114->set_twistBone_7(L_137);
		// twist.refBone = new Transform[] {leftHand.transform, rightHand.transform, leftFoot.transform, rightFoot.transform, leftUpperArm.transform, rightUpperArm.transform, leftThigh.transform, rightThigh.transform};
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_140 = V_17;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_141 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)8);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_142 = L_141;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_143 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_144;
		L_144 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_143, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_142, L_144);
		(L_142)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_144);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_145 = L_142;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_146 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_147;
		L_147 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_146, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_145, L_147);
		(L_145)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_147);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_148 = L_145;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_149 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_150;
		L_150 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_149, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_148, L_150);
		(L_148)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_150);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_151 = L_148;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_152 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_153;
		L_153 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_152, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_151, L_153);
		(L_151)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_153);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_154 = L_151;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_155 = V_10;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_156;
		L_156 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_155, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_154, L_156);
		(L_154)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_156);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_157 = L_154;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_158 = V_11;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_159;
		L_159 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_158, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_157, L_159);
		(L_157)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_159);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_160 = L_157;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_161 = V_14;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_162;
		L_162 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_161, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_160, L_162);
		(L_160)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_162);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_163 = L_160;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_164 = V_15;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_165;
		L_165 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_164, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_163, L_165);
		(L_163)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_165);
		L_140->set_refBone_8(L_163);
		// twist.originalRefRotation = new Quaternion[] { Quaternion.Euler(-108f,0f,0f), Quaternion.Euler(-72f, 0f, 0f) , Quaternion.Euler(-181f, 0f, 0f)
		//     , Quaternion.Euler(1f, 0f, 0f), Quaternion.Euler(-163f, 0f, 0f), Quaternion.Euler(-17f, 0f, 0f), Quaternion.Euler(-184f, 0f, 0f), Quaternion.Euler(4f, 0f, 0f)  };
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_166 = V_17;
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_167 = (QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6*)SZArrayNew(QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6_il2cpp_TypeInfo_var, (uint32_t)8);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_168 = L_167;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_169;
		L_169 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-108.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_168)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_169);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_170 = L_168;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_171;
		L_171 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-72.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_170)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_171);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_172 = L_170;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_173;
		L_173 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-181.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_172)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_173);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_174 = L_172;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_175;
		L_175 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_174)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_175);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_176 = L_174;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_177;
		L_177 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-163.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_176)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_177);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_178 = L_176;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_179;
		L_179 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-17.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_178)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_179);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_180 = L_178;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_181;
		L_181 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((-184.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_180)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_181);
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_182 = L_180;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_183;
		L_183 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((4.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_182)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_183);
		L_166->set_originalRefRotation_10(L_182);
		// twist.axisVector = new Vector3[] { Vector3.down, Vector3.up, Vector3.down, Vector3.up, Vector3.down, Vector3.up, Vector3.down, Vector3.up };
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_184 = V_17;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_185 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4_il2cpp_TypeInfo_var, (uint32_t)8);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_186 = L_185;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187;
		L_187 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		(L_186)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_187);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_188 = L_186;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189;
		L_189 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		(L_188)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_189);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_190 = L_188;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_191;
		L_191 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		(L_190)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_191);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_192 = L_190;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193;
		L_193 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		(L_192)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_193);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_194 = L_192;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_195;
		L_195 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		(L_194)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_195);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_196 = L_194;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_197;
		L_197 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		(L_196)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_197);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_198 = L_196;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_199;
		L_199 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		(L_198)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(6), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_199);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_200 = L_198;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		L_201 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		(L_200)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(7), (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_201);
		L_184->set_axisVector_9(L_200);
		// twist.shoulderTwist = new bool[] { false, false, false, false, true, true, false, false};
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_202 = V_17;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_203 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)8);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_204 = L_203;
		(L_204)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (bool)1);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_205 = L_204;
		(L_205)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(5), (bool)1);
		L_202->set_shoulderTwist_11(L_205);
		// twist.enabled = new bool[] { true, true, true, true, true, true, true, true};
		O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * L_206 = V_17;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_207 = (BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C*)SZArrayNew(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C_il2cpp_TypeInfo_var, (uint32_t)8);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_208 = L_207;
		RuntimeFieldHandle_t7BE65FC857501059EBAC9772C93B02CD413D9C96  L_209 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_t6BC7664D9CD46304D39A7D175BB8FFBE0B9F4528____04ABC8821A06E5A30937967D11AD10221CB5AC3B5273E434F1284EE87129A061_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_mE27238308FED781F2D6A719F0903F2E1311B058F((RuntimeArray *)(RuntimeArray *)L_208, L_209, /*hidden argument*/NULL);
		L_206->set_enabled_12(L_208);
		// }
		return;
	}
}
// System.Void UMA.O3nArmLowerLegTwistSlotScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nArmLowerLegTwistSlotScript__ctor_mFD9E3BDC5372F35E6CEAB4744BFF0D0705E10608 (O3nArmLowerLegTwistSlotScript_t20AFB238423470365A4B8569DB91FF058CD71954 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UMA.O3nArmLowerLegTwistSlotScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nArmLowerLegTwistSlotScript__cctor_m85543DB29571C5944106AD77062AB94AE268A6DB (const RuntimeMethod* method)
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
// System.Void UMA.O3nShoulderUpperLegTwistSlotScript::OnDnaApplied(UMA.UMAData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nShoulderUpperLegTwistSlotScript_OnDnaApplied_m6BA62256166CB2DCE6E9029916801C56152EF579 (O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB * __this, UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * ___umaData0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B2DB56936EB9A0DB371C3941914C096708C58C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F0BE10DA9F0686FC95C7CC99A9CC6EB6B01C05C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72ECFB5D9492E2645DB734DD728282A27B469DE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77C7529126A4EB596366238764473C5A4FAA909A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85D9D22051ABA913D5F1CA8FFD438E826BF94AA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC7761F124DAC4EB02FE582988B4679E4D789115);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBE33C7E2060BCA48B74F818EB430B951CF972FA1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2C0EDA351E3C5E187658030A07D668ABEADA6B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE211060505342920A37CD05D9CD93CF8E039826);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_1 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_3 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_4 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_5 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_6 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_7 = NULL;
	TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * V_8 = NULL;
	{
		// if (!hashesFound)
		IL2CPP_RUNTIME_CLASS_INIT(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var);
		bool L_0 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_hashesFound_12();
		if (L_0)
		{
			goto IL_0085;
		}
	}
	{
		// leftShoulderHash = UMAUtils.StringToHash("Upperarm_L");
		IL2CPP_RUNTIME_CLASS_INIT(UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralBE33C7E2060BCA48B74F818EB430B951CF972FA1, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var);
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_leftShoulderHash_4(L_1);
		// rightShoulderHash = UMAUtils.StringToHash("Upperarm_R");
		int32_t L_2;
		L_2 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral1B2DB56936EB9A0DB371C3941914C096708C58C3, /*hidden argument*/NULL);
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_rightShoulderHash_5(L_2);
		// leftShoulderTwistHash = UMAUtils.StringToHash("UpperarmAdjustTwist_L");
		int32_t L_3;
		L_3 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral3F0BE10DA9F0686FC95C7CC99A9CC6EB6B01C05C, /*hidden argument*/NULL);
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_leftShoulderTwistHash_6(L_3);
		// rightShoulerTwistHash = UMAUtils.StringToHash("UpperarmAdjustTwist_R");
		int32_t L_4;
		L_4 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral72ECFB5D9492E2645DB734DD728282A27B469DE2, /*hidden argument*/NULL);
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_rightShoulerTwistHash_7(L_4);
		// leftThighHash = UMAUtils.StringToHash("Thigh_L");
		int32_t L_5;
		L_5 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteral85D9D22051ABA913D5F1CA8FFD438E826BF94AA1, /*hidden argument*/NULL);
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_leftThighHash_8(L_5);
		// rightThighHash = UMAUtils.StringToHash("Thigh_R");
		int32_t L_6;
		L_6 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralAC7761F124DAC4EB02FE582988B4679E4D789115, /*hidden argument*/NULL);
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_rightThighHash_9(L_6);
		// leftThighTwistHash = UMAUtils.StringToHash("ThighAdjustTwist_L");
		int32_t L_7;
		L_7 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralD2C0EDA351E3C5E187658030A07D668ABEADA6B2, /*hidden argument*/NULL);
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_leftThighTwistHash_10(L_7);
		// rightThighTwistHash = UMAUtils.StringToHash("ThighAdjustTwist_R");
		int32_t L_8;
		L_8 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47(_stringLiteralFE211060505342920A37CD05D9CD93CF8E039826, /*hidden argument*/NULL);
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_rightThighTwistHash_11(L_8);
		// hashesFound = true;
		((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->set_hashesFound_12((bool)1);
	}

IL_0085:
	{
		// GameObject leftShoulder = umaData.GetBoneGameObject(leftShoulderHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_9 = ___umaData0;
		IL2CPP_RUNTIME_CLASS_INIT(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var);
		int32_t L_10 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_leftShoulderHash_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_9, L_10, /*hidden argument*/NULL);
		V_0 = L_11;
		// GameObject rightShoulder = umaData.GetBoneGameObject(rightShoulderHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_12 = ___umaData0;
		int32_t L_13 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_rightShoulderHash_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_12, L_13, /*hidden argument*/NULL);
		V_1 = L_14;
		// GameObject leftShoulderTwist = umaData.GetBoneGameObject(leftShoulderTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_15 = ___umaData0;
		int32_t L_16 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_leftShoulderTwistHash_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_15, L_16, /*hidden argument*/NULL);
		V_2 = L_17;
		// GameObject rightShoulderTwist = umaData.GetBoneGameObject(rightShoulerTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_18 = ___umaData0;
		int32_t L_19 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_rightShoulerTwistHash_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_18, L_19, /*hidden argument*/NULL);
		V_3 = L_20;
		// GameObject leftThigh = umaData.GetBoneGameObject(leftThighHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_21 = ___umaData0;
		int32_t L_22 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_leftThighHash_8();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23;
		L_23 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_21, L_22, /*hidden argument*/NULL);
		V_4 = L_23;
		// GameObject rightThigh = umaData.GetBoneGameObject(rightThighHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_24 = ___umaData0;
		int32_t L_25 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_rightThighHash_9();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26;
		L_26 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_24, L_25, /*hidden argument*/NULL);
		V_5 = L_26;
		// GameObject leftThighTwist = umaData.GetBoneGameObject(leftThighTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_27 = ___umaData0;
		int32_t L_28 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_leftThighTwistHash_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29;
		L_29 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_27, L_28, /*hidden argument*/NULL);
		V_6 = L_29;
		// GameObject rightThighTwist = umaData.GetBoneGameObject(rightThighTwistHash);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_30 = ___umaData0;
		int32_t L_31 = ((O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_StaticFields*)il2cpp_codegen_static_fields_for(O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB_il2cpp_TypeInfo_var))->get_rightThighTwistHash_11();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_32;
		L_32 = UMAData_GetBoneGameObject_m47857F7236550F1D0F3A71C4BD8C3D73F1180E82(L_30, L_31, /*hidden argument*/NULL);
		V_7 = L_32;
		// if ((leftShoulder == null) || (rightShoulder == null) || (leftShoulderTwist == null) || (rightShoulderTwist == null)
		//     || (leftThigh == null) || (rightThigh == null) || (leftThighTwist == null) || (rightThighTwist == null))
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_34;
		L_34 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_33, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_34)
		{
			goto IL_0135;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_36;
		L_36 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_35, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0135;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_37, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_38)
		{
			goto IL_0135;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_39, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_40)
		{
			goto IL_0135;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_42;
		L_42 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_41, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_42)
		{
			goto IL_0135;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_43, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_44)
		{
			goto IL_0135;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = V_6;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_46;
		L_46 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_45, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (L_46)
		{
			goto IL_0135;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_47 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_48;
		L_48 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_47, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_48)
		{
			goto IL_014b;
		}
	}

IL_0135:
	{
		// Debug.LogError("Failed to add o3n Forearm Twist to: " + umaData.name);
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_49 = ___umaData0;
		String_t* L_50;
		L_50 = Object_get_name_m0C7BC870ED2F0DC5A2FB09628136CD7D1CB82CFB(L_49, /*hidden argument*/NULL);
		String_t* L_51;
		L_51 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral77C7529126A4EB596366238764473C5A4FAA909A, L_50, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogError_m8850D65592770A364D494025FF3A73E8D4D70485(L_51, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_014b:
	{
		// var twist = umaData.umaRoot.AddComponent<TwistBones>();
		UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * L_52 = ___umaData0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_53 = L_52->get_umaRoot_35();
		TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * L_54;
		L_54 = GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF(L_53, /*hidden argument*/GameObject_AddComponent_TisTwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B_m04BEF42D0AC5F5DEAAE9F2B23DC3EE46453D64EF_RuntimeMethod_var);
		V_8 = L_54;
		// twist.twistValue = -0.5f;
		TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * L_55 = V_8;
		L_55->set_twistValue_4((-0.5f));
		// twist.twistBone = new Transform[] {leftShoulderTwist.transform, rightShoulderTwist.transform, leftThighTwist.transform, rightThighTwist.transform};
		TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * L_56 = V_8;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_57 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)4);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_58 = L_57;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59 = V_2;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_60;
		L_60 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_59, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_58, L_60);
		(L_58)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_60);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_61 = L_58;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_61, L_63);
		(L_61)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_63);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_64 = L_61;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = V_6;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_65, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_64, L_66);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_66);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_67 = L_64;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68 = V_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_69;
		L_69 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_68, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_67, L_69);
		(L_67)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_69);
		L_56->set_twistBone_5(L_67);
		// twist.refBone = new Transform[] {leftShoulder.transform, rightShoulder.transform, leftThigh.transform, rightThigh.transform};
		TwistBones_tE636B693ED18B48E57DD67ECAD731EDB583A825B * L_70 = V_8;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_71 = (TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D*)SZArrayNew(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D_il2cpp_TypeInfo_var, (uint32_t)4);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_72 = L_71;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_74;
		L_74 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_73, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_72, L_74);
		(L_72)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_74);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_75 = L_72;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76 = V_1;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_77;
		L_77 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_76, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_75, L_77);
		(L_75)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_77);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_78 = L_75;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79 = V_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_80;
		L_80 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_79, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_78, L_80);
		(L_78)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_80);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_81 = L_78;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_82 = V_5;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_83;
		L_83 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_82, /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_81, L_83);
		(L_81)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)L_83);
		L_70->set_refBone_6(L_81);
		// }
		return;
	}
}
// System.Void UMA.O3nShoulderUpperLegTwistSlotScript::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nShoulderUpperLegTwistSlotScript__ctor_m4CAFFE9E324621E91F36EE432C60C95DE2D62949 (O3nShoulderUpperLegTwistSlotScript_t1DE4757E700A08BA9C480AE727F37D7A7FE279FB * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UMA.O3nShoulderUpperLegTwistSlotScript::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nShoulderUpperLegTwistSlotScript__cctor_m6BB6CF0B6E24E32EEB6A9C45F4F40DFA62DCAF7E (const RuntimeMethod* method)
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
// System.Void O3nTwistBone::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nTwistBone_Start_m6C0172A8DA471018573956C3D4CFF76F98529443 (O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if ((twistBone != null) && (refBone != null) && (twistBone.Length == refBone.Length))
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_0 = __this->get_twistBone_7();
		if (!L_0)
		{
			goto IL_00a6;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_1 = __this->get_refBone_8();
		if (!L_1)
		{
			goto IL_00a6;
		}
	}
	{
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_2 = __this->get_twistBone_7();
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_3 = __this->get_refBone_8();
		if ((!(((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_3)->max_length)))))))
		{
			goto IL_00a6;
		}
	}
	{
		// twistRotation = new float[twistBone.Length];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_4 = __this->get_twistBone_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))));
		__this->set_twistRotation_14(L_5);
		// originalRefRotationAngle = new float[twistBone.Length];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = __this->get_twistBone_7();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))));
		__this->set_originalRefRotationAngle_13(L_7);
		// for (int i = 0; i < twistBone.Length; i++)
		V_0 = 0;
		goto IL_009b;
	}

IL_0052:
	{
		// rotated = originalRefRotation[i] * Vector3.up;
		QuaternionU5BU5D_t584B1CC68E95071898E32F34DB2CC1E4A726FAA6* L_8 = __this->get_originalRefRotation_10();
		int32_t L_9 = V_0;
		int32_t L_10 = L_9;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_11 = (L_8)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_10));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_11, L_12, /*hidden argument*/NULL);
		__this->set_rotated_15(L_13);
		// originalRefRotationAngle[i] = Mathf.Atan2(rotated.z, rotated.y) * Mathf.Rad2Deg;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14 = __this->get_originalRefRotationAngle_13();
		int32_t L_15 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_16 = __this->get_address_of_rotated_15();
		float L_17 = L_16->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_18 = __this->get_address_of_rotated_15();
		float L_19 = L_18->get_y_3();
		float L_20;
		L_20 = atan2f(L_17, L_19);
		(L_14)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_15), (float)((float)il2cpp_codegen_multiply((float)L_20, (float)(57.2957802f))));
		// for (int i = 0; i < twistBone.Length; i++)
		int32_t L_21 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_009b:
	{
		// for (int i = 0; i < twistBone.Length; i++)
		int32_t L_22 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_23 = __this->get_twistBone_7();
		if ((((int32_t)L_22) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_23)->max_length))))))
		{
			goto IL_0052;
		}
	}

IL_00a6:
	{
		// }
		return;
	}
}
// System.Void O3nTwistBone::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nTwistBone_LateUpdate_m4C80A149BD31073429B343E15282D80B574509E6 (O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B4_0 = NULL;
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B3_0 = NULL;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  G_B5_0;
	memset((&G_B5_0), 0, sizeof(G_B5_0));
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * G_B5_1 = NULL;
	{
		// twistValue = Mathf.Clamp(twistValue, 0f, 1f);
		float L_0 = __this->get_twistValue_4();
		float L_1;
		L_1 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_0, (0.0f), (1.0f), /*hidden argument*/NULL);
		__this->set_twistValue_4(L_1);
		// for (int i = 0; i < twistBone.Length; i++)
		V_0 = 0;
		goto IL_00dc;
	}

IL_0022:
	{
		// if (enabled[i])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_2 = __this->get_enabled_12();
		int32_t L_3 = V_0;
		int32_t L_4 = L_3;
		uint8_t L_5 = (uint8_t)(L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		if (!L_5)
		{
			goto IL_00d8;
		}
	}
	{
		// rotated = refBone[i].localRotation * axisVector[i];
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_6 = __this->get_refBone_8();
		int32_t L_7 = V_0;
		int32_t L_8 = L_7;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Transform_get_localRotation_mA6472AE7509D762965275D79B645A14A9CCF5BE5(L_9, /*hidden argument*/NULL);
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_11 = __this->get_axisVector_9();
		int32_t L_12 = V_0;
		int32_t L_13 = L_12;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_10, L_14, /*hidden argument*/NULL);
		__this->set_rotated_15(L_15);
		// twistRotation[i] = Mathf.DeltaAngle(originalRefRotationAngle[i], Mathf.Atan2(rotated.z, rotated.y) * Mathf.Rad2Deg);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = __this->get_twistRotation_14();
		int32_t L_17 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_18 = __this->get_originalRefRotationAngle_13();
		int32_t L_19 = V_0;
		int32_t L_20 = L_19;
		float L_21 = (L_18)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_20));
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_22 = __this->get_address_of_rotated_15();
		float L_23 = L_22->get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * L_24 = __this->get_address_of_rotated_15();
		float L_25 = L_24->get_y_3();
		float L_26;
		L_26 = atan2f(L_23, L_25);
		float L_27;
		L_27 = Mathf_DeltaAngle_mB1BD0E139ACCAE694968F7D9CB096C60F69CE9FE(L_21, ((float)il2cpp_codegen_multiply((float)L_26, (float)(57.2957802f))), /*hidden argument*/NULL);
		(L_16)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_17), (float)L_27);
		// twistBone[i].localEulerAngles = (shoulderTwist[i]? Vector3.left : Vector3.right) * ClampAngle(Mathf.Lerp(0.0f, twistRotation[i], twistValues[i] * twistValue));
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_28 = __this->get_twistBone_7();
		int32_t L_29 = V_0;
		int32_t L_30 = L_29;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31 = (L_28)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_30));
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_32 = __this->get_shoulderTwist_11();
		int32_t L_33 = V_0;
		int32_t L_34 = L_33;
		uint8_t L_35 = (uint8_t)(L_32)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_34));
		G_B3_0 = L_31;
		if (L_35)
		{
			G_B4_0 = L_31;
			goto IL_00a2;
		}
	}
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		G_B5_0 = L_36;
		G_B5_1 = G_B3_0;
		goto IL_00a7;
	}

IL_00a2:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_37;
		L_37 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		G_B5_0 = L_37;
		G_B5_1 = G_B4_0;
	}

IL_00a7:
	{
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_38 = __this->get_twistRotation_14();
		int32_t L_39 = V_0;
		int32_t L_40 = L_39;
		float L_41 = (L_38)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_40));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = __this->get_twistValues_5();
		int32_t L_43 = V_0;
		int32_t L_44 = L_43;
		float L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		float L_46 = __this->get_twistValue_4();
		float L_47;
		L_47 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616((0.0f), L_41, ((float)il2cpp_codegen_multiply((float)L_45, (float)L_46)), /*hidden argument*/NULL);
		float L_48;
		L_48 = O3nTwistBone_ClampAngle_m8988429B6F283FF74A614EA46D4343F58E3B4B3B(__this, L_47, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_49;
		L_49 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(G_B5_0, L_48, /*hidden argument*/NULL);
		Transform_set_localEulerAngles_mB63076996124DC76E6902A81677A6E3C814C693B(G_B5_1, L_49, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		// for (int i = 0; i < twistBone.Length; i++)
		int32_t L_50 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_50, (int32_t)1));
	}

IL_00dc:
	{
		// for (int i = 0; i < twistBone.Length; i++)
		int32_t L_51 = V_0;
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_52 = __this->get_twistBone_7();
		if ((((int32_t)L_51) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_52)->max_length))))))
		{
			goto IL_0022;
		}
	}
	{
		// }
		return;
	}
}
// System.Single O3nTwistBone::ClampAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float O3nTwistBone_ClampAngle_m8988429B6F283FF74A614EA46D4343F58E3B4B3B (O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * __this, float ___angle0, const RuntimeMethod* method)
{
	{
		// if (angle < -180)
		float L_0 = ___angle0;
		if ((!(((float)L_0) < ((float)(-180.0f)))))
		{
			goto IL_0011;
		}
	}
	{
		// angle += 360;
		float L_1 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_add((float)L_1, (float)(360.0f)));
	}

IL_0011:
	{
		// if (angle > 180)
		float L_2 = ___angle0;
		if ((!(((float)L_2) > ((float)(180.0f)))))
		{
			goto IL_0022;
		}
	}
	{
		// angle -= 360;
		float L_3 = ___angle0;
		___angle0 = ((float)il2cpp_codegen_subtract((float)L_3, (float)(360.0f)));
	}

IL_0022:
	{
		// return Mathf.Clamp(angle, - twistLimit, twistLimit);
		float L_4 = ___angle0;
		float L_5 = __this->get_twistLimit_6();
		float L_6 = __this->get_twistLimit_6();
		float L_7;
		L_7 = Mathf_Clamp_m2416F3B785C8F135863E3D17E5B0CB4174797B87(L_4, ((-L_5)), L_6, /*hidden argument*/NULL);
		return L_7;
	}
}
// System.Void O3nTwistBone::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void O3nTwistBone__ctor_m7E779C58B683E4BC749FFCCE04C042F73354CDFC (O3nTwistBone_t308BD6E2950D272BDF1A4D8105F392F0AEF72BB8 * __this, const RuntimeMethod* method)
{
	{
		// public float twistLimit = 45f;
		__this->set_twistLimit_6((45.0f));
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
// System.Void RandomAvSaveLoad::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAvSaveLoad_Start_m4214DF7C852D4D250B1EDB02732DB38649537EF1 (RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Randomizer.Randomize(Avatar);
		UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * L_0 = __this->get_Randomizer_5();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_1 = __this->get_Avatar_4();
		UMARandomAvatar_Randomize_mFAC79A3C9CF88FB6E50765186AE86C0389454EF9(L_0, L_1, /*hidden argument*/NULL);
		// Avatar.BuildCharacter(false);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0(L_2, (bool)0, (bool)0, (bool)1, /*hidden argument*/NULL);
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_3 = __this->get_Avatar_4();
		String_t* L_4;
		L_4 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_11(L_4);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_5 = __this->get_Avatar_4();
		String_t* L_6;
		L_6 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_5, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_10(L_6);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_12(L_9);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_10 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_11;
		L_11 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_10, (bool)1, /*hidden argument*/NULL);
		V_0 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_16(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_13 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_13, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_14 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_15;
		L_15 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_14, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_13, L_15, /*hidden argument*/NULL);
		__this->set_binarySize_17(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_17 = __this->get_saveString_10();
		int32_t L_18;
		L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_17, /*hidden argument*/NULL);
		__this->set_saveStringSize_13(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_19 = __this->get_avatarString_11();
		int32_t L_20;
		L_20 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_19, /*hidden argument*/NULL);
		__this->set_avatarStringSize_14(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_21 = __this->get_compressedString_12();
		int32_t L_22;
		L_22 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_21, /*hidden argument*/NULL);
		__this->set_compressedStringSize_15(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)2)));
		// PlayerPrefs.SetString("saveString", saveString);
		String_t* L_23 = __this->get_saveString_10();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, L_23, /*hidden argument*/NULL);
		// Debug.Log("Saved string");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888, /*hidden argument*/NULL);
		// betweenscenes = PlayerPrefs.GetString("saveString");
		String_t* L_24;
		L_24 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_9(L_24);
		// Debug.Log("recipe saved as betweenscenes");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RandomAvSaveLoad::SaveAvatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAvSaveLoad_SaveAvatar_mC86FA303ED89EBE1CE2A05AF31DAB430123CAB49 (RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		String_t* L_1;
		L_1 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_11(L_1);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3;
		L_3 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_10(L_3);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_5;
		L_5 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_4, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_12(L_6);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_16(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_10 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_10, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_11 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_12;
		L_12 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_11, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_10, L_12, /*hidden argument*/NULL);
		__this->set_binarySize_17(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_14 = __this->get_saveString_10();
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		__this->set_saveStringSize_13(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_16 = __this->get_avatarString_11();
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		__this->set_avatarStringSize_14(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_18 = __this->get_compressedString_12();
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		__this->set_compressedStringSize_15(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		// PlayerPrefs.SetString("saveString", saveString);
		String_t* L_20 = __this->get_saveString_10();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, L_20, /*hidden argument*/NULL);
		// Debug.Log("Saved string");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888, /*hidden argument*/NULL);
		// betweenscenes = PlayerPrefs.GetString("saveString");
		String_t* L_21;
		L_21 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_9(L_21);
		// Debug.Log("recipe saved as betweenscenes");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RandomAvSaveLoad::CenterCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAvSaveLoad_CenterCam_m61CDB93B8868093263D668485EC906E908D8C210 (RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9 * __this, const RuntimeMethod* method)
{
	{
		// Orbiter.Reset();
		UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * L_0 = __this->get_Orbiter_6();
		UMAMouseOrbitImproved_Reset_m53B3A4D5CDB7EF29044174ABB505DC07F0554504(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void RandomAvSaveLoad::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RandomAvSaveLoad__ctor_mEC30409B17A102F5508E177EB8182699EC850783 (RandomAvSaveLoad_t3682D7A5A34255359ABFDED0D182B2594DA06FB9 * __this, const RuntimeMethod* method)
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
// System.Void UMA.CharacterSystem.Examples.SampleCode::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_Start_mBF57DBA6C3851DE6201E54058B4BAEDA47A83DB5 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m88F5FE96C0A33A124F3D714A1A58980084CFEB85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m16DACBE2B714DBB52B5C87F3BC0E83D1F760B11A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mD75CFCF83DABD5D2413068EB24666047951EEF2B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m6A5558B971D947E045A9B931391FEC1C4CC7505D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAAssetIndexer_GetAllAssets_TisRaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F_m554B6DA5359C05AC736508ACE91600660B44FF75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B  V_3;
	memset((&V_3), 0, sizeof(V_3));
	RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * V_4 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// UMAAssetIndexer index = UMAAssetIndexer.Instance;
		IL2CPP_RUNTIME_CLASS_INIT(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_il2cpp_TypeInfo_var);
		UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * L_0;
		L_0 = UMAAssetIndexer_get_Instance_m40EB4986AB0F7BD2583F65EE1B7E41461718A9F1(/*hidden argument*/NULL);
		V_0 = L_0;
		// races = index.GetAllAssets<RaceData>();
		UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * L_1 = V_0;
		List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * L_2;
		L_2 = UMAAssetIndexer_GetAllAssets_TisRaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F_m554B6DA5359C05AC736508ACE91600660B44FF75(L_1, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)NULL, /*hidden argument*/UMAAssetIndexer_GetAllAssets_TisRaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F_m554B6DA5359C05AC736508ACE91600660B44FF75_RuntimeMethod_var);
		__this->set_races_38(L_2);
		// Avatar.gameObject.SetActive(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_3 = __this->get_Avatar_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// if (RaceDropdown != null)
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_5 = __this->get_RaceDropdown_23();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_00c5;
		}
	}
	{
		// int i = 0;
		V_1 = 0;
		// int found = 0;
		V_2 = 0;
		// RaceDropdown.options.Clear();
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_7 = __this->get_RaceDropdown_23();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_8;
		L_8 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_7, /*hidden argument*/NULL);
		List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496(L_8, /*hidden argument*/List_1_Clear_m0120737C67D1EC6FCE04C67135E2BB71DDB96496_RuntimeMethod_var);
		// foreach (RaceData race in races)
		List_1_tBBA0F19ADE67EC9783436BAEB1615006C5991A96 * L_9 = __this->get_races_38();
		Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B  L_10;
		L_10 = List_1_GetEnumerator_m6A5558B971D947E045A9B931391FEC1C4CC7505D(L_9, /*hidden argument*/List_1_GetEnumerator_m6A5558B971D947E045A9B931391FEC1C4CC7505D_RuntimeMethod_var);
		V_3 = L_10;
	}

IL_0055:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00a0;
		}

IL_0057:
		{
			// foreach (RaceData race in races)
			RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_11;
			L_11 = Enumerator_get_Current_mD75CFCF83DABD5D2413068EB24666047951EEF2B_inline((Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B *)(&V_3), /*hidden argument*/Enumerator_get_Current_mD75CFCF83DABD5D2413068EB24666047951EEF2B_RuntimeMethod_var);
			V_4 = L_11;
			// if (race.raceName == Avatar.activeRace.name)
			RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_12 = V_4;
			String_t* L_13 = L_12->get_raceName_14();
			DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_14 = __this->get_Avatar_4();
			RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_15 = L_14->get_activeRace_29();
			String_t* L_16 = L_15->get_name_0();
			bool L_17;
			L_17 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, L_16, /*hidden argument*/NULL);
			if (!L_17)
			{
				goto IL_0080;
			}
		}

IL_007e:
		{
			// found = i;
			int32_t L_18 = V_1;
			V_2 = L_18;
		}

IL_0080:
		{
			// RaceDropdown.options.Add(new Dropdown.OptionData(race.raceName));
			Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_19 = __this->get_RaceDropdown_23();
			List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_20;
			L_20 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_19, /*hidden argument*/NULL);
			RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F * L_21 = V_4;
			String_t* L_22 = L_21->get_raceName_14();
			OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_23 = (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 *)il2cpp_codegen_object_new(OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857_il2cpp_TypeInfo_var);
			OptionData__ctor_m5AF14BD8BBF6118AC51A7A9A38AE3AB2DE3C2675(L_23, L_22, /*hidden argument*/NULL);
			List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC(L_20, L_23, /*hidden argument*/List_1_Add_mC2611000DA97145D1DFC867ECA604FBB3E8628EC_RuntimeMethod_var);
			// i++;
			int32_t L_24 = V_1;
			V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
		}

IL_00a0:
		{
			// foreach (RaceData race in races)
			bool L_25;
			L_25 = Enumerator_MoveNext_m16DACBE2B714DBB52B5C87F3BC0E83D1F760B11A((Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m16DACBE2B714DBB52B5C87F3BC0E83D1F760B11A_RuntimeMethod_var);
			if (L_25)
			{
				goto IL_0057;
			}
		}

IL_00a9:
		{
			IL2CPP_LEAVE(0xB9, FINALLY_00ab);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00ab;
	}

FINALLY_00ab:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m88F5FE96C0A33A124F3D714A1A58980084CFEB85((Enumerator_tA184ACD9462155E189A8EE097B6B1B0AC4FFC94B *)(&V_3), /*hidden argument*/Enumerator_Dispose_m88F5FE96C0A33A124F3D714A1A58980084CFEB85_RuntimeMethod_var);
		IL2CPP_END_FINALLY(171)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(171)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xB9, IL_00b9)
	}

IL_00b9:
	{
		// RaceDropdown.value = found;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_26 = __this->get_RaceDropdown_23();
		int32_t L_27 = V_2;
		Dropdown_set_value_mE4418D205D53F8A3AD23B957D1A8CD71489CB3B9(L_26, L_27, /*hidden argument*/NULL);
	}

IL_00c5:
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_Update_m3ECEFAE57697D3973BAFAFAD2B773C82655701B5 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// if (Input.GetKey(KeyCode.C))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)99), /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_000f;
		}
	}
	{
		// ChangeSex();
		SampleCode_ChangeSex_mCFCBB86DC30F93070B9D8199A1217FAE16B846FA(__this, /*hidden argument*/NULL);
	}

IL_000f:
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::SliderChange(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_SliderChange_mC02F593B54E2C30B745429FDD5341F14D8587858 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, float ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCE3DEFF4CAFCCDEA23F5EA3D784ECF78370CC8EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA108AC4F6F5145DAB9D705CFA24616F617BD53E);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * V_1 = NULL;
	{
		// int index = System.Convert.ToInt32(value);
		float L_0 = ___value0;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_tDA947A979C1DAB4F09C461FAFD94FE194743A671_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = Convert_ToInt32_mAFAE7DA97BACA9CEC03D40A2D322093B122B02FE(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// List<UMATextRecipe> theRecipes = Avatar.AvailableRecipes["Legs"];
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * L_3;
		L_3 = DynamicCharacterAvatar_get_AvailableRecipes_m28BFB3360A20445EE37BE82DD317074487F5F308(L_2, /*hidden argument*/NULL);
		List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_4;
		L_4 = Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C(L_3, _stringLiteralCA108AC4F6F5145DAB9D705CFA24616F617BD53E, /*hidden argument*/Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C_RuntimeMethod_var);
		V_1 = L_4;
		// if (theRecipes.Count == 0) return;
		List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_5 = V_1;
		int32_t L_6;
		L_6 = List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_inline(L_5, /*hidden argument*/List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_0026;
		}
	}
	{
		// if (theRecipes.Count == 0) return;
		return;
	}

IL_0026:
	{
		// if (theRecipes.Count >= TestSlider.maxValue)
		List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_7 = V_1;
		int32_t L_8;
		L_8 = List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_inline(L_7, /*hidden argument*/List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_9 = __this->get_TestSlider_26();
		float L_10;
		L_10 = Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline(L_9, /*hidden argument*/NULL);
		if ((!(((float)((float)((float)L_8))) >= ((float)L_10))))
		{
			goto IL_004e;
		}
	}
	{
		// TestSlider.maxValue = theRecipes.Count - 1;
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_11 = __this->get_TestSlider_26();
		List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_12 = V_1;
		int32_t L_13;
		L_13 = List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_inline(L_12, /*hidden argument*/List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var);
		Slider_set_maxValue_m5CDA3D451B68CF2D3FCFF43D1738D1DCC1C6425B(L_11, ((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)))), /*hidden argument*/NULL);
	}

IL_004e:
	{
		// if (index > (theRecipes.Count - 1))
		int32_t L_14 = V_0;
		List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_15 = V_1;
		int32_t L_16;
		L_16 = List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_inline(L_15, /*hidden argument*/List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var);
		if ((((int32_t)L_14) <= ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_16, (int32_t)1)))))
		{
			goto IL_0062;
		}
	}
	{
		// index = theRecipes.Count - 1;
		List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_17 = V_1;
		int32_t L_18;
		L_18 = List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_inline(L_17, /*hidden argument*/List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var);
		V_0 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_18, (int32_t)1));
	}

IL_0062:
	{
		// Avatar.SetSlot(theRecipes[index]);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_19 = __this->get_Avatar_4();
		List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_20 = V_1;
		int32_t L_21 = V_0;
		UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB * L_22;
		L_22 = List_1_get_Item_mCE3DEFF4CAFCCDEA23F5EA3D784ECF78370CC8EB_inline(L_20, L_21, /*hidden argument*/List_1_get_Item_mCE3DEFF4CAFCCDEA23F5EA3D784ECF78370CC8EB_RuntimeMethod_var);
		bool L_23;
		L_23 = DynamicCharacterAvatar_SetSlot_mCDEC043D07648C538278284FA40EF6BDA43CC557(L_19, L_22, /*hidden argument*/NULL);
		// Avatar.BuildCharacter();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_24 = __this->get_Avatar_4();
		DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0(L_24, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::UnloadAllItems(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_UnloadAllItems_mD4F6DEB0F904B8D9920838C562E95CBC8F5556D8 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, bool ___force0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Resources.UnloadUnusedAssets();
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_0;
		L_0 = Resources_UnloadUnusedAssets_m5BF7EFD195EFFE171CB47FF88CA880D76A751C70(/*hidden argument*/NULL);
		// GCSettings.LargeObjectHeapCompactionMode = GCLargeObjectHeapCompactionMode.CompactOnce;
		GCSettings_set_LargeObjectHeapCompactionMode_mE16301541EC0EED3C4F3445F1F16997DBD7EAF51_inline(2, /*hidden argument*/NULL);
		// System.GC.Collect();
		IL2CPP_RUNTIME_CLASS_INIT(GC_tD6F0377620BF01385965FD29272CF088A4309C0D_il2cpp_TypeInfo_var);
		GC_Collect_m7123B87A55AA963ED9BD834B0C6933E927B791A9(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::Cleanup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// if (GeneralHelpText != null) GeneralHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GeneralHelpText_12();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// if (GeneralHelpText != null) GeneralHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_GeneralHelpText_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
	}

IL_001a:
	{
		// if (DnaHelpText != null) DnaHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_DnaHelpText_15();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		// if (DnaHelpText != null) DnaHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_DnaHelpText_15();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0034:
	{
		// if (WardrobeHelpText != null) WardrobeHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_WardrobeHelpText_13();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_6, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_7)
		{
			goto IL_004e;
		}
	}
	{
		// if (WardrobeHelpText != null) WardrobeHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = __this->get_WardrobeHelpText_13();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
	}

IL_004e:
	{
		// if (ColorsHelpText != null) ColorsHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = __this->get_ColorsHelpText_14();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_9, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0068;
		}
	}
	{
		// if (ColorsHelpText != null) ColorsHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_ColorsHelpText_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
	}

IL_0068:
	{
		// foreach (Transform t in SlotPanel.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_SlotPanel_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
		RuntimeObject* L_14;
		L_14 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_13, /*hidden argument*/NULL);
		V_0 = L_14;
	}

IL_0079:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0090;
		}

IL_007b:
		{
			// foreach (Transform t in SlotPanel.transform)
			RuntimeObject* L_15 = V_0;
			RuntimeObject * L_16;
			L_16 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_15);
			// UMAUtils.DestroySceneObject(t.gameObject);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
			L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_16, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
			UMAUtils_DestroySceneObject_m53E185DA7317A05369247518903C2D420A9565C9(L_17, /*hidden argument*/NULL);
		}

IL_0090:
		{
			// foreach (Transform t in SlotPanel.transform)
			RuntimeObject* L_18 = V_0;
			bool L_19;
			L_19 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_18);
			if (L_19)
			{
				goto IL_007b;
			}
		}

IL_0098:
		{
			IL2CPP_LEAVE(0xAB, FINALLY_009a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_009a;
	}

FINALLY_009a:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_20 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_21 = V_1;
			if (!L_21)
			{
				goto IL_00aa;
			}
		}

IL_00a4:
		{
			RuntimeObject* L_22 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_22);
		}

IL_00aa:
		{
			IL2CPP_END_FINALLY(154)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(154)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xAB, IL_00ab)
	}

IL_00ab:
	{
		// foreach (Transform t in WardrobePanel.transform)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = __this->get_WardrobePanel_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_24;
		L_24 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_23, /*hidden argument*/NULL);
		RuntimeObject* L_25;
		L_25 = Transform_GetEnumerator_mBA0E884A69F0AA05FCB69F4EE5F700177F75DD7E(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
	}

IL_00bc:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00d3;
		}

IL_00be:
		{
			// foreach (Transform t in WardrobePanel.transform)
			RuntimeObject* L_26 = V_0;
			RuntimeObject * L_27;
			L_27 = InterfaceFuncInvoker0< RuntimeObject * >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_26);
			// UMAUtils.DestroySceneObject(t.gameObject);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28;
			L_28 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(((Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 *)CastclassClass((RuntimeObject*)L_27, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
			UMAUtils_DestroySceneObject_m53E185DA7317A05369247518903C2D420A9565C9(L_28, /*hidden argument*/NULL);
		}

IL_00d3:
		{
			// foreach (Transform t in WardrobePanel.transform)
			RuntimeObject* L_29 = V_0;
			bool L_30;
			L_30 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105_il2cpp_TypeInfo_var, L_29);
			if (L_30)
			{
				goto IL_00be;
			}
		}

IL_00db:
		{
			IL2CPP_LEAVE(0xEE, FINALLY_00dd);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00dd;
	}

FINALLY_00dd:
	{ // begin finally (depth: 1)
		{
			RuntimeObject* L_31 = V_0;
			V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_31, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var));
			RuntimeObject* L_32 = V_1;
			if (!L_32)
			{
				goto IL_00ed;
			}
		}

IL_00e7:
		{
			RuntimeObject* L_33 = V_1;
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var, L_33);
		}

IL_00ed:
		{
			IL2CPP_END_FINALLY(221)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(221)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xEE, IL_00ee)
	}

IL_00ee:
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::HelpClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_HelpClick_mA608232F1537F4F453FC456EE452A7976A27A77E (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// if (GeneralHelpText.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_GeneralHelpText_12();
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// GeneralHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_GeneralHelpText_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Cleanup();
		SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7(__this, /*hidden argument*/NULL);
		// GeneralHelpText.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_GeneralHelpText_12();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::WardrobeHelpClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_WardrobeHelpClick_m6E949E8A3386B6F46323C83D6372D53E8CA76AC8 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// if (WardrobeHelpText.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_WardrobeHelpText_13();
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// WardrobeHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_WardrobeHelpText_13();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Cleanup();
		SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7(__this, /*hidden argument*/NULL);
		// WardrobeHelpText.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_WardrobeHelpText_13();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::ColorsHelpClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_ColorsHelpClick_m57A72F6EA60B2668F12CEB2517A3AA6E97F7A2BF (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// if (ColorsHelpText.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_ColorsHelpText_14();
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// ColorsHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_ColorsHelpText_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Cleanup();
		SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7(__this, /*hidden argument*/NULL);
		// ColorsHelpText.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_ColorsHelpText_14();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::DNAHelpClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_DNAHelpClick_m3AD4BE70B1D6BAB84B49A7708BE8FDCF0B515DFB (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// if (DnaHelpText.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_DnaHelpText_15();
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// DnaHelpText.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_DnaHelpText_15();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}

IL_001a:
	{
		// Cleanup();
		SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7(__this, /*hidden argument*/NULL);
		// DnaHelpText.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_DnaHelpText_15();
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::DnaClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_DnaClick_m0E5FA0156302E498955A46BE4F2CEBA8D6771AC9 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mCBD9158E6965C024FE2B904FD874885C1B3447F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCEAE52184BE7C9FAAA54C71E56AA39401FBB4969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m94881ED67136E2B79A3DCBC0295B3AF3032F1AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m841CCACC416F2848F67424F2093D149ACB74C45C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB_mB23A8DE09E38C9F34AB176DBCA35A356BC414D49_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224  V_0;
	memset((&V_0), 0, sizeof(V_0));
	KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Cleanup();
		SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7(__this, /*hidden argument*/NULL);
		// Dictionary<string,DnaSetter> AllDNA = Avatar.GetDNA();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 * L_1;
		L_1 = DynamicCharacterAvatar_GetDNA_mB27AD9E1B2C460380913CD0F85622863EF877FC4(L_0, (UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A *)NULL, /*hidden argument*/NULL);
		// foreach( KeyValuePair<string, DnaSetter> ds in AllDNA)
		Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224  L_2;
		L_2 = Dictionary_2_GetEnumerator_mCBD9158E6965C024FE2B904FD874885C1B3447F6(L_1, /*hidden argument*/Dictionary_2_GetEnumerator_mCBD9158E6965C024FE2B904FD874885C1B3447F6_RuntimeMethod_var);
		V_0 = L_2;
	}

IL_0018:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0077;
		}

IL_001a:
		{
			// foreach( KeyValuePair<string, DnaSetter> ds in AllDNA)
			KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  L_3;
			L_3 = Enumerator_get_Current_m841CCACC416F2848F67424F2093D149ACB74C45C_inline((Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m841CCACC416F2848F67424F2093D149ACB74C45C_RuntimeMethod_var);
			V_1 = L_3;
			// GameObject go = GameObject.Instantiate(DnaPrefab);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_DnaPrefab_10();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
			L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
			// DNAHandler ch = go.GetComponent<DNAHandler>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = L_5;
			DNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB * L_7;
			L_7 = GameObject_GetComponent_TisDNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB_mB23A8DE09E38C9F34AB176DBCA35A356BC414D49(L_6, /*hidden argument*/GameObject_GetComponent_TisDNAHandler_tF9E7C2EC94E66234FF791618DC8D411A5A25D0FB_mB23A8DE09E38C9F34AB176DBCA35A356BC414D49_RuntimeMethod_var);
			// ch.Setup(Avatar, ds.Value, WardrobePanel);
			DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_8 = __this->get_Avatar_4();
			DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * L_9;
			L_9 = KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_inline((KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_RuntimeMethod_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = __this->get_WardrobePanel_8();
			DNAHandler_Setup_m6CA37CB613650C96B56CBAC6A0A718997BE5AEBF(L_7, L_8, L_9, L_10, /*hidden argument*/NULL);
			// Text txt = go.GetComponentInChildren<Text>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = L_6;
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12;
			L_12 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_11, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
			// txt.text = ds.Value.Name;
			DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * L_13;
			L_13 = KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_inline((KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244 *)(&V_1), /*hidden argument*/KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_RuntimeMethod_var);
			String_t* L_14 = L_13->get_Name_0();
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
			// go.transform.SetParent(SlotPanel.transform);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
			L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_SlotPanel_7();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
			L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
			Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_15, L_17, /*hidden argument*/NULL);
		}

IL_0077:
		{
			// foreach( KeyValuePair<string, DnaSetter> ds in AllDNA)
			bool L_18;
			L_18 = Enumerator_MoveNext_m94881ED67136E2B79A3DCBC0295B3AF3032F1AC2((Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m94881ED67136E2B79A3DCBC0295B3AF3032F1AC2_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_001a;
			}
		}

IL_0080:
		{
			IL2CPP_LEAVE(0x90, FINALLY_0082);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0082;
	}

FINALLY_0082:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCEAE52184BE7C9FAAA54C71E56AA39401FBB4969((Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *)(&V_0), /*hidden argument*/Enumerator_Dispose_mCEAE52184BE7C9FAAA54C71E56AA39401FBB4969_RuntimeMethod_var);
		IL2CPP_END_FINALLY(130)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(130)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x90, IL_0090)
	}

IL_0090:
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::ColorsClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_ColorsClick_m51B0DE18E59DCDA6E20731FAD2F25C6671DE7786 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999_m04C9268882F3914438D7514320C2270BC06D9513_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D78A26E6D27FCFE02FCE139BDBB407790B95DD6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8061DE162455ABCA18D46260348A74FD112CCAC9);
		s_Il2CppMethodInitialized = true;
	}
	OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* V_0 = NULL;
	int32_t V_1 = 0;
	OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * V_2 = NULL;
	SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * V_3 = NULL;
	AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * G_B3_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B3_1 = NULL;
	AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * G_B2_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B2_1 = NULL;
	AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * G_B7_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B7_1 = NULL;
	AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * G_B5_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B5_1 = NULL;
	AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * G_B4_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B4_1 = NULL;
	AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * G_B6_0 = NULL;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * G_B6_1 = NULL;
	{
		// Cleanup();
		SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7(__this, /*hidden argument*/NULL);
		// foreach(UMA.OverlayColorData ocd in Avatar.CurrentSharedColors )
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* L_1;
		L_1 = DynamicCharacterAvatar_get_CurrentSharedColors_mF5428775687F1B19B4B63F7CBDFC16EDE730F907(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = 0;
		goto IL_00d5;
	}

IL_0019:
	{
		// foreach(UMA.OverlayColorData ocd in Avatar.CurrentSharedColors )
		OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* L_2 = V_0;
		int32_t L_3 = V_1;
		int32_t L_4 = L_3;
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_5 = (L_2)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// GameObject go = GameObject.Instantiate(ColorPrefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_ColorPrefab_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// AvailableColorsHandler ch = go.GetComponent<AvailableColorsHandler>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7;
		AvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999 * L_9;
		L_9 = GameObject_GetComponent_TisAvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999_m04C9268882F3914438D7514320C2270BC06D9513(L_8, /*hidden argument*/GameObject_GetComponent_TisAvailableColorsHandler_t9699348981D098E31940A91D96E55514AECA7999_m04C9268882F3914438D7514320C2270BC06D9513_RuntimeMethod_var);
		// SharedColorTable currColors = ClothingColor;
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_10 = __this->get_ClothingColor_22();
		V_3 = L_10;
		// if (ocd.name.ToLower() == "skin")
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_11 = V_2;
		String_t* L_12 = L_11->get_name_4();
		String_t* L_13;
		L_13 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_12, /*hidden argument*/NULL);
		bool L_14;
		L_14 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_13, _stringLiteral4D78A26E6D27FCFE02FCE139BDBB407790B95DD6, /*hidden argument*/NULL);
		G_B2_0 = L_9;
		G_B2_1 = L_8;
		if (!L_14)
		{
			G_B3_0 = L_9;
			G_B3_1 = L_8;
			goto IL_0055;
		}
	}
	{
		// currColors = SkinColor;
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_15 = __this->get_SkinColor_20();
		V_3 = L_15;
		G_B7_0 = G_B2_0;
		G_B7_1 = G_B2_1;
		goto IL_0093;
	}

IL_0055:
	{
		// else if (ocd.name.ToLower() == "hair")
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_16 = V_2;
		String_t* L_17 = L_16->get_name_4();
		String_t* L_18;
		L_18 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_17, /*hidden argument*/NULL);
		bool L_19;
		L_19 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_18, _stringLiteral3E7E3FA4BB96AE8277DF1E51F00ADDEF3CC05486, /*hidden argument*/NULL);
		G_B4_0 = G_B3_0;
		G_B4_1 = G_B3_1;
		if (!L_19)
		{
			G_B5_0 = G_B3_0;
			G_B5_1 = G_B3_1;
			goto IL_0075;
		}
	}
	{
		// currColors = HairColor;
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_20 = __this->get_HairColor_19();
		V_3 = L_20;
		G_B7_0 = G_B4_0;
		G_B7_1 = G_B4_1;
		goto IL_0093;
	}

IL_0075:
	{
		// else if (ocd.name.ToLower() == "eyes")
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_21 = V_2;
		String_t* L_22 = L_21->get_name_4();
		String_t* L_23;
		L_23 = String_ToLower_m7875A49FE166D0A68F3F6B6E70C0C056EBEFD31D(L_22, /*hidden argument*/NULL);
		bool L_24;
		L_24 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_23, _stringLiteral8061DE162455ABCA18D46260348A74FD112CCAC9, /*hidden argument*/NULL);
		G_B6_0 = G_B5_0;
		G_B6_1 = G_B5_1;
		if (!L_24)
		{
			G_B7_0 = G_B5_0;
			G_B7_1 = G_B5_1;
			goto IL_0093;
		}
	}
	{
		// currColors = EyesColor;
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_25 = __this->get_EyesColor_21();
		V_3 = L_25;
		G_B7_0 = G_B6_0;
		G_B7_1 = G_B6_1;
	}

IL_0093:
	{
		// ch.Setup(Avatar, ocd.name, WardrobePanel,currColors);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_26 = __this->get_Avatar_4();
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_27 = V_2;
		String_t* L_28 = L_27->get_name_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = __this->get_WardrobePanel_8();
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_30 = V_3;
		AvailableColorsHandler_Setup_m6433447444B99CEFBA905C307EBD4DC7D0A91D0A(G_B7_0, L_26, L_28, L_29, L_30, /*hidden argument*/NULL);
		// Text txt = go.GetComponentInChildren<Text>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = G_B7_1;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_32;
		L_32 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_31, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		// txt.text = ocd.name;
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_33 = V_2;
		String_t* L_34 = L_33->get_name_4();
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, L_34);
		// go.transform.SetParent(SlotPanel.transform);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36 = __this->get_SlotPanel_7();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_37;
		L_37 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_36, /*hidden argument*/NULL);
		Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_35, L_37, /*hidden argument*/NULL);
		int32_t L_38 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_00d5:
	{
		// foreach(UMA.OverlayColorData ocd in Avatar.CurrentSharedColors )
		int32_t L_39 = V_1;
		OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* L_40 = V_0;
		if ((((int32_t)L_39) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_40)->max_length))))))
		{
			goto IL_0019;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::WardrobeClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_WardrobeClick_m59EEFE59ADE8FF3E3A7DC67A7DE181102496D8FB (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mAD9E9C47A06A69046B4926ECD6A14C2956848597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8306B8A4EEA224F44D8B9F85ABF60756314F9C0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8C9A2A78B40C55194B54A4EC3EC188C2338F536B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC1BF66647F1BC02F7A295B483D644BF8B3386F45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A_m2C2D0414BB247EDF110AAAAC5FB6DA1D7EF89B75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m62A7A86F70B7B5909A7573D6B4346509AC420826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	String_t* V_1 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// Cleanup();
		SampleCode_Cleanup_m77039DC9A9854968FF6490493DF170B452556EF7(__this, /*hidden argument*/NULL);
		// Dictionary<string, List<UMATextRecipe>> recipes = Avatar.AvailableRecipes;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * L_1;
		L_1 = DynamicCharacterAvatar_get_AvailableRecipes_m28BFB3360A20445EE37BE82DD317074487F5F308(L_0, /*hidden argument*/NULL);
		// foreach (string s in recipes.Keys)
		KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 * L_2;
		L_2 = Dictionary_2_get_Keys_mAD9E9C47A06A69046B4926ECD6A14C2956848597(L_1, /*hidden argument*/Dictionary_2_get_Keys_mAD9E9C47A06A69046B4926ECD6A14C2956848597_RuntimeMethod_var);
		Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D  L_3;
		L_3 = KeyCollection_GetEnumerator_m62A7A86F70B7B5909A7573D6B4346509AC420826(L_2, /*hidden argument*/KeyCollection_GetEnumerator_m62A7A86F70B7B5909A7573D6B4346509AC420826_RuntimeMethod_var);
		V_0 = L_3;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_006a;
		}

IL_001e:
		{
			// foreach (string s in recipes.Keys)
			String_t* L_4;
			L_4 = Enumerator_get_Current_mC1BF66647F1BC02F7A295B483D644BF8B3386F45_inline((Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *)(&V_0), /*hidden argument*/Enumerator_get_Current_mC1BF66647F1BC02F7A295B483D644BF8B3386F45_RuntimeMethod_var);
			V_1 = L_4;
			// GameObject go = GameObject.Instantiate(SlotPrefab);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_SlotPrefab_5();
			IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
			L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
			// SlotHandler sh = go.GetComponent<SlotHandler>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = L_6;
			SlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A * L_8;
			L_8 = GameObject_GetComponent_TisSlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A_m2C2D0414BB247EDF110AAAAC5FB6DA1D7EF89B75(L_7, /*hidden argument*/GameObject_GetComponent_TisSlotHandler_t16F3A1537CF0BB22D7FD21E872D9DD501E611C4A_m2C2D0414BB247EDF110AAAAC5FB6DA1D7EF89B75_RuntimeMethod_var);
			// sh.Setup(Avatar, s,WardrobePanel);
			DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_9 = __this->get_Avatar_4();
			String_t* L_10 = V_1;
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = __this->get_WardrobePanel_8();
			SlotHandler_Setup_mEB05EEFD40A749F074AB09EDBD4C6B95816E756A(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
			// Text txt = go.GetComponentInChildren<Text>();
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_7;
			Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_13;
			L_13 = GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881(L_12, /*hidden argument*/GameObject_GetComponentInChildren_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m7CAECD44A40B4306F85A45E96E9486068B89D881_RuntimeMethod_var);
			// txt.text = s;
			String_t* L_14 = V_1;
			VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_14);
			// go.transform.SetParent(SlotPanel.transform);
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
			L_15 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_12, /*hidden argument*/NULL);
			GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_SlotPanel_7();
			Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
			L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
			Transform_SetParent_m24E34EBEF76528C99AFA017F157EE8B3E3116B1E(L_15, L_17, /*hidden argument*/NULL);
		}

IL_006a:
		{
			// foreach (string s in recipes.Keys)
			bool L_18;
			L_18 = Enumerator_MoveNext_m8C9A2A78B40C55194B54A4EC3EC188C2338F536B((Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m8C9A2A78B40C55194B54A4EC3EC188C2338F536B_RuntimeMethod_var);
			if (L_18)
			{
				goto IL_001e;
			}
		}

IL_0073:
		{
			IL2CPP_LEAVE(0x83, FINALLY_0075);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0075;
	}

FINALLY_0075:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8306B8A4EEA224F44D8B9F85ABF60756314F9C0F((Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *)(&V_0), /*hidden argument*/Enumerator_Dispose_m8306B8A4EEA224F44D8B9F85ABF60756314F9C0F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(117)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(117)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x83, IL_0083)
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::DumpData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_DumpData_m0CC9A30ADAE83AF27C0CDBA33410DBE79E5FD96B (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::CreateFromPrefab()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_CreateFromPrefab_mDA847F49B01B74DC9766C00781C91208CFBFB8C8 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4_m8E44127D1BE4D290EFE211D3530832D7548EE713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// float x = Random.Range(-8.0f, 8.0f);
		float L_0;
		L_0 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-8.0f), (8.0f), /*hidden argument*/NULL);
		V_0 = L_0;
		// float z = Random.Range(1.0f, 12.0f);
		float L_1;
		L_1 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (12.0f), /*hidden argument*/NULL);
		V_1 = L_1;
		// GameObject go = GameObject.Instantiate(AvatarPrefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_AvatarPrefab_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_2, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// DynamicCharacterAvatar dca = go.GetComponent<DynamicCharacterAvatar>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = L_3;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_5;
		L_5 = GameObject_GetComponent_TisDynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4_m8E44127D1BE4D290EFE211D3530832D7548EE713(L_4, /*hidden argument*/GameObject_GetComponent_TisDynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4_m8E44127D1BE4D290EFE211D3530832D7548EE713_RuntimeMethod_var);
		// dca.SetSlot(CollectionToAdd);
		UMAWardrobeCollection_t24A10EE45FA24CCC7BB9F006702753F6A9198D70 * L_6 = __this->get_CollectionToAdd_27();
		bool L_7;
		L_7 = DynamicCharacterAvatar_SetSlot_mCDEC043D07648C538278284FA40EF6BDA43CC557(L_5, L_6, /*hidden argument*/NULL);
		// go.transform.localPosition = new Vector3(x, 0, z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_4;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		float L_10 = V_0;
		float L_11 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), L_10, (0.0f), L_11, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_9, L_12, /*hidden argument*/NULL);
		// go.SetActive(true);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::DynamicCreateClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_DynamicCreateClick_m7DB87BE4CD832DECFC1A1CB318950A7DDEAB4839 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisDynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4_m8E44127D1BE4D290EFE211D3530832D7548EE713_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral67A1131EE2F805164B96DF19310337312D949250);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCE8C791C37FBCE9510C147701F437D0955B5F9E6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA3489FF24B08CCCCACF35D4B5633E1459621EE9);
		s_Il2CppMethodInitialized = true;
	}
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_0 = NULL;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	{
		// string[] files = { "Fram", "Bob", "Gobs" };
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = L_0;
		ArrayElementTypeCheck (L_1, _stringLiteral67A1131EE2F805164B96DF19310337312D949250);
		(L_1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral67A1131EE2F805164B96DF19310337312D949250);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		ArrayElementTypeCheck (L_2, _stringLiteralDA3489FF24B08CCCCACF35D4B5633E1459621EE9);
		(L_2)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralDA3489FF24B08CCCCACF35D4B5633E1459621EE9);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		ArrayElementTypeCheck (L_3, _stringLiteralCE8C791C37FBCE9510C147701F437D0955B5F9E6);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralCE8C791C37FBCE9510C147701F437D0955B5F9E6);
		V_0 = L_3;
		// float x = Random.Range(-8.0f, 8.0f);
		float L_4;
		L_4 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-8.0f), (8.0f), /*hidden argument*/NULL);
		V_1 = L_4;
		// float z = Random.Range(1.0f, 12.0f);
		float L_5;
		L_5 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((1.0f), (12.0f), /*hidden argument*/NULL);
		V_2 = L_5;
		// GameObject go = GameObject.Instantiate(AvatarPrefab);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_AvatarPrefab_16();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33(L_6, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_m26431AC51B9B7A43FBABD10B4923B72B0C578F33_RuntimeMethod_var);
		// DynamicCharacterAvatar dca = go.GetComponent<DynamicCharacterAvatar>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_9;
		L_9 = GameObject_GetComponent_TisDynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4_m8E44127D1BE4D290EFE211D3530832D7548EE713(L_8, /*hidden argument*/GameObject_GetComponent_TisDynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4_m8E44127D1BE4D290EFE211D3530832D7548EE713_RuntimeMethod_var);
		// dca.loadPathType = DynamicCharacterAvatar.loadPathTypes.CharacterSystem;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_10 = L_9;
		L_10->set_loadPathType_43(3);
		// dca.loadFilename = files[Random.Range(0, 3)];
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = V_0;
		int32_t L_12;
		L_12 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 3, /*hidden argument*/NULL);
		int32_t L_13 = L_12;
		String_t* L_14 = (L_11)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_13));
		L_10->set_loadFilename_45(L_14);
		// go.transform.localPosition = new Vector3(x, 0, z);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = L_8;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_15, /*hidden argument*/NULL);
		float L_17 = V_1;
		float L_18 = V_2;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		memset((&L_19), 0, sizeof(L_19));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_19), L_17, (0.0f), L_18, /*hidden argument*/NULL);
		Transform_set_localPosition_m2A2B0033EF079077FAE7C65196078EAF5D041AFC(L_16, L_19, /*hidden argument*/NULL);
		// go.SetActive(true);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::SetRawColorTest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_SetRawColorTest_m7BC970CAF0B294787D11702934D1B6E0C0466C20 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84438A51C4EBAF43047DCC49F53E6B3580D02208);
		s_Il2CppMethodInitialized = true;
	}
	OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * V_0 = NULL;
	{
		// OverlayColorData ColorData = Avatar.GetColor("HairColor");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_1;
		L_1 = DynamicCharacterAvatar_GetColor_m2A28CA6FD84D05FA3D118F13E3AB0E89CE080C58(L_0, _stringLiteral84438A51C4EBAF43047DCC49F53E6B3580D02208, /*hidden argument*/NULL);
		V_0 = L_1;
		// ColorData.channelMask[0] = new Color(1f, 1f, 1f, 1f);
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_2 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_3 = L_2->get_channelMask_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		(L_3)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_4);
		// ColorData.channelAdditiveMask[0] = new Color(1f, 0f, 0f, 0f);
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_5 = V_0;
		ColorU5BU5D_t358DD89F511301E663AD9157305B94A2DEFF8834* L_6 = L_5->get_channelAdditiveMask_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_7), (1.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		(L_6)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 )L_7);
		// Avatar.SetRawColor("HairColor", ColorData, true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_8 = __this->get_Avatar_4();
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_9 = V_0;
		DynamicCharacterAvatar_SetRawColor_m85F8B9BF6CB400F5453968AE792A810EE46F5A5F(L_8, _stringLiteral84438A51C4EBAF43047DCC49F53E6B3580D02208, L_9, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::ChangeRace(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_ChangeRace_m7D33D8055344FE7AB1E7C3218AB8D20DE417460A (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	{
		// if (Avatar.gameObject.activeSelf)
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_003a;
		}
	}
	{
		// string race = RaceDropdown.options[index].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_3 = __this->get_RaceDropdown_23();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_4;
		L_4 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_3, /*hidden argument*/NULL);
		int32_t L_5 = ___index0;
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_6;
		L_6 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_4, L_5, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		String_t* L_7;
		L_7 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_6, /*hidden argument*/NULL);
		V_0 = L_7;
		// Avatar.ChangeRace(race);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_8 = __this->get_Avatar_4();
		String_t* L_9 = V_0;
		bool L_10;
		L_10 = DynamicCharacterAvatar_ChangeRace_m2D6619E13AA3F5ADFD0823112C8B7E1AB9FE7B00(L_8, L_9, 0, (bool)0, /*hidden argument*/NULL);
		// }
		goto IL_005d;
	}

IL_003a:
	{
		// string race = RaceDropdown.options[index].text;
		Dropdown_t099F5232BB75810BC79EED6E27DDCED46C3BCD96 * L_11 = __this->get_RaceDropdown_23();
		List_1_tAF6577A540702C9F6C407DE69A8FAFB502339DC4 * L_12;
		L_12 = Dropdown_get_options_mF427A2157CDD901C12F1B160C4D1F8207D7111D0(L_11, /*hidden argument*/NULL);
		int32_t L_13 = ___index0;
		OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * L_14;
		L_14 = List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_inline(L_12, L_13, /*hidden argument*/List_1_get_Item_mF979E11037D572E72D866EC260EF0434EF296E67_RuntimeMethod_var);
		String_t* L_15;
		L_15 = OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline(L_14, /*hidden argument*/NULL);
		V_1 = L_15;
		// Avatar.RacePreset = race;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_16 = __this->get_Avatar_4();
		String_t* L_17 = V_1;
		DynamicCharacterAvatar_set_RacePreset_m16BD08714396E485CDBCF12231BA425B12A72041(L_16, L_17, /*hidden argument*/NULL);
	}

IL_005d:
	{
		// Avatar.gameObject.SetActive(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_18 = __this->get_Avatar_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)1, /*hidden argument*/NULL);
		// Avatar.BuildCharacterEnabled = true;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_20 = __this->get_Avatar_4();
		DynamicCharacterAvatar_set_BuildCharacterEnabled_m0B440D0571A78E8A1D576B8B23642018622209B3(L_20, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::ChangeSex()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_ChangeSex_mCFCBB86DC30F93070B9D8199A1217FAE16B846FA (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral216BE49149EE02BAF0A69B7205E935137B5BC958);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3F7452D5FAE9022D1E68A86EA6BED43FAFB5938C);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Avatar.activeRace.name == "HumanMale")
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		RaceSetter_tCF16CA39092D10DD5EED86EF74043B5A84D5E259 * L_1 = L_0->get_activeRace_29();
		String_t* L_2 = L_1->get_name_0();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_2, _stringLiteral3F7452D5FAE9022D1E68A86EA6BED43FAFB5938C, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_002e;
		}
	}
	{
		// Avatar.ChangeRace("HumanFemale", true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		DynamicCharacterAvatar_ChangeRace_m8BFF46998577EB189EFADBC2EAF77A5FB8173186(L_4, _stringLiteral216BE49149EE02BAF0A69B7205E935137B5BC958, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}

IL_002e:
	{
		// Avatar.ChangeRace("HumanMale", true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_5 = __this->get_Avatar_4();
		DynamicCharacterAvatar_ChangeRace_m8BFF46998577EB189EFADBC2EAF77A5FB8173186(L_5, _stringLiteral3F7452D5FAE9022D1E68A86EA6BED43FAFB5938C, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::CenterCam()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_CenterCam_mD3F9AAE9EE0496DFBB3DFE7AB471F0C6B4F7E69E (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// Orbiter.Reset();
		UMAMouseOrbitImproved_t3EBCE01412611A3CF7642A3241612BA85965013F * L_0 = __this->get_Orbiter_18();
		UMAMouseOrbitImproved_Reset_m53B3A4D5CDB7EF29044174ABB505DC07F0554504(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::ToggleUpdateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_ToggleUpdateBounds_mEB0180C72CF4D855B56677551552CA314646A07A (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m7433A79923D10FB340C0E299BBAE5BAB5338DA5C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// SkinnedMeshRenderer[] sm = FindObjectsOfType<SkinnedMeshRenderer>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_0;
		L_0 = Object_FindObjectsOfType_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m7433A79923D10FB340C0E299BBAE5BAB5338DA5C(/*hidden argument*/Object_FindObjectsOfType_TisSkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496_m7433A79923D10FB340C0E299BBAE5BAB5338DA5C_RuntimeMethod_var);
		// foreach(SkinnedMeshRenderer smr in sm)
		V_0 = L_0;
		V_1 = 0;
		goto IL_001f;
	}

IL_000a:
	{
		// foreach(SkinnedMeshRenderer smr in sm)
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_1 = V_0;
		int32_t L_2 = V_1;
		int32_t L_3 = L_2;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_4 = (L_1)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_3));
		// smr.updateWhenOffscreen = !smr.updateWhenOffscreen;
		SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * L_5 = L_4;
		bool L_6;
		L_6 = SkinnedMeshRenderer_get_updateWhenOffscreen_m5D67231AA7E0E036807004350FAA341080FDAA4E(L_5, /*hidden argument*/NULL);
		SkinnedMeshRenderer_set_updateWhenOffscreen_m369009154E1B8DC275EFB808CEF274720F7F5DD7(L_5, (bool)((((int32_t)L_6) == ((int32_t)0))? 1 : 0), /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_001f:
	{
		// foreach(SkinnedMeshRenderer smr in sm)
		int32_t L_8 = V_1;
		SkinnedMeshRendererU5BU5D_t5E45BBCBFA792B65D947C1BE81E777D0FF78FEED* L_9 = V_0;
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::RandomClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_RandomClick_m84C2E6667DA39CF896EEB486D17469D8F3605EB6 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// RandomizeAvatar(Avatar);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		SampleCode_RandomizeAvatar_m8199F7E109A9B30F4118D060A2A4D885F70473E8(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::RandomizeAvatar(UMA.CharacterSystem.DynamicCharacterAvatar)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_RandomizeAvatar_m8199F7E109A9B30F4118D060A2A4D885F70473E8 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * ___Avatar0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_mCBD9158E6965C024FE2B904FD874885C1B3447F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_mAD9E9C47A06A69046B4926ECD6A14C2956848597_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m8306B8A4EEA224F44D8B9F85ABF60756314F9C0F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mCEAE52184BE7C9FAAA54C71E56AA39401FBB4969_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8C9A2A78B40C55194B54A4EC3EC188C2338F536B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m94881ED67136E2B79A3DCBC0295B3AF3032F1AC2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m841CCACC416F2848F67424F2093D149ACB74C45C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_mC1BF66647F1BC02F7A295B483D644BF8B3386F45_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_m62A7A86F70B7B5909A7573D6B4346509AC420826_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mCE3DEFF4CAFCCDEA23F5EA3D784ECF78370CC8EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA108AC4F6F5145DAB9D705CFA24616F617BD53E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD770F1B2D8400071A596306999013D140FF4568A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9D8ED9C84425C467F5ECEE0DE067FC9433CFA5D);
		s_Il2CppMethodInitialized = true;
	}
	Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D  V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* V_4 = NULL;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224  V_8;
	memset((&V_8), 0, sizeof(V_8));
	KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  V_9;
	memset((&V_9), 0, sizeof(V_9));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// Dictionary<string, List<UMATextRecipe>> recipes = Avatar.AvailableRecipes;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = ___Avatar0;
		Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * L_1;
		L_1 = DynamicCharacterAvatar_get_AvailableRecipes_m28BFB3360A20445EE37BE82DD317074487F5F308(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		// foreach (string SlotName in recipes.Keys)
		Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * L_2 = V_0;
		KeyCollection_t6CE95B8D2584B29C7BB7255095914032D23D79D5 * L_3;
		L_3 = Dictionary_2_get_Keys_mAD9E9C47A06A69046B4926ECD6A14C2956848597(L_2, /*hidden argument*/Dictionary_2_get_Keys_mAD9E9C47A06A69046B4926ECD6A14C2956848597_RuntimeMethod_var);
		Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D  L_4;
		L_4 = KeyCollection_GetEnumerator_m62A7A86F70B7B5909A7573D6B4346509AC420826(L_3, /*hidden argument*/KeyCollection_GetEnumerator_m62A7A86F70B7B5909A7573D6B4346509AC420826_RuntimeMethod_var);
		V_3 = L_4;
	}

IL_0013:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0076;
		}

IL_0015:
		{
			// foreach (string SlotName in recipes.Keys)
			String_t* L_5;
			L_5 = Enumerator_get_Current_mC1BF66647F1BC02F7A295B483D644BF8B3386F45_inline((Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *)(&V_3), /*hidden argument*/Enumerator_get_Current_mC1BF66647F1BC02F7A295B483D644BF8B3386F45_RuntimeMethod_var);
			V_4 = L_5;
			// int cnt = recipes[SlotName].Count;
			Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * L_6 = V_0;
			String_t* L_7 = V_4;
			List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_8;
			L_8 = Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C(L_6, L_7, /*hidden argument*/Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C_RuntimeMethod_var);
			int32_t L_9;
			L_9 = List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_inline(L_8, /*hidden argument*/List_1_get_Count_mDA756EA776A4F08AC528A717C489F52972508CB9_RuntimeMethod_var);
			V_5 = L_9;
			// if (cnt > 0)
			int32_t L_10 = V_5;
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_0076;
			}
		}

IL_0032:
		{
			// int min = -1;
			V_6 = (-1);
			// if (SlotName == "Legs") min = 0; // Don't allow pants removal in random test
			String_t* L_11 = V_4;
			bool L_12;
			L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralCA108AC4F6F5145DAB9D705CFA24616F617BD53E, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0046;
			}
		}

IL_0043:
		{
			// if (SlotName == "Legs") min = 0; // Don't allow pants removal in random test
			V_6 = 0;
		}

IL_0046:
		{
			// int rnd = Random.Range(min, cnt);
			int32_t L_13 = V_6;
			int32_t L_14 = V_5;
			int32_t L_15;
			L_15 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(L_13, L_14, /*hidden argument*/NULL);
			V_7 = L_15;
			// if (rnd == -1)
			int32_t L_16 = V_7;
			if ((!(((uint32_t)L_16) == ((uint32_t)(-1)))))
			{
				goto IL_0060;
			}
		}

IL_0056:
		{
			// Avatar.ClearSlot(SlotName);
			DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_17 = ___Avatar0;
			String_t* L_18 = V_4;
			DynamicCharacterAvatar_ClearSlot_mA1957F919BE1C2A94F37015EB147F16E98330CDD(L_17, L_18, /*hidden argument*/NULL);
			// }
			goto IL_0076;
		}

IL_0060:
		{
			// Avatar.SetSlot(recipes[SlotName][rnd]);
			DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_19 = ___Avatar0;
			Dictionary_2_tF43534A6185AA4FA9ED354440C9E0AC351E64FDF * L_20 = V_0;
			String_t* L_21 = V_4;
			List_1_tDFA091495CAD32EA0AA1C616568A5F92B55D9E58 * L_22;
			L_22 = Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C(L_20, L_21, /*hidden argument*/Dictionary_2_get_Item_m4ADEFD5552C7AD40F422561C4A09EDB8BCA7B31C_RuntimeMethod_var);
			int32_t L_23 = V_7;
			UMATextRecipe_t79FC8E1D2081D64B200CA694D3EA73CF704225CB * L_24;
			L_24 = List_1_get_Item_mCE3DEFF4CAFCCDEA23F5EA3D784ECF78370CC8EB_inline(L_22, L_23, /*hidden argument*/List_1_get_Item_mCE3DEFF4CAFCCDEA23F5EA3D784ECF78370CC8EB_RuntimeMethod_var);
			bool L_25;
			L_25 = DynamicCharacterAvatar_SetSlot_mCDEC043D07648C538278284FA40EF6BDA43CC557(L_19, L_24, /*hidden argument*/NULL);
		}

IL_0076:
		{
			// foreach (string SlotName in recipes.Keys)
			bool L_26;
			L_26 = Enumerator_MoveNext_m8C9A2A78B40C55194B54A4EC3EC188C2338F536B((Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *)(&V_3), /*hidden argument*/Enumerator_MoveNext_m8C9A2A78B40C55194B54A4EC3EC188C2338F536B_RuntimeMethod_var);
			if (L_26)
			{
				goto IL_0015;
			}
		}

IL_007f:
		{
			IL2CPP_LEAVE(0x8F, FINALLY_0081);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0081;
	}

FINALLY_0081:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m8306B8A4EEA224F44D8B9F85ABF60756314F9C0F((Enumerator_t3D781BE90BBE2DE50EA006CE3F72A13A0E8DF33D *)(&V_3), /*hidden argument*/Enumerator_Dispose_m8306B8A4EEA224F44D8B9F85ABF60756314F9C0F_RuntimeMethod_var);
		IL2CPP_END_FINALLY(129)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(129)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x8F, IL_008f)
	}

IL_008f:
	{
		// Dictionary<string, DnaSetter> setters = Avatar.GetDNA();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_27 = ___Avatar0;
		Dictionary_2_t66217F3600CE20AFF5C50E0E3EB6AADBD615BE09 * L_28;
		L_28 = DynamicCharacterAvatar_GetDNA_mB27AD9E1B2C460380913CD0F85622863EF877FC4(L_27, (UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A *)NULL, /*hidden argument*/NULL);
		// foreach (KeyValuePair<string, DnaSetter> dna in setters)
		Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224  L_29;
		L_29 = Dictionary_2_GetEnumerator_mCBD9158E6965C024FE2B904FD874885C1B3447F6(L_28, /*hidden argument*/Dictionary_2_GetEnumerator_mCBD9158E6965C024FE2B904FD874885C1B3447F6_RuntimeMethod_var);
		V_8 = L_29;
	}

IL_009d:
	try
	{ // begin try (depth: 1)
		{
			goto IL_00c5;
		}

IL_009f:
		{
			// foreach (KeyValuePair<string, DnaSetter> dna in setters)
			KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244  L_30;
			L_30 = Enumerator_get_Current_m841CCACC416F2848F67424F2093D149ACB74C45C_inline((Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *)(&V_8), /*hidden argument*/Enumerator_get_Current_m841CCACC416F2848F67424F2093D149ACB74C45C_RuntimeMethod_var);
			V_9 = L_30;
			// dna.Value.Set(0.35f + (Random.value * 0.3f));
			DnaSetter_tD3C946787EDEB7FE8B8415CD0085934C07305C5F * L_31;
			L_31 = KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_inline((KeyValuePair_2_t044FF6A1A4265B5E188F91B8AA1E2245CB05C244 *)(&V_9), /*hidden argument*/KeyValuePair_2_get_Value_m921AC40D607462131F777225BFFC868C7B070D69_RuntimeMethod_var);
			float L_32;
			L_32 = Random_get_value_m9AEBC7DF0BB6C57C928B0798349A7D3C0B3FB872(/*hidden argument*/NULL);
			DnaSetter_Set_m0951D7AFF7E280A78672BDBD082447BDBC5B119C(L_31, ((float)il2cpp_codegen_add((float)(0.349999994f), (float)((float)il2cpp_codegen_multiply((float)L_32, (float)(0.300000012f))))), /*hidden argument*/NULL);
		}

IL_00c5:
		{
			// foreach (KeyValuePair<string, DnaSetter> dna in setters)
			bool L_33;
			L_33 = Enumerator_MoveNext_m94881ED67136E2B79A3DCBC0295B3AF3032F1AC2((Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *)(&V_8), /*hidden argument*/Enumerator_MoveNext_m94881ED67136E2B79A3DCBC0295B3AF3032F1AC2_RuntimeMethod_var);
			if (L_33)
			{
				goto IL_009f;
			}
		}

IL_00ce:
		{
			IL2CPP_LEAVE(0xDE, FINALLY_00d0);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_00d0;
	}

FINALLY_00d0:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mCEAE52184BE7C9FAAA54C71E56AA39401FBB4969((Enumerator_t44A91449D9EF22A98AAEE408B531BF839CB16224 *)(&V_8), /*hidden argument*/Enumerator_Dispose_mCEAE52184BE7C9FAAA54C71E56AA39401FBB4969_RuntimeMethod_var);
		IL2CPP_END_FINALLY(208)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(208)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0xDE, IL_00de)
	}

IL_00de:
	{
		// int RandHair = Random.Range(0, HairColors.colors.Length);
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_34 = __this->get_HairColors_40();
		OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* L_35 = L_34->get_colors_6();
		int32_t L_36;
		L_36 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_35)->max_length))), /*hidden argument*/NULL);
		V_1 = L_36;
		// int RandSkin = Random.Range(0, SkinColors.colors.Length);
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_37 = __this->get_SkinColors_39();
		OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* L_38 = L_37->get_colors_6();
		int32_t L_39;
		L_39 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)((int32_t)(((RuntimeArray*)L_38)->max_length))), /*hidden argument*/NULL);
		V_2 = L_39;
		// Avatar.SetColor("Hair", HairColors.colors[RandHair]);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_40 = ___Avatar0;
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_41 = __this->get_HairColors_40();
		OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* L_42 = L_41->get_colors_6();
		int32_t L_43 = V_1;
		int32_t L_44 = L_43;
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_45 = (L_42)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_44));
		DynamicCharacterAvatar_SetColor_mC99BF4A06A16D701750DDC0A66D0D40485F2B010(L_40, _stringLiteralD770F1B2D8400071A596306999013D140FF4568A, L_45, (bool)1, /*hidden argument*/NULL);
		// Avatar.SetColor("Skin", SkinColors.colors[RandSkin]);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_46 = ___Avatar0;
		SharedColorTable_t886D6A55E5ECC0368A660FF414AF8004B0869779 * L_47 = __this->get_SkinColors_39();
		OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB* L_48 = L_47->get_colors_6();
		int32_t L_49 = V_2;
		int32_t L_50 = L_49;
		OverlayColorData_tE3CAD6B9D98D75A24BEC1778FD4EAB63CE7E58F1 * L_51 = (L_48)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_50));
		DynamicCharacterAvatar_SetColor_mC99BF4A06A16D701750DDC0A66D0D40485F2B010(L_46, _stringLiteralE9D8ED9C84425C467F5ECEE0DE067FC9433CFA5D, L_51, (bool)1, /*hidden argument*/NULL);
		// Avatar.BuildCharacter(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_52 = ___Avatar0;
		DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0(L_52, (bool)1, (bool)0, (bool)1, /*hidden argument*/NULL);
		// Avatar.ForceUpdate(true, true, true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_53 = ___Avatar0;
		DynamicCharacterAvatar_ForceUpdate_mC138DB7C6F0EBCC9D29A6BF04952EDD274C57FB5(L_53, (bool)1, (bool)1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::LinkToAssets()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_LinkToAssets_m5244C2318986948474A149BCAD13B13E366593CE (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6643C7A965CB229F372E43667477C5B4A6794775);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Application.OpenURL("https://www.assetstore.unity3d.com/en/#!/search/page=1/sortby=popularity/query=publisher:5619");
		Application_OpenURL_m4AED08D5321E5395FAC8D91C2C428DBE60C5FD4E(_stringLiteral6643C7A965CB229F372E43667477C5B4A6794775, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::ToggleAnimation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_ToggleAnimation_m6494FC986B8FF95C311B5FCB76F6F8124893DF38 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_Next_mEB224B943E4B90DBAE3A07011750B32596C1989C (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE31262F8FE7C8A5C9CCB2D00F34623AF1BD14D90);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("2-CustomizationTemplate");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralE31262F8FE7C8A5C9CCB2D00F34623AF1BD14D90, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::SaveUMA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode_SaveUMA_m21E4FA2CCE6DE5454BD34D90CF0EA521AD4F81B3 (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		String_t* L_1;
		L_1 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_31(L_1);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3;
		L_3 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_30(L_3);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_5;
		L_5 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_4, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_32(L_6);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_36(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_10 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_10, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_11 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_12;
		L_12 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_11, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_10, L_12, /*hidden argument*/NULL);
		__this->set_binarySize_37(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_14 = __this->get_saveString_30();
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		__this->set_saveStringSize_33(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_16 = __this->get_avatarString_31();
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		__this->set_avatarStringSize_34(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_18 = __this->get_compressedString_32();
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		__this->set_compressedStringSize_35(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		// PlayerPrefs.SetString("saveString", saveString);
		String_t* L_20 = __this->get_saveString_30();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, L_20, /*hidden argument*/NULL);
		// Debug.Log("Saved string");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888, /*hidden argument*/NULL);
		// betweenscenes = PlayerPrefs.GetString("saveString");
		String_t* L_21;
		L_21 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_29(L_21);
		// Debug.Log("recipe saved as betweenscenes");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UMA.CharacterSystem.Examples.SampleCode::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SampleCode__ctor_m159B7EC2AA9CB9B440E2E9058D9419D89AD0735B (SampleCode_tE1C986A981756357400275304187A303DCBB2173 * __this, const RuntimeMethod* method)
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
// System.Void TrialSave::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialSave_Start_m754EC5AA93719E94E5C825B5A27DD23B8CE9315F (TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// Randomizer.Randomize(Avatar);
		UMARandomAvatar_tE27FD4557FFCB91BE7539C2EEC0C86D18DB2ADA6 * L_0 = __this->get_Randomizer_5();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_1 = __this->get_Avatar_4();
		UMARandomAvatar_Randomize_mFAC79A3C9CF88FB6E50765186AE86C0389454EF9(L_0, L_1, /*hidden argument*/NULL);
		// Avatar.BuildCharacter(false);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		DynamicCharacterAvatar_BuildCharacter_mBDBC999EA6B36B86B15A5C07140FD411273E2EF0(L_2, (bool)0, (bool)0, (bool)1, /*hidden argument*/NULL);
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_3 = __this->get_Avatar_4();
		String_t* L_4;
		L_4 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_3, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_10(L_4);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_5 = __this->get_Avatar_4();
		String_t* L_6;
		L_6 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_5, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_9(L_6);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		String_t* L_9;
		L_9 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_11(L_9);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_10 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_11;
		L_11 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_10, (bool)1, /*hidden argument*/NULL);
		V_0 = L_11;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_12;
		L_12 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_15(((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_13 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_13, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_14 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_15;
		L_15 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_14, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_16;
		L_16 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_13, L_15, /*hidden argument*/NULL);
		__this->set_binarySize_16(((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_17 = __this->get_saveString_9();
		int32_t L_18;
		L_18 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_17, /*hidden argument*/NULL);
		__this->set_saveStringSize_12(((int32_t)il2cpp_codegen_multiply((int32_t)L_18, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_19 = __this->get_avatarString_10();
		int32_t L_20;
		L_20 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_19, /*hidden argument*/NULL);
		__this->set_avatarStringSize_13(((int32_t)il2cpp_codegen_multiply((int32_t)L_20, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_21 = __this->get_compressedString_11();
		int32_t L_22;
		L_22 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_21, /*hidden argument*/NULL);
		__this->set_compressedStringSize_14(((int32_t)il2cpp_codegen_multiply((int32_t)L_22, (int32_t)2)));
		// PlayerPrefs.SetString("saveString", saveString);
		String_t* L_23 = __this->get_saveString_9();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, L_23, /*hidden argument*/NULL);
		// Debug.Log("Saved string");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888, /*hidden argument*/NULL);
		// betweenscenes = PlayerPrefs.GetString("saveString");
		String_t* L_24;
		L_24 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_8(L_24);
		// Debug.Log("recipe saved as betweenscenes");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrialSave::SaveUMA()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialSave_SaveUMA_mF2CBE932CD1650E755D71C0271C44ACFE3614BDE (TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827);
		s_Il2CppMethodInitialized = true;
	}
	AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// avatarString = Avatar.GetAvatarDefinitionString(true);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_0 = __this->get_Avatar_4();
		String_t* L_1;
		L_1 = DynamicCharacterAvatar_GetAvatarDefinitionString_m019A06F1848E0752370BC59C926F92468CB768F0(L_0, (bool)1, /*hidden argument*/NULL);
		__this->set_avatarString_10(L_1);
		// saveString = Avatar.GetCurrentRecipe();
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_2 = __this->get_Avatar_4();
		String_t* L_3;
		L_3 = DynamicCharacterAvatar_GetCurrentRecipe_m0611FF6BE6014F0B9414BF133A13D4FAC22054FB(L_2, (bool)0, /*hidden argument*/NULL);
		__this->set_saveString_9(L_3);
		// compressedString = Avatar.GetAvatarDefinition(true).ToCompressedString("|");
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_4 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_5;
		L_5 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_4, (bool)1, /*hidden argument*/NULL);
		V_0 = L_5;
		String_t* L_6;
		L_6 = AvatarDefinition_ToCompressedString_m3E6BCA23DCA7D410C7F8BC3411927CCEBB9802BD((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), _stringLiteralA42779B09629BCE81B76EF626A57A0B40F2AD827, /*hidden argument*/NULL);
		__this->set_compressedString_11(L_6);
		// asciiStringSize = Avatar.GetAvatarDefinition(true).ToASCIIString().Length;
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_7 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_8;
		L_8 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_7, (bool)1, /*hidden argument*/NULL);
		V_0 = L_8;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_9;
		L_9 = AvatarDefinition_ToASCIIString_m4E9D950B98C44BF7298E967E59B52AB8C15F79F1((AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5 *)(&V_0), /*hidden argument*/NULL);
		__this->set_asciiStringSize_15(((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))));
		// binarySize = BinaryDefinition.ToBinary(new BinaryFormatter(), Avatar.GetAvatarDefinition(true)).Length;
		BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 * L_10 = (BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55 *)il2cpp_codegen_object_new(BinaryFormatter_tAA0465FE94B272FAC7C99F6AD38120E9319C5F55_il2cpp_TypeInfo_var);
		BinaryFormatter__ctor_m63B98FC5BE3E28A871125318FECE87CEA83D9126(L_10, /*hidden argument*/NULL);
		DynamicCharacterAvatar_t664120B45F69342FEEAEFAAAE7AF84B3D04030F4 * L_11 = __this->get_Avatar_4();
		AvatarDefinition_t88CA805C7A4E02F14324C3EE6C5027987E03B2E5  L_12;
		L_12 = DynamicCharacterAvatar_GetAvatarDefinition_m943BB202E056EDBBE7F57DA8DC8B3DBEEB49F8B5(L_11, (bool)1, /*hidden argument*/NULL);
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_13;
		L_13 = BinaryDefinition_ToBinary_m05797ACF9EAE9F82242D75DFBBDBC2406A0087A3(L_10, L_12, /*hidden argument*/NULL);
		__this->set_binarySize_16(((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))));
		// saveStringSize = saveString.Length * 2;
		String_t* L_14 = __this->get_saveString_9();
		int32_t L_15;
		L_15 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_14, /*hidden argument*/NULL);
		__this->set_saveStringSize_12(((int32_t)il2cpp_codegen_multiply((int32_t)L_15, (int32_t)2)));
		// avatarStringSize = avatarString.Length * 2;
		String_t* L_16 = __this->get_avatarString_10();
		int32_t L_17;
		L_17 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_16, /*hidden argument*/NULL);
		__this->set_avatarStringSize_13(((int32_t)il2cpp_codegen_multiply((int32_t)L_17, (int32_t)2)));
		// compressedStringSize = compressedString.Length * 2; // utf-16
		String_t* L_18 = __this->get_compressedString_11();
		int32_t L_19;
		L_19 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_18, /*hidden argument*/NULL);
		__this->set_compressedStringSize_14(((int32_t)il2cpp_codegen_multiply((int32_t)L_19, (int32_t)2)));
		// }
		return;
	}
}
// System.Void TrialSave::SaveAvatar()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialSave_SaveAvatar_mC5D46370FB47A30488040884B8B2E4916CFE814D (TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// PlayerPrefs.SetString("saveString", saveString);
		String_t* L_0 = __this->get_saveString_9();
		PlayerPrefs_SetString_m94CD8FF45692553A5726DFADF74935F7E1D1C633(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, L_0, /*hidden argument*/NULL);
		// Debug.Log("Saved string");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral418458993EFF66ED729D65872B2ABB86080A4888, /*hidden argument*/NULL);
		// betweenscenes = PlayerPrefs.GetString("saveString");
		String_t* L_1;
		L_1 = PlayerPrefs_GetString_mE7654C1031622A56CD8F248F53714B105A35A159(_stringLiteral24CCD4A043951AD5C22693899BAEFAD343890A66, /*hidden argument*/NULL);
		__this->set_betweenscenes_8(L_1);
		// Debug.Log("recipe saved as betweenscenes");
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteral9F1E1D6A23B39FC41CFDAF51923E4E410BA26F5B, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrialSave::Nexxt()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialSave_Nexxt_m90CF4558C6085B3720E8F4C2B7B13A2C097F69FA (TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB33E05F366CCDE593E338D4A635F5FE032FF42B8);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene("LoadAvatarTest");
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m7DAF30213E99396ECBDB1BD40CC34CCF36902092(_stringLiteralB33E05F366CCDE593E338D4A635F5FE032FF42B8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TrialSave::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TrialSave__ctor_mD1E11C43005A337FA1D4F275092DB78E4E68957B (TrialSave_tDB3F95A84669EB73785616EC668511674B8D060A * __this, const RuntimeMethod* method)
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
// System.Void ButtonTimer/<HideAndShow>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideAndShowU3Ed__4__ctor_m23D8D1737426200CD12D0E01836F8B0940E11847 (U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void ButtonTimer/<HideAndShow>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideAndShowU3Ed__4_System_IDisposable_Dispose_m5E497D0E076C1B1F3E77EB61E50019926BDC27F3 (U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean ButtonTimer/<HideAndShow>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CHideAndShowU3Ed__4_MoveNext_mCE3AD80A3B5DCD97180FC85922D8AF062E2FEEEA (U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0049;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// NextButton.gameObject.SetActive(false);
		ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * L_4 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = L_4->get_NextButton_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(delay);
		float L_7 = __this->get_delay_3();
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_8 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_8, L_7, /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_8);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0049:
	{
		__this->set_U3CU3E1__state_0((-1));
		// NextButton.gameObject.SetActive(true);
		ButtonTimer_t6FAB577C76AE48E7F19FB0F926A15AC86E446F95 * L_9 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = L_9->get_NextButton_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object ButtonTimer/<HideAndShow>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHideAndShowU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAC50C1B5C7A3E549A6DBE972E9F3A3BD75FDF935 (U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void ButtonTimer/<HideAndShow>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CHideAndShowU3Ed__4_System_Collections_IEnumerator_Reset_mB6BC8C3A35F4DEA4F66BDD03A96D8AD73DCFC37B (U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CHideAndShowU3Ed__4_System_Collections_IEnumerator_Reset_mB6BC8C3A35F4DEA4F66BDD03A96D8AD73DCFC37B_RuntimeMethod_var)));
	}
}
// System.Object ButtonTimer/<HideAndShow>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CHideAndShowU3Ed__4_System_Collections_IEnumerator_get_Current_mE95939E67133BF1626521C6DD86D689B400E9594 (U3CHideAndShowU3Ed__4_t595EAFF62D93AD6733927F9830A851900D57A03E * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GameExclusive/<LeftCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeftCoroutineU3Ed__11__ctor_m105B279617E3DA89549687F5C228255E27517512 (U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameExclusive/<LeftCoroutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeftCoroutineU3Ed__11_System_IDisposable_Dispose_mCE82D55789B60721B38C555B828023D349C33A80 (U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameExclusive/<LeftCoroutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLeftCoroutineU3Ed__11_MoveNext_m476DA6031864DA7A34DD1EFB93E10DCB2AC76A1B (U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_004a;
			}
			case 1:
			{
				goto IL_00bc;
			}
			case 2:
			{
				goto IL_00ed;
			}
			case 3:
			{
				goto IL_012c;
			}
			case 4:
			{
				goto IL_016b;
			}
			case 5:
			{
				goto IL_01aa;
			}
			case 6:
			{
				goto IL_01e9;
			}
			case 7:
			{
				goto IL_0228;
			}
			case 8:
			{
				goto IL_0267;
			}
			case 9:
			{
				goto IL_02b8;
			}
			case 10:
			{
				goto IL_02f8;
			}
			case 11:
			{
				goto IL_0338;
			}
			case 12:
			{
				goto IL_0378;
			}
		}
	}
	{
		return (bool)0;
	}

IL_004a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PassLeft.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_3 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = L_3->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_6 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = L_6->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_9 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = L_9->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// Ball.transform.Translate(-3.577f,0 , 4.47f);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_12 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_14, (-3.5769999f), (0.0f), (4.46999979f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00bc:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Waiting.gameObject.SetActive(true);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_16 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = L_16->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_19 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_19, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ed:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_22, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_23 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_23, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_012c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_24 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_26, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_016b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_28 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_28->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_30, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_31 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_31, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_31);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_01aa:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_32 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = L_32->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_34, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_35 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_35, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_35);
		__this->set_U3CU3E1__state_0(6);
		return (bool)1;
	}

IL_01e9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_36 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_36->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_38, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_39 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_39, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_39);
		__this->set_U3CU3E1__state_0(7);
		return (bool)1;
	}

IL_0228:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_40 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_41 = L_40->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_42;
		L_42 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_41, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_42, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_43 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_43, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_43);
		__this->set_U3CU3E1__state_0(8);
		return (bool)1;
	}

IL_0267:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Waiting.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_44 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_45 = L_44->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_46;
		L_46 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_45, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_46, (bool)0, /*hidden argument*/NULL);
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_47 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = L_47->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_49, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_50 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_50, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_50);
		__this->set_U3CU3E1__state_0(((int32_t)9));
		return (bool)1;
	}

IL_02b8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_51 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = L_51->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_53, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_54 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_54, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_54);
		__this->set_U3CU3E1__state_0(((int32_t)10));
		return (bool)1;
	}

IL_02f8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_55 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = L_55->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_57, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_58 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_58, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_58);
		__this->set_U3CU3E1__state_0(((int32_t)11));
		return (bool)1;
	}

IL_0338:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_59 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = L_59->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_60, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_61, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_62 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_62, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_62);
		__this->set_U3CU3E1__state_0(((int32_t)12));
		return (bool)1;
	}

IL_0378:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(+3.577f, 0, -4.47f);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_63 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = L_63->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_65;
		L_65 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_64, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_65, (3.5769999f), (0.0f), (-4.46999979f), /*hidden argument*/NULL);
		// Waiting.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_66 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_67 = L_66->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_68;
		L_68 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_67, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_68, (bool)0, /*hidden argument*/NULL);
		// PassLeft.gameObject.SetActive(true);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_69 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_70 = L_69->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_71;
		L_71 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_70, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_71, (bool)1, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(true);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_72 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_73 = L_72->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74;
		L_74 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_73, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_74, (bool)1, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(true);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_75 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_76 = L_75->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_77;
		L_77 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_76, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_77, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameExclusive/<LeftCoroutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLeftCoroutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m90EC2639B3C88F76EA500D7E8A10686A6E1D139F (U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameExclusive/<LeftCoroutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeftCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m35F372F08E8B45F91EB5A7201302800A6C0D6A3F (U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLeftCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m35F372F08E8B45F91EB5A7201302800A6C0D6A3F_RuntimeMethod_var)));
	}
}
// System.Object GameExclusive/<LeftCoroutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLeftCoroutineU3Ed__11_System_Collections_IEnumerator_get_Current_m78482C2696EE49F67F6FF42896215B91EBC2E169 (U3CLeftCoroutineU3Ed__11_tFB71AE4D0761CAF5C80BFCC016D33CCBF1B8E8FD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GameExclusive/<RightCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRightCoroutineU3Ed__10__ctor_m32CD981E5AD9331FA812956640821CB2ACAAB13C (U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameExclusive/<RightCoroutine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRightCoroutineU3Ed__10_System_IDisposable_Dispose_mD3F5B589C6DDB33ED00F726902D45B008947E059 (U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameExclusive/<RightCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRightCoroutineU3Ed__10_MoveNext_m7408416EDB1468CBCF8EF08DD304FAD49BC55ED4 (U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_00b8;
			}
			case 2:
			{
				goto IL_00e9;
			}
			case 3:
			{
				goto IL_0128;
			}
			case 4:
			{
				goto IL_0167;
			}
			case 5:
			{
				goto IL_01a6;
			}
			case 6:
			{
				goto IL_01e5;
			}
			case 7:
			{
				goto IL_0224;
			}
			case 8:
			{
				goto IL_0274;
			}
			case 9:
			{
				goto IL_02b4;
			}
			case 10:
			{
				goto IL_02f4;
			}
			case 11:
			{
				goto IL_0334;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0046:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PassLeft.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_3 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = L_3->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_6 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = L_6->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_9 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = L_9->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// Ball.transform.Translate(3.677f,0, 4.57f);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_12 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_14, (3.67700005f), (0.0f), (4.57000017f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b8:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Waiting.gameObject.SetActive(true);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_16 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = L_16->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_19 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_19, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00e9:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_22, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_23 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_23, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_0128:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_24 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_26, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_0167:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_28 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = L_28->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_30, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_31 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_31, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_31);
		__this->set_U3CU3E1__state_0(5);
		return (bool)1;
	}

IL_01a6:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_32 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33 = L_32->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_33, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_34, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_35 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_35, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_35);
		__this->set_U3CU3E1__state_0(6);
		return (bool)1;
	}

IL_01e5:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_36 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37 = L_36->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_38;
		L_38 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_37, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_38, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_39 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_39, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_39);
		__this->set_U3CU3E1__state_0(7);
		return (bool)1;
	}

IL_0224:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Waiting.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_40 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_41 = L_40->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_42;
		L_42 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_41, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_42, (bool)0, /*hidden argument*/NULL);
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_43 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = L_43->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_45, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_46 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_46, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_46);
		__this->set_U3CU3E1__state_0(8);
		return (bool)1;
	}

IL_0274:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_47 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_48 = L_47->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_49;
		L_49 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_48, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_49, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_50 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_50, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_50);
		__this->set_U3CU3E1__state_0(((int32_t)9));
		return (bool)1;
	}

IL_02b4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_51 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52 = L_51->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_53;
		L_53 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_52, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_53, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_54 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_54, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_54);
		__this->set_U3CU3E1__state_0(((int32_t)10));
		return (bool)1;
	}

IL_02f4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_55 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_56 = L_55->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_57;
		L_57 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_56, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_57, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_58 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_58, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_58);
		__this->set_U3CU3E1__state_0(((int32_t)11));
		return (bool)1;
	}

IL_0334:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(+3.577f, 0, -4.47f);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_59 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = L_59->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_60, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_61, (3.5769999f), (0.0f), (-4.46999979f), /*hidden argument*/NULL);
		// Waiting.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_62 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_63 = L_62->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64;
		L_64 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_63, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_64, (bool)0, /*hidden argument*/NULL);
		// Waiting.gameObject.SetActive(false);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_65 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_66 = L_65->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67;
		L_67 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_66, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_67, (bool)0, /*hidden argument*/NULL);
		// PassLeft.gameObject.SetActive(true);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_68 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_69 = L_68->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70;
		L_70 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_69, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_70, (bool)1, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(true);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_71 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_72 = L_71->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_73;
		L_73 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_72, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_73, (bool)1, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(true);
		GameExclusive_tEA2DF84C021AC587DEDB0DE778D42A2C172951D7 * L_74 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_75 = L_74->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_76;
		L_76 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_75, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_76, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameExclusive/<RightCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRightCoroutineU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5332AD969ED05DF518DCC4DDDD6706ABC8E98934 (U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameExclusive/<RightCoroutine>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRightCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m9824C045341A29CDA23A4256C64DEEAF7564920A (U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRightCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m9824C045341A29CDA23A4256C64DEEAF7564920A_RuntimeMethod_var)));
	}
}
// System.Object GameExclusive/<RightCoroutine>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRightCoroutineU3Ed__10_System_Collections_IEnumerator_get_Current_m36EB08DFC3E4F04CFC411CB1B01CD008944036E6 (U3CRightCoroutineU3Ed__10_tC487F22E1317223637F84EDA13FF9E0BE88E3783 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GameInclusive/<LeftCoroutine>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeftCoroutineU3Ed__11__ctor_m4C631C6E42F602A6DB61369B74632EB673894DDE (U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameInclusive/<LeftCoroutine>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeftCoroutineU3Ed__11_System_IDisposable_Dispose_m591CE2496628B736D8C9FC25F83453A72282E89B (U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameInclusive/<LeftCoroutine>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLeftCoroutineU3Ed__11_MoveNext_mBF7FAC9938B972D50361830CB9651966F35A9884 (U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_00cd;
			}
			case 3:
			{
				goto IL_010c;
			}
			case 4:
			{
				goto IL_014b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PassLeft.gameObject.SetActive(false);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_3 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = L_3->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(false);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_6 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = L_6->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(false);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_9 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = L_9->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// Ball.transform.Translate(-3.577f,0 , 4.47f);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_12 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_14, (-3.5769999f), (0.0f), (4.46999979f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Waiting.gameObject.SetActive(true);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_16 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = L_16->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_19 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_19, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00cd:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(7.2f,0 ,0);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_22, (7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_23 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_23, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_010c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-3.677f,0, -4.57f);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_24 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_26, (-3.67700005f), (0.0f), (-4.57000017f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_014b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Waiting.gameObject.SetActive(false);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_28 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_29 = L_28->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		// PassLeft.gameObject.SetActive(true);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_31 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_32 = L_31->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_32, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_33, (bool)1, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(true);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_34 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_35 = L_34->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_36, (bool)1, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(true);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_37 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_38 = L_37->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_39, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameInclusive/<LeftCoroutine>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLeftCoroutineU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA426CA1399AA815F13F0E78D16471D9FED7021E8 (U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameInclusive/<LeftCoroutine>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLeftCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m02F115F1E4D87D8732D25448CC4B122345E744BC (U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLeftCoroutineU3Ed__11_System_Collections_IEnumerator_Reset_m02F115F1E4D87D8732D25448CC4B122345E744BC_RuntimeMethod_var)));
	}
}
// System.Object GameInclusive/<LeftCoroutine>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLeftCoroutineU3Ed__11_System_Collections_IEnumerator_get_Current_mF02A72C2097084BD73605752FB8E8FB222F38F7A (U3CLeftCoroutineU3Ed__11_t3B219995EC8A28FB512B0A56F9EEB61D9D3E2CAD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
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
// System.Void GameInclusive/<RightCoroutine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRightCoroutineU3Ed__10__ctor_m444B835547924E5D72CE39830A6F14D2061C0D01 (U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void GameInclusive/<RightCoroutine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRightCoroutineU3Ed__10_System_IDisposable_Dispose_mE653A37FAD5BA153FFF156C640E8B8212E9EC591 (U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean GameInclusive/<RightCoroutine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CRightCoroutineU3Ed__10_MoveNext_mDC0155644392210DC78FFC0613F3F7347AB8C81F (U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_1 = __this->get_U3CU3E4__this_2();
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_002a;
			}
			case 1:
			{
				goto IL_009c;
			}
			case 2:
			{
				goto IL_00cd;
			}
			case 3:
			{
				goto IL_010c;
			}
			case 4:
			{
				goto IL_014b;
			}
		}
	}
	{
		return (bool)0;
	}

IL_002a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// PassLeft.gameObject.SetActive(false);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_3 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = L_3->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(false);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_6 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_7 = L_6->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8;
		L_8 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_7, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(false);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_9 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = L_9->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// Ball.transform.Translate(3.677f,0, 4.57f);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_12 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = L_12->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_14, (3.67700005f), (0.0f), (4.57000017f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_15 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_15, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_15);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_009c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Waiting.gameObject.SetActive(true);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_16 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_17 = L_16->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18;
		L_18 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_17, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_19 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_19, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_19);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00cd:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(-7.2f,0 ,0);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_20 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = L_20->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_22, (-7.19999981f), (0.0f), (0.0f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_23 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_23, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_23);
		__this->set_U3CU3E1__state_0(3);
		return (bool)1;
	}

IL_010c:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Ball.transform.Translate(+3.577f,0 , -4.47f);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_24 = V_1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = L_24->get_Ball_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_26;
		L_26 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_25, /*hidden argument*/NULL);
		Transform_Translate_mC9343E1E646DA8FD42BE37137ACCBB4B52093F5C(L_26, (3.5769999f), (0.0f), (-4.46999979f), /*hidden argument*/NULL);
		// yield return new WaitForSeconds(1);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_27 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_27, (1.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_27);
		__this->set_U3CU3E1__state_0(4);
		return (bool)1;
	}

IL_014b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Waiting.gameObject.SetActive(false);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_28 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_29 = L_28->get_Waiting_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30;
		L_30 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_29, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_30, (bool)0, /*hidden argument*/NULL);
		// PassLeft.gameObject.SetActive(true);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_31 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_32 = L_31->get_PassLeft_5();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_33;
		L_33 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_32, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_33, (bool)1, /*hidden argument*/NULL);
		// PassRight.gameObject.SetActive(true);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_34 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_35 = L_34->get_PassRight_6();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_36, (bool)1, /*hidden argument*/NULL);
		// Catch.gameObject.SetActive(true);
		GameInclusive_t8BD4BFC21634C6D38D314AC950C71B0CA33A6DED * L_37 = V_1;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_38 = L_37->get_Catch_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_39, (bool)1, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameInclusive/<RightCoroutine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRightCoroutineU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m02A3374521766E9932A22A8EA0C7F5A1C4D4DC6E (U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void GameInclusive/<RightCoroutine>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CRightCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m64DB9E8D1DF62991C2D3538D26991A361313CE7C (U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CRightCoroutineU3Ed__10_System_Collections_IEnumerator_Reset_m64DB9E8D1DF62991C2D3538D26991A361313CE7C_RuntimeMethod_var)));
	}
}
// System.Object GameInclusive/<RightCoroutine>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CRightCoroutineU3Ed__10_System_Collections_IEnumerator_get_Current_mEA52289E856B959190091DE65786712D9471EBF8 (U3CRightCoroutineU3Ed__10_tF71DAD69AFD1EED33AFD7C5237FDF94AD8130415 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Slider_get_maxValue_m369FF59A4AEC91348D79BF1906F4012A2A850959_inline (Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * __this, const RuntimeMethod* method)
{
	{
		// public float maxValue { get { return m_MaxValue; } set { if (SetPropertyUtility.SetStruct(ref m_MaxValue, value)) { Set(m_Value); UpdateVisuals(); } } }
		float L_0 = __this->get_m_MaxValue_24();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void GCSettings_set_LargeObjectHeapCompactionMode_mE16301541EC0EED3C4F3445F1F16997DBD7EAF51_inline (int32_t ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GCSettings_t92BF9239338986C848BEF0E727E1C778CDF2991B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___value0;
		((GCSettings_t92BF9239338986C848BEF0E727E1C778CDF2991B_StaticFields*)il2cpp_codegen_static_fields_for(GCSettings_t92BF9239338986C848BEF0E727E1C778CDF2991B_il2cpp_TypeInfo_var))->set_U3CLargeObjectHeapCompactionModeU3Ek__BackingField_0(L_0);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* OptionData_get_text_m8652FE3866405C4C7C3782659009EF2C7E54D232_inline (OptionData_t5F665DC13C1E4307727D66ECC1100B3A77E3E857 * __this, const RuntimeMethod* method)
{
	{
		// public string text  { get { return m_Text; }  set { m_Text = value;  } }
		String_t* L_0 = __this->get_m_Text_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_mF00B574E58FB078BB753B05A3B86DD0A7A266B63_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method)
{
	{
		KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  L_0 = (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )__this->get_current_3();
		return (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 )L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_value_1();
		return (RuntimeObject *)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_currentKey_3();
		return (RuntimeObject *)L_0;
	}
}

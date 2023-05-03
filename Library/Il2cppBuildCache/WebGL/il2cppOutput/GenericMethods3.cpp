#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
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

// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81;
// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable>
struct Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object>
struct ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<UMA.DNAConvertDelegate>>
struct Dictionary_2_tB721F88CB94FDE6A7300E435239F3ABE760F64CB;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t49CB072CAA9184D326107FA696BB354C43EB5E08;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task>
struct Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8;
// System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMADnaBase>
struct Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D;
// System.Collections.Generic.Dictionary`2<System.Int32,UMA.SkinnedMeshCombiner/BoneIndexEntry>
struct Dictionary_2_t48AD95119D7E423189220650166490CAA3069BE8;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.UMATextRecipe>>>
struct Dictionary_2_t564A1C71BCC245E5C1BB0CF242D286860BC5EC87;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<UMA.MeshHideAsset>>
struct Dictionary_2_t7B44D9A0564C9705D96B47DCC6B257D2B9EBA177;
// System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>
struct Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_tC94E9875910491F8130C2DC8B11E4D1548A55162;
// System.Collections.Generic.Dictionary`2<System.String,System.Type>
struct Dictionary_2_t6BC8BF32EFF6FF794B125939AD0F300DAAE19F85;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>>
struct Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute>
struct Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494;
// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506;
// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7;
// System.Collections.Generic.EqualityComparer`1<System.Char>
struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>
struct EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40;
// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62;
// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>
struct EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC;
// System.Collections.Generic.EqualityComparer`1<System.Single>
struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F;
// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>
struct EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030;
// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs>
struct EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A;
// System.Func`1<System.Int32>
struct Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Func`1<System.Threading.Tasks.Task/ContingentProperties>
struct Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Boolean>>
struct Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Int32>>
struct Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Object>>
struct Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD;
// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>>
struct Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Collections.Generic.IEnumerable`1<UMA.AssetItem>
struct IEnumerable_1_t577391DAB9BF3FB4604E286DDA3BC2299511BA85;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset>
struct IEnumerable_1_tCD2B0F12D0E02D7BF44AA544916B2D1CCCD4246D;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.IEqualityComparer`1<System.String>
struct IEqualityComparer_1_tE6A65C5E45E33FD7D9849FD0914DE3AD32B68050;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t7EEC9B4006D6D425748908D52AA799197F29A165;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UMA.UMADnaBase>
struct KeyCollection_t079D5BA93C667749F81CB9240C5535073895A179;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UMA.AssetItem>
struct KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>>
struct KeyCollection_tDFFD56035A3ABFD074CBC6F308E0AC65A7C32431;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,System.Type>
struct KeyCollection_tDF38AEDAEF9E7AA96C28D1C4CE0D70D2A9B51128;
// System.Collections.Generic.LinkedListNode`1<UMA.UMAData>
struct LinkedListNode_1_t58B04B7F807A8599357DEF495B9BAECB62B34286;
// System.Collections.Generic.List`1<UMA.AssetItem>
struct List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5;
// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker>
struct List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7;
// System.Collections.Generic.List`1<UnityEngine.Matrix4x4>
struct List_1_t91D17AE90AEDBA7B4EE523A45D167B50FD7CB7A6;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<UMA.PropertyHolder>
struct List_1_tED3BE533927F5D758DDA3BBCFDD4A6AB227BEE63;
// System.Collections.Generic.List`1<UnityEngine.ScriptableObject>
struct List_1_tEB4537E121ED7128292F5E49486823EB846576FE;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip>
struct List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C;
// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset>
struct List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4;
// System.Collections.Generic.List`1<System.Type>
struct List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7;
// System.Collections.Generic.List`1<UMA.UMADnaBase>
struct List_1_t6EB9C928712A968388ECB10159E456120E6DE71D;
// System.Collections.Generic.List`1<UMA.UMAProperty>
struct List_1_tFDC14D676F8F461A7EA4452F327E373314748074;
// System.Collections.Generic.List`1<UMA.UMASavedItem>
struct List_1_t180E55DE782EC1658BD5144F1BDE7963D5BC605F;
// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Predicate`1<System.Threading.Tasks.Task>
struct Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD;
// System.Threading.Tasks.TaskFactory`1<System.Boolean>
struct TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7;
// System.Threading.Tasks.TaskFactory`1<System.Int32>
struct TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E;
// System.Threading.Tasks.TaskFactory`1<System.Object>
struct TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55;
// System.Threading.Tasks.TaskFactory`1<System.Threading.Tasks.VoidTaskResult>
struct TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B;
// System.Threading.Tasks.Task`1<System.Boolean>
struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849;
// System.Threading.Tasks.Task`1<System.Int32>
struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725;
// System.Threading.Tasks.Task`1<System.Object>
struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17;
// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3;
// System.Tuple`2<System.Object,System.Object>
struct Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UMA.UMADnaBase>
struct ValueCollection_tC8C60423DD0168ADF9B18E463BCC3C9EE25702D4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UMA.AssetItem>
struct ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>>
struct ValueCollection_t0DD650AACF62C1BE9A994266CE00C0A05598F2F4;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,System.Type>
struct ValueCollection_tDA4E60877743A4826E8F24D570DB900C34162342;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UMA.UMADnaBase>[]
struct EntryU5BU5D_t7023DF237BEDED423DAD8BDF4FC989612AAE60FA;
// System.Collections.Generic.Dictionary`2/Entry<System.String,UMA.AssetItem>[]
struct EntryU5BU5D_tD2EB186241907426995910BF7D3F89CE21D38DDE;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>>[]
struct EntryU5BU5D_t943C0898867D16DAE17AB173143BBCDCA74C5432;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,System.Type>[]
struct EntryU5BU5D_t51120FC6057FEF0B1FABD8E2C5DE9EDCCDD35CEA;
// UMA.AssetItem[]
struct AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.ClothSkinningCoefficient[]
struct ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
// ColorDef[]
struct ColorDefU5BU5D_t6435D3A3EA490ED81F02E4272D041C8420B3AAD7;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
// UMA.OverlayColorData[]
struct OverlayColorDataU5BU5D_t606B489F9AF307D9E3F169279665C762978ACFCB;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3;
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
// UnityEngine.Timeline.TimelineClip[]
struct TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD;
// UnityEngine.Timeline.TrackAsset[]
struct TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UMA.UMADnaBase[]
struct UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0;
// UMA.UMARendererAsset[]
struct UMARendererAssetU5BU5D_t0039165EF8659578C2E0EF3BD5C20F3461DAE27B;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;
// UnityEngine.AnimationClip
struct AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178;
// UnityEngine.AnimationCurve
struct AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// UMA.AssetItem
struct AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// UMA.BlendShapeSettings
struct BlendShapeSettings_tB123D8AB02898CF0D0B7218F215CE4CE4197C042;
// System.Threading.CancellationTokenSource
struct CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3;
// System.Reflection.ConstructorInfo
struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B;
// System.Threading.ContextCallback
struct ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.Exception
struct Exception_t;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// UnityEngine.Timeline.IMarker
struct IMarker_t9C72733D2F030E130763B0F8CD7BA063E7D72C32;
// UnityEngine.Playables.INotification
struct INotification_tFB7646E6B1EA37ECE9D39374A3BD74B278E19C56;
// UnityEngine.Playables.INotificationReceiver
struct INotificationReceiver_tA4D70B9621684447E2C2328A43B9709272280F98;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA;
// UnityEngine.Timeline.MarkerTrack
struct MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.MonoTypeInfo
struct MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// System.OperationCanceledException
struct OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB;
// UnityEngine.Playables.PlayableAsset
struct PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137;
// UMA.RaceData
struct RaceData_t7B687F36EC1D69820CE6A3EA69404CCFCD707E6F;
// UnityEngine.RenderTexture
struct RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849;
// UnityEngine.RuntimeAnimatorController
struct RuntimeAnimatorController_t6F70D5BE51CCBA99132F444EFFA41439DFE71BAB;
// System.Reflection.RuntimeConstructorInfo
struct RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB;
// System.RuntimeType
struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C;
// UnityEngine.SkinnedMeshRenderer
struct SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496;
// UnityEngine.SphereCollider
struct SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.Threading.Tasks.StackGuard
struct StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D;
// System.Diagnostics.Stopwatch
struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60;
// System.Threading.Tasks.TaskFactory
struct TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B;
// System.Threading.Tasks.TaskScheduler
struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D;
// UnityEngine.Texture
struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Timeline.TimelineAsset
struct TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF;
// UnityEngine.Timeline.TimelineClip
struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F;
// UnityEngine.Timeline.TrackAsset
struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// System.Type
struct Type_t;
// UMA.UMAAssetIndexer
struct UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01;
// UMA.UMAData
struct UMAData_t696E4E970704E7893146E28998A230A9F2947B3C;
// UMA.UMADataEvent
struct UMADataEvent_tF7396A27593711FC634278B13B3C4C3A68E35196;
// UMA.UMADnaBase
struct UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40;
// UMA.UMAGeneratorBase
struct UMAGeneratorBase_t8423950475525E0EE3FE016792591A4FD53AE6F3;
// UMA.UMAMaterialPropertyBlock
struct UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869;
// UMA.UMAProperty
struct UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C;
// UMA.UMARendererAsset
struct UMARendererAsset_t09A4FD6D315DA27C4FEA077ABD9C9200EC5115C2;
// UMA.UMASkeleton
struct UMASkeleton_t67A33DCA126E8E7436821F2398E0B5CE15AE22CE;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UnityException
struct UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.Playables.PlayableBinding/CreateOutputMethod
struct CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876;
// System.Threading.Tasks.Task/ContingentProperties
struct ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0;
// UnityEngine.Timeline.TimelineAsset/EditorSettings
struct EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B;
// UMA.UMAAssetIndexer/recipeEqualityComparer
struct recipeEqualityComparer_t9CC68FA7FE9E46F7DBC08CD0F802D59FF811CBD2;
// UMA.UMAData/GeneratedMaterials
struct GeneratedMaterials_tB1112A090548BA0EAEF788D774FE1A871F64A644;
// UMA.UMAData/UMARecipe
struct UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614;
IL2CPP_EXTERN_C String_t* _stringLiteral4127313846D6DCEF28BF8D7B94FA57B6D9AF3DE2;
IL2CPP_EXTERN_C String_t* _stringLiteral4D2318B5BDE6D244B9EACC3D7582699E2EEA9707;
IL2CPP_EXTERN_C String_t* _stringLiteral5A47A1180382F3C4D23BA1B9A5A57E01273B8266;
IL2CPP_EXTERN_C String_t* _stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC;
IL2CPP_EXTERN_C String_t* _stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7;
IL2CPP_EXTERN_C String_t* _stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468;
IL2CPP_EXTERN_C String_t* _stringLiteral8E421E262D3F4AF84AEBEDBD2408542FE9E06690;
IL2CPP_EXTERN_C String_t* _stringLiteralB48DA06AF575369469BD558A6F0B8D9E34C491C3;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralCABF394563EE5A406DDC53B5B8B4CD82A39BA23F;
IL2CPP_EXTERN_C String_t* _stringLiteralCC4A13A2EC33AED24765C09230245B333FDA9EAA;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralF704B54D833421164E45E576DFD279921246BCEA;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mC6F2CCF27E10EFFBF702A75D0F7A818FA9451D85_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m5B6027FD49D75402DEA60A2E7D78CFBA98C5BCCD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_GetEnumerator_m986D7649E362E5CE5965786B7C87076ACEEC1F37_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mBFEF5D5AFDDBDD03BE8F36DA871D4A0720C64F73_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m73F5EB5FC46552CA3C767624580C81B7307FF46F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m8D1F51C56CAD4C749EC1CCDB795AD72484320ED2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Keys_m301F92306CBA5DA60037046138010E7C76C1B774_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Values_m35779C78F6C6ECD998850A2A9CE3C13331940DD5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m68B8A1D0F62BD1367B04F5F79211FB3C1CFEE220_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mBBE93736E371613263CBBD3497F5ADF1D1A3A63A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m07B09E6B744869CE90CD990555B247FBA70698BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7A3E6DA83C4200301CCCE3DCFFA45B211D4CE43C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyCollection_GetEnumerator_mC6B62D95B95970C5C4E664638C9D7873EA64E7C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m056662453E63A6F84D80F70B7DF291DFA6B5B467_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m2F5DBA9A17813187AD99256B1B4ADA7B5201F4F4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7B5148466AE133C5127B2963B2AE94FA1BDDB8E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m431EF90E91A74232A187230D471255F3BED2DDE7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mBBF6712F2EE6633C0A8ADA05DFE63DA1F4B701A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_mB24251454EBBD76760D985A36E68AF30FD28D61A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromCancellation_TisVoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004_mEE6F24685EC9FF937EC935CF9833C888DAE5EF0F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6592C11549EE0E5A2F5350E21688708663A17F34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisRuntimeObject_m5ED6868E2392A9302BF2B641CE72BD3E09C69E0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Task_FromException_TisVoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004_mD3ADE51D261F2D95FB40083B308AF2E16F2005A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Texture2D_LoadRawTextureData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFCD2DC8FCB465D68BE261A82A1A6EB45CAD476B0_RuntimeMethod_var;
struct ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE ;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com;

struct ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB;
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMADnaBase>
struct  Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t7023DF237BEDED423DAD8BDF4FC989612AAE60FA* ___entries_1;
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
	KeyCollection_t079D5BA93C667749F81CB9240C5535073895A179 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tC8C60423DD0168ADF9B18E463BCC3C9EE25702D4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___entries_1)); }
	inline EntryU5BU5D_t7023DF237BEDED423DAD8BDF4FC989612AAE60FA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t7023DF237BEDED423DAD8BDF4FC989612AAE60FA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t7023DF237BEDED423DAD8BDF4FC989612AAE60FA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___keys_7)); }
	inline KeyCollection_t079D5BA93C667749F81CB9240C5535073895A179 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t079D5BA93C667749F81CB9240C5535073895A179 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t079D5BA93C667749F81CB9240C5535073895A179 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ___values_8)); }
	inline ValueCollection_tC8C60423DD0168ADF9B18E463BCC3C9EE25702D4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tC8C60423DD0168ADF9B18E463BCC3C9EE25702D4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tC8C60423DD0168ADF9B18E463BCC3C9EE25702D4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>
struct  Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD2EB186241907426995910BF7D3F89CE21D38DDE* ___entries_1;
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
	KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___entries_1)); }
	inline EntryU5BU5D_tD2EB186241907426995910BF7D3F89CE21D38DDE* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD2EB186241907426995910BF7D3F89CE21D38DDE** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD2EB186241907426995910BF7D3F89CE21D38DDE* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___keys_7)); }
	inline KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ___values_8)); }
	inline ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F * get_values_8() const { return ___values_8; }
	inline ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>>
struct  Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t943C0898867D16DAE17AB173143BBCDCA74C5432* ___entries_1;
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
	KeyCollection_tDFFD56035A3ABFD074CBC6F308E0AC65A7C32431 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t0DD650AACF62C1BE9A994266CE00C0A05598F2F4 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___entries_1)); }
	inline EntryU5BU5D_t943C0898867D16DAE17AB173143BBCDCA74C5432* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t943C0898867D16DAE17AB173143BBCDCA74C5432** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t943C0898867D16DAE17AB173143BBCDCA74C5432* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___keys_7)); }
	inline KeyCollection_tDFFD56035A3ABFD074CBC6F308E0AC65A7C32431 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDFFD56035A3ABFD074CBC6F308E0AC65A7C32431 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDFFD56035A3ABFD074CBC6F308E0AC65A7C32431 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ___values_8)); }
	inline ValueCollection_t0DD650AACF62C1BE9A994266CE00C0A05598F2F4 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t0DD650AACF62C1BE9A994266CE00C0A05598F2F4 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t0DD650AACF62C1BE9A994266CE00C0A05598F2F4 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Type,System.Type>
struct  Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t51120FC6057FEF0B1FABD8E2C5DE9EDCCDD35CEA* ___entries_1;
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
	KeyCollection_tDF38AEDAEF9E7AA96C28D1C4CE0D70D2A9B51128 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tDA4E60877743A4826E8F24D570DB900C34162342 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___entries_1)); }
	inline EntryU5BU5D_t51120FC6057FEF0B1FABD8E2C5DE9EDCCDD35CEA* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t51120FC6057FEF0B1FABD8E2C5DE9EDCCDD35CEA** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t51120FC6057FEF0B1FABD8E2C5DE9EDCCDD35CEA* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___keys_7)); }
	inline KeyCollection_tDF38AEDAEF9E7AA96C28D1C4CE0D70D2A9B51128 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_tDF38AEDAEF9E7AA96C28D1C4CE0D70D2A9B51128 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_tDF38AEDAEF9E7AA96C28D1C4CE0D70D2A9B51128 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ___values_8)); }
	inline ValueCollection_tDA4E60877743A4826E8F24D570DB900C34162342 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tDA4E60877743A4826E8F24D570DB900C34162342 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tDA4E60877743A4826E8F24D570DB900C34162342 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Boolean>
struct  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Char>
struct  EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>
struct  EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Int32>
struct  EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Int32Enum>
struct  EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>
struct  EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<System.Single>
struct  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>
struct  EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030  : public RuntimeObject
{
public:

public:
};

struct EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030_StaticFields
{
public:
	// System.Collections.Generic.EqualityComparer`1<T> modreq(System.Runtime.CompilerServices.IsVolatile) System.Collections.Generic.EqualityComparer`1::defaultComparer
	EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * ___defaultComparer_0;

public:
	inline static int32_t get_offset_of_defaultComparer_0() { return static_cast<int32_t>(offsetof(EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030_StaticFields, ___defaultComparer_0)); }
	inline EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * get_defaultComparer_0() const { return ___defaultComparer_0; }
	inline EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 ** get_address_of_defaultComparer_0() { return &___defaultComparer_0; }
	inline void set_defaultComparer_0(EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * value)
	{
		___defaultComparer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultComparer_0), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UMA.AssetItem>
struct  KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection::dictionary
	Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876, ___dictionary_0)); }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<UMA.AssetItem>
struct  List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29, ____items_1)); }
	inline AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D* get__items_1() const { return ____items_1; }
	inline AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29_StaticFields, ____emptyArray_5)); }
	inline AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D* get__emptyArray_5() const { return ____emptyArray_5; }
	inline AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(AssetItemU5BU5D_tDF1C03CB96D19CC33E4C58CEA58D94C533E8A92D* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Color32>
struct  List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____items_1)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__items_1() const { return ____items_1; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5_StaticFields, ____emptyArray_5)); }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Int32>
struct  List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____items_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__items_1() const { return ____items_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7_StaticFields, ____emptyArray_5)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
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


// System.Collections.Generic.List`1<UMA.UMADnaBase>
struct  List_1_t6EB9C928712A968388ECB10159E456120E6DE71D  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6EB9C928712A968388ECB10159E456120E6DE71D, ____items_1)); }
	inline UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0* get__items_1() const { return ____items_1; }
	inline UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6EB9C928712A968388ECB10159E456120E6DE71D, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6EB9C928712A968388ECB10159E456120E6DE71D, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6EB9C928712A968388ECB10159E456120E6DE71D, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6EB9C928712A968388ECB10159E456120E6DE71D_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6EB9C928712A968388ECB10159E456120E6DE71D_StaticFields, ____emptyArray_5)); }
	inline UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0* get__emptyArray_5() const { return ____emptyArray_5; }
	inline UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(UMADnaBaseU5BU5D_t730709DD1DFCD901E8866EC42C497E235FCD7FF0* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector2>
struct  List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____items_1)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__items_1() const { return ____items_1; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9_StaticFields, ____emptyArray_5)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct  List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____items_1)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__items_1() const { return ____items_1; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181_StaticFields, ____emptyArray_5)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct  List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____items_1)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__items_1() const { return ____items_1; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A_StaticFields, ____emptyArray_5)); }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* get__emptyArray_5() const { return ____emptyArray_5; }
	inline Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Tuple`2<System.Object,System.Object>
struct  Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1  : public RuntimeObject
{
public:
	// T1 System.Tuple`2::m_Item1
	RuntimeObject * ___m_Item1_0;
	// T2 System.Tuple`2::m_Item2
	RuntimeObject * ___m_Item2_1;

public:
	inline static int32_t get_offset_of_m_Item1_0() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item1_0)); }
	inline RuntimeObject * get_m_Item1_0() const { return ___m_Item1_0; }
	inline RuntimeObject ** get_address_of_m_Item1_0() { return &___m_Item1_0; }
	inline void set_m_Item1_0(RuntimeObject * value)
	{
		___m_Item1_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item1_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Item2_1() { return static_cast<int32_t>(offsetof(Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1, ___m_Item2_1)); }
	inline RuntimeObject * get_m_Item2_1() const { return ___m_Item2_1; }
	inline RuntimeObject ** get_address_of_m_Item2_1() { return &___m_Item2_1; }
	inline void set_m_Item2_1(RuntimeObject * value)
	{
		___m_Item2_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Item2_1), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,UMA.AssetItem>
struct  ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F  : public RuntimeObject
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection::dictionary
	Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * ___dictionary_0;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F, ___dictionary_0)); }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}
};


// UMA.AssetItem
struct  AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6  : public RuntimeObject
{
public:
	// System.Type UMA.AssetItem::_TheType
	Type_t * ____TheType_1;
	// System.String UMA.AssetItem::_BaseTypeName
	String_t* ____BaseTypeName_2;
	// System.String UMA.AssetItem::_Name
	String_t* ____Name_3;
	// UnityEngine.Object UMA.AssetItem::_SerializedItem
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ____SerializedItem_4;
	// System.String UMA.AssetItem::_Path
	String_t* ____Path_5;
	// System.String UMA.AssetItem::_Guid
	String_t* ____Guid_6;
	// System.String UMA.AssetItem::_Address
	String_t* ____Address_7;
	// System.Boolean UMA.AssetItem::IsResource
	bool ___IsResource_8;
	// System.Boolean UMA.AssetItem::IsAssetBundle
	bool ___IsAssetBundle_9;
	// System.Boolean UMA.AssetItem::IsAddressable
	bool ___IsAddressable_10;
	// System.Boolean UMA.AssetItem::IsAlwaysLoaded
	bool ___IsAlwaysLoaded_11;
	// System.String UMA.AssetItem::AddressableGroup
	String_t* ___AddressableGroup_12;
	// System.String UMA.AssetItem::AddressableLabels
	String_t* ___AddressableLabels_13;
	// System.Int32 UMA.AssetItem::ReferenceCount
	int32_t ___ReferenceCount_14;

public:
	inline static int32_t get_offset_of__TheType_1() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ____TheType_1)); }
	inline Type_t * get__TheType_1() const { return ____TheType_1; }
	inline Type_t ** get_address_of__TheType_1() { return &____TheType_1; }
	inline void set__TheType_1(Type_t * value)
	{
		____TheType_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____TheType_1), (void*)value);
	}

	inline static int32_t get_offset_of__BaseTypeName_2() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ____BaseTypeName_2)); }
	inline String_t* get__BaseTypeName_2() const { return ____BaseTypeName_2; }
	inline String_t** get_address_of__BaseTypeName_2() { return &____BaseTypeName_2; }
	inline void set__BaseTypeName_2(String_t* value)
	{
		____BaseTypeName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____BaseTypeName_2), (void*)value);
	}

	inline static int32_t get_offset_of__Name_3() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ____Name_3)); }
	inline String_t* get__Name_3() const { return ____Name_3; }
	inline String_t** get_address_of__Name_3() { return &____Name_3; }
	inline void set__Name_3(String_t* value)
	{
		____Name_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Name_3), (void*)value);
	}

	inline static int32_t get_offset_of__SerializedItem_4() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ____SerializedItem_4)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get__SerializedItem_4() const { return ____SerializedItem_4; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of__SerializedItem_4() { return &____SerializedItem_4; }
	inline void set__SerializedItem_4(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		____SerializedItem_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____SerializedItem_4), (void*)value);
	}

	inline static int32_t get_offset_of__Path_5() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ____Path_5)); }
	inline String_t* get__Path_5() const { return ____Path_5; }
	inline String_t** get_address_of__Path_5() { return &____Path_5; }
	inline void set__Path_5(String_t* value)
	{
		____Path_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Path_5), (void*)value);
	}

	inline static int32_t get_offset_of__Guid_6() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ____Guid_6)); }
	inline String_t* get__Guid_6() const { return ____Guid_6; }
	inline String_t** get_address_of__Guid_6() { return &____Guid_6; }
	inline void set__Guid_6(String_t* value)
	{
		____Guid_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Guid_6), (void*)value);
	}

	inline static int32_t get_offset_of__Address_7() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ____Address_7)); }
	inline String_t* get__Address_7() const { return ____Address_7; }
	inline String_t** get_address_of__Address_7() { return &____Address_7; }
	inline void set__Address_7(String_t* value)
	{
		____Address_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____Address_7), (void*)value);
	}

	inline static int32_t get_offset_of_IsResource_8() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ___IsResource_8)); }
	inline bool get_IsResource_8() const { return ___IsResource_8; }
	inline bool* get_address_of_IsResource_8() { return &___IsResource_8; }
	inline void set_IsResource_8(bool value)
	{
		___IsResource_8 = value;
	}

	inline static int32_t get_offset_of_IsAssetBundle_9() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ___IsAssetBundle_9)); }
	inline bool get_IsAssetBundle_9() const { return ___IsAssetBundle_9; }
	inline bool* get_address_of_IsAssetBundle_9() { return &___IsAssetBundle_9; }
	inline void set_IsAssetBundle_9(bool value)
	{
		___IsAssetBundle_9 = value;
	}

	inline static int32_t get_offset_of_IsAddressable_10() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ___IsAddressable_10)); }
	inline bool get_IsAddressable_10() const { return ___IsAddressable_10; }
	inline bool* get_address_of_IsAddressable_10() { return &___IsAddressable_10; }
	inline void set_IsAddressable_10(bool value)
	{
		___IsAddressable_10 = value;
	}

	inline static int32_t get_offset_of_IsAlwaysLoaded_11() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ___IsAlwaysLoaded_11)); }
	inline bool get_IsAlwaysLoaded_11() const { return ___IsAlwaysLoaded_11; }
	inline bool* get_address_of_IsAlwaysLoaded_11() { return &___IsAlwaysLoaded_11; }
	inline void set_IsAlwaysLoaded_11(bool value)
	{
		___IsAlwaysLoaded_11 = value;
	}

	inline static int32_t get_offset_of_AddressableGroup_12() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ___AddressableGroup_12)); }
	inline String_t* get_AddressableGroup_12() const { return ___AddressableGroup_12; }
	inline String_t** get_address_of_AddressableGroup_12() { return &___AddressableGroup_12; }
	inline void set_AddressableGroup_12(String_t* value)
	{
		___AddressableGroup_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddressableGroup_12), (void*)value);
	}

	inline static int32_t get_offset_of_AddressableLabels_13() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ___AddressableLabels_13)); }
	inline String_t* get_AddressableLabels_13() const { return ___AddressableLabels_13; }
	inline String_t** get_address_of_AddressableLabels_13() { return &___AddressableLabels_13; }
	inline void set_AddressableLabels_13(String_t* value)
	{
		___AddressableLabels_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AddressableLabels_13), (void*)value);
	}

	inline static int32_t get_offset_of_ReferenceCount_14() { return static_cast<int32_t>(offsetof(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6, ___ReferenceCount_14)); }
	inline int32_t get_ReferenceCount_14() const { return ___ReferenceCount_14; }
	inline int32_t* get_address_of_ReferenceCount_14() { return &___ReferenceCount_14; }
	inline void set_ReferenceCount_14(int32_t value)
	{
		___ReferenceCount_14 = value;
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
struct  NativeArrayUnsafeUtility_tABFEC25CB8DB147F19348E853EE24669F9682C83  : public RuntimeObject
{
public:

public:
};


// UnityEngine.NoAllocHelpers
struct  NoAllocHelpers_tDF63D8493CAD8DE137A5560CDAF336DA0A99D0D1  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Playables.PlayableExtensions
struct  PlayableExtensions_t40EB63C47F15126C589971F9BCBD04B6B82512B8  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Playables.PlayableOutputExtensions
struct  PlayableOutputExtensions_tCB0B8094F5C39750F0ECBFEE17F422618060BE5F  : public RuntimeObject
{
public:

public:
};


// UnityEngine.Resources
struct  Resources_t90EC380141241F7E4B284EC353EF4F0386218419  : public RuntimeObject
{
public:

public:
};


// System.Runtime.CompilerServices.RuntimeHelpers
struct  RuntimeHelpers_tC052103DB62650080244B150AC8C2DDC5C0CD8AB  : public RuntimeObject
{
public:

public:
};


// UnityEngine.UI.SetPropertyUtility
struct  SetPropertyUtility_tA0FD167699990D8AFDA1284FCCFEA03357AD73BB  : public RuntimeObject
{
public:

public:
};


// System.Diagnostics.Stopwatch
struct  Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89  : public RuntimeObject
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::elapsed
	int64_t ___elapsed_2;
	// System.Int64 System.Diagnostics.Stopwatch::started
	int64_t ___started_3;
	// System.Boolean System.Diagnostics.Stopwatch::is_running
	bool ___is_running_4;

public:
	inline static int32_t get_offset_of_elapsed_2() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___elapsed_2)); }
	inline int64_t get_elapsed_2() const { return ___elapsed_2; }
	inline int64_t* get_address_of_elapsed_2() { return &___elapsed_2; }
	inline void set_elapsed_2(int64_t value)
	{
		___elapsed_2 = value;
	}

	inline static int32_t get_offset_of_started_3() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___started_3)); }
	inline int64_t get_started_3() const { return ___started_3; }
	inline int64_t* get_address_of_started_3() { return &___started_3; }
	inline void set_started_3(int64_t value)
	{
		___started_3 = value;
	}

	inline static int32_t get_offset_of_is_running_4() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89, ___is_running_4)); }
	inline bool get_is_running_4() const { return ___is_running_4; }
	inline bool* get_address_of_is_running_4() { return &___is_running_4; }
	inline void set_is_running_4(bool value)
	{
		___is_running_4 = value;
	}
};

struct Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields
{
public:
	// System.Int64 System.Diagnostics.Stopwatch::Frequency
	int64_t ___Frequency_0;
	// System.Boolean System.Diagnostics.Stopwatch::IsHighResolution
	bool ___IsHighResolution_1;

public:
	inline static int32_t get_offset_of_Frequency_0() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___Frequency_0)); }
	inline int64_t get_Frequency_0() const { return ___Frequency_0; }
	inline int64_t* get_address_of_Frequency_0() { return &___Frequency_0; }
	inline void set_Frequency_0(int64_t value)
	{
		___Frequency_0 = value;
	}

	inline static int32_t get_offset_of_IsHighResolution_1() { return static_cast<int32_t>(offsetof(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_StaticFields, ___IsHighResolution_1)); }
	inline bool get_IsHighResolution_1() const { return ___IsHighResolution_1; }
	inline bool* get_address_of_IsHighResolution_1() { return &___IsHighResolution_1; }
	inline void set_IsHighResolution_1(bool value)
	{
		___IsHighResolution_1 = value;
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


// System.Threading.Tasks.TaskToApm
struct  TaskToApm_t66A484C1E3D6BBB8DE9F1BC8045D90568EFFBA3E  : public RuntimeObject
{
public:

public:
};


// System.ThrowHelper
struct  ThrowHelper_t396052A7B504E698E9DF1B91F7A52F4D2EA47246  : public RuntimeObject
{
public:

public:
};


// System.Tuple
struct  Tuple_t04ED51FC9876E74A8E2D69E20EC4D89DAF554A9F  : public RuntimeObject
{
public:

public:
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


// UMA.UMAMaterialPropertyBlock
struct  UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869  : public RuntimeObject
{
public:
	// System.Boolean UMA.UMAMaterialPropertyBlock::alwaysUpdate
	bool ___alwaysUpdate_0;
	// System.Collections.Generic.List`1<UMA.PropertyHolder> UMA.UMAMaterialPropertyBlock::serializedProperties
	List_1_tED3BE533927F5D758DDA3BBCFDD4A6AB227BEE63 * ___serializedProperties_3;
	// System.Collections.Generic.List`1<UMA.UMAProperty> UMA.UMAMaterialPropertyBlock::shaderProperties
	List_1_tFDC14D676F8F461A7EA4452F327E373314748074 * ___shaderProperties_4;

public:
	inline static int32_t get_offset_of_alwaysUpdate_0() { return static_cast<int32_t>(offsetof(UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869, ___alwaysUpdate_0)); }
	inline bool get_alwaysUpdate_0() const { return ___alwaysUpdate_0; }
	inline bool* get_address_of_alwaysUpdate_0() { return &___alwaysUpdate_0; }
	inline void set_alwaysUpdate_0(bool value)
	{
		___alwaysUpdate_0 = value;
	}

	inline static int32_t get_offset_of_serializedProperties_3() { return static_cast<int32_t>(offsetof(UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869, ___serializedProperties_3)); }
	inline List_1_tED3BE533927F5D758DDA3BBCFDD4A6AB227BEE63 * get_serializedProperties_3() const { return ___serializedProperties_3; }
	inline List_1_tED3BE533927F5D758DDA3BBCFDD4A6AB227BEE63 ** get_address_of_serializedProperties_3() { return &___serializedProperties_3; }
	inline void set_serializedProperties_3(List_1_tED3BE533927F5D758DDA3BBCFDD4A6AB227BEE63 * value)
	{
		___serializedProperties_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___serializedProperties_3), (void*)value);
	}

	inline static int32_t get_offset_of_shaderProperties_4() { return static_cast<int32_t>(offsetof(UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869, ___shaderProperties_4)); }
	inline List_1_tFDC14D676F8F461A7EA4452F327E373314748074 * get_shaderProperties_4() const { return ___shaderProperties_4; }
	inline List_1_tFDC14D676F8F461A7EA4452F327E373314748074 ** get_address_of_shaderProperties_4() { return &___shaderProperties_4; }
	inline void set_shaderProperties_4(List_1_tFDC14D676F8F461A7EA4452F327E373314748074 * value)
	{
		___shaderProperties_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___shaderProperties_4), (void*)value);
	}
};

struct UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869_StaticFields
{
public:
	// System.String[] UMA.UMAMaterialPropertyBlock::PropertyTypeStrings
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___PropertyTypeStrings_1;
	// System.Collections.Generic.List`1<System.Type> UMA.UMAMaterialPropertyBlock::availableTypes
	List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * ___availableTypes_2;

public:
	inline static int32_t get_offset_of_PropertyTypeStrings_1() { return static_cast<int32_t>(offsetof(UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869_StaticFields, ___PropertyTypeStrings_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_PropertyTypeStrings_1() const { return ___PropertyTypeStrings_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_PropertyTypeStrings_1() { return &___PropertyTypeStrings_1; }
	inline void set_PropertyTypeStrings_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___PropertyTypeStrings_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PropertyTypeStrings_1), (void*)value);
	}

	inline static int32_t get_offset_of_availableTypes_2() { return static_cast<int32_t>(offsetof(UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869_StaticFields, ___availableTypes_2)); }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * get_availableTypes_2() const { return ___availableTypes_2; }
	inline List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 ** get_address_of_availableTypes_2() { return &___availableTypes_2; }
	inline void set_availableTypes_2(List_1_t7CFD5FCE8366620F593F2C9DAC3A870E5D6506D7 * value)
	{
		___availableTypes_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___availableTypes_2), (void*)value);
	}
};


// UMA.UMAProperty
struct  UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C  : public RuntimeObject
{
public:
	// System.String UMA.UMAProperty::name
	String_t* ___name_4;

public:
	inline static int32_t get_offset_of_name_4() { return static_cast<int32_t>(offsetof(UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C, ___name_4)); }
	inline String_t* get_name_4() const { return ___name_4; }
	inline String_t** get_address_of_name_4() { return &___name_4; }
	inline void set_name_4(String_t* value)
	{
		___name_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_4), (void*)value);
	}
};

struct UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C_StaticFields
{
public:
	// System.String UMA.UMAProperty::precision
	String_t* ___precision_0;
	// System.String UMA.UMAProperty::splitter
	String_t* ___splitter_1;
	// System.String UMA.UMAProperty::vectorprecision
	String_t* ___vectorprecision_2;
	// System.Char[] UMA.UMAProperty::vectorsplitter
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___vectorsplitter_3;

public:
	inline static int32_t get_offset_of_precision_0() { return static_cast<int32_t>(offsetof(UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C_StaticFields, ___precision_0)); }
	inline String_t* get_precision_0() const { return ___precision_0; }
	inline String_t** get_address_of_precision_0() { return &___precision_0; }
	inline void set_precision_0(String_t* value)
	{
		___precision_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___precision_0), (void*)value);
	}

	inline static int32_t get_offset_of_splitter_1() { return static_cast<int32_t>(offsetof(UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C_StaticFields, ___splitter_1)); }
	inline String_t* get_splitter_1() const { return ___splitter_1; }
	inline String_t** get_address_of_splitter_1() { return &___splitter_1; }
	inline void set_splitter_1(String_t* value)
	{
		___splitter_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___splitter_1), (void*)value);
	}

	inline static int32_t get_offset_of_vectorprecision_2() { return static_cast<int32_t>(offsetof(UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C_StaticFields, ___vectorprecision_2)); }
	inline String_t* get_vectorprecision_2() const { return ___vectorprecision_2; }
	inline String_t** get_address_of_vectorprecision_2() { return &___vectorprecision_2; }
	inline void set_vectorprecision_2(String_t* value)
	{
		___vectorprecision_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorprecision_2), (void*)value);
	}

	inline static int32_t get_offset_of_vectorsplitter_3() { return static_cast<int32_t>(offsetof(UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C_StaticFields, ___vectorsplitter_3)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_vectorsplitter_3() const { return ___vectorsplitter_3; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_vectorsplitter_3() { return &___vectorsplitter_3; }
	inline void set_vectorsplitter_3(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___vectorsplitter_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___vectorsplitter_3), (void*)value);
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility
struct  UnsafeUtility_tAA965823E05BE8ADD69F58C82BF0DF723476E551  : public RuntimeObject
{
public:

public:
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

// System.Threading.Volatile
struct  Volatile_t7A8B2983396C4500A8FC226CDB66FE9067DA4AE6  : public RuntimeObject
{
public:

public:
};


// System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult
struct  TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704  : public RuntimeObject
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::Task
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___Task_0;
	// System.Object System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::m_state
	RuntimeObject * ___m_state_1;
	// System.Boolean System.Threading.Tasks.TaskToApm/TaskWrapperAsyncResult::m_completedSynchronously
	bool ___m_completedSynchronously_2;

public:
	inline static int32_t get_offset_of_Task_0() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704, ___Task_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_Task_0() const { return ___Task_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_Task_0() { return &___Task_0; }
	inline void set_Task_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___Task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Task_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_state_1() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704, ___m_state_1)); }
	inline RuntimeObject * get_m_state_1() const { return ___m_state_1; }
	inline RuntimeObject ** get_address_of_m_state_1() { return &___m_state_1; }
	inline void set_m_state_1(RuntimeObject * value)
	{
		___m_state_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_state_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_completedSynchronously_2() { return static_cast<int32_t>(offsetof(TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704, ___m_completedSynchronously_2)); }
	inline bool get_m_completedSynchronously_2() const { return ___m_completedSynchronously_2; }
	inline bool* get_address_of_m_completedSynchronously_2() { return &___m_completedSynchronously_2; }
	inline void set_m_completedSynchronously_2(bool value)
	{
		___m_completedSynchronously_2 = value;
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


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>
struct  AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint8_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A, ___data_1)); }
	inline uint8_t get_data_1() const { return ___data_1; }
	inline uint8_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint8_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>
struct  AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	int32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1, ___data_1)); }
	inline int32_t get_data_1() const { return ___data_1; }
	inline int32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(int32_t value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>
struct  AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	uint32_t ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0, ___data_1)); }
	inline uint32_t get_data_1() const { return ___data_1; }
	inline uint32_t* get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(uint32_t value)
	{
		___data_1 = value;
	}
};


// UnityEngine.Timeline.IntervalTree`1/Entry<System.Object>
struct  Entry_t7354459F6787FFC973F7672A4A98A04A07EC9C46 
{
public:
	// System.Int64 UnityEngine.Timeline.IntervalTree`1/Entry::intervalStart
	int64_t ___intervalStart_0;
	// System.Int64 UnityEngine.Timeline.IntervalTree`1/Entry::intervalEnd
	int64_t ___intervalEnd_1;
	// T UnityEngine.Timeline.IntervalTree`1/Entry::item
	RuntimeObject * ___item_2;

public:
	inline static int32_t get_offset_of_intervalStart_0() { return static_cast<int32_t>(offsetof(Entry_t7354459F6787FFC973F7672A4A98A04A07EC9C46, ___intervalStart_0)); }
	inline int64_t get_intervalStart_0() const { return ___intervalStart_0; }
	inline int64_t* get_address_of_intervalStart_0() { return &___intervalStart_0; }
	inline void set_intervalStart_0(int64_t value)
	{
		___intervalStart_0 = value;
	}

	inline static int32_t get_offset_of_intervalEnd_1() { return static_cast<int32_t>(offsetof(Entry_t7354459F6787FFC973F7672A4A98A04A07EC9C46, ___intervalEnd_1)); }
	inline int64_t get_intervalEnd_1() const { return ___intervalEnd_1; }
	inline int64_t* get_address_of_intervalEnd_1() { return &___intervalEnd_1; }
	inline void set_intervalEnd_1(int64_t value)
	{
		___intervalEnd_1 = value;
	}

	inline static int32_t get_offset_of_item_2() { return static_cast<int32_t>(offsetof(Entry_t7354459F6787FFC973F7672A4A98A04A07EC9C46, ___item_2)); }
	inline RuntimeObject * get_item_2() const { return ___item_2; }
	inline RuntimeObject ** get_address_of_item_2() { return &___item_2; }
	inline void set_item_2(RuntimeObject * value)
	{
		___item_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___item_2), (void*)value);
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


// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UMA.AssetItem>
struct  Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::dictionary
	Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::version
	int32_t ___version_2;
	// TKey System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator::currentKey
	String_t* ___currentKey_3;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214, ___dictionary_0)); }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_currentKey_3() { return static_cast<int32_t>(offsetof(Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214, ___currentKey_3)); }
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


// System.Collections.Generic.KeyValuePair`2<System.String,UMA.AssetItem>
struct  KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___key_0), (void*)value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479, ___value_1)); }
	inline AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * get_value_1() const { return ___value_1; }
	inline AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// System.Nullable`1<System.Boolean>
struct  Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 
{
public:
	// T System.Nullable`1::value
	bool ___value_0;
	// System.Boolean System.Nullable`1::has_value
	bool ___has_value_1;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___value_0)); }
	inline bool get_value_0() const { return ___value_0; }
	inline bool* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(bool value)
	{
		___value_0 = value;
	}

	inline static int32_t get_offset_of_has_value_1() { return static_cast<int32_t>(offsetof(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3, ___has_value_1)); }
	inline bool get_has_value_1() const { return ___has_value_1; }
	inline bool* get_address_of_has_value_1() { return &___has_value_1; }
	inline void set_has_value_1(bool value)
	{
		___has_value_1 = value;
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>
struct  TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887, ___m_task_0)); }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>
struct  TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE 
{
public:
	// System.Threading.Tasks.Task`1<TResult> System.Runtime.CompilerServices.TaskAwaiter`1::m_task
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * ___m_task_0;

public:
	inline static int32_t get_offset_of_m_task_0() { return static_cast<int32_t>(offsetof(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE, ___m_task_0)); }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * get_m_task_0() const { return ___m_task_0; }
	inline Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 ** get_address_of_m_task_0() { return &___m_task_0; }
	inline void set_m_task_0(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * value)
	{
		___m_task_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_task_0), (void*)value);
	}
};


// UnityEngine.Rendering.BatchVisibility
struct  BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE 
{
public:
	// System.Int32 UnityEngine.Rendering.BatchVisibility::offset
	int32_t ___offset_0;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::instancesCount
	int32_t ___instancesCount_1;
	// System.Int32 UnityEngine.Rendering.BatchVisibility::visibleCount
	int32_t ___visibleCount_2;

public:
	inline static int32_t get_offset_of_offset_0() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___offset_0)); }
	inline int32_t get_offset_0() const { return ___offset_0; }
	inline int32_t* get_address_of_offset_0() { return &___offset_0; }
	inline void set_offset_0(int32_t value)
	{
		___offset_0 = value;
	}

	inline static int32_t get_offset_of_instancesCount_1() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___instancesCount_1)); }
	inline int32_t get_instancesCount_1() const { return ___instancesCount_1; }
	inline int32_t* get_address_of_instancesCount_1() { return &___instancesCount_1; }
	inline void set_instancesCount_1(int32_t value)
	{
		___instancesCount_1 = value;
	}

	inline static int32_t get_offset_of_visibleCount_2() { return static_cast<int32_t>(offsetof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE, ___visibleCount_2)); }
	inline int32_t get_visibleCount_2() const { return ___visibleCount_2; }
	inline int32_t* get_address_of_visibleCount_2() { return &___visibleCount_2; }
	inline void set_visibleCount_2(int32_t value)
	{
		___visibleCount_2 = value;
	}
};


// UnityEngine.BoneWeight1
struct  BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA 
{
public:
	// System.Single UnityEngine.BoneWeight1::m_Weight
	float ___m_Weight_0;
	// System.Int32 UnityEngine.BoneWeight1::m_BoneIndex
	int32_t ___m_BoneIndex_1;

public:
	inline static int32_t get_offset_of_m_Weight_0() { return static_cast<int32_t>(offsetof(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA, ___m_Weight_0)); }
	inline float get_m_Weight_0() const { return ___m_Weight_0; }
	inline float* get_address_of_m_Weight_0() { return &___m_Weight_0; }
	inline void set_m_Weight_0(float value)
	{
		___m_Weight_0 = value;
	}

	inline static int32_t get_offset_of_m_BoneIndex_1() { return static_cast<int32_t>(offsetof(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA, ___m_BoneIndex_1)); }
	inline int32_t get_m_BoneIndex_1() const { return ___m_BoneIndex_1; }
	inline int32_t* get_address_of_m_BoneIndex_1() { return &___m_BoneIndex_1; }
	inline void set_m_BoneIndex_1(int32_t value)
	{
		___m_BoneIndex_1 = value;
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


// System.Threading.CancellationToken
struct  CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD 
{
public:
	// System.Threading.CancellationTokenSource System.Threading.CancellationToken::m_source
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;

public:
	inline static int32_t get_offset_of_m_source_0() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD, ___m_source_0)); }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * get_m_source_0() const { return ___m_source_0; }
	inline CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 ** get_address_of_m_source_0() { return &___m_source_0; }
	inline void set_m_source_0(CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * value)
	{
		___m_source_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_source_0), (void*)value);
	}
};

struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields
{
public:
	// System.Action`1<System.Object> System.Threading.CancellationToken::s_ActionToActionObjShunt
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_ActionToActionObjShunt_1;

public:
	inline static int32_t get_offset_of_s_ActionToActionObjShunt_1() { return static_cast<int32_t>(offsetof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_StaticFields, ___s_ActionToActionObjShunt_1)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_ActionToActionObjShunt_1() const { return ___s_ActionToActionObjShunt_1; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_ActionToActionObjShunt_1() { return &___s_ActionToActionObjShunt_1; }
	inline void set_s_ActionToActionObjShunt_1(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_ActionToActionObjShunt_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ActionToActionObjShunt_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_pinvoke
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};
// Native definition for COM marshalling of System.Threading.CancellationToken
struct CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD_marshaled_com
{
	CancellationTokenSource_t78B989179DE23EDD36F870FFEE20A15D6D3C65B3 * ___m_source_0;
};

// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.ClothSkinningCoefficient
struct  ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0 
{
public:
	// System.Single UnityEngine.ClothSkinningCoefficient::maxDistance
	float ___maxDistance_0;
	// System.Single UnityEngine.ClothSkinningCoefficient::collisionSphereDistance
	float ___collisionSphereDistance_1;

public:
	inline static int32_t get_offset_of_maxDistance_0() { return static_cast<int32_t>(offsetof(ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0, ___maxDistance_0)); }
	inline float get_maxDistance_0() const { return ___maxDistance_0; }
	inline float* get_address_of_maxDistance_0() { return &___maxDistance_0; }
	inline void set_maxDistance_0(float value)
	{
		___maxDistance_0 = value;
	}

	inline static int32_t get_offset_of_collisionSphereDistance_1() { return static_cast<int32_t>(offsetof(ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0, ___collisionSphereDistance_1)); }
	inline float get_collisionSphereDistance_1() const { return ___collisionSphereDistance_1; }
	inline float* get_address_of_collisionSphereDistance_1() { return &___collisionSphereDistance_1; }
	inline void set_collisionSphereDistance_1(float value)
	{
		___collisionSphereDistance_1 = value;
	}
};


// UnityEngine.ClothSphereColliderPair
struct  ClothSphereColliderPair_t11DDC14104F1854F1FB19988E4AB741362A12C4F 
{
public:
	// UnityEngine.SphereCollider UnityEngine.ClothSphereColliderPair::<first>k__BackingField
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * ___U3CfirstU3Ek__BackingField_0;
	// UnityEngine.SphereCollider UnityEngine.ClothSphereColliderPair::<second>k__BackingField
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * ___U3CsecondU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CfirstU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(ClothSphereColliderPair_t11DDC14104F1854F1FB19988E4AB741362A12C4F, ___U3CfirstU3Ek__BackingField_0)); }
	inline SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * get_U3CfirstU3Ek__BackingField_0() const { return ___U3CfirstU3Ek__BackingField_0; }
	inline SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A ** get_address_of_U3CfirstU3Ek__BackingField_0() { return &___U3CfirstU3Ek__BackingField_0; }
	inline void set_U3CfirstU3Ek__BackingField_0(SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * value)
	{
		___U3CfirstU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CfirstU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CsecondU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(ClothSphereColliderPair_t11DDC14104F1854F1FB19988E4AB741362A12C4F, ___U3CsecondU3Ek__BackingField_1)); }
	inline SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * get_U3CsecondU3Ek__BackingField_1() const { return ___U3CsecondU3Ek__BackingField_1; }
	inline SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A ** get_address_of_U3CsecondU3Ek__BackingField_1() { return &___U3CsecondU3Ek__BackingField_1; }
	inline void set_U3CsecondU3Ek__BackingField_1(SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * value)
	{
		___U3CsecondU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CsecondU3Ek__BackingField_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.ClothSphereColliderPair
struct ClothSphereColliderPair_t11DDC14104F1854F1FB19988E4AB741362A12C4F_marshaled_pinvoke
{
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * ___U3CfirstU3Ek__BackingField_0;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * ___U3CsecondU3Ek__BackingField_1;
};
// Native definition for COM marshalling of UnityEngine.ClothSphereColliderPair
struct ClothSphereColliderPair_t11DDC14104F1854F1FB19988E4AB741362A12C4F_marshaled_com
{
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * ___U3CfirstU3Ek__BackingField_0;
	SphereCollider_t51A338502EEE6FA563248E3C0BF38D333077DC3A * ___U3CsecondU3Ek__BackingField_1;
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


// UnityEngine.Color32
struct  Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D 
{
public:
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};

public:
	inline static int32_t get_offset_of_rgba_0() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___rgba_0)); }
	inline int32_t get_rgba_0() const { return ___rgba_0; }
	inline int32_t* get_address_of_rgba_0() { return &___rgba_0; }
	inline void set_rgba_0(int32_t value)
	{
		___rgba_0 = value;
	}

	inline static int32_t get_offset_of_r_1() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___r_1)); }
	inline uint8_t get_r_1() const { return ___r_1; }
	inline uint8_t* get_address_of_r_1() { return &___r_1; }
	inline void set_r_1(uint8_t value)
	{
		___r_1 = value;
	}

	inline static int32_t get_offset_of_g_2() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___g_2)); }
	inline uint8_t get_g_2() const { return ___g_2; }
	inline uint8_t* get_address_of_g_2() { return &___g_2; }
	inline void set_g_2(uint8_t value)
	{
		___g_2 = value;
	}

	inline static int32_t get_offset_of_b_3() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___b_3)); }
	inline uint8_t get_b_3() const { return ___b_3; }
	inline uint8_t* get_address_of_b_3() { return &___b_3; }
	inline void set_b_3(uint8_t value)
	{
		___b_3 = value;
	}

	inline static int32_t get_offset_of_a_4() { return static_cast<int32_t>(offsetof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D, ___a_4)); }
	inline uint8_t get_a_4() const { return ___a_4; }
	inline uint8_t* get_address_of_a_4() { return &___a_4; }
	inline void set_a_4(uint8_t value)
	{
		___a_4 = value;
	}
};


// ColorDef
struct  ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE 
{
public:
	// System.Int32 ColorDef::chan
	int32_t ___chan_0;
	// System.UInt32 ColorDef::mCol
	uint32_t ___mCol_1;
	// System.UInt32 ColorDef::aCol
	uint32_t ___aCol_2;

public:
	inline static int32_t get_offset_of_chan_0() { return static_cast<int32_t>(offsetof(ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE, ___chan_0)); }
	inline int32_t get_chan_0() const { return ___chan_0; }
	inline int32_t* get_address_of_chan_0() { return &___chan_0; }
	inline void set_chan_0(int32_t value)
	{
		___chan_0 = value;
	}

	inline static int32_t get_offset_of_mCol_1() { return static_cast<int32_t>(offsetof(ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE, ___mCol_1)); }
	inline uint32_t get_mCol_1() const { return ___mCol_1; }
	inline uint32_t* get_address_of_mCol_1() { return &___mCol_1; }
	inline void set_mCol_1(uint32_t value)
	{
		___mCol_1 = value;
	}

	inline static int32_t get_offset_of_aCol_2() { return static_cast<int32_t>(offsetof(ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE, ___aCol_2)); }
	inline uint32_t get_aCol_2() const { return ___aCol_2; }
	inline uint32_t* get_address_of_aCol_2() { return &___aCol_2; }
	inline void set_aCol_2(uint32_t value)
	{
		___aCol_2 = value;
	}
};


// System.DateTime
struct  DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth365_29), (void*)value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DaysToMonth366_30), (void*)value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MinValue_31)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405_StaticFields, ___MaxValue_32)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___MaxValue_32 = value;
	}
};


// UnityEngine.Timeline.DiscreteTime
struct  DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F 
{
public:
	// System.Int64 UnityEngine.Timeline.DiscreteTime::m_DiscreteTime
	int64_t ___m_DiscreteTime_2;

public:
	inline static int32_t get_offset_of_m_DiscreteTime_2() { return static_cast<int32_t>(offsetof(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F, ___m_DiscreteTime_2)); }
	inline int64_t get_m_DiscreteTime_2() const { return ___m_DiscreteTime_2; }
	inline int64_t* get_address_of_m_DiscreteTime_2() { return &___m_DiscreteTime_2; }
	inline void set_m_DiscreteTime_2(int64_t value)
	{
		___m_DiscreteTime_2 = value;
	}
};

struct DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F_StaticFields
{
public:
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.DiscreteTime::kMaxTime
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___kMaxTime_1;

public:
	inline static int32_t get_offset_of_kMaxTime_1() { return static_cast<int32_t>(offsetof(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F_StaticFields, ___kMaxTime_1)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_kMaxTime_1() const { return ___kMaxTime_1; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_kMaxTime_1() { return &___kMaxTime_1; }
	inline void set_kMaxTime_1(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___kMaxTime_1 = value;
	}
};


// DnaDef
struct  DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C 
{
public:
	// System.String DnaDef::Name
	String_t* ___Name_0;
	// System.Int32 DnaDef::val
	int32_t ___val_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_val_1() { return static_cast<int32_t>(offsetof(DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C, ___val_1)); }
	inline int32_t get_val_1() const { return ___val_1; }
	inline int32_t* get_address_of_val_1() { return &___val_1; }
	inline void set_val_1(int32_t value)
	{
		___val_1 = value;
	}
};

// Native definition for P/Invoke marshalling of DnaDef
struct DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___val_1;
};
// Native definition for COM marshalling of DnaDef
struct DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___val_1;
};

// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
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


// UnityEngine.Timeline.IntervalTreeNode
struct  IntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D 
{
public:
	// System.Int64 UnityEngine.Timeline.IntervalTreeNode::center
	int64_t ___center_0;
	// System.Int32 UnityEngine.Timeline.IntervalTreeNode::first
	int32_t ___first_1;
	// System.Int32 UnityEngine.Timeline.IntervalTreeNode::last
	int32_t ___last_2;
	// System.Int32 UnityEngine.Timeline.IntervalTreeNode::left
	int32_t ___left_3;
	// System.Int32 UnityEngine.Timeline.IntervalTreeNode::right
	int32_t ___right_4;

public:
	inline static int32_t get_offset_of_center_0() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D, ___center_0)); }
	inline int64_t get_center_0() const { return ___center_0; }
	inline int64_t* get_address_of_center_0() { return &___center_0; }
	inline void set_center_0(int64_t value)
	{
		___center_0 = value;
	}

	inline static int32_t get_offset_of_first_1() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D, ___first_1)); }
	inline int32_t get_first_1() const { return ___first_1; }
	inline int32_t* get_address_of_first_1() { return &___first_1; }
	inline void set_first_1(int32_t value)
	{
		___first_1 = value;
	}

	inline static int32_t get_offset_of_last_2() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D, ___last_2)); }
	inline int32_t get_last_2() const { return ___last_2; }
	inline int32_t* get_address_of_last_2() { return &___last_2; }
	inline void set_last_2(int32_t value)
	{
		___last_2 = value;
	}

	inline static int32_t get_offset_of_left_3() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D, ___left_3)); }
	inline int32_t get_left_3() const { return ___left_3; }
	inline int32_t* get_address_of_left_3() { return &___left_3; }
	inline void set_left_3(int32_t value)
	{
		___left_3 = value;
	}

	inline static int32_t get_offset_of_right_4() { return static_cast<int32_t>(offsetof(IntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D, ___right_4)); }
	inline int32_t get_right_4() const { return ___right_4; }
	inline int32_t* get_address_of_right_4() { return &___right_4; }
	inline void set_right_4(int32_t value)
	{
		___right_4 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LinearColor
struct  LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 
{
public:
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_red
	float ___m_red_0;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_green
	float ___m_green_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_blue
	float ___m_blue_2;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LinearColor::m_intensity
	float ___m_intensity_3;

public:
	inline static int32_t get_offset_of_m_red_0() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_red_0)); }
	inline float get_m_red_0() const { return ___m_red_0; }
	inline float* get_address_of_m_red_0() { return &___m_red_0; }
	inline void set_m_red_0(float value)
	{
		___m_red_0 = value;
	}

	inline static int32_t get_offset_of_m_green_1() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_green_1)); }
	inline float get_m_green_1() const { return ___m_green_1; }
	inline float* get_address_of_m_green_1() { return &___m_green_1; }
	inline void set_m_green_1(float value)
	{
		___m_green_1 = value;
	}

	inline static int32_t get_offset_of_m_blue_2() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_blue_2)); }
	inline float get_m_blue_2() const { return ___m_blue_2; }
	inline float* get_address_of_m_blue_2() { return &___m_blue_2; }
	inline void set_m_blue_2(float value)
	{
		___m_blue_2 = value;
	}

	inline static int32_t get_offset_of_m_intensity_3() { return static_cast<int32_t>(offsetof(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2, ___m_intensity_3)); }
	inline float get_m_intensity_3() const { return ___m_intensity_3; }
	inline float* get_address_of_m_intensity_3() { return &___m_intensity_3; }
	inline void set_m_intensity_3(float value)
	{
		___m_intensity_3 = value;
	}
};


// UnityEngine.Timeline.MarkerList
struct  MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.MarkerList::m_Objects
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.MarkerList::m_Cache
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_CacheDirty
	bool ___m_CacheDirty_2;
	// System.Boolean UnityEngine.Timeline.MarkerList::m_HasNotifications
	bool ___m_HasNotifications_3;

public:
	inline static int32_t get_offset_of_m_Objects_0() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_Objects_0)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Objects_0() const { return ___m_Objects_0; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Objects_0() { return &___m_Objects_0; }
	inline void set_m_Objects_0(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Objects_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Objects_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_Cache_1() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_Cache_1)); }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * get_m_Cache_1() const { return ___m_Cache_1; }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 ** get_address_of_m_Cache_1() { return &___m_Cache_1; }
	inline void set_m_Cache_1(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * value)
	{
		___m_Cache_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Cache_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheDirty_2() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_CacheDirty_2)); }
	inline bool get_m_CacheDirty_2() const { return ___m_CacheDirty_2; }
	inline bool* get_address_of_m_CacheDirty_2() { return &___m_CacheDirty_2; }
	inline void set_m_CacheDirty_2(bool value)
	{
		___m_CacheDirty_2 = value;
	}

	inline static int32_t get_offset_of_m_HasNotifications_3() { return static_cast<int32_t>(offsetof(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D, ___m_HasNotifications_3)); }
	inline bool get_m_HasNotifications_3() const { return ___m_HasNotifications_3; }
	inline bool* get_address_of_m_HasNotifications_3() { return &___m_HasNotifications_3; }
	inline void set_m_HasNotifications_3(bool value)
	{
		___m_HasNotifications_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D_marshaled_pinvoke
{
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.MarkerList
struct MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D_marshaled_com
{
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Objects_0;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___m_Cache_1;
	int32_t ___m_CacheDirty_2;
	int32_t ___m_HasNotifications_3;
};

// UnityEngine.Matrix4x4
struct  Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  value)
	{
		___identityMatrix_17 = value;
	}
};


// System.Reflection.MethodBase
struct  MethodBase_t  : public MemberInfo_t
{
public:

public:
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


// UnityEngine.Rect
struct  Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 
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
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};


// SharedColorDef
struct  SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152 
{
public:
	// System.String SharedColorDef::name
	String_t* ___name_0;
	// System.Int32 SharedColorDef::count
	int32_t ___count_1;
	// ColorDef[] SharedColorDef::channels
	ColorDefU5BU5D_t6435D3A3EA490ED81F02E4272D041C8420B3AAD7* ___channels_2;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}

	inline static int32_t get_offset_of_channels_2() { return static_cast<int32_t>(offsetof(SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152, ___channels_2)); }
	inline ColorDefU5BU5D_t6435D3A3EA490ED81F02E4272D041C8420B3AAD7* get_channels_2() const { return ___channels_2; }
	inline ColorDefU5BU5D_t6435D3A3EA490ED81F02E4272D041C8420B3AAD7** get_address_of_channels_2() { return &___channels_2; }
	inline void set_channels_2(ColorDefU5BU5D_t6435D3A3EA490ED81F02E4272D041C8420B3AAD7* value)
	{
		___channels_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___channels_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of SharedColorDef
struct SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152_marshaled_pinvoke
{
	char* ___name_0;
	int32_t ___count_1;
	ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE * ___channels_2;
};
// Native definition for COM marshalling of SharedColorDef
struct SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152_marshaled_com
{
	Il2CppChar* ___name_0;
	int32_t ___count_1;
	ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE * ___channels_2;
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

// UnityEngine.UILineInfo
struct  UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C 
{
public:
	// System.Int32 UnityEngine.UILineInfo::startCharIdx
	int32_t ___startCharIdx_0;
	// System.Int32 UnityEngine.UILineInfo::height
	int32_t ___height_1;
	// System.Single UnityEngine.UILineInfo::topY
	float ___topY_2;
	// System.Single UnityEngine.UILineInfo::leading
	float ___leading_3;

public:
	inline static int32_t get_offset_of_startCharIdx_0() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___startCharIdx_0)); }
	inline int32_t get_startCharIdx_0() const { return ___startCharIdx_0; }
	inline int32_t* get_address_of_startCharIdx_0() { return &___startCharIdx_0; }
	inline void set_startCharIdx_0(int32_t value)
	{
		___startCharIdx_0 = value;
	}

	inline static int32_t get_offset_of_height_1() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___height_1)); }
	inline int32_t get_height_1() const { return ___height_1; }
	inline int32_t* get_address_of_height_1() { return &___height_1; }
	inline void set_height_1(int32_t value)
	{
		___height_1 = value;
	}

	inline static int32_t get_offset_of_topY_2() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___topY_2)); }
	inline float get_topY_2() const { return ___topY_2; }
	inline float* get_address_of_topY_2() { return &___topY_2; }
	inline void set_topY_2(float value)
	{
		___topY_2 = value;
	}

	inline static int32_t get_offset_of_leading_3() { return static_cast<int32_t>(offsetof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C, ___leading_3)); }
	inline float get_leading_3() const { return ___leading_3; }
	inline float* get_address_of_leading_3() { return &___leading_3; }
	inline void set_leading_3(float value)
	{
		___leading_3 = value;
	}
};


// System.UInt32
struct  UInt32_tE60352A06233E4E69DD198BCC67142159F686B15 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_tE60352A06233E4E69DD198BCC67142159F686B15, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
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


// System.Threading.Tasks.VoidTaskResult
struct  VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 
{
public:
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004__padding[1];
	};

public:
};


// UnityEngine.BeforeRenderHelper/OrderBlock
struct  OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 
{
public:
	// System.Int32 UnityEngine.BeforeRenderHelper/OrderBlock::order
	int32_t ___order_0;
	// UnityEngine.Events.UnityAction UnityEngine.BeforeRenderHelper/OrderBlock::callback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___callback_1;

public:
	inline static int32_t get_offset_of_order_0() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___order_0)); }
	inline int32_t get_order_0() const { return ___order_0; }
	inline int32_t* get_address_of_order_0() { return &___order_0; }
	inline void set_order_0(int32_t value)
	{
		___order_0 = value;
	}

	inline static int32_t get_offset_of_callback_1() { return static_cast<int32_t>(offsetof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2, ___callback_1)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_callback_1() const { return ___callback_1; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_callback_1() { return &___callback_1; }
	inline void set_callback_1(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___callback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___callback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_pinvoke
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};
// Native definition for COM marshalling of UnityEngine.BeforeRenderHelper/OrderBlock
struct OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_marshaled_com
{
	int32_t ___order_0;
	Il2CppMethodPointer ___callback_1;
};

// UnityEngine.Timeline.TrackAsset/TransientBuildData
struct  TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F 
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset/TransientBuildData::trackList
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset/TransientBuildData::clipList
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.IMarker> UnityEngine.Timeline.TrackAsset/TransientBuildData::markerList
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;

public:
	inline static int32_t get_offset_of_trackList_0() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___trackList_0)); }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * get_trackList_0() const { return ___trackList_0; }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 ** get_address_of_trackList_0() { return &___trackList_0; }
	inline void set_trackList_0(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * value)
	{
		___trackList_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackList_0), (void*)value);
	}

	inline static int32_t get_offset_of_clipList_1() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___clipList_1)); }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * get_clipList_1() const { return ___clipList_1; }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C ** get_address_of_clipList_1() { return &___clipList_1; }
	inline void set_clipList_1(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * value)
	{
		___clipList_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clipList_1), (void*)value);
	}

	inline static int32_t get_offset_of_markerList_2() { return static_cast<int32_t>(offsetof(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F, ___markerList_2)); }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * get_markerList_2() const { return ___markerList_2; }
	inline List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 ** get_address_of_markerList_2() { return &___markerList_2; }
	inline void set_markerList_2(List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * value)
	{
		___markerList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___markerList_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_pinvoke
{
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TrackAsset/TransientBuildData
struct TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F_marshaled_com
{
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___trackList_0;
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___clipList_1;
	List_1_t5898C268E88FBE862539899D9DA3F3289AE269D1 * ___markerList_2;
};

// UMARenderTextureMover/RenderTextureSource
struct  RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF 
{
public:
	// System.Int32 UMARenderTextureMover/RenderTextureSource::atlasIndex
	int32_t ___atlasIndex_0;
	// System.Int32 UMARenderTextureMover/RenderTextureSource::textureIndex
	int32_t ___textureIndex_1;
	// UnityEngine.RenderTexture UMARenderTextureMover/RenderTextureSource::renderTexture
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTexture_2;
	// UnityEngine.Material UMARenderTextureMover/RenderTextureSource::smm
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___smm_3;
	// UnityEngine.SkinnedMeshRenderer UMARenderTextureMover/RenderTextureSource::skinnedMeshRenderer
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___skinnedMeshRenderer_4;
	// System.Int32 UMARenderTextureMover/RenderTextureSource::materialIndex
	int32_t ___materialIndex_5;

public:
	inline static int32_t get_offset_of_atlasIndex_0() { return static_cast<int32_t>(offsetof(RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF, ___atlasIndex_0)); }
	inline int32_t get_atlasIndex_0() const { return ___atlasIndex_0; }
	inline int32_t* get_address_of_atlasIndex_0() { return &___atlasIndex_0; }
	inline void set_atlasIndex_0(int32_t value)
	{
		___atlasIndex_0 = value;
	}

	inline static int32_t get_offset_of_textureIndex_1() { return static_cast<int32_t>(offsetof(RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF, ___textureIndex_1)); }
	inline int32_t get_textureIndex_1() const { return ___textureIndex_1; }
	inline int32_t* get_address_of_textureIndex_1() { return &___textureIndex_1; }
	inline void set_textureIndex_1(int32_t value)
	{
		___textureIndex_1 = value;
	}

	inline static int32_t get_offset_of_renderTexture_2() { return static_cast<int32_t>(offsetof(RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF, ___renderTexture_2)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_renderTexture_2() const { return ___renderTexture_2; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_renderTexture_2() { return &___renderTexture_2; }
	inline void set_renderTexture_2(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___renderTexture_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___renderTexture_2), (void*)value);
	}

	inline static int32_t get_offset_of_smm_3() { return static_cast<int32_t>(offsetof(RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF, ___smm_3)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_smm_3() const { return ___smm_3; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_smm_3() { return &___smm_3; }
	inline void set_smm_3(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___smm_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___smm_3), (void*)value);
	}

	inline static int32_t get_offset_of_skinnedMeshRenderer_4() { return static_cast<int32_t>(offsetof(RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF, ___skinnedMeshRenderer_4)); }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * get_skinnedMeshRenderer_4() const { return ___skinnedMeshRenderer_4; }
	inline SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 ** get_address_of_skinnedMeshRenderer_4() { return &___skinnedMeshRenderer_4; }
	inline void set_skinnedMeshRenderer_4(SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * value)
	{
		___skinnedMeshRenderer_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___skinnedMeshRenderer_4), (void*)value);
	}

	inline static int32_t get_offset_of_materialIndex_5() { return static_cast<int32_t>(offsetof(RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF, ___materialIndex_5)); }
	inline int32_t get_materialIndex_5() const { return ___materialIndex_5; }
	inline int32_t* get_address_of_materialIndex_5() { return &___materialIndex_5; }
	inline void set_materialIndex_5(int32_t value)
	{
		___materialIndex_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UMARenderTextureMover/RenderTextureSource
struct RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF_marshaled_pinvoke
{
	int32_t ___atlasIndex_0;
	int32_t ___textureIndex_1;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTexture_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___smm_3;
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___skinnedMeshRenderer_4;
	int32_t ___materialIndex_5;
};
// Native definition for COM marshalling of UMARenderTextureMover/RenderTextureSource
struct RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF_marshaled_com
{
	int32_t ___atlasIndex_0;
	int32_t ___textureIndex_1;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___renderTexture_2;
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___smm_3;
	SkinnedMeshRenderer_t126F4D6010E0F4B2685A7817B0A9171805D8F496 * ___skinnedMeshRenderer_4;
	int32_t ___materialIndex_5;
};

// UMA.Timeline.UmaDnaBehaviour/DnaTuple
struct  DnaTuple_tE339EE2EE4D87D48F1219381C98F86C7E2CA7DAD 
{
public:
	// System.String UMA.Timeline.UmaDnaBehaviour/DnaTuple::Name
	String_t* ___Name_0;
	// System.Single UMA.Timeline.UmaDnaBehaviour/DnaTuple::Value
	float ___Value_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(DnaTuple_tE339EE2EE4D87D48F1219381C98F86C7E2CA7DAD, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(DnaTuple_tE339EE2EE4D87D48F1219381C98F86C7E2CA7DAD, ___Value_1)); }
	inline float get_Value_1() const { return ___Value_1; }
	inline float* get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(float value)
	{
		___Value_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UMA.Timeline.UmaDnaBehaviour/DnaTuple
struct DnaTuple_tE339EE2EE4D87D48F1219381C98F86C7E2CA7DAD_marshaled_pinvoke
{
	char* ___Name_0;
	float ___Value_1;
};
// Native definition for COM marshalling of UMA.Timeline.UmaDnaBehaviour/DnaTuple
struct DnaTuple_tE339EE2EE4D87D48F1219381C98F86C7E2CA7DAD_marshaled_com
{
	Il2CppChar* ___Name_0;
	float ___Value_1;
};

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t6B7334CE017AF595535507519400AC02D688DC3C * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateCallback_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DelagateState_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_WaitHandle_2), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t9E2ED486907E3A16122ED4E946534E4DD6B5A7BA * ___m_WaitHandle_2;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>
struct  AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F, ___data_1)); }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  get_data_1() const { return ___data_1; }
	inline BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.BoneWeight1>
struct  AlignOfHelper_1_t3E1D17534582A89F27440A3334541AAFE36CA608 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t3E1D17534582A89F27440A3334541AAFE36CA608, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t3E1D17534582A89F27440A3334541AAFE36CA608, ___data_1)); }
	inline BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA  get_data_1() const { return ___data_1; }
	inline BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>
struct  AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F, ___data_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_data_1() const { return ___data_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___data_1 = value;
	}
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


// System.Collections.Generic.Dictionary`2/Enumerator<System.String,UMA.AssetItem>
struct  Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 
{
public:
	// System.Collections.Generic.Dictionary`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::dictionary
	Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * ___dictionary_0;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::version
	int32_t ___version_1;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::index
	int32_t ___index_2;
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator::current
	KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  ___current_3;
	// System.Int32 System.Collections.Generic.Dictionary`2/Enumerator::getEnumeratorRetType
	int32_t ___getEnumeratorRetType_4;

public:
	inline static int32_t get_offset_of_dictionary_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3, ___dictionary_0)); }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * get_dictionary_0() const { return ___dictionary_0; }
	inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF ** get_address_of_dictionary_0() { return &___dictionary_0; }
	inline void set_dictionary_0(Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * value)
	{
		___dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dictionary_0), (void*)value);
	}

	inline static int32_t get_offset_of_version_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3, ___version_1)); }
	inline int32_t get_version_1() const { return ___version_1; }
	inline int32_t* get_address_of_version_1() { return &___version_1; }
	inline void set_version_1(int32_t value)
	{
		___version_1 = value;
	}

	inline static int32_t get_offset_of_index_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3, ___index_2)); }
	inline int32_t get_index_2() const { return ___index_2; }
	inline int32_t* get_address_of_index_2() { return &___index_2; }
	inline void set_index_2(int32_t value)
	{
		___index_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3, ___current_3)); }
	inline KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  get_current_3() const { return ___current_3; }
	inline KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 * get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___key_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___current_3))->___value_1), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_getEnumeratorRetType_4() { return static_cast<int32_t>(offsetof(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3, ___getEnumeratorRetType_4)); }
	inline int32_t get_getEnumeratorRetType_4() const { return ___getEnumeratorRetType_4; }
	inline int32_t* get_address_of_getEnumeratorRetType_4() { return &___getEnumeratorRetType_4; }
	inline void set_getEnumeratorRetType_4(int32_t value)
	{
		___getEnumeratorRetType_4 = value;
	}
};


// System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>
struct  KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___key_0)); }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  get_key_0() const { return ___key_0; }
	inline DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405 * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(DateTime_tEAF2CD16E071DF5441F40822E4CFE880E5245405  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// Unity.Collections.Allocator
struct  Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// UnityEngine.Timeline.ClipCaps
struct  ClipCaps_t4DAFD870481888D50D7D4F5892B6AFECEA975919 
{
public:
	// System.Int32 UnityEngine.Timeline.ClipCaps::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipCaps_t4DAFD870481888D50D7D4F5892B6AFECEA975919, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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


// System.Reflection.ConstructorInfo
struct  ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B  : public MethodBase_t
{
public:

public:
};

struct ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields
{
public:
	// System.String System.Reflection.ConstructorInfo::ConstructorName
	String_t* ___ConstructorName_0;
	// System.String System.Reflection.ConstructorInfo::TypeConstructorName
	String_t* ___TypeConstructorName_1;

public:
	inline static int32_t get_offset_of_ConstructorName_0() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___ConstructorName_0)); }
	inline String_t* get_ConstructorName_0() const { return ___ConstructorName_0; }
	inline String_t** get_address_of_ConstructorName_0() { return &___ConstructorName_0; }
	inline void set_ConstructorName_0(String_t* value)
	{
		___ConstructorName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ConstructorName_0), (void*)value);
	}

	inline static int32_t get_offset_of_TypeConstructorName_1() { return static_cast<int32_t>(offsetof(ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B_StaticFields, ___TypeConstructorName_1)); }
	inline String_t* get_TypeConstructorName_1() const { return ___TypeConstructorName_1; }
	inline String_t** get_address_of_TypeConstructorName_1() { return &___TypeConstructorName_1; }
	inline void set_TypeConstructorName_1(String_t* value)
	{
		___TypeConstructorName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TypeConstructorName_1), (void*)value);
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

// UnityEngine.Playables.DirectorWrapMode
struct  DirectorWrapMode_t0CB1A9A83B2A4167D5D8E82B404396187EB5BBA8 
{
public:
	// System.Int32 UnityEngine.Playables.DirectorWrapMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DirectorWrapMode_t0CB1A9A83B2A4167D5D8E82B404396187EB5BBA8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
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

// System.ExceptionArgument
struct  ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737 
{
public:
	// System.Int32 System.ExceptionArgument::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ExceptionArgument_t750CCD4C657BCB2C185560CC68330BC0313B8737, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.FalloffType
struct  FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.FalloffType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FalloffType_t983DA2C11C909629E51BD1D4CF088C689C9863CB, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.HumanLimit
struct  HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8 
{
public:
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Min
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Min_0;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Max
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Max_1;
	// UnityEngine.Vector3 UnityEngine.HumanLimit::m_Center
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Center_2;
	// System.Single UnityEngine.HumanLimit::m_AxisLength
	float ___m_AxisLength_3;
	// System.Int32 UnityEngine.HumanLimit::m_UseDefaultValues
	int32_t ___m_UseDefaultValues_4;

public:
	inline static int32_t get_offset_of_m_Min_0() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Min_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Min_0() const { return ___m_Min_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Min_0() { return &___m_Min_0; }
	inline void set_m_Min_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Min_0 = value;
	}

	inline static int32_t get_offset_of_m_Max_1() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Max_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Max_1() const { return ___m_Max_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Max_1() { return &___m_Max_1; }
	inline void set_m_Max_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Max_1 = value;
	}

	inline static int32_t get_offset_of_m_Center_2() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_Center_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Center_2() const { return ___m_Center_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Center_2() { return &___m_Center_2; }
	inline void set_m_Center_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Center_2 = value;
	}

	inline static int32_t get_offset_of_m_AxisLength_3() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_AxisLength_3)); }
	inline float get_m_AxisLength_3() const { return ___m_AxisLength_3; }
	inline float* get_address_of_m_AxisLength_3() { return &___m_AxisLength_3; }
	inline void set_m_AxisLength_3(float value)
	{
		___m_AxisLength_3 = value;
	}

	inline static int32_t get_offset_of_m_UseDefaultValues_4() { return static_cast<int32_t>(offsetof(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8, ___m_UseDefaultValues_4)); }
	inline int32_t get_m_UseDefaultValues_4() const { return ___m_UseDefaultValues_4; }
	inline int32_t* get_address_of_m_UseDefaultValues_4() { return &___m_UseDefaultValues_4; }
	inline void set_m_UseDefaultValues_4(int32_t value)
	{
		___m_UseDefaultValues_4 = value;
	}
};


// System.Int32Enum
struct  Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C 
{
public:
	// System.Int32 System.Int32Enum::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Int32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.InternalTaskOptions
struct  InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF 
{
public:
	// System.Int32 System.Threading.Tasks.InternalTaskOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InternalTaskOptions_tE9869E444962B12AAF216CDE276D379BD57D5EEF, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightMode
struct  LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightMode::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightMode_t9D89979F39C1DBB9CD1E275BDD77C7EA1B506491, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Experimental.GlobalIllumination.LightType
struct  LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552 
{
public:
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightType::value__
	uint8_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(LightType_t4205DE4BEF130CE507C87172DAB60E5B1EB05552, ___value___2)); }
	inline uint8_t get_value___2() const { return ___value___2; }
	inline uint8_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint8_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.NotificationFlags
struct  NotificationFlags_t9E7C2E414C0875C0904404193D925F03BF65D981 
{
public:
	// System.Int16 UnityEngine.Timeline.NotificationFlags::value__
	int16_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NotificationFlags_t9E7C2E414C0875C0904404193D925F03BF65D981, ___value___2)); }
	inline int16_t get_value___2() const { return ___value___2; }
	inline int16_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int16_t value)
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

// UnityEngine.Plane
struct  Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 
{
public:
	// UnityEngine.Vector3 UnityEngine.Plane::m_Normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___m_Normal_0;
	// System.Single UnityEngine.Plane::m_Distance
	float ___m_Distance_1;

public:
	inline static int32_t get_offset_of_m_Normal_0() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Normal_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_m_Normal_0() const { return ___m_Normal_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_m_Normal_0() { return &___m_Normal_0; }
	inline void set_m_Normal_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___m_Normal_0 = value;
	}

	inline static int32_t get_offset_of_m_Distance_1() { return static_cast<int32_t>(offsetof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7, ___m_Distance_1)); }
	inline float get_m_Distance_1() const { return ___m_Distance_1; }
	inline float* get_address_of_m_Distance_1() { return &___m_Distance_1; }
	inline void set_m_Distance_1(float value)
	{
		___m_Distance_1 = value;
	}
};


// UnityEngine.Playables.PlayState
struct  PlayState_tF150278E7AD225F6CB13B5DFF58E2632CAD04989 
{
public:
	// System.Int32 UnityEngine.Playables.PlayState::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayState_tF150278E7AD225F6CB13B5DFF58E2632CAD04989, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Playables.PlayableGraph
struct  PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableGraph::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableGraph::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};


// UnityEngine.Playables.PlayableHandle
struct  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableHandle::m_Null
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A_StaticFields, ___m_Null_2)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableOutputHandle
struct  PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 
{
public:
	// System.IntPtr UnityEngine.Playables.PlayableOutputHandle::m_Handle
	intptr_t ___m_Handle_0;
	// System.UInt32 UnityEngine.Playables.PlayableOutputHandle::m_Version
	uint32_t ___m_Version_1;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Handle_0)); }
	inline intptr_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline intptr_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(intptr_t value)
	{
		___m_Handle_0 = value;
	}

	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1, ___m_Version_1)); }
	inline uint32_t get_m_Version_1() const { return ___m_Version_1; }
	inline uint32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(uint32_t value)
	{
		___m_Version_1 = value;
	}
};

struct PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutputHandle::m_Null
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Null_2;

public:
	inline static int32_t get_offset_of_m_Null_2() { return static_cast<int32_t>(offsetof(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1_StaticFields, ___m_Null_2)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Null_2() const { return ___m_Null_2; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Null_2() { return &___m_Null_2; }
	inline void set_m_Null_2(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Null_2 = value;
	}
};


// UnityEngine.Playables.PlayableTraversalMode
struct  PlayableTraversalMode_tBCA0564F5947FB02AE666B24819583DB772D0AEB 
{
public:
	// System.Int32 UnityEngine.Playables.PlayableTraversalMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PlayableTraversalMode_tBCA0564F5947FB02AE666B24819583DB772D0AEB, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.EventSystems.RaycastResult
struct  RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE 
{
public:
	// UnityEngine.GameObject UnityEngine.EventSystems.RaycastResult::m_GameObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.RaycastResult::module
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
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
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	// UnityEngine.Vector3 UnityEngine.EventSystems.RaycastResult::worldNormal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	// UnityEngine.Vector2 UnityEngine.EventSystems.RaycastResult::screenPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	// System.Int32 UnityEngine.EventSystems.RaycastResult::displayIndex
	int32_t ___displayIndex_10;

public:
	inline static int32_t get_offset_of_m_GameObject_0() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___m_GameObject_0)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_m_GameObject_0() const { return ___m_GameObject_0; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_m_GameObject_0() { return &___m_GameObject_0; }
	inline void set_m_GameObject_0(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___m_GameObject_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_GameObject_0), (void*)value);
	}

	inline static int32_t get_offset_of_module_1() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___module_1)); }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * get_module_1() const { return ___module_1; }
	inline BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 ** get_address_of_module_1() { return &___module_1; }
	inline void set_module_1(BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * value)
	{
		___module_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___module_1), (void*)value);
	}

	inline static int32_t get_offset_of_distance_2() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___distance_2)); }
	inline float get_distance_2() const { return ___distance_2; }
	inline float* get_address_of_distance_2() { return &___distance_2; }
	inline void set_distance_2(float value)
	{
		___distance_2 = value;
	}

	inline static int32_t get_offset_of_index_3() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___index_3)); }
	inline float get_index_3() const { return ___index_3; }
	inline float* get_address_of_index_3() { return &___index_3; }
	inline void set_index_3(float value)
	{
		___index_3 = value;
	}

	inline static int32_t get_offset_of_depth_4() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___depth_4)); }
	inline int32_t get_depth_4() const { return ___depth_4; }
	inline int32_t* get_address_of_depth_4() { return &___depth_4; }
	inline void set_depth_4(int32_t value)
	{
		___depth_4 = value;
	}

	inline static int32_t get_offset_of_sortingLayer_5() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingLayer_5)); }
	inline int32_t get_sortingLayer_5() const { return ___sortingLayer_5; }
	inline int32_t* get_address_of_sortingLayer_5() { return &___sortingLayer_5; }
	inline void set_sortingLayer_5(int32_t value)
	{
		___sortingLayer_5 = value;
	}

	inline static int32_t get_offset_of_sortingOrder_6() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___sortingOrder_6)); }
	inline int32_t get_sortingOrder_6() const { return ___sortingOrder_6; }
	inline int32_t* get_address_of_sortingOrder_6() { return &___sortingOrder_6; }
	inline void set_sortingOrder_6(int32_t value)
	{
		___sortingOrder_6 = value;
	}

	inline static int32_t get_offset_of_worldPosition_7() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldPosition_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldPosition_7() const { return ___worldPosition_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldPosition_7() { return &___worldPosition_7; }
	inline void set_worldPosition_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldPosition_7 = value;
	}

	inline static int32_t get_offset_of_worldNormal_8() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___worldNormal_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_worldNormal_8() const { return ___worldNormal_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_worldNormal_8() { return &___worldNormal_8; }
	inline void set_worldNormal_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___worldNormal_8 = value;
	}

	inline static int32_t get_offset_of_screenPosition_9() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___screenPosition_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_screenPosition_9() const { return ___screenPosition_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_screenPosition_9() { return &___screenPosition_9; }
	inline void set_screenPosition_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___screenPosition_9 = value;
	}

	inline static int32_t get_offset_of_displayIndex_10() { return static_cast<int32_t>(offsetof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE, ___displayIndex_10)); }
	inline int32_t get_displayIndex_10() const { return ___displayIndex_10; }
	inline int32_t* get_address_of_displayIndex_10() { return &___displayIndex_10; }
	inline void set_displayIndex_10(int32_t value)
	{
		___displayIndex_10 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_pinvoke
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
};
// Native definition for COM marshalling of UnityEngine.EventSystems.RaycastResult
struct RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_marshaled_com
{
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___m_GameObject_0;
	BaseRaycaster_tBC0FB2CBE6D3D40991EC20F689C43F76AD82A876 * ___module_1;
	float ___distance_2;
	float ___index_3;
	int32_t ___depth_4;
	int32_t ___sortingLayer_5;
	int32_t ___sortingOrder_6;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldPosition_7;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___worldNormal_8;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___screenPosition_9;
	int32_t ___displayIndex_10;
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


// UnityEngine.SkeletonBone
struct  SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E 
{
public:
	// System.String UnityEngine.SkeletonBone::name
	String_t* ___name_0;
	// System.String UnityEngine.SkeletonBone::parentName
	String_t* ___parentName_1;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	// UnityEngine.Quaternion UnityEngine.SkeletonBone::rotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	// UnityEngine.Vector3 UnityEngine.SkeletonBone::scale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___name_0)); }
	inline String_t* get_name_0() const { return ___name_0; }
	inline String_t** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(String_t* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}

	inline static int32_t get_offset_of_parentName_1() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___parentName_1)); }
	inline String_t* get_parentName_1() const { return ___parentName_1; }
	inline String_t** get_address_of_parentName_1() { return &___parentName_1; }
	inline void set_parentName_1(String_t* value)
	{
		___parentName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___parentName_1), (void*)value);
	}

	inline static int32_t get_offset_of_position_2() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___position_2)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_2() const { return ___position_2; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_2() { return &___position_2; }
	inline void set_position_2(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_2 = value;
	}

	inline static int32_t get_offset_of_rotation_3() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___rotation_3)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_rotation_3() const { return ___rotation_3; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_rotation_3() { return &___rotation_3; }
	inline void set_rotation_3(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___rotation_3 = value;
	}

	inline static int32_t get_offset_of_scale_4() { return static_cast<int32_t>(offsetof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E, ___scale_4)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_scale_4() const { return ___scale_4; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_scale_4() { return &___scale_4; }
	inline void set_scale_4(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___scale_4 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_pinvoke
{
	char* ___name_0;
	char* ___parentName_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;
};
// Native definition for COM marshalling of UnityEngine.SkeletonBone
struct SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_marshaled_com
{
	Il2CppChar* ___name_0;
	Il2CppChar* ___parentName_1;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_2;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation_3;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___scale_4;
};

// System.Threading.StackCrawlMark
struct  StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5 
{
public:
	// System.Int32 System.Threading.StackCrawlMark::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StackCrawlMark_t2BEE6EC5F8EA322B986CA375A594BBD34B98EBA5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.Task
struct  Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_taskId
	int32_t ___m_taskId_4;
	// System.Object System.Threading.Tasks.Task::m_action
	RuntimeObject * ___m_action_5;
	// System.Object System.Threading.Tasks.Task::m_stateObject
	RuntimeObject * ___m_stateObject_6;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.Task::m_taskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_taskScheduler_7;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::m_parent
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___m_parent_8;
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_stateFlags
	int32_t ___m_stateFlags_9;
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_continuationObject
	RuntimeObject * ___m_continuationObject_10;
	// System.Threading.Tasks.Task/ContingentProperties modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.Task::m_contingentProperties
	ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * ___m_contingentProperties_15;

public:
	inline static int32_t get_offset_of_m_taskId_4() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskId_4)); }
	inline int32_t get_m_taskId_4() const { return ___m_taskId_4; }
	inline int32_t* get_address_of_m_taskId_4() { return &___m_taskId_4; }
	inline void set_m_taskId_4(int32_t value)
	{
		___m_taskId_4 = value;
	}

	inline static int32_t get_offset_of_m_action_5() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_action_5)); }
	inline RuntimeObject * get_m_action_5() const { return ___m_action_5; }
	inline RuntimeObject ** get_address_of_m_action_5() { return &___m_action_5; }
	inline void set_m_action_5(RuntimeObject * value)
	{
		___m_action_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_action_5), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateObject_6() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateObject_6)); }
	inline RuntimeObject * get_m_stateObject_6() const { return ___m_stateObject_6; }
	inline RuntimeObject ** get_address_of_m_stateObject_6() { return &___m_stateObject_6; }
	inline void set_m_stateObject_6(RuntimeObject * value)
	{
		___m_stateObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_stateObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_taskScheduler_7() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_taskScheduler_7)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_taskScheduler_7() const { return ___m_taskScheduler_7; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_taskScheduler_7() { return &___m_taskScheduler_7; }
	inline void set_m_taskScheduler_7(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_taskScheduler_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_taskScheduler_7), (void*)value);
	}

	inline static int32_t get_offset_of_m_parent_8() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_parent_8)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_m_parent_8() const { return ___m_parent_8; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_m_parent_8() { return &___m_parent_8; }
	inline void set_m_parent_8(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___m_parent_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_parent_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_stateFlags_9() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_stateFlags_9)); }
	inline int32_t get_m_stateFlags_9() const { return ___m_stateFlags_9; }
	inline int32_t* get_address_of_m_stateFlags_9() { return &___m_stateFlags_9; }
	inline void set_m_stateFlags_9(int32_t value)
	{
		___m_stateFlags_9 = value;
	}

	inline static int32_t get_offset_of_m_continuationObject_10() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_continuationObject_10)); }
	inline RuntimeObject * get_m_continuationObject_10() const { return ___m_continuationObject_10; }
	inline RuntimeObject ** get_address_of_m_continuationObject_10() { return &___m_continuationObject_10; }
	inline void set_m_continuationObject_10(RuntimeObject * value)
	{
		___m_continuationObject_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_continuationObject_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_contingentProperties_15() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60, ___m_contingentProperties_15)); }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * get_m_contingentProperties_15() const { return ___m_contingentProperties_15; }
	inline ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 ** get_address_of_m_contingentProperties_15() { return &___m_contingentProperties_15; }
	inline void set_m_contingentProperties_15(ContingentProperties_t1E249C737B8B8644ED1D60EEFA101D326B199EA0 * value)
	{
		___m_contingentProperties_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_contingentProperties_15), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields
{
public:
	// System.Int32 System.Threading.Tasks.Task::s_taskIdCounter
	int32_t ___s_taskIdCounter_2;
	// System.Threading.Tasks.TaskFactory System.Threading.Tasks.Task::s_factory
	TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * ___s_factory_3;
	// System.Object System.Threading.Tasks.Task::s_taskCompletionSentinel
	RuntimeObject * ___s_taskCompletionSentinel_11;
	// System.Boolean System.Threading.Tasks.Task::s_asyncDebuggingEnabled
	bool ___s_asyncDebuggingEnabled_12;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_currentActiveTasks
	Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * ___s_currentActiveTasks_13;
	// System.Object System.Threading.Tasks.Task::s_activeTasksLock
	RuntimeObject * ___s_activeTasksLock_14;
	// System.Action`1<System.Object> System.Threading.Tasks.Task::s_taskCancelCallback
	Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___s_taskCancelCallback_16;
	// System.Func`1<System.Threading.Tasks.Task/ContingentProperties> System.Threading.Tasks.Task::s_createContingentProperties
	Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * ___s_createContingentProperties_17;
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::s_completedTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___s_completedTask_18;
	// System.Predicate`1<System.Threading.Tasks.Task> System.Threading.Tasks.Task::s_IsExceptionObservedByParentPredicate
	Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * ___s_IsExceptionObservedByParentPredicate_19;
	// System.Threading.ContextCallback System.Threading.Tasks.Task::s_ecCallback
	ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * ___s_ecCallback_20;
	// System.Predicate`1<System.Object> System.Threading.Tasks.Task::s_IsTaskContinuationNullPredicate
	Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___s_IsTaskContinuationNullPredicate_21;

public:
	inline static int32_t get_offset_of_s_taskIdCounter_2() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskIdCounter_2)); }
	inline int32_t get_s_taskIdCounter_2() const { return ___s_taskIdCounter_2; }
	inline int32_t* get_address_of_s_taskIdCounter_2() { return &___s_taskIdCounter_2; }
	inline void set_s_taskIdCounter_2(int32_t value)
	{
		___s_taskIdCounter_2 = value;
	}

	inline static int32_t get_offset_of_s_factory_3() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_factory_3)); }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * get_s_factory_3() const { return ___s_factory_3; }
	inline TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B ** get_address_of_s_factory_3() { return &___s_factory_3; }
	inline void set_s_factory_3(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * value)
	{
		___s_factory_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_factory_3), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCompletionSentinel_11() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCompletionSentinel_11)); }
	inline RuntimeObject * get_s_taskCompletionSentinel_11() const { return ___s_taskCompletionSentinel_11; }
	inline RuntimeObject ** get_address_of_s_taskCompletionSentinel_11() { return &___s_taskCompletionSentinel_11; }
	inline void set_s_taskCompletionSentinel_11(RuntimeObject * value)
	{
		___s_taskCompletionSentinel_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCompletionSentinel_11), (void*)value);
	}

	inline static int32_t get_offset_of_s_asyncDebuggingEnabled_12() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_asyncDebuggingEnabled_12)); }
	inline bool get_s_asyncDebuggingEnabled_12() const { return ___s_asyncDebuggingEnabled_12; }
	inline bool* get_address_of_s_asyncDebuggingEnabled_12() { return &___s_asyncDebuggingEnabled_12; }
	inline void set_s_asyncDebuggingEnabled_12(bool value)
	{
		___s_asyncDebuggingEnabled_12 = value;
	}

	inline static int32_t get_offset_of_s_currentActiveTasks_13() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_currentActiveTasks_13)); }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * get_s_currentActiveTasks_13() const { return ___s_currentActiveTasks_13; }
	inline Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 ** get_address_of_s_currentActiveTasks_13() { return &___s_currentActiveTasks_13; }
	inline void set_s_currentActiveTasks_13(Dictionary_2_tB758E2A2593CD827EFC041BE1F1BB4B68DE1C3E8 * value)
	{
		___s_currentActiveTasks_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_currentActiveTasks_13), (void*)value);
	}

	inline static int32_t get_offset_of_s_activeTasksLock_14() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_activeTasksLock_14)); }
	inline RuntimeObject * get_s_activeTasksLock_14() const { return ___s_activeTasksLock_14; }
	inline RuntimeObject ** get_address_of_s_activeTasksLock_14() { return &___s_activeTasksLock_14; }
	inline void set_s_activeTasksLock_14(RuntimeObject * value)
	{
		___s_activeTasksLock_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTasksLock_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskCancelCallback_16() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_taskCancelCallback_16)); }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * get_s_taskCancelCallback_16() const { return ___s_taskCancelCallback_16; }
	inline Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC ** get_address_of_s_taskCancelCallback_16() { return &___s_taskCancelCallback_16; }
	inline void set_s_taskCancelCallback_16(Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * value)
	{
		___s_taskCancelCallback_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_taskCancelCallback_16), (void*)value);
	}

	inline static int32_t get_offset_of_s_createContingentProperties_17() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_createContingentProperties_17)); }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * get_s_createContingentProperties_17() const { return ___s_createContingentProperties_17; }
	inline Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B ** get_address_of_s_createContingentProperties_17() { return &___s_createContingentProperties_17; }
	inline void set_s_createContingentProperties_17(Func_1_tBCF42601FA307876E83080BE4204110820F8BF3B * value)
	{
		___s_createContingentProperties_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_createContingentProperties_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_completedTask_18() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_completedTask_18)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_s_completedTask_18() const { return ___s_completedTask_18; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_s_completedTask_18() { return &___s_completedTask_18; }
	inline void set_s_completedTask_18(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___s_completedTask_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_completedTask_18), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsExceptionObservedByParentPredicate_19() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsExceptionObservedByParentPredicate_19)); }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * get_s_IsExceptionObservedByParentPredicate_19() const { return ___s_IsExceptionObservedByParentPredicate_19; }
	inline Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD ** get_address_of_s_IsExceptionObservedByParentPredicate_19() { return &___s_IsExceptionObservedByParentPredicate_19; }
	inline void set_s_IsExceptionObservedByParentPredicate_19(Predicate_1_tC0DBBC8498BD1EE6ABFFAA5628024105FA7D11BD * value)
	{
		___s_IsExceptionObservedByParentPredicate_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsExceptionObservedByParentPredicate_19), (void*)value);
	}

	inline static int32_t get_offset_of_s_ecCallback_20() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_ecCallback_20)); }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * get_s_ecCallback_20() const { return ___s_ecCallback_20; }
	inline ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B ** get_address_of_s_ecCallback_20() { return &___s_ecCallback_20; }
	inline void set_s_ecCallback_20(ContextCallback_t93707E0430F4FF3E15E1FB5A4844BE89C657AE8B * value)
	{
		___s_ecCallback_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ecCallback_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_IsTaskContinuationNullPredicate_21() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_StaticFields, ___s_IsTaskContinuationNullPredicate_21)); }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * get_s_IsTaskContinuationNullPredicate_21() const { return ___s_IsTaskContinuationNullPredicate_21; }
	inline Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB ** get_address_of_s_IsTaskContinuationNullPredicate_21() { return &___s_IsTaskContinuationNullPredicate_21; }
	inline void set_s_IsTaskContinuationNullPredicate_21(Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * value)
	{
		___s_IsTaskContinuationNullPredicate_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_IsTaskContinuationNullPredicate_21), (void*)value);
	}
};

struct Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields
{
public:
	// System.Threading.Tasks.Task System.Threading.Tasks.Task::t_currentTask
	Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * ___t_currentTask_0;
	// System.Threading.Tasks.StackGuard System.Threading.Tasks.Task::t_stackGuard
	StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * ___t_stackGuard_1;

public:
	inline static int32_t get_offset_of_t_currentTask_0() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_currentTask_0)); }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * get_t_currentTask_0() const { return ___t_currentTask_0; }
	inline Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 ** get_address_of_t_currentTask_0() { return &___t_currentTask_0; }
	inline void set_t_currentTask_0(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * value)
	{
		___t_currentTask_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_currentTask_0), (void*)value);
	}

	inline static int32_t get_offset_of_t_stackGuard_1() { return static_cast<int32_t>(offsetof(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_ThreadStaticFields, ___t_stackGuard_1)); }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * get_t_stackGuard_1() const { return ___t_stackGuard_1; }
	inline StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D ** get_address_of_t_stackGuard_1() { return &___t_stackGuard_1; }
	inline void set_t_stackGuard_1(StackGuard_t88E1EE4741AD02CA5FEA04A4EB2CC70F230E0E6D * value)
	{
		___t_stackGuard_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_stackGuard_1), (void*)value);
	}
};


// System.Threading.Tasks.TaskContinuationOptions
struct  TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399 
{
public:
	// System.Int32 System.Threading.Tasks.TaskContinuationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskContinuationOptions_t9FC13DFA1FFAFD07FE9A19491D1DBEB48BFA8399, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskCreationOptions
struct  TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112 
{
public:
	// System.Int32 System.Threading.Tasks.TaskCreationOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TaskCreationOptions_t469019F1B0F93FA60337952E265311E8048D2112, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Threading.Tasks.TaskScheduler
struct  TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D  : public RuntimeObject
{
public:
	// System.Int32 modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Tasks.TaskScheduler::m_taskSchedulerId
	int32_t ___m_taskSchedulerId_3;

public:
	inline static int32_t get_offset_of_m_taskSchedulerId_3() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D, ___m_taskSchedulerId_3)); }
	inline int32_t get_m_taskSchedulerId_3() const { return ___m_taskSchedulerId_3; }
	inline int32_t* get_address_of_m_taskSchedulerId_3() { return &___m_taskSchedulerId_3; }
	inline void set_m_taskSchedulerId_3(int32_t value)
	{
		___m_taskSchedulerId_3 = value;
	}
};

struct TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields
{
public:
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Threading.Tasks.TaskScheduler,System.Object> System.Threading.Tasks.TaskScheduler::s_activeTaskSchedulers
	ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * ___s_activeTaskSchedulers_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::s_defaultTaskScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___s_defaultTaskScheduler_1;
	// System.Int32 System.Threading.Tasks.TaskScheduler::s_taskSchedulerIdCounter
	int32_t ___s_taskSchedulerIdCounter_2;
	// System.EventHandler`1<System.Threading.Tasks.UnobservedTaskExceptionEventArgs> System.Threading.Tasks.TaskScheduler::_unobservedTaskException
	EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * ____unobservedTaskException_4;
	// System.Object System.Threading.Tasks.TaskScheduler::_unobservedTaskExceptionLockObject
	RuntimeObject * ____unobservedTaskExceptionLockObject_5;

public:
	inline static int32_t get_offset_of_s_activeTaskSchedulers_0() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_activeTaskSchedulers_0)); }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * get_s_activeTaskSchedulers_0() const { return ___s_activeTaskSchedulers_0; }
	inline ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 ** get_address_of_s_activeTaskSchedulers_0() { return &___s_activeTaskSchedulers_0; }
	inline void set_s_activeTaskSchedulers_0(ConditionalWeakTable_2_t93AD246458B1FCACF9EE33160B2DB2E06AB42CD8 * value)
	{
		___s_activeTaskSchedulers_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_activeTaskSchedulers_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_defaultTaskScheduler_1() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_defaultTaskScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_s_defaultTaskScheduler_1() const { return ___s_defaultTaskScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_s_defaultTaskScheduler_1() { return &___s_defaultTaskScheduler_1; }
	inline void set_s_defaultTaskScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___s_defaultTaskScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_defaultTaskScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_taskSchedulerIdCounter_2() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ___s_taskSchedulerIdCounter_2)); }
	inline int32_t get_s_taskSchedulerIdCounter_2() const { return ___s_taskSchedulerIdCounter_2; }
	inline int32_t* get_address_of_s_taskSchedulerIdCounter_2() { return &___s_taskSchedulerIdCounter_2; }
	inline void set_s_taskSchedulerIdCounter_2(int32_t value)
	{
		___s_taskSchedulerIdCounter_2 = value;
	}

	inline static int32_t get_offset_of__unobservedTaskException_4() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskException_4)); }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * get__unobservedTaskException_4() const { return ____unobservedTaskException_4; }
	inline EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A ** get_address_of__unobservedTaskException_4() { return &____unobservedTaskException_4; }
	inline void set__unobservedTaskException_4(EventHandler_1_t7DFDECE3AD515844324382F8BBCAC2975ABEE63A * value)
	{
		____unobservedTaskException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskException_4), (void*)value);
	}

	inline static int32_t get_offset_of__unobservedTaskExceptionLockObject_5() { return static_cast<int32_t>(offsetof(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields, ____unobservedTaskExceptionLockObject_5)); }
	inline RuntimeObject * get__unobservedTaskExceptionLockObject_5() const { return ____unobservedTaskExceptionLockObject_5; }
	inline RuntimeObject ** get_address_of__unobservedTaskExceptionLockObject_5() { return &____unobservedTaskExceptionLockObject_5; }
	inline void set__unobservedTaskExceptionLockObject_5(RuntimeObject * value)
	{
		____unobservedTaskExceptionLockObject_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____unobservedTaskExceptionLockObject_5), (void*)value);
	}
};


// UnityEngine.UICharInfo
struct  UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A 
{
public:
	// UnityEngine.Vector2 UnityEngine.UICharInfo::cursorPos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___cursorPos_0;
	// System.Single UnityEngine.UICharInfo::charWidth
	float ___charWidth_1;

public:
	inline static int32_t get_offset_of_cursorPos_0() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___cursorPos_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_cursorPos_0() const { return ___cursorPos_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_cursorPos_0() { return &___cursorPos_0; }
	inline void set_cursorPos_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___cursorPos_0 = value;
	}

	inline static int32_t get_offset_of_charWidth_1() { return static_cast<int32_t>(offsetof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A, ___charWidth_1)); }
	inline float get_charWidth_1() const { return ___charWidth_1; }
	inline float* get_address_of_charWidth_1() { return &___charWidth_1; }
	inline void set_charWidth_1(float value)
	{
		___charWidth_1 = value;
	}
};


// UnityEngine.UIVertex
struct  UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A 
{
public:
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___uv3_7;

public:
	inline static int32_t get_offset_of_position_0() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___position_0)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_0() const { return ___position_0; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_0() { return &___position_0; }
	inline void set_position_0(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_0 = value;
	}

	inline static int32_t get_offset_of_normal_1() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___normal_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_normal_1() const { return ___normal_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_normal_1() { return &___normal_1; }
	inline void set_normal_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___normal_1 = value;
	}

	inline static int32_t get_offset_of_tangent_2() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___tangent_2)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_tangent_2() const { return ___tangent_2; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_tangent_2() { return &___tangent_2; }
	inline void set_tangent_2(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___tangent_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___color_3)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_color_3() const { return ___color_3; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_uv0_4() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv0_4)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv0_4() const { return ___uv0_4; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv0_4() { return &___uv0_4; }
	inline void set_uv0_4(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv0_4 = value;
	}

	inline static int32_t get_offset_of_uv1_5() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv1_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv1_5() const { return ___uv1_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv1_5() { return &___uv1_5; }
	inline void set_uv1_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv1_5 = value;
	}

	inline static int32_t get_offset_of_uv2_6() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv2_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv2_6() const { return ___uv2_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv2_6() { return &___uv2_6; }
	inline void set_uv2_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv2_6 = value;
	}

	inline static int32_t get_offset_of_uv3_7() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A, ___uv3_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_uv3_7() const { return ___uv3_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_uv3_7() { return &___uv3_7; }
	inline void set_uv3_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___uv3_7 = value;
	}
};

struct UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields
{
public:
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  ___simpleVert_10;

public:
	inline static int32_t get_offset_of_s_DefaultColor_8() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultColor_8)); }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  get_s_DefaultColor_8() const { return ___s_DefaultColor_8; }
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * get_address_of_s_DefaultColor_8() { return &___s_DefaultColor_8; }
	inline void set_s_DefaultColor_8(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		___s_DefaultColor_8 = value;
	}

	inline static int32_t get_offset_of_s_DefaultTangent_9() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___s_DefaultTangent_9)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_s_DefaultTangent_9() const { return ___s_DefaultTangent_9; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_s_DefaultTangent_9() { return &___s_DefaultTangent_9; }
	inline void set_s_DefaultTangent_9(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___s_DefaultTangent_9 = value;
	}

	inline static int32_t get_offset_of_simpleVert_10() { return static_cast<int32_t>(offsetof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_StaticFields, ___simpleVert_10)); }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  get_simpleVert_10() const { return ___simpleVert_10; }
	inline UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A * get_address_of_simpleVert_10() { return &___simpleVert_10; }
	inline void set_simpleVert_10(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  value)
	{
		___simpleVert_10 = value;
	}
};


// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags
struct  X509ChainStatusFlags_t16F457BB24891840519B66C39DE91268909174F9 
{
public:
	// System.Int32 System.Security.Cryptography.X509Certificates.X509ChainStatusFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(X509ChainStatusFlags_t16F457BB24891840519B66C39DE91268909174F9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestMode
struct  RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestMode_tCB120B82DED523ADBA2D6093A1A8ABF17D94A313, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Camera/RenderRequestOutputSpace
struct  RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5 
{
public:
	// System.Int32 UnityEngine.Camera/RenderRequestOutputSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(RenderRequestOutputSpace_t8EB93E4720B2D1BAB624A04ADB473C37C7F3D6A5, ___value___2)); }
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


// UnityEngine.Timeline.TimelineAsset/DurationMode
struct  DurationMode_tD4E793917FFAB0CC97CA830D8040A696900D7472 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineAsset/DurationMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DurationMode_tD4E793917FFAB0CC97CA830D8040A696900D7472, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/BlendCurveMode
struct  BlendCurveMode_t1719A4548449E4B9ACD7FF16FA5EC5666654147D 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/BlendCurveMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BlendCurveMode_t1719A4548449E4B9ACD7FF16FA5EC5666654147D, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Timeline.TimelineClip/ClipExtrapolation
struct  ClipExtrapolation_tF277CAC1FEA6B43D5124C383D47FE5729DDB29A5 
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip/ClipExtrapolation::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ClipExtrapolation_tF277CAC1FEA6B43D5124C383D47FE5729DDB29A5, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UMA.Dynamics.UMAPhysicsAvatar/CachedBone
struct  CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984 
{
public:
	// UnityEngine.Transform UMA.Dynamics.UMAPhysicsAvatar/CachedBone::boneTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___boneTransform_0;
	// UnityEngine.Vector3 UMA.Dynamics.UMAPhysicsAvatar/CachedBone::localPosition
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition_1;
	// UnityEngine.Quaternion UMA.Dynamics.UMAPhysicsAvatar/CachedBone::localRotation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation_2;
	// UnityEngine.Vector3 UMA.Dynamics.UMAPhysicsAvatar/CachedBone::localScale
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale_3;

public:
	inline static int32_t get_offset_of_boneTransform_0() { return static_cast<int32_t>(offsetof(CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984, ___boneTransform_0)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_boneTransform_0() const { return ___boneTransform_0; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_boneTransform_0() { return &___boneTransform_0; }
	inline void set_boneTransform_0(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___boneTransform_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boneTransform_0), (void*)value);
	}

	inline static int32_t get_offset_of_localPosition_1() { return static_cast<int32_t>(offsetof(CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984, ___localPosition_1)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_localPosition_1() const { return ___localPosition_1; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_localPosition_1() { return &___localPosition_1; }
	inline void set_localPosition_1(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___localPosition_1 = value;
	}

	inline static int32_t get_offset_of_localRotation_2() { return static_cast<int32_t>(offsetof(CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984, ___localRotation_2)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_localRotation_2() const { return ___localRotation_2; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_localRotation_2() { return &___localRotation_2; }
	inline void set_localRotation_2(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___localRotation_2 = value;
	}

	inline static int32_t get_offset_of_localScale_3() { return static_cast<int32_t>(offsetof(CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984, ___localScale_3)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_localScale_3() const { return ___localScale_3; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_localScale_3() { return &___localScale_3; }
	inline void set_localScale_3(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___localScale_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UMA.Dynamics.UMAPhysicsAvatar/CachedBone
struct CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984_marshaled_pinvoke
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___boneTransform_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition_1;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale_3;
};
// Native definition for COM marshalling of UMA.Dynamics.UMAPhysicsAvatar/CachedBone
struct CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984_marshaled_com
{
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___boneTransform_0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localPosition_1;
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___localRotation_2;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___localScale_3;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>
struct  AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893, ___data_1)); }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  get_data_1() const { return ___data_1; }
	inline Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  value)
	{
		___data_1 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.BoneWeight1>
struct  NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.Byte>
struct  NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Plane>
struct  NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt32>
struct  NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// UnityEngine.Playables.ScriptPlayable`1<System.Object>
struct  ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.ScriptPlayable`1::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_StaticFields
{
public:
	// UnityEngine.Playables.ScriptPlayable`1<T> UnityEngine.Playables.ScriptPlayable`1::m_NullPlayable
	ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_StaticFields, ___m_NullPlayable_1)); }
	inline ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// System.Threading.Tasks.Task`1<System.Boolean>
struct  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	bool ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849, ___m_result_22)); }
	inline bool get_m_result_22() const { return ___m_result_22; }
	inline bool* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(bool value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t069438A73348A2B1B34A2C68E0478EE107ECCFC7 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t24DC43D57AB022882FE433E3B16B6D7E4BD14BB4 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Int32>
struct  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	int32_t ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725, ___m_result_22)); }
	inline int32_t get_m_result_22() const { return ___m_result_22; }
	inline int32_t* get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(int32_t value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tCA6286B86C0D5D6C00D5A0DFE56F7E48A482DD5E * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t53CFE8804C8D1C2FE8CC9204CF5DA5B98EC444D0 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Object>
struct  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	RuntimeObject * ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17, ___m_result_22)); }
	inline RuntimeObject * get_m_result_22() const { return ___m_result_22; }
	inline RuntimeObject ** get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(RuntimeObject * value)
	{
		___m_result_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_result_22), (void*)value);
	}
};

struct Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_t16A95DD17BBA3D00F0A85C5077BB248421EF3A55 * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t44F36790F9746FCE5ABFDE6205B6020B2578F6DD * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// System.Threading.Tasks.Task`1<System.Threading.Tasks.VoidTaskResult>
struct  Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3  : public Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60
{
public:
	// TResult System.Threading.Tasks.Task`1::m_result
	VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  ___m_result_22;

public:
	inline static int32_t get_offset_of_m_result_22() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3, ___m_result_22)); }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  get_m_result_22() const { return ___m_result_22; }
	inline VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004 * get_address_of_m_result_22() { return &___m_result_22; }
	inline void set_m_result_22(VoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004  value)
	{
		___m_result_22 = value;
	}
};

struct Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields
{
public:
	// System.Threading.Tasks.TaskFactory`1<TResult> System.Threading.Tasks.Task`1::s_Factory
	TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * ___s_Factory_23;
	// System.Func`2<System.Threading.Tasks.Task`1<System.Threading.Tasks.Task>,System.Threading.Tasks.Task`1<TResult>> System.Threading.Tasks.Task`1::TaskWhenAnyCast
	Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * ___TaskWhenAnyCast_24;

public:
	inline static int32_t get_offset_of_s_Factory_23() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___s_Factory_23)); }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * get_s_Factory_23() const { return ___s_Factory_23; }
	inline TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B ** get_address_of_s_Factory_23() { return &___s_Factory_23; }
	inline void set_s_Factory_23(TaskFactory_1_tFD6C5BE88624171209DEA49929EA276401AC9F4B * value)
	{
		___s_Factory_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Factory_23), (void*)value);
	}

	inline static int32_t get_offset_of_TaskWhenAnyCast_24() { return static_cast<int32_t>(offsetof(Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3_StaticFields, ___TaskWhenAnyCast_24)); }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * get_TaskWhenAnyCast_24() const { return ___TaskWhenAnyCast_24; }
	inline Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 ** get_address_of_TaskWhenAnyCast_24() { return &___TaskWhenAnyCast_24; }
	inline void set_TaskWhenAnyCast_24(Func_2_t99C75F5817AC4490145734D823B7E8ED9A840728 * value)
	{
		___TaskWhenAnyCast_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TaskWhenAnyCast_24), (void*)value);
	}
};


// UnityEngine.Animations.AnimationLayerMixerPlayable
struct  AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_StaticFields
{
public:
	// UnityEngine.Animations.AnimationLayerMixerPlayable UnityEngine.Animations.AnimationLayerMixerPlayable::m_NullPlayable
	AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMixerPlayable
struct  AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMixerPlayable UnityEngine.Animations.AnimationMixerPlayable::m_NullPlayable
	AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationMotionXToDeltaPlayable
struct  AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_StaticFields
{
public:
	// UnityEngine.Animations.AnimationMotionXToDeltaPlayable UnityEngine.Animations.AnimationMotionXToDeltaPlayable::m_NullPlayable
	AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationOffsetPlayable
struct  AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_StaticFields
{
public:
	// UnityEngine.Animations.AnimationOffsetPlayable UnityEngine.Animations.AnimationOffsetPlayable::m_NullPlayable
	AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Animations.AnimationPlayableOutput
struct  AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};


// UnityEngine.Animations.AnimationRemoveScalePlayable
struct  AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_StaticFields
{
public:
	// UnityEngine.Animations.AnimationRemoveScalePlayable UnityEngine.Animations.AnimationRemoveScalePlayable::m_NullPlayable
	AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_StaticFields, ___m_NullPlayable_1)); }
	inline AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.HumanBone
struct  HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D 
{
public:
	// System.String UnityEngine.HumanBone::m_BoneName
	String_t* ___m_BoneName_0;
	// System.String UnityEngine.HumanBone::m_HumanName
	String_t* ___m_HumanName_1;
	// UnityEngine.HumanLimit UnityEngine.HumanBone::limit
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;

public:
	inline static int32_t get_offset_of_m_BoneName_0() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___m_BoneName_0)); }
	inline String_t* get_m_BoneName_0() const { return ___m_BoneName_0; }
	inline String_t** get_address_of_m_BoneName_0() { return &___m_BoneName_0; }
	inline void set_m_BoneName_0(String_t* value)
	{
		___m_BoneName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_BoneName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_HumanName_1() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___m_HumanName_1)); }
	inline String_t* get_m_HumanName_1() const { return ___m_HumanName_1; }
	inline String_t** get_address_of_m_HumanName_1() { return &___m_HumanName_1; }
	inline void set_m_HumanName_1(String_t* value)
	{
		___m_HumanName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HumanName_1), (void*)value);
	}

	inline static int32_t get_offset_of_limit_2() { return static_cast<int32_t>(offsetof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D, ___limit_2)); }
	inline HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  get_limit_2() const { return ___limit_2; }
	inline HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8 * get_address_of_limit_2() { return &___limit_2; }
	inline void set_limit_2(HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  value)
	{
		___limit_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.HumanBone
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_pinvoke
{
	char* ___m_BoneName_0;
	char* ___m_HumanName_1;
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;
};
// Native definition for COM marshalling of UnityEngine.HumanBone
struct HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_marshaled_com
{
	Il2CppChar* ___m_BoneName_0;
	Il2CppChar* ___m_HumanName_1;
	HumanLimit_t8F488DD21062BE1259B0F4C77E4EB24FB931E8D8  ___limit_2;
};

// UnityEngine.Experimental.GlobalIllumination.LightDataGI
struct  LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 
{
public:
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::instanceID
	int32_t ___instanceID_0;
	// System.Int32 UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieID
	int32_t ___cookieID_1;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::cookieScale
	float ___cookieScale_2;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::color
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___color_3;
	// UnityEngine.Experimental.GlobalIllumination.LinearColor UnityEngine.Experimental.GlobalIllumination.LightDataGI::indirectColor
	LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  ___indirectColor_4;
	// UnityEngine.Quaternion UnityEngine.Experimental.GlobalIllumination.LightDataGI::orientation
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___orientation_5;
	// UnityEngine.Vector3 UnityEngine.Experimental.GlobalIllumination.LightDataGI::position
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position_6;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::range
	float ___range_7;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::coneAngle
	float ___coneAngle_8;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::innerConeAngle
	float ___innerConeAngle_9;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape0
	float ___shape0_10;
	// System.Single UnityEngine.Experimental.GlobalIllumination.LightDataGI::shape1
	float ___shape1_11;
	// UnityEngine.Experimental.GlobalIllumination.LightType UnityEngine.Experimental.GlobalIllumination.LightDataGI::type
	uint8_t ___type_12;
	// UnityEngine.Experimental.GlobalIllumination.LightMode UnityEngine.Experimental.GlobalIllumination.LightDataGI::mode
	uint8_t ___mode_13;
	// System.Byte UnityEngine.Experimental.GlobalIllumination.LightDataGI::shadow
	uint8_t ___shadow_14;
	// UnityEngine.Experimental.GlobalIllumination.FalloffType UnityEngine.Experimental.GlobalIllumination.LightDataGI::falloff
	uint8_t ___falloff_15;

public:
	inline static int32_t get_offset_of_instanceID_0() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___instanceID_0)); }
	inline int32_t get_instanceID_0() const { return ___instanceID_0; }
	inline int32_t* get_address_of_instanceID_0() { return &___instanceID_0; }
	inline void set_instanceID_0(int32_t value)
	{
		___instanceID_0 = value;
	}

	inline static int32_t get_offset_of_cookieID_1() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieID_1)); }
	inline int32_t get_cookieID_1() const { return ___cookieID_1; }
	inline int32_t* get_address_of_cookieID_1() { return &___cookieID_1; }
	inline void set_cookieID_1(int32_t value)
	{
		___cookieID_1 = value;
	}

	inline static int32_t get_offset_of_cookieScale_2() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___cookieScale_2)); }
	inline float get_cookieScale_2() const { return ___cookieScale_2; }
	inline float* get_address_of_cookieScale_2() { return &___cookieScale_2; }
	inline void set_cookieScale_2(float value)
	{
		___cookieScale_2 = value;
	}

	inline static int32_t get_offset_of_color_3() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___color_3)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_color_3() const { return ___color_3; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_color_3() { return &___color_3; }
	inline void set_color_3(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___color_3 = value;
	}

	inline static int32_t get_offset_of_indirectColor_4() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___indirectColor_4)); }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  get_indirectColor_4() const { return ___indirectColor_4; }
	inline LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2 * get_address_of_indirectColor_4() { return &___indirectColor_4; }
	inline void set_indirectColor_4(LinearColor_tB134EA090C61E6624DE36F52980CA7E2C893D5F2  value)
	{
		___indirectColor_4 = value;
	}

	inline static int32_t get_offset_of_orientation_5() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___orientation_5)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_orientation_5() const { return ___orientation_5; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_orientation_5() { return &___orientation_5; }
	inline void set_orientation_5(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___orientation_5 = value;
	}

	inline static int32_t get_offset_of_position_6() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___position_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_position_6() const { return ___position_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_position_6() { return &___position_6; }
	inline void set_position_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___position_6 = value;
	}

	inline static int32_t get_offset_of_range_7() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___range_7)); }
	inline float get_range_7() const { return ___range_7; }
	inline float* get_address_of_range_7() { return &___range_7; }
	inline void set_range_7(float value)
	{
		___range_7 = value;
	}

	inline static int32_t get_offset_of_coneAngle_8() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___coneAngle_8)); }
	inline float get_coneAngle_8() const { return ___coneAngle_8; }
	inline float* get_address_of_coneAngle_8() { return &___coneAngle_8; }
	inline void set_coneAngle_8(float value)
	{
		___coneAngle_8 = value;
	}

	inline static int32_t get_offset_of_innerConeAngle_9() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___innerConeAngle_9)); }
	inline float get_innerConeAngle_9() const { return ___innerConeAngle_9; }
	inline float* get_address_of_innerConeAngle_9() { return &___innerConeAngle_9; }
	inline void set_innerConeAngle_9(float value)
	{
		___innerConeAngle_9 = value;
	}

	inline static int32_t get_offset_of_shape0_10() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape0_10)); }
	inline float get_shape0_10() const { return ___shape0_10; }
	inline float* get_address_of_shape0_10() { return &___shape0_10; }
	inline void set_shape0_10(float value)
	{
		___shape0_10 = value;
	}

	inline static int32_t get_offset_of_shape1_11() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shape1_11)); }
	inline float get_shape1_11() const { return ___shape1_11; }
	inline float* get_address_of_shape1_11() { return &___shape1_11; }
	inline void set_shape1_11(float value)
	{
		___shape1_11 = value;
	}

	inline static int32_t get_offset_of_type_12() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___type_12)); }
	inline uint8_t get_type_12() const { return ___type_12; }
	inline uint8_t* get_address_of_type_12() { return &___type_12; }
	inline void set_type_12(uint8_t value)
	{
		___type_12 = value;
	}

	inline static int32_t get_offset_of_mode_13() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___mode_13)); }
	inline uint8_t get_mode_13() const { return ___mode_13; }
	inline uint8_t* get_address_of_mode_13() { return &___mode_13; }
	inline void set_mode_13(uint8_t value)
	{
		___mode_13 = value;
	}

	inline static int32_t get_offset_of_shadow_14() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___shadow_14)); }
	inline uint8_t get_shadow_14() const { return ___shadow_14; }
	inline uint8_t* get_address_of_shadow_14() { return &___shadow_14; }
	inline void set_shadow_14(uint8_t value)
	{
		___shadow_14 = value;
	}

	inline static int32_t get_offset_of_falloff_15() { return static_cast<int32_t>(offsetof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2, ___falloff_15)); }
	inline uint8_t get_falloff_15() const { return ___falloff_15; }
	inline uint8_t* get_address_of_falloff_15() { return &___falloff_15; }
	inline void set_falloff_15(uint8_t value)
	{
		___falloff_15 = value;
	}
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

// UnityEngine.Playables.Playable
struct  Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 
{
public:
	// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::m_Handle
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2, ___m_Handle_0)); }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  value)
	{
		___m_Handle_0 = value;
	}
};

struct Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Playables.Playable::m_NullPlayable
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___m_NullPlayable_1;

public:
	inline static int32_t get_offset_of_m_NullPlayable_1() { return static_cast<int32_t>(offsetof(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_StaticFields, ___m_NullPlayable_1)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_m_NullPlayable_1() const { return ___m_NullPlayable_1; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_m_NullPlayable_1() { return &___m_NullPlayable_1; }
	inline void set_m_NullPlayable_1(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___m_NullPlayable_1 = value;
	}
};


// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 
{
public:
	// System.String UnityEngine.Playables.PlayableBinding::m_StreamName
	String_t* ___m_StreamName_0;
	// UnityEngine.Object UnityEngine.Playables.PlayableBinding::m_SourceObject
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_SourceObject_1;
	// System.Type UnityEngine.Playables.PlayableBinding::m_SourceBindingType
	Type_t * ___m_SourceBindingType_2;
	// UnityEngine.Playables.PlayableBinding/CreateOutputMethod UnityEngine.Playables.PlayableBinding::m_CreateOutputMethod
	CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * ___m_CreateOutputMethod_3;

public:
	inline static int32_t get_offset_of_m_StreamName_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_StreamName_0)); }
	inline String_t* get_m_StreamName_0() const { return ___m_StreamName_0; }
	inline String_t** get_address_of_m_StreamName_0() { return &___m_StreamName_0; }
	inline void set_m_StreamName_0(String_t* value)
	{
		___m_StreamName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_StreamName_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceObject_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_SourceObject_1)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_SourceObject_1() const { return ___m_SourceObject_1; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_SourceObject_1() { return &___m_SourceObject_1; }
	inline void set_m_SourceObject_1(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_SourceObject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceObject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SourceBindingType_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_SourceBindingType_2)); }
	inline Type_t * get_m_SourceBindingType_2() const { return ___m_SourceBindingType_2; }
	inline Type_t ** get_address_of_m_SourceBindingType_2() { return &___m_SourceBindingType_2; }
	inline void set_m_SourceBindingType_2(Type_t * value)
	{
		___m_SourceBindingType_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SourceBindingType_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreateOutputMethod_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2, ___m_CreateOutputMethod_3)); }
	inline CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * get_m_CreateOutputMethod_3() const { return ___m_CreateOutputMethod_3; }
	inline CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 ** get_address_of_m_CreateOutputMethod_3() { return &___m_CreateOutputMethod_3; }
	inline void set_m_CreateOutputMethod_3(CreateOutputMethod_t7A129D00E8823B50AEDD0C9B082C9CB3DF863876 * value)
	{
		___m_CreateOutputMethod_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreateOutputMethod_3), (void*)value);
	}
};

struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* ___None_4;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_5;

public:
	inline static int32_t get_offset_of_None_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields, ___None_4)); }
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* get_None_4() const { return ___None_4; }
	inline PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3** get_address_of_None_4() { return &___None_4; }
	inline void set_None_4(PlayableBindingU5BU5D_t4FD470872BB5C6A1794C9CB06830B557CA874CB3* value)
	{
		___None_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___None_4), (void*)value);
	}

	inline static int32_t get_offset_of_DefaultDuration_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_StaticFields, ___DefaultDuration_5)); }
	inline double get_DefaultDuration_5() const { return ___DefaultDuration_5; }
	inline double* get_address_of_DefaultDuration_5() { return &___DefaultDuration_5; }
	inline void set_DefaultDuration_5(double value)
	{
		___DefaultDuration_5 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshaled_pinvoke
{
	char* ___m_StreamName_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_marshaled_com
{
	Il2CppChar* ___m_StreamName_0;
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com* ___m_SourceObject_1;
	Type_t * ___m_SourceBindingType_2;
	Il2CppMethodPointer ___m_CreateOutputMethod_3;
};

// UnityEngine.Playables.PlayableOutput
struct  PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 
{
public:
	// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::m_Handle
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82, ___m_Handle_0)); }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  get_m_Handle_0() const { return ___m_Handle_0; }
	inline PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  value)
	{
		___m_Handle_0 = value;
	}
};

struct PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields
{
public:
	// UnityEngine.Playables.PlayableOutput UnityEngine.Playables.PlayableOutput::m_NullPlayableOutput
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___m_NullPlayableOutput_1;

public:
	inline static int32_t get_offset_of_m_NullPlayableOutput_1() { return static_cast<int32_t>(offsetof(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_StaticFields, ___m_NullPlayableOutput_1)); }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  get_m_NullPlayableOutput_1() const { return ___m_NullPlayableOutput_1; }
	inline PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * get_address_of_m_NullPlayableOutput_1() { return &___m_NullPlayableOutput_1; }
	inline void set_m_NullPlayableOutput_1(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  value)
	{
		___m_NullPlayableOutput_1 = value;
	}
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

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Threading.Tasks.TaskFactory
struct  TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B  : public RuntimeObject
{
public:
	// System.Threading.CancellationToken System.Threading.Tasks.TaskFactory::m_defaultCancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___m_defaultCancellationToken_0;
	// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskFactory::m_defaultScheduler
	TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___m_defaultScheduler_1;
	// System.Threading.Tasks.TaskCreationOptions System.Threading.Tasks.TaskFactory::m_defaultCreationOptions
	int32_t ___m_defaultCreationOptions_2;
	// System.Threading.Tasks.TaskContinuationOptions System.Threading.Tasks.TaskFactory::m_defaultContinuationOptions
	int32_t ___m_defaultContinuationOptions_3;

public:
	inline static int32_t get_offset_of_m_defaultCancellationToken_0() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCancellationToken_0)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get_m_defaultCancellationToken_0() const { return ___m_defaultCancellationToken_0; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of_m_defaultCancellationToken_0() { return &___m_defaultCancellationToken_0; }
	inline void set_m_defaultCancellationToken_0(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		___m_defaultCancellationToken_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_defaultCancellationToken_0))->___m_source_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_m_defaultScheduler_1() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultScheduler_1)); }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * get_m_defaultScheduler_1() const { return ___m_defaultScheduler_1; }
	inline TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D ** get_address_of_m_defaultScheduler_1() { return &___m_defaultScheduler_1; }
	inline void set_m_defaultScheduler_1(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * value)
	{
		___m_defaultScheduler_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_defaultScheduler_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_defaultCreationOptions_2() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultCreationOptions_2)); }
	inline int32_t get_m_defaultCreationOptions_2() const { return ___m_defaultCreationOptions_2; }
	inline int32_t* get_address_of_m_defaultCreationOptions_2() { return &___m_defaultCreationOptions_2; }
	inline void set_m_defaultCreationOptions_2(int32_t value)
	{
		___m_defaultCreationOptions_2 = value;
	}

	inline static int32_t get_offset_of_m_defaultContinuationOptions_3() { return static_cast<int32_t>(offsetof(TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B, ___m_defaultContinuationOptions_3)); }
	inline int32_t get_m_defaultContinuationOptions_3() const { return ___m_defaultContinuationOptions_3; }
	inline int32_t* get_address_of_m_defaultContinuationOptions_3() { return &___m_defaultContinuationOptions_3; }
	inline void set_m_defaultContinuationOptions_3(int32_t value)
	{
		___m_defaultContinuationOptions_3 = value;
	}
};


// UnityEngine.Texture
struct  Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

struct Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields
{
public:
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;

public:
	inline static int32_t get_offset_of_GenerateAllMips_4() { return static_cast<int32_t>(offsetof(Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE_StaticFields, ___GenerateAllMips_4)); }
	inline int32_t get_GenerateAllMips_4() const { return ___GenerateAllMips_4; }
	inline int32_t* get_address_of_GenerateAllMips_4() { return &___GenerateAllMips_4; }
	inline void set_GenerateAllMips_4(int32_t value)
	{
		___GenerateAllMips_4 = value;
	}
};


// UnityEngine.Timeline.TimelineClip
struct  TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F  : public RuntimeObject
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineClip::m_Version
	int32_t ___m_Version_1;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Start
	double ___m_Start_9;
	// System.Double UnityEngine.Timeline.TimelineClip::m_ClipIn
	double ___m_ClipIn_10;
	// UnityEngine.Object UnityEngine.Timeline.TimelineClip::m_Asset
	Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___m_Asset_11;
	// System.Double UnityEngine.Timeline.TimelineClip::m_Duration
	double ___m_Duration_12;
	// System.Double UnityEngine.Timeline.TimelineClip::m_TimeScale
	double ___m_TimeScale_13;
	// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineClip::m_ParentTrack
	TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___m_ParentTrack_14;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseInDuration
	double ___m_EaseInDuration_15;
	// System.Double UnityEngine.Timeline.TimelineClip::m_EaseOutDuration
	double ___m_EaseOutDuration_16;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendInDuration
	double ___m_BlendInDuration_17;
	// System.Double UnityEngine.Timeline.TimelineClip::m_BlendOutDuration
	double ___m_BlendOutDuration_18;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixInCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_MixInCurve_19;
	// UnityEngine.AnimationCurve UnityEngine.Timeline.TimelineClip::m_MixOutCurve
	AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * ___m_MixOutCurve_20;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendInCurveMode
	int32_t ___m_BlendInCurveMode_21;
	// UnityEngine.Timeline.TimelineClip/BlendCurveMode UnityEngine.Timeline.TimelineClip::m_BlendOutCurveMode
	int32_t ___m_BlendOutCurveMode_22;
	// System.Collections.Generic.List`1<System.String> UnityEngine.Timeline.TimelineClip::m_ExposedParameterNames
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___m_ExposedParameterNames_23;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TimelineClip::m_AnimationCurves
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_AnimationCurves_24;
	// System.Boolean UnityEngine.Timeline.TimelineClip::m_Recordable
	bool ___m_Recordable_25;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PostExtrapolationMode
	int32_t ___m_PostExtrapolationMode_26;
	// UnityEngine.Timeline.TimelineClip/ClipExtrapolation UnityEngine.Timeline.TimelineClip::m_PreExtrapolationMode
	int32_t ___m_PreExtrapolationMode_27;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PostExtrapolationTime
	double ___m_PostExtrapolationTime_28;
	// System.Double UnityEngine.Timeline.TimelineClip::m_PreExtrapolationTime
	double ___m_PreExtrapolationTime_29;
	// System.String UnityEngine.Timeline.TimelineClip::m_DisplayName
	String_t* ___m_DisplayName_30;

public:
	inline static int32_t get_offset_of_m_Version_1() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Version_1)); }
	inline int32_t get_m_Version_1() const { return ___m_Version_1; }
	inline int32_t* get_address_of_m_Version_1() { return &___m_Version_1; }
	inline void set_m_Version_1(int32_t value)
	{
		___m_Version_1 = value;
	}

	inline static int32_t get_offset_of_m_Start_9() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Start_9)); }
	inline double get_m_Start_9() const { return ___m_Start_9; }
	inline double* get_address_of_m_Start_9() { return &___m_Start_9; }
	inline void set_m_Start_9(double value)
	{
		___m_Start_9 = value;
	}

	inline static int32_t get_offset_of_m_ClipIn_10() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ClipIn_10)); }
	inline double get_m_ClipIn_10() const { return ___m_ClipIn_10; }
	inline double* get_address_of_m_ClipIn_10() { return &___m_ClipIn_10; }
	inline void set_m_ClipIn_10(double value)
	{
		___m_ClipIn_10 = value;
	}

	inline static int32_t get_offset_of_m_Asset_11() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Asset_11)); }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * get_m_Asset_11() const { return ___m_Asset_11; }
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** get_address_of_m_Asset_11() { return &___m_Asset_11; }
	inline void set_m_Asset_11(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		___m_Asset_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Asset_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Duration_12() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Duration_12)); }
	inline double get_m_Duration_12() const { return ___m_Duration_12; }
	inline double* get_address_of_m_Duration_12() { return &___m_Duration_12; }
	inline void set_m_Duration_12(double value)
	{
		___m_Duration_12 = value;
	}

	inline static int32_t get_offset_of_m_TimeScale_13() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_TimeScale_13)); }
	inline double get_m_TimeScale_13() const { return ___m_TimeScale_13; }
	inline double* get_address_of_m_TimeScale_13() { return &___m_TimeScale_13; }
	inline void set_m_TimeScale_13(double value)
	{
		___m_TimeScale_13 = value;
	}

	inline static int32_t get_offset_of_m_ParentTrack_14() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ParentTrack_14)); }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * get_m_ParentTrack_14() const { return ___m_ParentTrack_14; }
	inline TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 ** get_address_of_m_ParentTrack_14() { return &___m_ParentTrack_14; }
	inline void set_m_ParentTrack_14(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * value)
	{
		___m_ParentTrack_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentTrack_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_EaseInDuration_15() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_EaseInDuration_15)); }
	inline double get_m_EaseInDuration_15() const { return ___m_EaseInDuration_15; }
	inline double* get_address_of_m_EaseInDuration_15() { return &___m_EaseInDuration_15; }
	inline void set_m_EaseInDuration_15(double value)
	{
		___m_EaseInDuration_15 = value;
	}

	inline static int32_t get_offset_of_m_EaseOutDuration_16() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_EaseOutDuration_16)); }
	inline double get_m_EaseOutDuration_16() const { return ___m_EaseOutDuration_16; }
	inline double* get_address_of_m_EaseOutDuration_16() { return &___m_EaseOutDuration_16; }
	inline void set_m_EaseOutDuration_16(double value)
	{
		___m_EaseOutDuration_16 = value;
	}

	inline static int32_t get_offset_of_m_BlendInDuration_17() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendInDuration_17)); }
	inline double get_m_BlendInDuration_17() const { return ___m_BlendInDuration_17; }
	inline double* get_address_of_m_BlendInDuration_17() { return &___m_BlendInDuration_17; }
	inline void set_m_BlendInDuration_17(double value)
	{
		___m_BlendInDuration_17 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutDuration_18() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendOutDuration_18)); }
	inline double get_m_BlendOutDuration_18() const { return ___m_BlendOutDuration_18; }
	inline double* get_address_of_m_BlendOutDuration_18() { return &___m_BlendOutDuration_18; }
	inline void set_m_BlendOutDuration_18(double value)
	{
		___m_BlendOutDuration_18 = value;
	}

	inline static int32_t get_offset_of_m_MixInCurve_19() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_MixInCurve_19)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_MixInCurve_19() const { return ___m_MixInCurve_19; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_MixInCurve_19() { return &___m_MixInCurve_19; }
	inline void set_m_MixInCurve_19(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_MixInCurve_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixInCurve_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_MixOutCurve_20() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_MixOutCurve_20)); }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * get_m_MixOutCurve_20() const { return ___m_MixOutCurve_20; }
	inline AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 ** get_address_of_m_MixOutCurve_20() { return &___m_MixOutCurve_20; }
	inline void set_m_MixOutCurve_20(AnimationCurve_t2D452A14820CEDB83BFF2C911682A4E59001AD03 * value)
	{
		___m_MixOutCurve_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MixOutCurve_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_BlendInCurveMode_21() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendInCurveMode_21)); }
	inline int32_t get_m_BlendInCurveMode_21() const { return ___m_BlendInCurveMode_21; }
	inline int32_t* get_address_of_m_BlendInCurveMode_21() { return &___m_BlendInCurveMode_21; }
	inline void set_m_BlendInCurveMode_21(int32_t value)
	{
		___m_BlendInCurveMode_21 = value;
	}

	inline static int32_t get_offset_of_m_BlendOutCurveMode_22() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_BlendOutCurveMode_22)); }
	inline int32_t get_m_BlendOutCurveMode_22() const { return ___m_BlendOutCurveMode_22; }
	inline int32_t* get_address_of_m_BlendOutCurveMode_22() { return &___m_BlendOutCurveMode_22; }
	inline void set_m_BlendOutCurveMode_22(int32_t value)
	{
		___m_BlendOutCurveMode_22 = value;
	}

	inline static int32_t get_offset_of_m_ExposedParameterNames_23() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_ExposedParameterNames_23)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_m_ExposedParameterNames_23() const { return ___m_ExposedParameterNames_23; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_m_ExposedParameterNames_23() { return &___m_ExposedParameterNames_23; }
	inline void set_m_ExposedParameterNames_23(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___m_ExposedParameterNames_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ExposedParameterNames_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_AnimationCurves_24() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_AnimationCurves_24)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_AnimationCurves_24() const { return ___m_AnimationCurves_24; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_AnimationCurves_24() { return &___m_AnimationCurves_24; }
	inline void set_m_AnimationCurves_24(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_AnimationCurves_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationCurves_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Recordable_25() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_Recordable_25)); }
	inline bool get_m_Recordable_25() const { return ___m_Recordable_25; }
	inline bool* get_address_of_m_Recordable_25() { return &___m_Recordable_25; }
	inline void set_m_Recordable_25(bool value)
	{
		___m_Recordable_25 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationMode_26() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PostExtrapolationMode_26)); }
	inline int32_t get_m_PostExtrapolationMode_26() const { return ___m_PostExtrapolationMode_26; }
	inline int32_t* get_address_of_m_PostExtrapolationMode_26() { return &___m_PostExtrapolationMode_26; }
	inline void set_m_PostExtrapolationMode_26(int32_t value)
	{
		___m_PostExtrapolationMode_26 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationMode_27() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PreExtrapolationMode_27)); }
	inline int32_t get_m_PreExtrapolationMode_27() const { return ___m_PreExtrapolationMode_27; }
	inline int32_t* get_address_of_m_PreExtrapolationMode_27() { return &___m_PreExtrapolationMode_27; }
	inline void set_m_PreExtrapolationMode_27(int32_t value)
	{
		___m_PreExtrapolationMode_27 = value;
	}

	inline static int32_t get_offset_of_m_PostExtrapolationTime_28() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PostExtrapolationTime_28)); }
	inline double get_m_PostExtrapolationTime_28() const { return ___m_PostExtrapolationTime_28; }
	inline double* get_address_of_m_PostExtrapolationTime_28() { return &___m_PostExtrapolationTime_28; }
	inline void set_m_PostExtrapolationTime_28(double value)
	{
		___m_PostExtrapolationTime_28 = value;
	}

	inline static int32_t get_offset_of_m_PreExtrapolationTime_29() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_PreExtrapolationTime_29)); }
	inline double get_m_PreExtrapolationTime_29() const { return ___m_PreExtrapolationTime_29; }
	inline double* get_address_of_m_PreExtrapolationTime_29() { return &___m_PreExtrapolationTime_29; }
	inline void set_m_PreExtrapolationTime_29(double value)
	{
		___m_PreExtrapolationTime_29 = value;
	}

	inline static int32_t get_offset_of_m_DisplayName_30() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F, ___m_DisplayName_30)); }
	inline String_t* get_m_DisplayName_30() const { return ___m_DisplayName_30; }
	inline String_t** get_address_of_m_DisplayName_30() { return &___m_DisplayName_30; }
	inline void set_m_DisplayName_30(String_t* value)
	{
		___m_DisplayName_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisplayName_30), (void*)value);
	}
};

struct TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields
{
public:
	// UnityEngine.Timeline.ClipCaps UnityEngine.Timeline.TimelineClip::kDefaultClipCaps
	int32_t ___kDefaultClipCaps_2;
	// System.Single UnityEngine.Timeline.TimelineClip::kDefaultClipDurationInSeconds
	float ___kDefaultClipDurationInSeconds_3;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMin
	double ___kTimeScaleMin_4;
	// System.Double UnityEngine.Timeline.TimelineClip::kTimeScaleMax
	double ___kTimeScaleMax_5;
	// System.String UnityEngine.Timeline.TimelineClip::kDefaultCurvesName
	String_t* ___kDefaultCurvesName_6;
	// System.Double UnityEngine.Timeline.TimelineClip::kMinDuration
	double ___kMinDuration_7;
	// System.Double UnityEngine.Timeline.TimelineClip::kMaxTimeValue
	double ___kMaxTimeValue_8;

public:
	inline static int32_t get_offset_of_kDefaultClipCaps_2() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultClipCaps_2)); }
	inline int32_t get_kDefaultClipCaps_2() const { return ___kDefaultClipCaps_2; }
	inline int32_t* get_address_of_kDefaultClipCaps_2() { return &___kDefaultClipCaps_2; }
	inline void set_kDefaultClipCaps_2(int32_t value)
	{
		___kDefaultClipCaps_2 = value;
	}

	inline static int32_t get_offset_of_kDefaultClipDurationInSeconds_3() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultClipDurationInSeconds_3)); }
	inline float get_kDefaultClipDurationInSeconds_3() const { return ___kDefaultClipDurationInSeconds_3; }
	inline float* get_address_of_kDefaultClipDurationInSeconds_3() { return &___kDefaultClipDurationInSeconds_3; }
	inline void set_kDefaultClipDurationInSeconds_3(float value)
	{
		___kDefaultClipDurationInSeconds_3 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMin_4() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kTimeScaleMin_4)); }
	inline double get_kTimeScaleMin_4() const { return ___kTimeScaleMin_4; }
	inline double* get_address_of_kTimeScaleMin_4() { return &___kTimeScaleMin_4; }
	inline void set_kTimeScaleMin_4(double value)
	{
		___kTimeScaleMin_4 = value;
	}

	inline static int32_t get_offset_of_kTimeScaleMax_5() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kTimeScaleMax_5)); }
	inline double get_kTimeScaleMax_5() const { return ___kTimeScaleMax_5; }
	inline double* get_address_of_kTimeScaleMax_5() { return &___kTimeScaleMax_5; }
	inline void set_kTimeScaleMax_5(double value)
	{
		___kTimeScaleMax_5 = value;
	}

	inline static int32_t get_offset_of_kDefaultCurvesName_6() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kDefaultCurvesName_6)); }
	inline String_t* get_kDefaultCurvesName_6() const { return ___kDefaultCurvesName_6; }
	inline String_t** get_address_of_kDefaultCurvesName_6() { return &___kDefaultCurvesName_6; }
	inline void set_kDefaultCurvesName_6(String_t* value)
	{
		___kDefaultCurvesName_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___kDefaultCurvesName_6), (void*)value);
	}

	inline static int32_t get_offset_of_kMinDuration_7() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kMinDuration_7)); }
	inline double get_kMinDuration_7() const { return ___kMinDuration_7; }
	inline double* get_address_of_kMinDuration_7() { return &___kMinDuration_7; }
	inline void set_kMinDuration_7(double value)
	{
		___kMinDuration_7 = value;
	}

	inline static int32_t get_offset_of_kMaxTimeValue_8() { return static_cast<int32_t>(offsetof(TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F_StaticFields, ___kMaxTimeValue_8)); }
	inline double get_kMaxTimeValue_8() const { return ___kMaxTimeValue_8; }
	inline double* get_address_of_kMaxTimeValue_8() { return &___kMaxTimeValue_8; }
	inline void set_kMaxTimeValue_8(double value)
	{
		___kMaxTimeValue_8 = value;
	}
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


// UnityEngine.UnityException
struct  UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101  : public Exception_t
{
public:

public:
};


// System.Security.Cryptography.X509Certificates.X509ChainStatus
struct  X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB 
{
public:
	// System.Security.Cryptography.X509Certificates.X509ChainStatusFlags System.Security.Cryptography.X509Certificates.X509ChainStatus::status
	int32_t ___status_0;
	// System.String System.Security.Cryptography.X509Certificates.X509ChainStatus::info
	String_t* ___info_1;

public:
	inline static int32_t get_offset_of_status_0() { return static_cast<int32_t>(offsetof(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB, ___status_0)); }
	inline int32_t get_status_0() const { return ___status_0; }
	inline int32_t* get_address_of_status_0() { return &___status_0; }
	inline void set_status_0(int32_t value)
	{
		___status_0 = value;
	}

	inline static int32_t get_offset_of_info_1() { return static_cast<int32_t>(offsetof(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB, ___info_1)); }
	inline String_t* get_info_1() const { return ___info_1; }
	inline String_t** get_address_of_info_1() { return &___info_1; }
	inline void set_info_1(String_t* value)
	{
		___info_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___info_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshaled_pinvoke
{
	int32_t ___status_0;
	char* ___info_1;
};
// Native definition for COM marshalling of System.Security.Cryptography.X509Certificates.X509ChainStatus
struct X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_marshaled_com
{
	int32_t ___status_0;
	Il2CppChar* ___info_1;
};

// UnityEngine.Camera/RenderRequest
struct  RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 
{
public:
	// UnityEngine.Camera/RenderRequestMode UnityEngine.Camera/RenderRequest::m_CameraRenderMode
	int32_t ___m_CameraRenderMode_0;
	// UnityEngine.RenderTexture UnityEngine.Camera/RenderRequest::m_ResultRT
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	// UnityEngine.Camera/RenderRequestOutputSpace UnityEngine.Camera/RenderRequest::m_OutputSpace
	int32_t ___m_OutputSpace_2;

public:
	inline static int32_t get_offset_of_m_CameraRenderMode_0() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_CameraRenderMode_0)); }
	inline int32_t get_m_CameraRenderMode_0() const { return ___m_CameraRenderMode_0; }
	inline int32_t* get_address_of_m_CameraRenderMode_0() { return &___m_CameraRenderMode_0; }
	inline void set_m_CameraRenderMode_0(int32_t value)
	{
		___m_CameraRenderMode_0 = value;
	}

	inline static int32_t get_offset_of_m_ResultRT_1() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_ResultRT_1)); }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * get_m_ResultRT_1() const { return ___m_ResultRT_1; }
	inline RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 ** get_address_of_m_ResultRT_1() { return &___m_ResultRT_1; }
	inline void set_m_ResultRT_1(RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * value)
	{
		___m_ResultRT_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ResultRT_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_OutputSpace_2() { return static_cast<int32_t>(offsetof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94, ___m_OutputSpace_2)); }
	inline int32_t get_m_OutputSpace_2() const { return ___m_OutputSpace_2; }
	inline int32_t* get_address_of_m_OutputSpace_2() { return &___m_OutputSpace_2; }
	inline void set_m_OutputSpace_2(int32_t value)
	{
		___m_OutputSpace_2 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_pinvoke
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};
// Native definition for COM marshalling of UnityEngine.Camera/RenderRequest
struct RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_marshaled_com
{
	int32_t ___m_CameraRenderMode_0;
	RenderTexture_t5FE7A5B47EF962A0E8D7BEBA05E9FC87D49A1849 * ___m_ResultRT_1;
	int32_t ___m_OutputSpace_2;
};

// UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
struct  NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 
{
public:
	// System.Double UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::time
	double ___time_0;
	// UnityEngine.Playables.INotification UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::payload
	RuntimeObject* ___payload_1;
	// System.Boolean UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::notificationFired
	bool ___notificationFired_2;
	// UnityEngine.Timeline.NotificationFlags UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry::flags
	int16_t ___flags_3;

public:
	inline static int32_t get_offset_of_time_0() { return static_cast<int32_t>(offsetof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50, ___time_0)); }
	inline double get_time_0() const { return ___time_0; }
	inline double* get_address_of_time_0() { return &___time_0; }
	inline void set_time_0(double value)
	{
		___time_0 = value;
	}

	inline static int32_t get_offset_of_payload_1() { return static_cast<int32_t>(offsetof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50, ___payload_1)); }
	inline RuntimeObject* get_payload_1() const { return ___payload_1; }
	inline RuntimeObject** get_address_of_payload_1() { return &___payload_1; }
	inline void set_payload_1(RuntimeObject* value)
	{
		___payload_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___payload_1), (void*)value);
	}

	inline static int32_t get_offset_of_notificationFired_2() { return static_cast<int32_t>(offsetof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50, ___notificationFired_2)); }
	inline bool get_notificationFired_2() const { return ___notificationFired_2; }
	inline bool* get_address_of_notificationFired_2() { return &___notificationFired_2; }
	inline void set_notificationFired_2(bool value)
	{
		___notificationFired_2 = value;
	}

	inline static int32_t get_offset_of_flags_3() { return static_cast<int32_t>(offsetof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50, ___flags_3)); }
	inline int16_t get_flags_3() const { return ___flags_3; }
	inline int16_t* get_address_of_flags_3() { return &___flags_3; }
	inline void set_flags_3(int16_t value)
	{
		___flags_3 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
struct NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_pinvoke
{
	double ___time_0;
	RuntimeObject* ___payload_1;
	int32_t ___notificationFired_2;
	int16_t ___flags_3;
};
// Native definition for COM marshalling of UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry
struct NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_marshaled_com
{
	double ___time_0;
	RuntimeObject* ___payload_1;
	int32_t ___notificationFired_2;
	int16_t ___flags_3;
};

// Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>
struct  AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 
{
public:
	// System.Byte Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::dummy
	uint8_t ___dummy_0;
	// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1::data
	LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___data_1;

public:
	inline static int32_t get_offset_of_dummy_0() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___dummy_0)); }
	inline uint8_t get_dummy_0() const { return ___dummy_0; }
	inline uint8_t* get_address_of_dummy_0() { return &___dummy_0; }
	inline void set_dummy_0(uint8_t value)
	{
		___dummy_0 = value;
	}

	inline static int32_t get_offset_of_data_1() { return static_cast<int32_t>(offsetof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17, ___data_1)); }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  get_data_1() const { return ___data_1; }
	inline LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 * get_address_of_data_1() { return &___data_1; }
	inline void set_data_1(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  value)
	{
		___data_1 = value;
	}
};


// System.Func`1<System.Int32>
struct  Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<System.Object>
struct  Func_1_t807CEE610086E24A0167BAA97A64062016E09D49  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Boolean>
struct  Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`2<System.Object,System.Object>
struct  Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436  : public MulticastDelegate_t
{
public:

public:
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.OperationCanceledException
struct  OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.Threading.CancellationToken System.OperationCanceledException::_cancellationToken
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ____cancellationToken_17;

public:
	inline static int32_t get_offset_of__cancellationToken_17() { return static_cast<int32_t>(offsetof(OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB, ____cancellationToken_17)); }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  get__cancellationToken_17() const { return ____cancellationToken_17; }
	inline CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * get_address_of__cancellationToken_17() { return &____cancellationToken_17; }
	inline void set__cancellationToken_17(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  value)
	{
		____cancellationToken_17 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&____cancellationToken_17))->___m_source_0), (void*)NULL);
	}
};


// UnityEngine.Playables.PlayableAsset
struct  PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:

public:
};


// UMA.SkinnedMeshCombiner
struct  SkinnedMeshCombiner_t8F1C9678749E1FFF3CC7567B4E0650D26C07B848  : public RuntimeObject
{
public:

public:
};

struct SkinnedMeshCombiner_t8F1C9678749E1FFF3CC7567B4E0650D26C07B848_StaticFields
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,UMA.SkinnedMeshCombiner/BoneIndexEntry> UMA.SkinnedMeshCombiner::bonesCollection
	Dictionary_2_t48AD95119D7E423189220650166490CAA3069BE8 * ___bonesCollection_0;
	// System.Collections.Generic.List`1<UnityEngine.Matrix4x4> UMA.SkinnedMeshCombiner::bindPoses
	List_1_t91D17AE90AEDBA7B4EE523A45D167B50FD7CB7A6 * ___bindPoses_1;
	// System.Collections.Generic.List`1<System.Int32> UMA.SkinnedMeshCombiner::bonesList
	List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___bonesList_2;
	// Unity.Collections.NativeArray`1<UnityEngine.BoneWeight1> UMA.SkinnedMeshCombiner::nativeBoneWeights
	NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391  ___nativeBoneWeights_3;
	// Unity.Collections.NativeArray`1<System.Byte> UMA.SkinnedMeshCombiner::nativeBonesPerVertex
	NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___nativeBonesPerVertex_4;

public:
	inline static int32_t get_offset_of_bonesCollection_0() { return static_cast<int32_t>(offsetof(SkinnedMeshCombiner_t8F1C9678749E1FFF3CC7567B4E0650D26C07B848_StaticFields, ___bonesCollection_0)); }
	inline Dictionary_2_t48AD95119D7E423189220650166490CAA3069BE8 * get_bonesCollection_0() const { return ___bonesCollection_0; }
	inline Dictionary_2_t48AD95119D7E423189220650166490CAA3069BE8 ** get_address_of_bonesCollection_0() { return &___bonesCollection_0; }
	inline void set_bonesCollection_0(Dictionary_2_t48AD95119D7E423189220650166490CAA3069BE8 * value)
	{
		___bonesCollection_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bonesCollection_0), (void*)value);
	}

	inline static int32_t get_offset_of_bindPoses_1() { return static_cast<int32_t>(offsetof(SkinnedMeshCombiner_t8F1C9678749E1FFF3CC7567B4E0650D26C07B848_StaticFields, ___bindPoses_1)); }
	inline List_1_t91D17AE90AEDBA7B4EE523A45D167B50FD7CB7A6 * get_bindPoses_1() const { return ___bindPoses_1; }
	inline List_1_t91D17AE90AEDBA7B4EE523A45D167B50FD7CB7A6 ** get_address_of_bindPoses_1() { return &___bindPoses_1; }
	inline void set_bindPoses_1(List_1_t91D17AE90AEDBA7B4EE523A45D167B50FD7CB7A6 * value)
	{
		___bindPoses_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bindPoses_1), (void*)value);
	}

	inline static int32_t get_offset_of_bonesList_2() { return static_cast<int32_t>(offsetof(SkinnedMeshCombiner_t8F1C9678749E1FFF3CC7567B4E0650D26C07B848_StaticFields, ___bonesList_2)); }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * get_bonesList_2() const { return ___bonesList_2; }
	inline List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 ** get_address_of_bonesList_2() { return &___bonesList_2; }
	inline void set_bonesList_2(List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * value)
	{
		___bonesList_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bonesList_2), (void*)value);
	}

	inline static int32_t get_offset_of_nativeBoneWeights_3() { return static_cast<int32_t>(offsetof(SkinnedMeshCombiner_t8F1C9678749E1FFF3CC7567B4E0650D26C07B848_StaticFields, ___nativeBoneWeights_3)); }
	inline NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391  get_nativeBoneWeights_3() const { return ___nativeBoneWeights_3; }
	inline NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391 * get_address_of_nativeBoneWeights_3() { return &___nativeBoneWeights_3; }
	inline void set_nativeBoneWeights_3(NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391  value)
	{
		___nativeBoneWeights_3 = value;
	}

	inline static int32_t get_offset_of_nativeBonesPerVertex_4() { return static_cast<int32_t>(offsetof(SkinnedMeshCombiner_t8F1C9678749E1FFF3CC7567B4E0650D26C07B848_StaticFields, ___nativeBonesPerVertex_4)); }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  get_nativeBonesPerVertex_4() const { return ___nativeBonesPerVertex_4; }
	inline NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785 * get_address_of_nativeBonesPerVertex_4() { return &___nativeBonesPerVertex_4; }
	inline void set_nativeBonesPerVertex_4(NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  value)
	{
		___nativeBonesPerVertex_4 = value;
	}
};


// UnityEngine.Texture2D
struct  Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF  : public Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE
{
public:

public:
};


// System.Reflection.TypeInfo
struct  TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F  : public Type_t
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


// UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo
struct  WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA 
{
public:
	// UnityEngine.Playables.Playable UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::mixer
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___mixer_0;
	// UnityEngine.Playables.Playable UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::parentMixer
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___parentMixer_1;
	// System.Int32 UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo::port
	int32_t ___port_2;

public:
	inline static int32_t get_offset_of_mixer_0() { return static_cast<int32_t>(offsetof(WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA, ___mixer_0)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_mixer_0() const { return ___mixer_0; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_mixer_0() { return &___mixer_0; }
	inline void set_mixer_0(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___mixer_0 = value;
	}

	inline static int32_t get_offset_of_parentMixer_1() { return static_cast<int32_t>(offsetof(WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA, ___parentMixer_1)); }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  get_parentMixer_1() const { return ___parentMixer_1; }
	inline Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * get_address_of_parentMixer_1() { return &___parentMixer_1; }
	inline void set_parentMixer_1(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  value)
	{
		___parentMixer_1 = value;
	}

	inline static int32_t get_offset_of_port_2() { return static_cast<int32_t>(offsetof(WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA, ___port_2)); }
	inline int32_t get_port_2() const { return ___port_2; }
	inline int32_t* get_address_of_port_2() { return &___port_2; }
	inline void set_port_2(int32_t value)
	{
		___port_2 = value;
	}
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};


// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// System.RuntimeType
struct  RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07  : public TypeInfo_tFFBAC0D7187BFD2D25CC801679BC9645020EC04F
{
public:
	// System.MonoTypeInfo System.RuntimeType::type_info
	MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * ___type_info_26;
	// System.Object System.RuntimeType::GenericCache
	RuntimeObject * ___GenericCache_27;
	// System.Reflection.RuntimeConstructorInfo System.RuntimeType::m_serializationCtor
	RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * ___m_serializationCtor_28;

public:
	inline static int32_t get_offset_of_type_info_26() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___type_info_26)); }
	inline MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * get_type_info_26() const { return ___type_info_26; }
	inline MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 ** get_address_of_type_info_26() { return &___type_info_26; }
	inline void set_type_info_26(MonoTypeInfo_tD048FE6E8A79174435DD9BA986294B02C68DFC79 * value)
	{
		___type_info_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___type_info_26), (void*)value);
	}

	inline static int32_t get_offset_of_GenericCache_27() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___GenericCache_27)); }
	inline RuntimeObject * get_GenericCache_27() const { return ___GenericCache_27; }
	inline RuntimeObject ** get_address_of_GenericCache_27() { return &___GenericCache_27; }
	inline void set_GenericCache_27(RuntimeObject * value)
	{
		___GenericCache_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GenericCache_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_serializationCtor_28() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07, ___m_serializationCtor_28)); }
	inline RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * get_m_serializationCtor_28() const { return ___m_serializationCtor_28; }
	inline RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB ** get_address_of_m_serializationCtor_28() { return &___m_serializationCtor_28; }
	inline void set_m_serializationCtor_28(RuntimeConstructorInfo_t9B65F4BAA154E6B8888A68FA9BA02993090876BB * value)
	{
		___m_serializationCtor_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_serializationCtor_28), (void*)value);
	}
};

struct RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields
{
public:
	// System.RuntimeType System.RuntimeType::ValueType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___ValueType_10;
	// System.RuntimeType System.RuntimeType::EnumType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___EnumType_11;
	// System.RuntimeType System.RuntimeType::ObjectType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___ObjectType_12;
	// System.RuntimeType System.RuntimeType::StringType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___StringType_13;
	// System.RuntimeType System.RuntimeType::DelegateType
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___DelegateType_14;
	// System.Type[] System.RuntimeType::s_SICtorParamTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___s_SICtorParamTypes_15;
	// System.RuntimeType System.RuntimeType::s_typedRef
	RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___s_typedRef_25;

public:
	inline static int32_t get_offset_of_ValueType_10() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___ValueType_10)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_ValueType_10() const { return ___ValueType_10; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_ValueType_10() { return &___ValueType_10; }
	inline void set_ValueType_10(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___ValueType_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueType_10), (void*)value);
	}

	inline static int32_t get_offset_of_EnumType_11() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___EnumType_11)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_EnumType_11() const { return ___EnumType_11; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_EnumType_11() { return &___EnumType_11; }
	inline void set_EnumType_11(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___EnumType_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EnumType_11), (void*)value);
	}

	inline static int32_t get_offset_of_ObjectType_12() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___ObjectType_12)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_ObjectType_12() const { return ___ObjectType_12; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_ObjectType_12() { return &___ObjectType_12; }
	inline void set_ObjectType_12(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___ObjectType_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObjectType_12), (void*)value);
	}

	inline static int32_t get_offset_of_StringType_13() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___StringType_13)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_StringType_13() const { return ___StringType_13; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_StringType_13() { return &___StringType_13; }
	inline void set_StringType_13(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___StringType_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___StringType_13), (void*)value);
	}

	inline static int32_t get_offset_of_DelegateType_14() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___DelegateType_14)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_DelegateType_14() const { return ___DelegateType_14; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_DelegateType_14() { return &___DelegateType_14; }
	inline void set_DelegateType_14(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___DelegateType_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DelegateType_14), (void*)value);
	}

	inline static int32_t get_offset_of_s_SICtorParamTypes_15() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___s_SICtorParamTypes_15)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_s_SICtorParamTypes_15() const { return ___s_SICtorParamTypes_15; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_s_SICtorParamTypes_15() { return &___s_SICtorParamTypes_15; }
	inline void set_s_SICtorParamTypes_15(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___s_SICtorParamTypes_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_SICtorParamTypes_15), (void*)value);
	}

	inline static int32_t get_offset_of_s_typedRef_25() { return static_cast<int32_t>(offsetof(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_StaticFields, ___s_typedRef_25)); }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * get_s_typedRef_25() const { return ___s_typedRef_25; }
	inline RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 ** get_address_of_s_typedRef_25() { return &___s_typedRef_25; }
	inline void set_s_typedRef_25(RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * value)
	{
		___s_typedRef_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_typedRef_25), (void*)value);
	}
};


// UnityEngine.Timeline.TimelineAsset
struct  TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// System.Int32 UnityEngine.Timeline.TimelineAsset::m_Version
	int32_t ___m_Version_5;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TimelineAsset::m_Tracks
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Tracks_6;
	// System.Double UnityEngine.Timeline.TimelineAsset::m_FixedDuration
	double ___m_FixedDuration_7;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TimelineAsset::m_CacheOutputTracks
	TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* ___m_CacheOutputTracks_8;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TimelineAsset::m_CacheRootTracks
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___m_CacheRootTracks_9;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TimelineAsset::m_CacheFlattenedTracks
	List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * ___m_CacheFlattenedTracks_10;
	// UnityEngine.Timeline.TimelineAsset/EditorSettings UnityEngine.Timeline.TimelineAsset::m_EditorSettings
	EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * ___m_EditorSettings_11;
	// UnityEngine.Timeline.TimelineAsset/DurationMode UnityEngine.Timeline.TimelineAsset::m_DurationMode
	int32_t ___m_DurationMode_12;
	// UnityEngine.Timeline.MarkerTrack UnityEngine.Timeline.TimelineAsset::m_MarkerTrack
	MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0 * ___m_MarkerTrack_13;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_Tracks_6() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_Tracks_6)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Tracks_6() const { return ___m_Tracks_6; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Tracks_6() { return &___m_Tracks_6; }
	inline void set_m_Tracks_6(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Tracks_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Tracks_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_FixedDuration_7() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_FixedDuration_7)); }
	inline double get_m_FixedDuration_7() const { return ___m_FixedDuration_7; }
	inline double* get_address_of_m_FixedDuration_7() { return &___m_FixedDuration_7; }
	inline void set_m_FixedDuration_7(double value)
	{
		___m_FixedDuration_7 = value;
	}

	inline static int32_t get_offset_of_m_CacheOutputTracks_8() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_CacheOutputTracks_8)); }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* get_m_CacheOutputTracks_8() const { return ___m_CacheOutputTracks_8; }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B** get_address_of_m_CacheOutputTracks_8() { return &___m_CacheOutputTracks_8; }
	inline void set_m_CacheOutputTracks_8(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* value)
	{
		___m_CacheOutputTracks_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheOutputTracks_8), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheRootTracks_9() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_CacheRootTracks_9)); }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * get_m_CacheRootTracks_9() const { return ___m_CacheRootTracks_9; }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 ** get_address_of_m_CacheRootTracks_9() { return &___m_CacheRootTracks_9; }
	inline void set_m_CacheRootTracks_9(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * value)
	{
		___m_CacheRootTracks_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheRootTracks_9), (void*)value);
	}

	inline static int32_t get_offset_of_m_CacheFlattenedTracks_10() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_CacheFlattenedTracks_10)); }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * get_m_CacheFlattenedTracks_10() const { return ___m_CacheFlattenedTracks_10; }
	inline List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 ** get_address_of_m_CacheFlattenedTracks_10() { return &___m_CacheFlattenedTracks_10; }
	inline void set_m_CacheFlattenedTracks_10(List_1_tA5F79D75B0DDD71AFB7825B7C5CA477A2D2513D4 * value)
	{
		___m_CacheFlattenedTracks_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CacheFlattenedTracks_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_EditorSettings_11() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_EditorSettings_11)); }
	inline EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * get_m_EditorSettings_11() const { return ___m_EditorSettings_11; }
	inline EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B ** get_address_of_m_EditorSettings_11() { return &___m_EditorSettings_11; }
	inline void set_m_EditorSettings_11(EditorSettings_t35E79F06DFA6F7582674D115EB4FCE4BEB3ABF0B * value)
	{
		___m_EditorSettings_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_EditorSettings_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_DurationMode_12() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_DurationMode_12)); }
	inline int32_t get_m_DurationMode_12() const { return ___m_DurationMode_12; }
	inline int32_t* get_address_of_m_DurationMode_12() { return &___m_DurationMode_12; }
	inline void set_m_DurationMode_12(int32_t value)
	{
		___m_DurationMode_12 = value;
	}

	inline static int32_t get_offset_of_m_MarkerTrack_13() { return static_cast<int32_t>(offsetof(TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF, ___m_MarkerTrack_13)); }
	inline MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0 * get_m_MarkerTrack_13() const { return ___m_MarkerTrack_13; }
	inline MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0 ** get_address_of_m_MarkerTrack_13() { return &___m_MarkerTrack_13; }
	inline void set_m_MarkerTrack_13(MarkerTrack_tBE21AC18CB3C657B0A9CC936FF882EE7AF7A06C0 * value)
	{
		___m_MarkerTrack_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MarkerTrack_13), (void*)value);
	}
};


// UnityEngine.Timeline.TrackAsset
struct  TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628  : public PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137
{
public:
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_Version
	int32_t ___m_Version_5;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_AnimClip
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_AnimClip_6;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Locked
	bool ___m_Locked_11;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_Muted
	bool ___m_Muted_12;
	// System.String UnityEngine.Timeline.TrackAsset::m_CustomPlayableFullTypename
	String_t* ___m_CustomPlayableFullTypename_13;
	// UnityEngine.AnimationClip UnityEngine.Timeline.TrackAsset::m_Curves
	AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * ___m_Curves_14;
	// UnityEngine.Playables.PlayableAsset UnityEngine.Timeline.TrackAsset::m_Parent
	PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * ___m_Parent_15;
	// System.Collections.Generic.List`1<UnityEngine.ScriptableObject> UnityEngine.Timeline.TrackAsset::m_Children
	List_1_tEB4537E121ED7128292F5E49486823EB846576FE * ___m_Children_16;
	// System.Int32 UnityEngine.Timeline.TrackAsset::m_ItemsHash
	int32_t ___m_ItemsHash_17;
	// UnityEngine.Timeline.TimelineClip[] UnityEngine.Timeline.TrackAsset::m_ClipsCache
	TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* ___m_ClipsCache_18;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_Start
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___m_Start_19;
	// UnityEngine.Timeline.DiscreteTime UnityEngine.Timeline.TrackAsset::m_End
	DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  ___m_End_20;
	// System.Boolean UnityEngine.Timeline.TrackAsset::m_CacheSorted
	bool ___m_CacheSorted_21;
	// System.Nullable`1<System.Boolean> UnityEngine.Timeline.TrackAsset::m_SupportsNotifications
	Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  ___m_SupportsNotifications_22;
	// System.Collections.Generic.IEnumerable`1<UnityEngine.Timeline.TrackAsset> UnityEngine.Timeline.TrackAsset::m_ChildTrackCache
	RuntimeObject* ___m_ChildTrackCache_24;
	// System.Collections.Generic.List`1<UnityEngine.Timeline.TimelineClip> UnityEngine.Timeline.TrackAsset::m_Clips
	List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * ___m_Clips_26;
	// UnityEngine.Timeline.MarkerList UnityEngine.Timeline.TrackAsset::m_Markers
	MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  ___m_Markers_27;

public:
	inline static int32_t get_offset_of_m_Version_5() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Version_5)); }
	inline int32_t get_m_Version_5() const { return ___m_Version_5; }
	inline int32_t* get_address_of_m_Version_5() { return &___m_Version_5; }
	inline void set_m_Version_5(int32_t value)
	{
		___m_Version_5 = value;
	}

	inline static int32_t get_offset_of_m_AnimClip_6() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_AnimClip_6)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_AnimClip_6() const { return ___m_AnimClip_6; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_AnimClip_6() { return &___m_AnimClip_6; }
	inline void set_m_AnimClip_6(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_AnimClip_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimClip_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Locked_11() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Locked_11)); }
	inline bool get_m_Locked_11() const { return ___m_Locked_11; }
	inline bool* get_address_of_m_Locked_11() { return &___m_Locked_11; }
	inline void set_m_Locked_11(bool value)
	{
		___m_Locked_11 = value;
	}

	inline static int32_t get_offset_of_m_Muted_12() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Muted_12)); }
	inline bool get_m_Muted_12() const { return ___m_Muted_12; }
	inline bool* get_address_of_m_Muted_12() { return &___m_Muted_12; }
	inline void set_m_Muted_12(bool value)
	{
		___m_Muted_12 = value;
	}

	inline static int32_t get_offset_of_m_CustomPlayableFullTypename_13() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_CustomPlayableFullTypename_13)); }
	inline String_t* get_m_CustomPlayableFullTypename_13() const { return ___m_CustomPlayableFullTypename_13; }
	inline String_t** get_address_of_m_CustomPlayableFullTypename_13() { return &___m_CustomPlayableFullTypename_13; }
	inline void set_m_CustomPlayableFullTypename_13(String_t* value)
	{
		___m_CustomPlayableFullTypename_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CustomPlayableFullTypename_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Curves_14() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Curves_14)); }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * get_m_Curves_14() const { return ___m_Curves_14; }
	inline AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 ** get_address_of_m_Curves_14() { return &___m_Curves_14; }
	inline void set_m_Curves_14(AnimationClip_tD9BFD73D43793BA608D5C0B46BE29EB59E40D178 * value)
	{
		___m_Curves_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Curves_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_Parent_15() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Parent_15)); }
	inline PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * get_m_Parent_15() const { return ___m_Parent_15; }
	inline PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 ** get_address_of_m_Parent_15() { return &___m_Parent_15; }
	inline void set_m_Parent_15(PlayableAsset_t5AD1606B76C9753A7F4C6B1061193F581023F137 * value)
	{
		___m_Parent_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Parent_15), (void*)value);
	}

	inline static int32_t get_offset_of_m_Children_16() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Children_16)); }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE * get_m_Children_16() const { return ___m_Children_16; }
	inline List_1_tEB4537E121ED7128292F5E49486823EB846576FE ** get_address_of_m_Children_16() { return &___m_Children_16; }
	inline void set_m_Children_16(List_1_tEB4537E121ED7128292F5E49486823EB846576FE * value)
	{
		___m_Children_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Children_16), (void*)value);
	}

	inline static int32_t get_offset_of_m_ItemsHash_17() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ItemsHash_17)); }
	inline int32_t get_m_ItemsHash_17() const { return ___m_ItemsHash_17; }
	inline int32_t* get_address_of_m_ItemsHash_17() { return &___m_ItemsHash_17; }
	inline void set_m_ItemsHash_17(int32_t value)
	{
		___m_ItemsHash_17 = value;
	}

	inline static int32_t get_offset_of_m_ClipsCache_18() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ClipsCache_18)); }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* get_m_ClipsCache_18() const { return ___m_ClipsCache_18; }
	inline TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD** get_address_of_m_ClipsCache_18() { return &___m_ClipsCache_18; }
	inline void set_m_ClipsCache_18(TimelineClipU5BU5D_t66DC8D6328CC48BA45A4072E4A25E7540B531ABD* value)
	{
		___m_ClipsCache_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ClipsCache_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_Start_19() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Start_19)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_m_Start_19() const { return ___m_Start_19; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_m_Start_19() { return &___m_Start_19; }
	inline void set_m_Start_19(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___m_Start_19 = value;
	}

	inline static int32_t get_offset_of_m_End_20() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_End_20)); }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  get_m_End_20() const { return ___m_End_20; }
	inline DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F * get_address_of_m_End_20() { return &___m_End_20; }
	inline void set_m_End_20(DiscreteTime_tCF3EC7AD37854B10B43578F44DA55FA40D9D3C9F  value)
	{
		___m_End_20 = value;
	}

	inline static int32_t get_offset_of_m_CacheSorted_21() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_CacheSorted_21)); }
	inline bool get_m_CacheSorted_21() const { return ___m_CacheSorted_21; }
	inline bool* get_address_of_m_CacheSorted_21() { return &___m_CacheSorted_21; }
	inline void set_m_CacheSorted_21(bool value)
	{
		___m_CacheSorted_21 = value;
	}

	inline static int32_t get_offset_of_m_SupportsNotifications_22() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_SupportsNotifications_22)); }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  get_m_SupportsNotifications_22() const { return ___m_SupportsNotifications_22; }
	inline Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3 * get_address_of_m_SupportsNotifications_22() { return &___m_SupportsNotifications_22; }
	inline void set_m_SupportsNotifications_22(Nullable_1_t1D1CD146BFCBDC2E53E1F700889F8C5C21063EF3  value)
	{
		___m_SupportsNotifications_22 = value;
	}

	inline static int32_t get_offset_of_m_ChildTrackCache_24() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_ChildTrackCache_24)); }
	inline RuntimeObject* get_m_ChildTrackCache_24() const { return ___m_ChildTrackCache_24; }
	inline RuntimeObject** get_address_of_m_ChildTrackCache_24() { return &___m_ChildTrackCache_24; }
	inline void set_m_ChildTrackCache_24(RuntimeObject* value)
	{
		___m_ChildTrackCache_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChildTrackCache_24), (void*)value);
	}

	inline static int32_t get_offset_of_m_Clips_26() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Clips_26)); }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * get_m_Clips_26() const { return ___m_Clips_26; }
	inline List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C ** get_address_of_m_Clips_26() { return &___m_Clips_26; }
	inline void set_m_Clips_26(List_1_t8510F75FE95B25D670E78B2D50D473129A882F3C * value)
	{
		___m_Clips_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Clips_26), (void*)value);
	}

	inline static int32_t get_offset_of_m_Markers_27() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628, ___m_Markers_27)); }
	inline MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  get_m_Markers_27() const { return ___m_Markers_27; }
	inline MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D * get_address_of_m_Markers_27() { return &___m_Markers_27; }
	inline void set_m_Markers_27(MarkerList_t1D16DBEA1BD207C30DE2F2A00D5942865882223D  value)
	{
		___m_Markers_27 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Objects_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Markers_27))->___m_Cache_1), (void*)NULL);
		#endif
	}
};

struct TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields
{
public:
	// UnityEngine.Timeline.TrackAsset/TransientBuildData UnityEngine.Timeline.TrackAsset::s_BuildData
	TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  ___s_BuildData_7;
	// System.Action`3<UnityEngine.Timeline.TimelineClip,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnClipPlayableCreate
	Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * ___OnClipPlayableCreate_9;
	// System.Action`3<UnityEngine.Timeline.TrackAsset,UnityEngine.GameObject,UnityEngine.Playables.Playable> UnityEngine.Timeline.TrackAsset::OnTrackAnimationPlayableCreate
	Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * ___OnTrackAnimationPlayableCreate_10;
	// UnityEngine.Timeline.TrackAsset[] UnityEngine.Timeline.TrackAsset::s_EmptyCache
	TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* ___s_EmptyCache_23;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.Timeline.TrackBindingTypeAttribute> UnityEngine.Timeline.TrackAsset::s_TrackBindingTypeAttributeCache
	Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * ___s_TrackBindingTypeAttributeCache_25;

public:
	inline static int32_t get_offset_of_s_BuildData_7() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_BuildData_7)); }
	inline TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  get_s_BuildData_7() const { return ___s_BuildData_7; }
	inline TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F * get_address_of_s_BuildData_7() { return &___s_BuildData_7; }
	inline void set_s_BuildData_7(TransientBuildData_t9712699B02114AB8ED38C4D17EA5989208B2FF2F  value)
	{
		___s_BuildData_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___trackList_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___clipList_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___s_BuildData_7))->___markerList_2), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_OnClipPlayableCreate_9() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___OnClipPlayableCreate_9)); }
	inline Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * get_OnClipPlayableCreate_9() const { return ___OnClipPlayableCreate_9; }
	inline Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 ** get_address_of_OnClipPlayableCreate_9() { return &___OnClipPlayableCreate_9; }
	inline void set_OnClipPlayableCreate_9(Action_3_t3BCC6286248E2BB441C51F6759481EBDFD701F81 * value)
	{
		___OnClipPlayableCreate_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnClipPlayableCreate_9), (void*)value);
	}

	inline static int32_t get_offset_of_OnTrackAnimationPlayableCreate_10() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___OnTrackAnimationPlayableCreate_10)); }
	inline Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * get_OnTrackAnimationPlayableCreate_10() const { return ___OnTrackAnimationPlayableCreate_10; }
	inline Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 ** get_address_of_OnTrackAnimationPlayableCreate_10() { return &___OnTrackAnimationPlayableCreate_10; }
	inline void set_OnTrackAnimationPlayableCreate_10(Action_3_tF30EE3D5033A43AF7E69A1AD8FA9ACC8EACE4E41 * value)
	{
		___OnTrackAnimationPlayableCreate_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnTrackAnimationPlayableCreate_10), (void*)value);
	}

	inline static int32_t get_offset_of_s_EmptyCache_23() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_EmptyCache_23)); }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* get_s_EmptyCache_23() const { return ___s_EmptyCache_23; }
	inline TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B** get_address_of_s_EmptyCache_23() { return &___s_EmptyCache_23; }
	inline void set_s_EmptyCache_23(TrackAssetU5BU5D_t624FA4D69A21181D1A43D031EF0EA6A4E73EF27B* value)
	{
		___s_EmptyCache_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EmptyCache_23), (void*)value);
	}

	inline static int32_t get_offset_of_s_TrackBindingTypeAttributeCache_25() { return static_cast<int32_t>(offsetof(TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628_StaticFields, ___s_TrackBindingTypeAttributeCache_25)); }
	inline Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * get_s_TrackBindingTypeAttributeCache_25() const { return ___s_TrackBindingTypeAttributeCache_25; }
	inline Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 ** get_address_of_s_TrackBindingTypeAttributeCache_25() { return &___s_TrackBindingTypeAttributeCache_25; }
	inline void set_s_TrackBindingTypeAttributeCache_25(Dictionary_2_t076A281176CDEB6BCB84032659ED250C9E435494 * value)
	{
		___s_TrackBindingTypeAttributeCache_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_TrackBindingTypeAttributeCache_25), (void*)value);
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

#ifdef __clang__
#pragma clang diagnostic pop
#endif
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
// UnityEngine.Object[]
struct ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * m_Items[1];

public:
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Object_tF2F3778131EFF286AF62B7B013A170F95A91571A ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.ClothSkinningCoefficient[]
struct ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0  m_Items[1];

public:
	inline ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Color32[]
struct Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  m_Items[1];

public:
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  m_Items[1];

public:
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
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
// UnityEngine.Vector4[]
struct Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  m_Items[1];

public:
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
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
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m2A4CA2550B5F583EA5F0E572DF8CF5A87BBFE85D_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationLayerMixerPlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m3E402CBD0DA9906EED05A2A5417CD83CF6C564F9_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationMixerPlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m5C731B1FD992B1AF68F0E1479FDCDAA6346621BF_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationMotionXToDeltaPlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_mABCFC5F718D163D25D229D9FDD801C775829FBE1_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationOffsetPlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_mEC86F707BFB7B6090F94974D44922ED5303A5AD0_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationRemoveScalePlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_m173C0E6B4780153AEC01D69B71D0EC1B8BD7F41A_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Playables.Playable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m2ADC8E9AF75BCEF3975763BED4CC0E17E8BC573F_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method);
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_mFBE2A77CDE814F1CADA716F5C0A70756046268F5_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutput::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_m4B7FDA63F17AC1567A56F9EFBD3CE01847B71D42_gshared (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisRuntimeObject_m4B025A7413B237F3CA22090288A23B955B8DE7CA_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Playables.ScriptPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_tC84FD711C54470AF76109EC9236489F86CDC7087_m9EF2993262A289653DFA93D8462F96A0E7A91489_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.UInt32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3_gshared (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0  Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625  Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline (KeyValuePair_2_tFB6A066C69E28C6ACA5FC5E24D969BFADC5FA625 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared (Enumerator_tE4E91EE5578038530CF0C46227953BA787E7A0A0 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, RuntimeObject * ___key0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Values()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueCollection_t0ACCC25930444F15B1857D00E9FB6021E5842852 * Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Keys()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared (Dictionary_2_tBD1E3221EBD04CEBDA49B84779912E91F56B958D * __this, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.Object,System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031  KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared (KeyCollection_tCA4820F8266AF4059CC5A14888D8195F0D797499 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.Object,System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared (Enumerator_t4F7151B1D8B03D97F931400ABBC97A08CE419031 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::TryGetValue(!0,!1&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject ** ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);

// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, String_t* ___paramName1, const RuntimeMethod* method);
// System.Void UnityEngine.NoAllocHelpers::Internal_ResizeList(System.Object,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6 (RuntimeObject * ___list0, int32_t ___size1, const RuntimeMethod* method);
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::FindObjectOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_FindObjectOfType_mFDEFCE84CE9C644F2B51DCC26CDAC78AC7E89B1B (Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Object::FindObjectsOfType(System.Type,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Object_FindObjectsOfType_m0AEB81CC6F1D224A6F4DCC7D553482D54FC03C5A (Type_t * ___type0, bool ___includeInactive1, const RuntimeMethod* method);
// System.Void UnityEngine.Object::CheckNullArgument(System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_CheckNullArgument_mFA979ED3433CACA46AC9AE0029A537B46E17D080 (RuntimeObject * ___arg0, String_t* ___message1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Internal_CloneSingle(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Internal_CloneSingle_m6C669D602DFD7BC6C47ACA19B2F4D7C853F124BB (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___data0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.UnityException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8 (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * __this, String_t* ___message0, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Object::Instantiate(UnityEngine.Object,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.Playable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351 (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableHandle::GetDuration()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetDuration_m2AB34E8F6397DA6BF090046183CE563521B00FE6 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableHandle::GetInput(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  PlayableHandle_GetInput_m62A9D166414D9975AFD4FA1643AE864CA918A233 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, int32_t ___inputPort0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableHandle::GetInputCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetInputCount_m210B285B1EDB6D92D55108E009E09B1BF3590EF9 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Playables.PlayableHandle::GetInputWeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableHandle_GetInputWeight_m48B04E735135ADBB59934F4BE868A0B6CACAEF72 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, int32_t ___inputIndex0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableHandle::GetPlayState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetPlayState_m1B178666774AC33BCC60A396437ABA7E76479BB3 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Double UnityEngine.Playables.PlayableHandle::GetTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableHandle_GetTime_m14835C693A0A82A4014F401354384EAD6349AB97 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableHandle::GetTimeWrapMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableHandle_GetTimeWrapMode_mAC082C86377F2A8CE658F09D51D2FDCFF9DF6D81 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsDone_m674DE3BFED2A0B5D8BC9E96996EA9D024E77C727 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Pause_mB3B26DE18B6F0E1CC484A9AEB316894515F4E572 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_Play_m437DFC8ECD1435AFA181E00287B6F14C90D20A5A (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetDuration(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetDuration_mAD32E3772366220B972689F2285BD588F25C8D95 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetInputCount(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, int32_t ___value0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationLayerMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439 (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::SetInputWeight(System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_SetInputWeight_m7ECA97A86428E6028FF6E542A5F13641DC7E8A57 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, int32_t ___inputIndex0, float ___weight1, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMixerPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3 (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationMotionXToDeltaPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationOffsetPlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049 (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Animations.AnimationRemoveScalePlayable::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8 (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetInputWeight(UnityEngine.Playables.PlayableHandle,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetInputWeight_m44ACDBDD2D5A5BA617DE71035F621B1C7F8F51D7 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___input0, float ___weight1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetPropagateSetTime(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetPropagateSetTime_mBD123E24FCA61291B90A7EC1AB8F95711C8A3E5C (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetSpeed(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetSpeed_mC4777C554A067AFA1E43497A2FA9242241F03A30 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetTime(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTime_m8B0B1134427EB6EADE65FE02368DA57BD33263D4 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, double ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetTimeWrapMode(UnityEngine.Playables.DirectorWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTimeWrapMode_mC59AE90EA44005C2D342B5685E98BFB61309A4DD (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableHandle::SetTraversalMode(UnityEngine.Playables.PlayableTraversalMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableHandle_SetTraversalMode_m1FD433AAFF58862BA61F3EA70AF67E189CAA67CC (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, int32_t ___mode0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableGraph::ConnectInternal(UnityEngine.Playables.PlayableHandle,System.Int32,UnityEngine.Playables.PlayableHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_ConnectInternal_mE1CE63B32B7B28DA3D5722AC160152C9C7374E2F (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___source0, int32_t ___sourceOutputPort1, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U,System.Int32,V,System.Int32)
inline bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m2A4CA2550B5F583EA5F0E572DF8CF5A87BBFE85D (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 , int32_t, const RuntimeMethod*))PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m2A4CA2550B5F583EA5F0E572DF8CF5A87BBFE85D_gshared)(__this, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationLayerMixerPlayable>(U,System.Int32,V,System.Int32)
inline bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m3E402CBD0DA9906EED05A2A5417CD83CF6C564F9 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 , int32_t, const RuntimeMethod*))PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m3E402CBD0DA9906EED05A2A5417CD83CF6C564F9_gshared)(__this, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationMixerPlayable>(U,System.Int32,V,System.Int32)
inline bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m5C731B1FD992B1AF68F0E1479FDCDAA6346621BF (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 , int32_t, const RuntimeMethod*))PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m5C731B1FD992B1AF68F0E1479FDCDAA6346621BF_gshared)(__this, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationMotionXToDeltaPlayable>(U,System.Int32,V,System.Int32)
inline bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_mABCFC5F718D163D25D229D9FDD801C775829FBE1 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 , int32_t, const RuntimeMethod*))PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_mABCFC5F718D163D25D229D9FDD801C775829FBE1_gshared)(__this, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationOffsetPlayable>(U,System.Int32,V,System.Int32)
inline bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_mEC86F707BFB7B6090F94974D44922ED5303A5AD0 (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 , int32_t, const RuntimeMethod*))PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_mEC86F707BFB7B6090F94974D44922ED5303A5AD0_gshared)(__this, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationRemoveScalePlayable>(U,System.Int32,V,System.Int32)
inline bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_m173C0E6B4780153AEC01D69B71D0EC1B8BD7F41A (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 , int32_t, const RuntimeMethod*))PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_m173C0E6B4780153AEC01D69B71D0EC1B8BD7F41A_gshared)(__this, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Playables.Playable>(U,System.Int32,V,System.Int32)
inline bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m2ADC8E9AF75BCEF3975763BED4CC0E17E8BC573F (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 , int32_t, const RuntimeMethod*))PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m2ADC8E9AF75BCEF3975763BED4CC0E17E8BC573F_gshared)(__this, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
}
// System.Object UnityEngine.Playables.PlayableHandle::GetScriptInstance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PlayableHandle_GetScriptInstance_mF4670514F611D126B454564157B3BD816DFC6C1B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
inline RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B_gshared)(__this, method);
}
// System.Type UnityEngine.Playables.PlayableHandle::GetPlayableType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
inline bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
inline bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413 (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *, const RuntimeMethod*))PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared)(__this, method);
}
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Playables.PlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_mFBE2A77CDE814F1CADA716F5C0A70756046268F5 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_mFBE2A77CDE814F1CADA716F5C0A70756046268F5_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableOutput::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
inline bool PlayableOutput_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_m4B7FDA63F17AC1567A56F9EFBD3CE01847B71D42 (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *, const RuntimeMethod*))PlayableOutput_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_m4B7FDA63F17AC1567A56F9EFBD3CE01847B71D42_gshared)(__this, method);
}
// System.Void UnityEngine.Playables.PlayableOutputHandle::AddNotificationReceiver(UnityEngine.Playables.INotificationReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_AddNotificationReceiver_m309FC7F48690943B354075410405E044E76125F5 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, RuntimeObject* ___receiver0, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableOutputHandle UnityEngine.Animations.AnimationPlayableOutput::GetHandle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0 (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Playables.PlayableOutputHandle::GetSourceOutputPort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputHandle_GetSourceOutputPort_m1218C4A70927B40F301DBB6FCC8B4DB49C033BC6 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// UnityEngine.Playables.PlayableHandle UnityEngine.Playables.PlayableOutputHandle::GetSourcePlayable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  PlayableOutputHandle_GetSourcePlayable_m6AB3B2C06A216AE791622421142569E3A3961C3A (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.Playable::.ctor(UnityEngine.Playables.PlayableHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8 (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___handle0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableOutputHandle::PushNotification(UnityEngine.Playables.PlayableHandle,UnityEngine.Playables.INotification,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_PushNotification_m873C33139252A83E5117EC97C239EEE5007B01DB (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___origin0, RuntimeObject* ___notification1, RuntimeObject * ___context2, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetReferenceObject(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetReferenceObject_mB27184B082C313AE4701F02FD3B8E7B14D880348 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetSourcePlayable(UnityEngine.Playables.PlayableHandle,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetSourcePlayable_m52F2F47CB273552A63A5937AE0A48BF71671B252 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  ___target0, int32_t ___port1, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetUserData(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetUserData_mC10EBA4025C2EAF8473B385D1B441593BDB29778 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___target0, const RuntimeMethod* method);
// System.Void UnityEngine.Playables.PlayableOutputHandle::SetWeight(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputHandle_SetWeight_m0FA09E9FC170305A12553026FA07469314980DB5 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, float ___weight0, const RuntimeMethod* method);
// System.Type UnityEngine.Playables.PlayableOutputHandle::GetPlayableOutputType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * PlayableOutputHandle_GetPlayableOutputType_mF5685ABFEE661D934CF922834229F819D0197300 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<System.Object>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisRuntimeObject_m4B025A7413B237F3CA22090288A23B955B8DE7CA (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisRuntimeObject_m4B025A7413B237F3CA22090288A23B955B8DE7CA_gshared)(__this, method);
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Playables.ScriptPlayableOutput>()
inline bool PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_tC84FD711C54470AF76109EC9236489F86CDC7087_m9EF2993262A289653DFA93D8462F96A0E7A91489 (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *, const RuntimeMethod*))PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_tC84FD711C54470AF76109EC9236489F86CDC7087_m9EF2993262A289653DFA93D8462F96A0E7A91489_gshared)(__this, method);
}
// UnityEngine.Object UnityEngine.Resources::GetBuiltinResource(System.Type,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_GetBuiltinResource_m59A7993A48D44A0002E532B7DD79BDA426E0C8A6 (Type_t * ___type0, String_t* ___path1, const RuntimeMethod* method);
// UnityEngine.Object UnityEngine.Resources::Load(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C (String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method);
// UnityEngine.Object[] UnityEngine.Resources::LoadAll(System.String,System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* Resources_LoadAll_m84D60782124BC4C7656F4CE88B03D45DF59F9A3C (String_t* ___path0, Type_t * ___systemTypeInstance1, const RuntimeMethod* method);
// System.Boolean System.Type::get_IsValueType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB (Type_t * __this, const RuntimeMethod* method);
// System.Boolean System.RuntimeTypeHandle::HasReferences(System.RuntimeType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2 (RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 * ___type0, const RuntimeMethod* method);
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4 (Type_t * ___type0, const RuntimeMethod* method);
// System.Boolean System.Threading.CancellationToken::get_IsCancellationRequested()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90 (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Threading.CancellationToken System.OperationCanceledException::get_CancellationToken()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, const RuntimeMethod* method);
// System.Threading.Tasks.TaskScheduler System.Threading.Tasks.TaskScheduler::get_Default()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline (const RuntimeMethod* method);
// System.Threading.Tasks.Task System.Threading.Tasks.Task::InternalCurrentIfAttached(System.Threading.Tasks.TaskCreationOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5 (int32_t ___creationOptions0, const RuntimeMethod* method);
// System.Void System.IO.__Error::WrongAsyncResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void __Error_WrongAsyncResult_m80DF0BBF083761CBD5A24768964FEF4FD1224BA6 (const RuntimeMethod* method);
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Int32>::GetResult()
inline int32_t TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846 (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846_gshared)(__this, method);
}
// TResult System.Runtime.CompilerServices.TaskAwaiter`1<System.Object>::GetResult()
inline RuntimeObject * TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE * __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject * (*) (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *, const RuntimeMethod*))TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA_gshared)(__this, method);
}
// UnityEngine.UnityException UnityEngine.Texture::CreateNonReadableException(UnityEngine.Texture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * Texture_CreateNonReadableException_m5BFE30599C50688EEDE149FB1CEF834BE1633306 (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * __this, Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE * ___t0, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<System.UInt32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3 (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *, const RuntimeMethod*))NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3_gshared)(__this, method);
}
// System.IntPtr System.IntPtr::op_Explicit(System.Void*)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495 (void* ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Texture2D::LoadRawTextureDataImpl(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Texture2D_LoadRawTextureDataImpl_m62693BD5CB00C42253A640095380ED8892278D5D (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, intptr_t ___data0, int32_t ___size1, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentNullException(System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5 (int32_t ___argument0, const RuntimeMethod* method);
// UnityEngine.Timeline.TrackAsset UnityEngine.Timeline.TimelineAsset::CreateTrack(System.Type,UnityEngine.Timeline.TrackAsset,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * TimelineAsset_CreateTrack_m79ACF574FF82BEB5CF4DA965746798301923875B (TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * __this, Type_t * ___type0, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___parent1, String_t* ___name2, const RuntimeMethod* method);
// UnityEngine.Timeline.TimelineClip UnityEngine.Timeline.TrackAsset::CreateClip(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * TrackAsset_CreateClip_m972CEFDE74B15CD18C7B9C28CBBF1BF687DDCA67 (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, Type_t * ___requestedType0, const RuntimeMethod* method);
// UnityEngine.Timeline.IMarker UnityEngine.Timeline.TrackAsset::CreateMarker(System.Type,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TrackAsset_CreateMarker_m8B3727B8054147BD7370D85EC2FFB0101F092793 (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, Type_t * ___type0, double ___time1, const RuntimeMethod* method);
// System.Diagnostics.Stopwatch UMA.UMAAssetIndexer::StartTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * UMAAssetIndexer_StartTimer_mC4AF49C02BA64E5803FCF550E06E07D95D4C24A0 (const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.Type>::get_Item(!0)
inline Type_t * Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A (Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  Type_t * (*) (Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem> UMA.UMAAssetIndexer::GetAssetDictionary(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * UMAAssetIndexer_GetAssetDictionary_mB5130C84D1D562EA07ACD06B5D35C9CD01856742 (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, Type_t * ___type0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>::GetEnumerator()
inline Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3  Dictionary_2_GetEnumerator_m986D7649E362E5CE5965786B7C87076ACEEC1F37 (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3  (*) (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *, const RuntimeMethod*))Dictionary_2_GetEnumerator_mA44BBB15DFBD8E08B5E60E23AA5044D45C3F889F_gshared)(__this, method);
}
// System.Collections.Generic.KeyValuePair`2<!0,!1> System.Collections.Generic.Dictionary`2/Enumerator<System.String,UMA.AssetItem>::get_Current()
inline KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  Enumerator_get_Current_m7A3E6DA83C4200301CCCE3DCFFA45B211D4CE43C_inline (Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 * __this, const RuntimeMethod* method)
{
	return ((  KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  (*) (Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *, const RuntimeMethod*))Enumerator_get_Current_m17E1C36ECBB09CC2AB892710866F8655D83A6048_gshared_inline)(__this, method);
}
// !1 System.Collections.Generic.KeyValuePair`2<System.String,UMA.AssetItem>::get_Value()
inline AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_inline (KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 * __this, const RuntimeMethod* method)
{
	return ((  AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * (*) (KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m622223593F7461E7812C581DDB145270016ED303_gshared_inline)(__this, method);
}
// System.Boolean UMA.UMAAssetIndexer::AssetFolderCheck(UMA.AssetItem,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UMAAssetIndexer_AssetFolderCheck_m062CD6395D6B49FB4A2033F02E7F8915887D8501 (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * ___itemToCheck0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___foldersToSearch1, const RuntimeMethod* method);
// UnityEngine.Object UMA.AssetItem::get_Item()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * AssetItem_get_Item_mA5B06546ACAC8C234DCD56106AAA0693B9BFF5EB_inline (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,UMA.AssetItem>::MoveNext()
inline bool Enumerator_MoveNext_mBBE93736E371613263CBBD3497F5ADF1D1A3A63A (Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *, const RuntimeMethod*))Enumerator_MoveNext_mCAD84084129516BD41DE5CC3E1FABA5A8DF836D0_gshared)(__this, method);
}
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UMA.UMAAssetIndexer::StopTimer(System.Diagnostics.Stopwatch,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMAAssetIndexer_StopTimer_m63790C352BA608B11C671C7925209D0C6145FDF2 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * ___st0, String_t* ___Status1, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>>::get_Item(!0)
inline Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * Dictionary_2_get_Item_m73F5EB5FC46552CA3C767624580C81B7307FF46F (Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 * __this, Type_t * ___key0, const RuntimeMethod* method)
{
	return ((  Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * (*) (Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 *, Type_t *, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void UMA.UMAAssetIndexer::GetEvilAssetNameAndHash(System.Type,UnityEngine.Object,System.String&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMAAssetIndexer_GetEvilAssetNameAndHash_m30430074EBB79BD4A3C5A08DA557FE8CB4952D7E (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, Type_t * ___type0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___o1, String_t** ___assetName2, int32_t ___assetHash3, const RuntimeMethod* method);
// System.Void System.Diagnostics.Stopwatch::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5 (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Debug::get_isDebugBuild()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C (const RuntimeMethod* method);
// System.String System.Int64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F (int64_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9 (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___values0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m5B6027FD49D75402DEA60A2E7D78CFBA98C5BCCD (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *, String_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m4F01DBE7409811CAB0BBA7AEFBAB4BC028D26FA6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>::get_Item(!0)
inline AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * Dictionary_2_get_Item_m8D1F51C56CAD4C749EC1CCDB795AD72484320ED2 (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * __this, String_t* ___key0, const RuntimeMethod* method)
{
	return ((  AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * (*) (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *, String_t*, const RuntimeMethod*))Dictionary_2_get_Item_mB1398A10D048A0246178C59F95003BD338CE7394_gshared)(__this, ___key0, method);
}
// System.Void System.Collections.Generic.List`1<UMA.AssetItem>::.ctor()
inline void List_1__ctor_m7B5148466AE133C5127B2963B2AE94FA1BDDB8E4 (List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/ValueCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>::get_Values()
inline ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F * Dictionary_2_get_Values_m35779C78F6C6ECD998850A2A9CE3C13331940DD5 (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * __this, const RuntimeMethod* method)
{
	return ((  ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F * (*) (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *, const RuntimeMethod*))Dictionary_2_get_Values_mC8EC343FADAE6B9CB93639D7FBCDB19ACD807DB5_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UMA.AssetItem>::AddRange(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1_AddRange_m056662453E63A6F84D80F70B7DF291DFA6B5B467 (List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 *, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m6465DEF706EB529B4227F2AF79338419D517EDF9_gshared)(__this, ___collection0, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection<!0,!1> System.Collections.Generic.Dictionary`2<System.String,UMA.AssetItem>::get_Keys()
inline KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 * Dictionary_2_get_Keys_m301F92306CBA5DA60037046138010E7C76C1B774 (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * __this, const RuntimeMethod* method)
{
	return ((  KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 * (*) (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *, const RuntimeMethod*))Dictionary_2_get_Keys_m771BB389A4CB93B7EDBDC71F503B50049B8999C7_gshared)(__this, method);
}
// System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<!0,!1> System.Collections.Generic.Dictionary`2/KeyCollection<System.String,UMA.AssetItem>::GetEnumerator()
inline Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214  KeyCollection_GetEnumerator_mC6B62D95B95970C5C4E664638C9D7873EA64E7C5 (KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214  (*) (KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 *, const RuntimeMethod*))KeyCollection_GetEnumerator_m6B4DC134BB6777F8C99D26315F359E069004CF13_gshared)(__this, method);
}
// !0 System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UMA.AssetItem>::get_Current()
inline String_t* Enumerator_get_Current_m07B09E6B744869CE90CD990555B247FBA70698BF_inline (Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 *, const RuntimeMethod*))Enumerator_get_Current_mF254C3BDEA9F0829958522BF88C75DE8BEC4961F_gshared_inline)(__this, method);
}
// System.Int32 UMA.UMAUtils::StringToHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47 (String_t* ___name0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2/KeyCollection/Enumerator<System.String,UMA.AssetItem>::MoveNext()
inline bool Enumerator_MoveNext_m68B8A1D0F62BD1367B04F5F79211FB3C1CFEE220 (Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 *, const RuntimeMethod*))Enumerator_MoveNext_m3714ECE30727E77F475635710D707743B6D930E6_gshared)(__this, method);
}
// UMA.UMAData/UMARecipe UMA.UMAData::get_umaRecipe()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35 (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * __this, const RuntimeMethod* method);
// System.Void UMA.UMAMaterialPropertyBlock::AddProperty(UMA.UMAProperty)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UMAMaterialPropertyBlock_AddProperty_m61849AE047C9275D77A6E42C61B34D3F81EF5A74 (UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869 * __this, UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C * ___property0, const RuntimeMethod* method);
// System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMADnaBase> UMA.UMAData/UMARecipe::get_umaDna()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D * UMARecipe_get_umaDna_m13DAA1E998DD50DDE1030F77F107E3CA02B01701 (UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMADnaBase>::TryGetValue(!0,!1&)
inline bool Dictionary_2_TryGetValue_mBFEF5D5AFDDBDD03BE8F36DA871D4A0720C64F73 (Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D * __this, int32_t ___key0, UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 ** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D *, int32_t, UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 **, const RuntimeMethod*))Dictionary_2_TryGetValue_m0A88BBB063127AFAD853506A433ACB07D7AAD67E_gshared)(__this, ___key0, ___value1, method);
}
// System.Reflection.ConstructorInfo System.Type::GetConstructor(System.Type[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C (Type_t * __this, TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___types0, const RuntimeMethod* method);
// System.Object System.Reflection.ConstructorInfo::Invoke(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906 (ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * __this, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___parameters0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UMA.UMADnaBase>::Add(!0,!1)
inline void Dictionary_2_Add_mC6F2CCF27E10EFFBF702A75D0F7A818FA9451D85 (Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D * __this, int32_t ___key0, UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D *, int32_t, UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UMA.UMADnaBase>::Add(!0)
inline void List_1_Add_m2F5DBA9A17813187AD99256B1B4ADA7B5201F4F4 (List_1_t6EB9C928712A968388ECB10159E456120E6DE71D * __this, UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6EB9C928712A968388ECB10159E456120E6DE71D *, UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m8C1569DE0152F03C853DC04F7385EB527B091624_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_3 = V_1;
		V_0 = (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_3;
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_4 = V_0;
		V_2 = (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2  L_5 = V_2;
		return (NativeArray_1_tF6A10DD2511425342F2B1B19CF0EA313D4F300D2 )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Plane>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mBE30B32838E7517398FD847EB4FE3D2A6DE467C9_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_3 = V_1;
		V_0 = (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_3;
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_4 = V_0;
		V_2 = (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E  L_5 = V_2;
		return (NativeArray_1_t527C586787ACD1AD75E3C78BFB024FFA9925662E )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<System.UInt32>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mDCDE2061087C100254FF521107B872F9209BA726_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_3 = V_1;
		V_0 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_3;
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_4 = V_0;
		V_2 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_5 = V_2;
		return (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_5;
	}
}
// Unity.Collections.NativeArray`1<T> Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::ConvertExistingDataToNativeArray<UnityEngine.Vector3>(System.Void*,System.Int32,Unity.Collections.Allocator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  NativeArrayUnsafeUtility_ConvertExistingDataToNativeArray_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m88D6C283C20FB07BD7C54D7CB0A0CE8CB104F0DD_gshared (void* ___dataPointer0, int32_t ___length1, int32_t ___allocator2, const RuntimeMethod* method)
{
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  V_0;
	memset((&V_0), 0, sizeof(V_0));
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  V_1;
	memset((&V_1), 0, sizeof(V_1));
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		il2cpp_codegen_initobj((&V_1), sizeof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 ));
		void* L_0 = ___dataPointer0;
		(&V_1)->set_m_Buffer_0((void*)L_0);
		int32_t L_1 = ___length1;
		(&V_1)->set_m_Length_1(L_1);
		int32_t L_2 = ___allocator2;
		(&V_1)->set_m_AllocatorLabel_2(L_2);
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_3 = V_1;
		V_0 = (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 )L_3;
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_4 = V_0;
		V_2 = (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 )L_4;
		goto IL_0027;
	}

IL_0027:
	{
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_5 = V_2;
		return (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 )L_5;
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.BoneWeight1>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisBoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA_m49ED6ED9411E6FB59CA0B86E7CA58EA855FD93A8_gshared (NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_t9E021F858027EEB2137BC6ED14AF0C9124240391  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.Byte>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m737FADCCFDDA872A91DAAF05ACB33476C33ED811_gshared (NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_t3C2855C5B238E8C6739D4C17833F244B95C0F785  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<System.UInt32>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mDD50AAC40776E439B76AF8F552653E96B22FFBED_gshared (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void* Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility::GetUnsafeReadOnlyPtr<UnityEngine.Vector3>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* NativeArrayUnsafeUtility_GetUnsafeReadOnlyPtr_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m2FC21CC938FB48A4375C10D4D6416B29336C5583_gshared (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  ___nativeArray0, const RuntimeMethod* method)
{
	void* V_0 = NULL;
	{
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_0 = ___nativeArray0;
		void* L_1 = (void*)L_0.get_m_Buffer_0();
		V_0 = (void*)L_1;
		goto IL_000a;
	}

IL_000a:
	{
		void* L_2 = V_0;
		return (void*)(L_2);
	}
}
// System.Void UnityEngine.NoAllocHelpers::EnsureListElemCount<System.Object>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisRuntimeObject_m862DEF3A3C49631D768D53E2ED9DAF0D716EF572_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, int32_t ___count1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___list0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_3 = ___count1;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		int32_t L_6 = ___count1;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_001d:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_7 = ___list0;
		int32_t L_8 = ___count1;
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::EnsureListElemCount<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_EnsureListElemCount_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mFC6B4E9E1CCAED900AA93036E007A0B2039198DF_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___list0, int32_t ___count1, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___list0;
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_1 = ___list0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		int32_t L_3 = ___count1;
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001d;
		}
	}
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___list0;
		int32_t L_6 = ___count1;
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, (int32_t)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
	}

IL_001d:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_7 = ___list0;
		int32_t L_8 = ___count1;
		((  void (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_7, (int32_t)L_8, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::ResizeList<System.Object>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list0, int32_t ___size1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___size1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___size1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)L_6))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisRuntimeObject_m7B47D97FC9235185AA88E3BE217002C6BD8C8A4C_RuntimeMethod_var)));
	}

IL_0038:
	{
		int32_t L_9 = ___size1;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_10 = ___list0;
		int32_t L_11;
		L_11 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_13 = ___list0;
		int32_t L_14 = ___size1;
		NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6((RuntimeObject *)L_13, (int32_t)L_14, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Void UnityEngine.NoAllocHelpers::ResizeList<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___list0, int32_t ___size1, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___list0;
		V_0 = (bool)((((RuntimeObject*)(List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_2 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_2, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var)));
	}

IL_0014:
	{
		int32_t L_3 = ___size1;
		if ((((int32_t)L_3) < ((int32_t)0)))
		{
			goto IL_0023;
		}
	}
	{
		int32_t L_4 = ___size1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_5 = ___list0;
		int32_t L_6;
		L_6 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B5_0 = ((((int32_t)L_4) > ((int32_t)L_6))? 1 : 0);
		goto IL_0024;
	}

IL_0023:
	{
		G_B5_0 = 1;
	}

IL_0024:
	{
		V_1 = (bool)G_B5_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0038;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_8 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m71044C2110E357B71A1C30D2561C3F861AF1DC0D(L_8, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6EB07847B96B4920AD36A2529E7AD9EFB2F7C468)), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5AC64F41AC098111BD52F434F0C2E60A4F2DE3BC)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_8, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NoAllocHelpers_ResizeList_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mD23AEDDE78B67AEE8CBA2EE853755A4A952AA414_RuntimeMethod_var)));
	}

IL_0038:
	{
		int32_t L_9 = ___size1;
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_10 = ___list0;
		int32_t L_11;
		L_11 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_10, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_11))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_0050;
		}
	}
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_13 = ___list0;
		int32_t L_14 = ___size1;
		NoAllocHelpers_Internal_ResizeList_m32452578286848AD58CF77E1CA6B078492F723F6((RuntimeObject *)L_13, (int32_t)L_14, /*hidden argument*/NULL);
	}

IL_0050:
	{
		return;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Color32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m5BDA87ED32CFC55DA1F206A10F0F7269375460A0_gshared (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_tE21C42BE31D35DD3ECF3322C6CA057E27A81B4D5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Int32>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4B9D1CD951454AB53830295C8EC6981FE2CC67BA_gshared (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t260B41F956D673396C33A4CF94E8D6C4389EACB7 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<System.Object>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisRuntimeObject_m7734F08807A81E543786DF8E8B2B4C20CD0C76A5_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector2>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m55A91C1BCD1A7495F080D82F3B1C2D07670DC43B_gshared (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t400048180333F4A09A4A727C9A666AA5D2BB27A9 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector3>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m6D424749FB41FF954AA7F64B7692638719F3E159_gshared (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t577D28CFF6DFE3F6A8D4409F7A21CBF513C04181 *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// System.Int32 UnityEngine.NoAllocHelpers::SafeLength<UnityEngine.Vector4>(System.Collections.Generic.List`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t NoAllocHelpers_SafeLength_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_m2F702FC41F0D28D59ED05964609082B91F8960FD_gshared (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * ___values0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t G_B3_0 = 0;
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_0 = ___values0;
		if (L_0)
		{
			goto IL_0007;
		}
	}
	{
		G_B3_0 = 0;
		goto IL_000d;
	}

IL_0007:
	{
		List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A * L_1 = ___values0;
		int32_t L_2;
		L_2 = ((  int32_t (*) (List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((List_1_t14D5F8426BD7087A7AEB49D4DE3DEF404C8BE65A *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		G_B3_0 = L_2;
	}

IL_000d:
	{
		V_0 = (int32_t)G_B3_0;
		goto IL_0010;
	}

IL_0010:
	{
		int32_t L_3 = V_0;
		return (int32_t)L_3;
	}
}
// T UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Object_FindObjectOfType_mFDEFCE84CE9C644F2B51DCC26CDAC78AC7E89B1B((Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m0015B67D48097755F4D6B1D2614DA7ED5C899F18_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2;
		L_2 = Object_FindObjectsOfType_m0AEB81CC6F1D224A6F4DCC7D553482D54FC03C5A((Type_t *)L_1, (bool)0, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3;
		L_3 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		goto IL_0019;
	}

IL_0019:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_gshared (RuntimeObject * ___original0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF704B54D833421164E45E576DFD279921246BCEA);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_CheckNullArgument_mFA979ED3433CACA46AC9AE0029A537B46E17D080((RuntimeObject *)L_0, (String_t*)_stringLiteralF704B54D833421164E45E576DFD279921246BCEA, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___original0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_2;
		L_2 = Object_Internal_CloneSingle_m6C669D602DFD7BC6C47ACA19B2F4D7C853F124BB((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		RuntimeObject * L_3 = V_0;
		bool L_4;
		L_4 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_3, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003e;
		}
	}
	{
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_6 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_6, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1C09770F25C8580FC7F6623067ACD12EBA570614)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Object_Instantiate_TisRuntimeObject_m4039C8E65629D33E1EC84D2505BF1D5DDC936622_RuntimeMethod_var)));
	}

IL_003e:
	{
		RuntimeObject * L_7 = V_0;
		V_2 = (RuntimeObject *)L_7;
		goto IL_0042;
	}

IL_0042:
	{
		RuntimeObject * L_8 = V_2;
		return (RuntimeObject *)L_8;
	}
}
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_mB05DEC51C29EF5BB8BD17D055E80217F11E571AA_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___original0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1 = ___position1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2 = ___rotation2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Object_Instantiate_mADD3254CB5E6AB56FBB6964FE4B930F5187AB5AD((Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_0, (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_1, (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 )L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0016;
	}

IL_0016:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetDuration<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m891A55D4BEA5B341FA24B90FDB4280FE8F2A052E_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		double L_1;
		L_1 = PlayableHandle_GetDuration_m2AB34E8F6397DA6BF090046183CE563521B00FE6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (double)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		double L_2 = V_1;
		return (double)L_2;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableExtensions::GetInput<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  PlayableExtensions_GetInput_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m8D97A1F1C86844E4BA5B81BDA0A79B608CEED8AB_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___inputPort1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___inputPort1;
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2;
		L_2 = PlayableHandle_GetInput_m62A9D166414D9975AFD4FA1643AE864CA918A233((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		V_1 = (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 )L_2;
		goto IL_001a;
	}

IL_001a:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_3 = V_1;
		return (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 )L_3;
	}
}
// System.Int32 UnityEngine.Playables.PlayableExtensions::GetInputCount<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m1EB83B507BE1E25B4C3A78F737FA3138F2A8EFCF_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1;
		L_1 = PlayableHandle_GetInputCount_m210B285B1EDB6D92D55108E009E09B1BF3590EF9((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_1;
		return (int32_t)L_2;
	}
}
// System.Single UnityEngine.Playables.PlayableExtensions::GetInputWeight<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayableExtensions_GetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m9A11DF38B7A7C8F29809D196611ABA216482501E_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___inputIndex1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	float V_1 = 0.0f;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___inputIndex1;
		float L_2;
		L_2 = PlayableHandle_GetInputWeight_m48B04E735135ADBB59934F4BE868A0B6CACAEF72((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		V_1 = (float)L_2;
		goto IL_001a;
	}

IL_001a:
	{
		float L_3 = V_1;
		return (float)L_3;
	}
}
// UnityEngine.Playables.PlayState UnityEngine.Playables.PlayableExtensions::GetPlayState<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetPlayState_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m95C85337B14D4D27BD69315D6D55ECCF54551B15_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1;
		L_1 = PlayableHandle_GetPlayState_m1B178666774AC33BCC60A396437ABA7E76479BB3((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_1;
		return (int32_t)L_2;
	}
}
// System.Double UnityEngine.Playables.PlayableExtensions::GetTime<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double PlayableExtensions_GetTime_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m78452DBAF3810DF739E14E3FEFA804C037676733_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	double V_1 = 0.0;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		double L_1;
		L_1 = PlayableHandle_GetTime_m14835C693A0A82A4014F401354384EAD6349AB97((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (double)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		double L_2 = V_1;
		return (double)L_2;
	}
}
// UnityEngine.Playables.DirectorWrapMode UnityEngine.Playables.PlayableExtensions::GetTimeWrapMode<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableExtensions_GetTimeWrapMode_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m78A3A5B6DD9F0D50A0D1F6B143FAF0F34944A72E_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1;
		L_1 = PlayableHandle_GetTimeWrapMode_mAC082C86377F2A8CE658F09D51D2FDCFF9DF6D81((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_1;
		return (int32_t)L_2;
	}
}
// System.Boolean UnityEngine.Playables.PlayableExtensions::IsDone<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableExtensions_IsDone_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m2F5B519D67933F9F4E065F0815A01BB200B0B123_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		bool L_1;
		L_1 = PlayableHandle_IsDone_m674DE3BFED2A0B5D8BC9E96996EA9D024E77C727((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_2 = V_1;
		return (bool)L_2;
	}
}
// System.Boolean UnityEngine.Playables.PlayableExtensions::IsValid<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableExtensions_IsValid_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m816B016E2D6AE46CB93A226C06A17FE86821D9E4_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		Il2CppFakeBox<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 > L_0(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___playable0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__9 = il2cpp_codegen_get_interface_invoke_data(0, (&L_0), IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__9.methodPtr)((RuntimeObject*)(&L_0), /*hidden argument*/il2cpp_virtual_invoke_data__9.method);
		___playable0 = L_0.m_Value;
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1;
		bool L_2;
		L_2 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)L_2;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_3 = V_1;
		return (bool)L_3;
	}
}
// System.Boolean UnityEngine.Playables.PlayableExtensions::IsValid<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableExtensions_IsValid_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mED97544D7F7466590D65BE8D265E3388A0FD0A99_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		bool L_1;
		L_1 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		V_1 = (bool)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		bool L_2 = V_1;
		return (bool)L_2;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::Pause<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_Pause_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mA515556267EEC07066D34A770537CCAB5D822C70_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		PlayableHandle_Pause_mB3B26DE18B6F0E1CC484A9AEB316894515F4E572((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::Play<UnityEngine.Playables.Playable>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_Play_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m0E3FE07620B4C51686B46137C24A470D83D0CAE1_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		PlayableHandle_Play_m437DFC8ECD1435AFA181E00287B6F14C90D20A5A((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetDuration<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetDuration_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_mB71B97CCC524041B78765D72CA96F9AF1FB94E08_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, double ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFakeBox<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 > L_0(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___playable0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__9 = il2cpp_codegen_get_interface_invoke_data(0, (&L_0), IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__9.methodPtr)((RuntimeObject*)(&L_0), /*hidden argument*/il2cpp_virtual_invoke_data__9.method);
		___playable0 = L_0.m_Value;
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1;
		double L_2 = ___value1;
		PlayableHandle_SetDuration_mAD32E3772366220B972689F2285BD588F25C8D95((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (double)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetDuration<UnityEngine.Playables.Playable>(U,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetDuration_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m86C3A56A6D0E65DA3055E49C4B560D520EBF7260_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, double ___value1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		double L_1 = ___value1;
		PlayableHandle_SetDuration_mAD32E3772366220B972689F2285BD588F25C8D95((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (double)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputCount_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m7CEA384FB0946FD9E8AF22B9F34E0E0E96769683_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFakeBox<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 > L_0(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___playable0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__9 = il2cpp_codegen_get_interface_invoke_data(0, (&L_0), IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__9.methodPtr)((RuntimeObject*)(&L_0), /*hidden argument*/il2cpp_virtual_invoke_data__9.method);
		___playable0 = L_0.m_Value;
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1;
		int32_t L_2 = ___value1;
		PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputCount<UnityEngine.Playables.Playable>(U,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputCount_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m88F0C0375C506B16B4FA49C6B5F75E2B7545EC9F_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___value1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___value1;
		PlayableHandle_SetInputCount_mF476D7A0B1D1086914BB87ABF80D478740A97E8E((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Animations.AnimationLayerMixerPlayable>(U,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m65FE5039235B8956DB2A6A92B55AE922682CA624_gshared (AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___playable0, int32_t ___inputIndex1, float ___weight2, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___inputIndex1;
		float L_2 = ___weight2;
		bool L_3;
		L_3 = PlayableHandle_SetInputWeight_m7ECA97A86428E6028FF6E542A5F13641DC7E8A57((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, (float)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Animations.AnimationMixerPlayable>(U,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_mDB955B1A400A2B2FAC115FF40524DFE4F8E34652_gshared (AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___playable0, int32_t ___inputIndex1, float ___weight2, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___inputIndex1;
		float L_2 = ___weight2;
		bool L_3;
		L_3 = PlayableHandle_SetInputWeight_m7ECA97A86428E6028FF6E542A5F13641DC7E8A57((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, (float)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>(U,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_mA4D93CAE8E0CFC32733AA108E0E6151787AAB31F_gshared (AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___playable0, int32_t ___inputIndex1, float ___weight2, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___inputIndex1;
		float L_2 = ___weight2;
		bool L_3;
		L_3 = PlayableHandle_SetInputWeight_m7ECA97A86428E6028FF6E542A5F13641DC7E8A57((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, (float)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Animations.AnimationOffsetPlayable>(U,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_mC7A73A9D54F4678B81702BEDCF8D7B1AD15F92FC_gshared (AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___playable0, int32_t ___inputIndex1, float ___weight2, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049((AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___inputIndex1;
		float L_2 = ___weight2;
		bool L_3;
		L_3 = PlayableHandle_SetInputWeight_m7ECA97A86428E6028FF6E542A5F13641DC7E8A57((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, (float)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Animations.AnimationRemoveScalePlayable>(U,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mDD04B9CC6C4C65082393B901215D63787CDF84EB_gshared (AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___playable0, int32_t ___inputIndex1, float ___weight2, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8((AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___inputIndex1;
		float L_2 = ___weight2;
		bool L_3;
		L_3 = PlayableHandle_SetInputWeight_m7ECA97A86428E6028FF6E542A5F13641DC7E8A57((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, (float)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Playables.Playable>(U,System.Int32,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m56E4D39068FF1AB14F61003A5A1F6847D26C61DA_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___inputIndex1, float ___weight2, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___inputIndex1;
		float L_2 = ___weight2;
		bool L_3;
		L_3 = PlayableHandle_SetInputWeight_m7ECA97A86428E6028FF6E542A5F13641DC7E8A57((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, (float)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Playables.ScriptPlayable`1<System.Object>,UnityEngine.Playables.Playable>(U,V,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mF74603BD8CC144549C71064624974CF50EBA906A_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___input1, float ___weight2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFakeBox<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 > L_0(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___playable0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__9 = il2cpp_codegen_get_interface_invoke_data(0, (&L_0), IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__9.methodPtr)((RuntimeObject*)(&L_0), /*hidden argument*/il2cpp_virtual_invoke_data__9.method);
		___playable0 = L_0.m_Value;
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___input1), /*hidden argument*/NULL);
		float L_3 = ___weight2;
		PlayableHandle_SetInputWeight_m44ACDBDD2D5A5BA617DE71035F621B1C7F8F51D7((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_2, (float)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetInputWeight<UnityEngine.Playables.Playable,UnityEngine.Playables.Playable>(U,V,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetInputWeight_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mCFC7C4DAE7252641E6E03CEC7B88C0D72A9642C3_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___input1, float ___weight2, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___input1), /*hidden argument*/NULL);
		float L_2 = ___weight2;
		PlayableHandle_SetInputWeight_m44ACDBDD2D5A5BA617DE71035F621B1C7F8F51D7((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1, (float)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetPropagateSetTime<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetPropagateSetTime_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m2A44EAD55B08C733806850EDC3C988DE241D3E83_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, bool ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFakeBox<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 > L_0(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___playable0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__9 = il2cpp_codegen_get_interface_invoke_data(0, (&L_0), IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__9.methodPtr)((RuntimeObject*)(&L_0), /*hidden argument*/il2cpp_virtual_invoke_data__9.method);
		___playable0 = L_0.m_Value;
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1;
		bool L_2 = ___value1;
		PlayableHandle_SetPropagateSetTime_mBD123E24FCA61291B90A7EC1AB8F95711C8A3E5C((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (bool)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetSpeed<UnityEngine.Playables.Playable>(U,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetSpeed_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m7C5E127C24164AB1564235B7FFB3F76F0DA5ABAE_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, double ___value1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		double L_1 = ___value1;
		PlayableHandle_SetSpeed_mC4777C554A067AFA1E43497A2FA9242241F03A30((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (double)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetTime<UnityEngine.Playables.Playable>(U,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetTime_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m3F819840FA753E34F49B6D3E4B46BBBBCE6DA8CE_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, double ___value1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		double L_1 = ___value1;
		PlayableHandle_SetTime_m8B0B1134427EB6EADE65FE02368DA57BD33263D4((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (double)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetTimeWrapMode<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U,UnityEngine.Playables.DirectorWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetTimeWrapMode_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m4697ED7FD8A41AF0109570578BEA8E54F80A2B2E_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, int32_t ___value1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFakeBox<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 > L_0(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___playable0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__9 = il2cpp_codegen_get_interface_invoke_data(0, (&L_0), IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__9.methodPtr)((RuntimeObject*)(&L_0), /*hidden argument*/il2cpp_virtual_invoke_data__9.method);
		___playable0 = L_0.m_Value;
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1;
		int32_t L_2 = ___value1;
		PlayableHandle_SetTimeWrapMode_mC59AE90EA44005C2D342B5685E98BFB61309A4DD((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetTimeWrapMode<UnityEngine.Playables.Playable>(U,UnityEngine.Playables.DirectorWrapMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetTimeWrapMode_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mA8E2D70224FE4A892E8052F2CA1949A4EDE5DEBD_gshared (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___playable0, int32_t ___value1, const RuntimeMethod* method)
{
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___playable0), /*hidden argument*/NULL);
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0;
		int32_t L_1 = ___value1;
		PlayableHandle_SetTimeWrapMode_mC59AE90EA44005C2D342B5685E98BFB61309A4DD((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableExtensions::SetTraversalMode<UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U,UnityEngine.Playables.PlayableTraversalMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableExtensions_SetTraversalMode_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m30F38D55E65704621F5BEABE700297B5B7100D34_gshared (ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___playable0, int32_t ___mode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Il2CppFakeBox<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 > L_0(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (&___playable0));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__9 = il2cpp_codegen_get_interface_invoke_data(0, (&L_0), IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__9.methodPtr)((RuntimeObject*)(&L_0), /*hidden argument*/il2cpp_virtual_invoke_data__9.method);
		___playable0 = L_0.m_Value;
		V_0 = (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1;
		int32_t L_2 = ___mode1;
		PlayableHandle_SetTraversalMode_m1FD433AAFF58862BA61F3EA70AF67E189CAA67CC((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(&V_0), (int32_t)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Playables.ScriptPlayable`1<System.Object>>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m2A4CA2550B5F583EA5F0E572DF8CF5A87BBFE85D_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___source0), /*hidden argument*/NULL);
		int32_t L_1 = ___sourceOutputPort1;
		Il2CppFakeBox<ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266 > L_2(IL2CPP_RGCTX_DATA(method->rgctx_data, 1), (&___destination2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__24 = il2cpp_codegen_get_interface_invoke_data(0, (&L_2), IPlayable_t80E700E7734A89E269923525C74958A770CF45D4_il2cpp_TypeInfo_var);
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_3;
		L_3 = ((  PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__24.methodPtr)((RuntimeObject*)(&L_2), /*hidden argument*/il2cpp_virtual_invoke_data__24.method);
		___destination2 = L_2.m_Value;
		int32_t L_4 = ___destinationInputPort3;
		bool L_5;
		L_5 = PlayableGraph_ConnectInternal_mE1CE63B32B7B28DA3D5722AC160152C9C7374E2F((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)__this, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, (int32_t)L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_3, (int32_t)L_4, /*hidden argument*/NULL);
		V_0 = (bool)L_5;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_6 = V_0;
		return (bool)L_6;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m2A4CA2550B5F583EA5F0E572DF8CF5A87BBFE85D_AdjustorThunk (RuntimeObject * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, ScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * _thisAdjusted = reinterpret_cast<PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisScriptPlayable_1_t7495DFF84B5233AF863183881C3C7D626F65C266_m2A4CA2550B5F583EA5F0E572DF8CF5A87BBFE85D(_thisAdjusted, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationLayerMixerPlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m3E402CBD0DA9906EED05A2A5417CD83CF6C564F9_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___source0), /*hidden argument*/NULL);
		int32_t L_1 = ___sourceOutputPort1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = AnimationLayerMixerPlayable_GetHandle_mBFA950F140D76E10983B9AB946397F4C12ABC439((AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)(AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880 *)(&___destination2), /*hidden argument*/NULL);
		int32_t L_3 = ___destinationInputPort3;
		bool L_4;
		L_4 = PlayableGraph_ConnectInternal_mE1CE63B32B7B28DA3D5722AC160152C9C7374E2F((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)__this, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, (int32_t)L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_2, (int32_t)L_3, /*hidden argument*/NULL);
		V_0 = (bool)L_4;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_0;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m3E402CBD0DA9906EED05A2A5417CD83CF6C564F9_AdjustorThunk (RuntimeObject * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * _thisAdjusted = reinterpret_cast<PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m3E402CBD0DA9906EED05A2A5417CD83CF6C564F9(_thisAdjusted, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationMixerPlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m5C731B1FD992B1AF68F0E1479FDCDAA6346621BF_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___source0), /*hidden argument*/NULL);
		int32_t L_1 = ___sourceOutputPort1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = AnimationMixerPlayable_GetHandle_mE8F7D1A18F1BD1C00BA1EC6AA8036044E8907FC3((AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)(AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741 *)(&___destination2), /*hidden argument*/NULL);
		int32_t L_3 = ___destinationInputPort3;
		bool L_4;
		L_4 = PlayableGraph_ConnectInternal_mE1CE63B32B7B28DA3D5722AC160152C9C7374E2F((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)__this, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, (int32_t)L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_2, (int32_t)L_3, /*hidden argument*/NULL);
		V_0 = (bool)L_4;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_0;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m5C731B1FD992B1AF68F0E1479FDCDAA6346621BF_AdjustorThunk (RuntimeObject * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * _thisAdjusted = reinterpret_cast<PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m5C731B1FD992B1AF68F0E1479FDCDAA6346621BF(_thisAdjusted, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationMotionXToDeltaPlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_mABCFC5F718D163D25D229D9FDD801C775829FBE1_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___source0), /*hidden argument*/NULL);
		int32_t L_1 = ___sourceOutputPort1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = AnimationMotionXToDeltaPlayable_GetHandle_m840D19A4E2DFB4BF2397061B833E63AD786587BA((AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)(AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076 *)(&___destination2), /*hidden argument*/NULL);
		int32_t L_3 = ___destinationInputPort3;
		bool L_4;
		L_4 = PlayableGraph_ConnectInternal_mE1CE63B32B7B28DA3D5722AC160152C9C7374E2F((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)__this, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, (int32_t)L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_2, (int32_t)L_3, /*hidden argument*/NULL);
		V_0 = (bool)L_4;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_0;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_mABCFC5F718D163D25D229D9FDD801C775829FBE1_AdjustorThunk (RuntimeObject * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * _thisAdjusted = reinterpret_cast<PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_mABCFC5F718D163D25D229D9FDD801C775829FBE1(_thisAdjusted, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationOffsetPlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_mEC86F707BFB7B6090F94974D44922ED5303A5AD0_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___source0), /*hidden argument*/NULL);
		int32_t L_1 = ___sourceOutputPort1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = AnimationOffsetPlayable_GetHandle_m8C3C08EC531127B002D3AFAB5AF259D8030B0049((AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)(AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941 *)(&___destination2), /*hidden argument*/NULL);
		int32_t L_3 = ___destinationInputPort3;
		bool L_4;
		L_4 = PlayableGraph_ConnectInternal_mE1CE63B32B7B28DA3D5722AC160152C9C7374E2F((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)__this, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, (int32_t)L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_2, (int32_t)L_3, /*hidden argument*/NULL);
		V_0 = (bool)L_4;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_0;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_mEC86F707BFB7B6090F94974D44922ED5303A5AD0_AdjustorThunk (RuntimeObject * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * _thisAdjusted = reinterpret_cast<PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_mEC86F707BFB7B6090F94974D44922ED5303A5AD0(_thisAdjusted, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Animations.AnimationRemoveScalePlayable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_m173C0E6B4780153AEC01D69B71D0EC1B8BD7F41A_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___source0), /*hidden argument*/NULL);
		int32_t L_1 = ___sourceOutputPort1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = AnimationRemoveScalePlayable_GetHandle_m1949202B58BDF17726A1ADC934EB5232E835CCA8((AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)(AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429 *)(&___destination2), /*hidden argument*/NULL);
		int32_t L_3 = ___destinationInputPort3;
		bool L_4;
		L_4 = PlayableGraph_ConnectInternal_mE1CE63B32B7B28DA3D5722AC160152C9C7374E2F((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)__this, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, (int32_t)L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_2, (int32_t)L_3, /*hidden argument*/NULL);
		V_0 = (bool)L_4;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_0;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_m173C0E6B4780153AEC01D69B71D0EC1B8BD7F41A_AdjustorThunk (RuntimeObject * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, AnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * _thisAdjusted = reinterpret_cast<PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_m173C0E6B4780153AEC01D69B71D0EC1B8BD7F41A(_thisAdjusted, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableGraph::Connect<UnityEngine.Playables.Playable,UnityEngine.Playables.Playable>(U,System.Int32,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m2ADC8E9AF75BCEF3975763BED4CC0E17E8BC573F_gshared (PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_0;
		L_0 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___source0), /*hidden argument*/NULL);
		int32_t L_1 = ___sourceOutputPort1;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_2;
		L_2 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___destination2), /*hidden argument*/NULL);
		int32_t L_3 = ___destinationInputPort3;
		bool L_4;
		L_4 = PlayableGraph_ConnectInternal_mE1CE63B32B7B28DA3D5722AC160152C9C7374E2F((PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)(PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *)__this, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_0, (int32_t)L_1, (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_2, (int32_t)L_3, /*hidden argument*/NULL);
		V_0 = (bool)L_4;
		goto IL_0027;
	}

IL_0027:
	{
		bool L_5 = V_0;
		return (bool)L_5;
	}
}
IL2CPP_EXTERN_C  bool PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m2ADC8E9AF75BCEF3975763BED4CC0E17E8BC573F_AdjustorThunk (RuntimeObject * __this, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___source0, int32_t ___sourceOutputPort1, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___destination2, int32_t ___destinationInputPort3, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A * _thisAdjusted = reinterpret_cast<PlayableGraph_t2D5083CFACB413FA1BB13FF054BE09A5A55A205A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableGraph_Connect_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_m2ADC8E9AF75BCEF3975763BED4CC0E17E8BC573F(_thisAdjusted, ___source0, ___sourceOutputPort1, ___destination2, ___destinationInputPort3, method);
	return _returnValue;
}
// T UnityEngine.Playables.PlayableHandle::GetObject<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	bool V_1 = false;
	RuntimeObject * V_2 = NULL;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	{
		bool L_0;
		L_0 = PlayableHandle_IsValid_m237A5E7818768641BAC928BD08EC0AB439E3DAF6((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		V_1 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_2;
		V_3 = (RuntimeObject *)L_2;
		goto IL_0040;
	}

IL_001a:
	{
		RuntimeObject * L_3;
		L_3 = PlayableHandle_GetScriptInstance_mF4670514F611D126B454564157B3BD816DFC6C1B((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)L_3;
		RuntimeObject * L_4 = V_0;
		V_4 = (bool)((((RuntimeObject*)(RuntimeObject *)L_4) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_5 = V_4;
		if (!L_5)
		{
			goto IL_0037;
		}
	}
	{
		il2cpp_codegen_initobj((&V_2), sizeof(RuntimeObject *));
		RuntimeObject * L_6 = V_2;
		V_3 = (RuntimeObject *)L_6;
		goto IL_0040;
	}

IL_0037:
	{
		RuntimeObject * L_7 = V_0;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_0040;
	}

IL_0040:
	{
		RuntimeObject * L_8 = V_3;
		return (RuntimeObject *)L_8;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	RuntimeObject * _returnValue;
	_returnValue = PlayableHandle_GetObject_TisRuntimeObject_mF33505C32B01896DADE2E6295F7FA71E8563508B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationClipPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationClipPlayable_t6386488B0C0300A21A352B4C17B9E6D5D38DF953_m184BCE0F44F53CA66F00D04DDC112072121362C1(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationLayerMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationLayerMixerPlayable_tF647DD9BCA6E0F49367A5F13AAE0D5B093A91880_m866298E26CA43C28F7948D46E99D65FAA09722C5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMixerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMixerPlayable_t7C6D407FE0D55712B07081F8114CFA347F124741_m30062CF184CC05FFAA026881BEFE337C13B7E70E(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationMotionXToDeltaPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationMotionXToDeltaPlayable_t6E21B629D4689F5E3CFCFACA0B31411082773076_m19943D18384297A3129F799C12E91B0D8162A02F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationOffsetPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationOffsetPlayable_tBB8333A8E35A23D8FAA2D34E35FF02BD53FF9941_m1B2FA89CE8F4A1EBD1AE3FF4E7154CFE120EDF85(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationPosePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationPosePlayable_t455DFF8AB153FC8930BD1B79342EC791033662B9_m171336A5BD550FD80BFD4B2BDF5903DF72C0E1C2(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationRemoveScalePlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationRemoveScalePlayable_t774D428669D5CF715E9A7E80E52A619AECC80429_mEF5219AC94275FE2811CEDC16FE0B850DBA7E9BE(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimationScriptPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimationScriptPlayable_tC1413FB51680271522811045B1BAA555B8F01C6B_m529F82044C8D4F4B60EA35E96D1C0592644AD76B(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<UnityEngine.Animations.AnimatorControllerPlayable>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisAnimatorControllerPlayable_tEABD56FA5A36BD337DA6E049FCB4F1D521DA17A4_mFB1F4B388070EC30EC8DA09EB2869306EE60F2B8(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableHandle::IsPlayableOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_gshared (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableHandle_GetPlayableType_m5E523E4DA00DF2FAB2E209B0B43FD5AA430AE84F((PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)(PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A * _thisAdjusted = reinterpret_cast<PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableHandle_IsPlayableOfType_TisRuntimeObject_mD023115A11ECA201E029F7C2BA23A36233C32413(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutput::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutput_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_m4B7FDA63F17AC1567A56F9EFBD3CE01847B71D42_gshared (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * __this, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E((PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)__this, /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		bool L_1;
		L_1 = PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_mFBE2A77CDE814F1CADA716F5C0A70756046268F5((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (bool)L_1;
		goto IL_0012;
	}

IL_0012:
	{
		bool L_2 = V_1;
		return (bool)L_2;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutput_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_m4B7FDA63F17AC1567A56F9EFBD3CE01847B71D42_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 * _thisAdjusted = reinterpret_cast<PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutput_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_m4B7FDA63F17AC1567A56F9EFBD3CE01847B71D42(_thisAdjusted, method);
	return _returnValue;
}
// System.Void UnityEngine.Playables.PlayableOutputExtensions::AddNotificationReceiver<UnityEngine.Playables.PlayableOutput>(U,UnityEngine.Playables.INotificationReceiver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputExtensions_AddNotificationReceiver_TisPlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_mE2ABB041B8D8AB33BC44E1CE2854AEFFF75CD946_gshared (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___output0, RuntimeObject* ___receiver1, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E((PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		RuntimeObject* L_1 = ___receiver1;
		PlayableOutputHandle_AddNotificationReceiver_m309FC7F48690943B354075410405E044E76125F5((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), (RuntimeObject*)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Int32 UnityEngine.Playables.PlayableOutputExtensions::GetSourceOutputPort<UnityEngine.Animations.AnimationPlayableOutput>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayableOutputExtensions_GetSourceOutputPort_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_m57D3375006106D89114D8BD232292EB999F11A28_gshared (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  ___output0, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		int32_t L_1;
		L_1 = PlayableOutputHandle_GetSourceOutputPort_m1218C4A70927B40F301DBB6FCC8B4DB49C033BC6((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), /*hidden argument*/NULL);
		V_1 = (int32_t)L_1;
		goto IL_0019;
	}

IL_0019:
	{
		int32_t L_2 = V_1;
		return (int32_t)L_2;
	}
}
// UnityEngine.Playables.Playable UnityEngine.Playables.PlayableOutputExtensions::GetSourcePlayable<UnityEngine.Animations.AnimationPlayableOutput>(U)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  PlayableOutputExtensions_GetSourcePlayable_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mCFEF0AF18B0B24F4375095838BF397A76A0E37B1_gshared (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  ___output0, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = PlayableOutputHandle_GetSourcePlayable_m6AB3B2C06A216AE791622421142569E3A3961C3A((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), /*hidden argument*/NULL);
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Playable__ctor_m4B5AC727703A68C00773F99DE1C711EFC973DCA8((&L_2), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1, /*hidden argument*/NULL);
		V_1 = (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 )L_2;
		goto IL_001e;
	}

IL_001e:
	{
		Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  L_3 = V_1;
		return (Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 )L_3;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputExtensions::PushNotification<UnityEngine.Playables.PlayableOutput>(U,UnityEngine.Playables.Playable,UnityEngine.Playables.INotification,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputExtensions_PushNotification_TisPlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_m9C800E04E7C315F5C329AB7966AB3EFA7AAF91C3_gshared (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___output0, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___origin1, RuntimeObject* ___notification2, RuntimeObject * ___context3, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E((PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___origin1), /*hidden argument*/NULL);
		RuntimeObject* L_2 = ___notification2;
		RuntimeObject * L_3 = ___context3;
		PlayableOutputHandle_PushNotification_m873C33139252A83E5117EC97C239EEE5007B01DB((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1, (RuntimeObject*)L_2, (RuntimeObject *)L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputExtensions::SetReferenceObject<UnityEngine.Playables.PlayableOutput>(U,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputExtensions_SetReferenceObject_TisPlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_m795E356DC0063EA150446A7991599A93FDB219D7_gshared (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___output0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___value1, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E((PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = ___value1;
		PlayableOutputHandle_SetReferenceObject_mB27184B082C313AE4701F02FD3B8E7B14D880348((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputExtensions::SetSourcePlayable<UnityEngine.Playables.PlayableOutput,UnityEngine.Playables.Playable>(U,V,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputExtensions_SetSourcePlayable_TisPlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_TisPlayable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2_mFC5353780570D005E37A0BD5E9939DA3C367F621_gshared (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___output0, Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2  ___value1, int32_t ___port2, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E((PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A  L_1;
		L_1 = Playable_GetHandle_mA646BB041702651694A643FDE1A835112F718351((Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(Playable_tC24692CDD1DD8F1D5C646035A76D2830A70214E2 *)(&___value1), /*hidden argument*/NULL);
		int32_t L_2 = ___port2;
		PlayableOutputHandle_SetSourcePlayable_m52F2F47CB273552A63A5937AE0A48BF71671B252((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), (PlayableHandle_t50DCD240B0400DDAD0822C13E5DBC7AD64DC027A )L_1, (int32_t)L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputExtensions::SetUserData<UnityEngine.Playables.PlayableOutput>(U,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputExtensions_SetUserData_TisPlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_m88743E67AF177211E8CD85D624855497D5D159B7_gshared (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___output0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___value1, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E((PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_1 = ___value1;
		PlayableOutputHandle_SetUserData_mC10EBA4025C2EAF8473B385D1B441593BDB29778((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputExtensions::SetWeight<UnityEngine.Animations.AnimationPlayableOutput>(U,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputExtensions_SetWeight_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mE5A103A3FFA758403A26CBDB3A38605FF10AC9A7_gshared (AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17  ___output0, float ___value1, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = AnimationPlayableOutput_GetHandle_mC7EEF9DA13F13DE57162ECDF101D17156C6924B0((AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(AnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		float L_1 = ___value1;
		PlayableOutputHandle_SetWeight_m0FA09E9FC170305A12553026FA07469314980DB5((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), (float)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void UnityEngine.Playables.PlayableOutputExtensions::SetWeight<UnityEngine.Playables.PlayableOutput>(U,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayableOutputExtensions_SetWeight_TisPlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82_mDDFEDEA2BB9A5FADDCFD66E7003D227B60E1C528_gshared (PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82  ___output0, float ___value1, const RuntimeMethod* method)
{
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1  L_0;
		L_0 = PlayableOutput_GetHandle_mC56A4F912A7AC8640DE78F95DD6C4F346E36820E((PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(PlayableOutput_tE735DC774F014DB1711310988F2F914C66520F82 *)(&___output0), /*hidden argument*/NULL);
		V_0 = (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 )L_0;
		float L_1 = ___value1;
		PlayableOutputHandle_SetWeight_m0FA09E9FC170305A12553026FA07469314980DB5((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(&V_0), (float)L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Animations.AnimationPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableOutputHandle_GetPlayableOutputType_mF5685ABFEE661D934CF922834229F819D0197300((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * _thisAdjusted = reinterpret_cast<PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_IsPlayableOutputOfType_TisAnimationPlayableOutput_t14570F3E63619E52ABB0B0306D4F4AAA6225DE17_mAAE3D11BB4D6AB890696329BE7A8B216F92C912F(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Audio.AudioPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_mFBE2A77CDE814F1CADA716F5C0A70756046268F5_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableOutputHandle_GetPlayableOutputType_mF5685ABFEE661D934CF922834229F819D0197300((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_mFBE2A77CDE814F1CADA716F5C0A70756046268F5_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * _thisAdjusted = reinterpret_cast<PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_IsPlayableOutputOfType_TisAudioPlayableOutput_t9809407FDE5B55DD34088A665C8C53346AC76EE8_mFBE2A77CDE814F1CADA716F5C0A70756046268F5(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisRuntimeObject_m4B025A7413B237F3CA22090288A23B955B8DE7CA_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableOutputHandle_GetPlayableOutputType_mF5685ABFEE661D934CF922834229F819D0197300((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_IsPlayableOutputOfType_TisRuntimeObject_m4B025A7413B237F3CA22090288A23B955B8DE7CA_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * _thisAdjusted = reinterpret_cast<PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_IsPlayableOutputOfType_TisRuntimeObject_m4B025A7413B237F3CA22090288A23B955B8DE7CA(_thisAdjusted, method);
	return _returnValue;
}
// System.Boolean UnityEngine.Playables.PlayableOutputHandle::IsPlayableOutputOfType<UnityEngine.Playables.ScriptPlayableOutput>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_tC84FD711C54470AF76109EC9236489F86CDC7087_m9EF2993262A289653DFA93D8462F96A0E7A91489_gshared (PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		Type_t * L_0;
		L_0 = PlayableOutputHandle_GetPlayableOutputType_mF5685ABFEE661D934CF922834229F819D0197300((PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)(PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (bool)((((RuntimeObject*)(Type_t *)L_0) == ((RuntimeObject*)(Type_t *)L_2))? 1 : 0);
		goto IL_0016;
	}

IL_0016:
	{
		bool L_3 = V_0;
		return (bool)L_3;
	}
}
IL2CPP_EXTERN_C  bool PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_tC84FD711C54470AF76109EC9236489F86CDC7087_m9EF2993262A289653DFA93D8462F96A0E7A91489_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 * _thisAdjusted = reinterpret_cast<PlayableOutputHandle_t8C84BCDB2AECFEDBCF0E7CC7CDBADD517D148CD1 *>(__this + _offset);
	bool _returnValue;
	_returnValue = PlayableOutputHandle_IsPlayableOutputOfType_TisScriptPlayableOutput_tC84FD711C54470AF76109EC9236489F86CDC7087_m9EF2993262A289653DFA93D8462F96A0E7A91489(_thisAdjusted, method);
	return _returnValue;
}
// T[] UnityEngine.Resources::ConvertObjects<System.Object>(UnityEngine.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_ConvertObjects_TisRuntimeObject_mFE4CAC97B9FCF924DBB444ADE1F3F489FAF47A73_gshared (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* ___rawObjects0, const RuntimeMethod* method)
{
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	bool V_1 = false;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	{
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_0 = ___rawObjects0;
		V_1 = (bool)((((RuntimeObject*)(ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_0) == ((RuntimeObject*)(RuntimeObject *)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
		goto IL_003d;
	}

IL_000d:
	{
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_2 = ___rawObjects0;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length))));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001a:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_0;
		int32_t L_5 = V_3;
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_6 = ___rawObjects0;
		int32_t L_7 = V_3;
		int32_t L_8 = L_7;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_9 = (L_6)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(L_8));
		(L_4)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(L_5), (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_9, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))));
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_12 = V_0;
		V_4 = (bool)((((int32_t)L_11) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length)))))? 1 : 0);
		bool L_13 = V_4;
		if (L_13)
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_0;
		V_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_14;
		goto IL_003d;
	}

IL_003d:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_15 = V_2;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_15;
	}
}
// T UnityEngine.Resources::GetBuiltinResource<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_GetBuiltinResource_TisRuntimeObject_mEFE806C359F59E719E60AD86FFF7C2577FB98ED2_gshared (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___path0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Resources_GetBuiltinResource_m59A7993A48D44A0002E532B7DD79BDA426E0C8A6((Type_t *)L_1, (String_t*)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Resources_Load_TisRuntimeObject_m39B6A35CFE684CD1FFF77873E20D7297B36A55E8_gshared (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_3;
		L_3 = Resources_Load_m6E8E5EA02A03F3AFC8FD2D775263DBBC64BF205C((String_t*)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0019;
	}

IL_0019:
	{
		RuntimeObject * L_4 = V_0;
		return (RuntimeObject *)L_4;
	}
}
// T[] UnityEngine.Resources::LoadAll<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Resources_LoadAll_TisRuntimeObject_m70F6C48BD50F3B57D39D3B8A82D2F4DD2BDC3CC7_gshared (String_t* ___path0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_0 = NULL;
	{
		String_t* L_0 = ___path0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873* L_3;
		L_3 = Resources_LoadAll_m84D60782124BC4C7656F4CE88B03D45DF59F9A3C((String_t*)L_0, (Type_t *)L_2, /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4;
		L_4 = ((  ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* (*) (ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((ObjectU5BU5D_t1256A8B00BB71C7F582BF08257BE4F826FF64873*)L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
		goto IL_0019;
	}

IL_0019:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_5 = V_0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_5;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC389C88529EF229E1BABC989C94EE2223BD56AD0_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// System.Boolean System.Runtime.CompilerServices.RuntimeHelpers::IsReferenceOrContainsReferences<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeHelpers_IsReferenceOrContainsReferences_TisRuntimeObject_m2AC7D63AB4EDAEC644206513E9541129F65EB86E_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		bool L_2;
		L_2 = Type_get_IsValueType_m9CCCB4759C2D5A890096F8DBA66DAAEFE9D913FB((Type_t *)L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0026;
		}
	}
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_3 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_4;
		L_4 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = RuntimeTypeHandle_HasReferences_m4838780BFA354CC3379547DE1595EA5D865D7DC2((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)((RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07 *)IsInst((RuntimeObject*)L_4, RuntimeType_t4F49C0B3B2871AECF65AF5FA3E42BAB5B0C1FD07_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		return (bool)L_5;
	}

IL_0026:
	{
		return (bool)1;
	}
}
// T UnityEngine.ScriptableObject::CreateInstance<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ScriptableObject_CreateInstance_TisRuntimeObject_mACD826EE1088E1006234E254924A7067CD467A5F_gshared (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * L_2;
		L_2 = ScriptableObject_CreateInstance_m5371BDC0B4F60FE15914A7BB3FBE07D0ACA0A8D4((Type_t *)L_1, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0018;
	}

IL_0018:
	{
		RuntimeObject * L_3 = V_0;
		return (RuntimeObject *)L_3;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetClass<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetClass_TisRuntimeObject_m5FFE5BDC8FFF1BE342BF12D2FA3D924B59CF1814_gshared (RuntimeObject ** ___currentValue0, RuntimeObject * ___newValue1, const RuntimeMethod* method)
{
	{
		// if ((currentValue == null && newValue == null) || (currentValue != null && currentValue.Equals(newValue)))
		RuntimeObject ** L_0 = ___currentValue0;
		RuntimeObject * L_1 = (*(RuntimeObject **)L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = ___newValue1;
		if (!L_2)
		{
			goto IL_0036;
		}
	}

IL_0015:
	{
		RuntimeObject ** L_3 = ___currentValue0;
		RuntimeObject * L_4 = (*(RuntimeObject **)L_3);
		if (!L_4)
		{
			goto IL_0038;
		}
	}
	{
		RuntimeObject ** L_5 = ___currentValue0;
		RuntimeObject * L_6 = ___newValue1;
		bool L_7;
		L_7 = VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, (RuntimeObject *)(*L_5), (RuntimeObject *)L_6);
		if (!L_7)
		{
			goto IL_0038;
		}
	}

IL_0036:
	{
		// return false;
		return (bool)0;
	}

IL_0038:
	{
		// currentValue = newValue;
		RuntimeObject ** L_8 = ___currentValue0;
		RuntimeObject * L_9 = ___newValue1;
		*(RuntimeObject **)L_8 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)L_8, (void*)L_9);
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Boolean>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m6E2FF3626DFDB226EC45A0225EB571151DAC1EAD_gshared (bool* ___currentValue0, bool ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * L_0;
		L_0 = ((  EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool* L_1 = ___currentValue0;
		bool L_2 = (*(bool*)L_1);
		bool L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, bool, bool >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Boolean>::Equals(!0,!0) */, (EqualityComparer_1_tA00ECA27EEC6CA6AADD7F115EB7E6A654C8E96E7 *)L_0, (bool)L_2, (bool)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		bool* L_5 = ___currentValue0;
		bool L_6 = ___newValue1;
		*(bool*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Char>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mAC32D0C9CB1952351983635D14A11AEBACD8640F_gshared (Il2CppChar* ___currentValue0, Il2CppChar ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * L_0;
		L_0 = ((  EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		Il2CppChar* L_1 = ___currentValue0;
		Il2CppChar L_2 = (*(Il2CppChar*)L_1);
		Il2CppChar L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, Il2CppChar, Il2CppChar >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Char>::Equals(!0,!0) */, (EqualityComparer_1_t5A410E1AF4F49A297AB2DC20A45E858B099B3D30 *)L_0, (Il2CppChar)L_2, (Il2CppChar)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		Il2CppChar* L_5 = ___currentValue0;
		Il2CppChar L_6 = ___newValue1;
		*(Il2CppChar*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.ColorBlock>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_m7F8E5115E86B1666472040BC04D78034F008988F_gshared (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * ___currentValue0, ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * L_0;
		L_0 = ((  EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * L_1 = ___currentValue0;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_2 = (*(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)L_1);
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 , ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.ColorBlock>::Equals(!0,!0) */, (EqualityComparer_1_tC05F233506704F39DCBB67A7941137171132CD40 *)L_0, (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 )L_2, (ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * L_5 = ___currentValue0;
		ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  L_6 = ___newValue1;
		*(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 *)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Int32>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mDE46479E370530BDE29FA53D4857B1414E52FDA5_gshared (int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * L_0;
		L_0 = ((  EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t* L_1 = ___currentValue0;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32>::Equals(!0,!0) */, (EqualityComparer_1_t20B8E5927E151143D1CBD8554CAF17F0EAC1CF62 *)L_0, (int32_t)L_2, (int32_t)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		int32_t* L_5 = ___currentValue0;
		int32_t L_6 = ___newValue1;
		*(int32_t*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Int32Enum>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m45F808F8A7CDCC736724DDB19D3FC2F6BB75D65C_gshared (int32_t* ___currentValue0, int32_t ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * L_0;
		L_0 = ((  EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t* L_1 = ___currentValue0;
		int32_t L_2 = (*(int32_t*)L_1);
		int32_t L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, int32_t, int32_t >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Int32Enum>::Equals(!0,!0) */, (EqualityComparer_1_t399C4B066E24442E62E52C1FD1CCF501E96C846F *)L_0, (int32_t)L_2, (int32_t)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		int32_t* L_5 = ___currentValue0;
		int32_t L_6 = ___newValue1;
		*(int32_t*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.Navigation>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisNavigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_m408B16038A42AF06DCB8642CB1DC5D3118C4071D_gshared (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * ___currentValue0, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * L_0;
		L_0 = ((  EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * L_1 = ___currentValue0;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_2 = (*(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_1);
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A , Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.Navigation>::Equals(!0,!0) */, (EqualityComparer_1_tB3688C71063583EF32963F86697F4216C40489BC *)L_0, (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A )L_2, (Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * L_5 = ___currentValue0;
		Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  L_6 = ___newValue1;
		*(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A *)L_5)->___m_SelectOnRight_5), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<System.Single>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD2FEFB6B008F6267B83749DDC273A8F4F29F36D9_gshared (float* ___currentValue0, float ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * L_0;
		L_0 = ((  EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		float* L_1 = ___currentValue0;
		float L_2 = (*(float*)L_1);
		float L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, float, float >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<System.Single>::Equals(!0,!0) */, (EqualityComparer_1_t6C59536EBB4DD1217C6DBCECEC22F9F4202F710F *)L_0, (float)L_2, (float)L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		float* L_5 = ___currentValue0;
		float L_6 = ___newValue1;
		*(float*)L_5 = L_6;
		// return true;
		return (bool)1;
	}
}
// System.Boolean UnityEngine.UI.SetPropertyUtility::SetStruct<UnityEngine.UI.SpriteState>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SetPropertyUtility_SetStruct_TisSpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_mD0C3F4C3C5162AB96A8E9D750F87CC0FFE362572_gshared (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * ___currentValue0, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___newValue1, const RuntimeMethod* method)
{
	{
		// if (EqualityComparer<T>.Default.Equals(currentValue, newValue))
		EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * L_0;
		L_0 = ((  EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * L_1 = ___currentValue0;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_2 = (*(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_1);
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_3 = ___newValue1;
		bool L_4;
		L_4 = VirtFuncInvoker2< bool, SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E , SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  >::Invoke(8 /* System.Boolean System.Collections.Generic.EqualityComparer`1<UnityEngine.UI.SpriteState>::Equals(!0,!0) */, (EqualityComparer_1_tE2AE720166A82757E1ECCBD4453EF08913187030 *)L_0, (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E )L_2, (SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E )L_3);
		if (!L_4)
		{
			goto IL_0015;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_0015:
	{
		// currentValue = newValue;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * L_5 = ___currentValue0;
		SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  L_6 = ___newValue1;
		*(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E *)L_5)->___m_DisabledSprite_3), (void*)NULL);
		#endif
		// return true;
		return (bool)1;
	}
}
// T[] UMA.SkinnedMeshCombiner::EnsureArrayLength<UnityEngine.ClothSkinningCoefficient>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB* SkinnedMeshCombiner_EnsureArrayLength_TisClothSkinningCoefficient_t53026DBAA8BE4ACF447027627AEF76056FBFC5F0_mC548B11AD46A41ED201D99C1CAA5725DFC857FC7_gshared (ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB* ___oldArray0, int32_t ___newLength1, const RuntimeMethod* method)
{
	{
		// if (newLength <= 0)
		int32_t L_0 = ___newLength1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB*)NULL;
	}

IL_0006:
	{
		// if (oldArray != null && oldArray.Length >= newLength)
		ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB* L_1 = ___oldArray0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB* L_2 = ___oldArray0;
		int32_t L_3 = ___newLength1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		// return oldArray;
		ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB* L_4 = ___oldArray0;
		return (ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB*)L_4;
	}

IL_0011:
	{
		// return new T[newLength];
		int32_t L_5 = ___newLength1;
		ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB* L_6 = (ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB*)(ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_5);
		return (ClothSkinningCoefficientU5BU5D_t32F3F0A4885FC814D3ACA376ECED0B2C272C0FAB*)L_6;
	}
}
// T[] UMA.SkinnedMeshCombiner::EnsureArrayLength<UnityEngine.Color32>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* SkinnedMeshCombiner_EnsureArrayLength_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_m0A030FC0F73146F6055EA9E6CEF27457FD23D6EA_gshared (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* ___oldArray0, int32_t ___newLength1, const RuntimeMethod* method)
{
	{
		// if (newLength <= 0)
		int32_t L_0 = ___newLength1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)NULL;
	}

IL_0006:
	{
		// if (oldArray != null && oldArray.Length >= newLength)
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_1 = ___oldArray0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_2 = ___oldArray0;
		int32_t L_3 = ___newLength1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		// return oldArray;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_4 = ___oldArray0;
		return (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)L_4;
	}

IL_0011:
	{
		// return new T[newLength];
		int32_t L_5 = ___newLength1;
		Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2* L_6 = (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)(Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_5);
		return (Color32U5BU5D_t7FEB526973BF84608073B85CF2D581427F0235E2*)L_6;
	}
}
// T[] UMA.SkinnedMeshCombiner::EnsureArrayLength<System.Object>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* SkinnedMeshCombiner_EnsureArrayLength_TisRuntimeObject_mCAFAAA3B6F2AC0CA6FAF7DA12834A076791BE8E3_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___oldArray0, int32_t ___newLength1, const RuntimeMethod* method)
{
	{
		// if (newLength <= 0)
		int32_t L_0 = ___newLength1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL;
	}

IL_0006:
	{
		// if (oldArray != null && oldArray.Length >= newLength)
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_1 = ___oldArray0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___oldArray0;
		int32_t L_3 = ___newLength1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		// return oldArray;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = ___oldArray0;
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_4;
	}

IL_0011:
	{
		// return new T[newLength];
		int32_t L_5 = ___newLength1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_6 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_5);
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_6;
	}
}
// T[] UMA.SkinnedMeshCombiner::EnsureArrayLength<UnityEngine.Vector2>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* SkinnedMeshCombiner_EnsureArrayLength_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m88FB341B03B7650F328430388795504100D7BA39_gshared (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___oldArray0, int32_t ___newLength1, const RuntimeMethod* method)
{
	{
		// if (newLength <= 0)
		int32_t L_0 = ___newLength1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)NULL;
	}

IL_0006:
	{
		// if (oldArray != null && oldArray.Length >= newLength)
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_1 = ___oldArray0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_2 = ___oldArray0;
		int32_t L_3 = ___newLength1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		// return oldArray;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_4 = ___oldArray0;
		return (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_4;
	}

IL_0011:
	{
		// return new T[newLength];
		int32_t L_5 = ___newLength1;
		Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* L_6 = (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_5);
		return (Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA*)L_6;
	}
}
// T[] UMA.SkinnedMeshCombiner::EnsureArrayLength<UnityEngine.Vector3>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* SkinnedMeshCombiner_EnsureArrayLength_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m9C1741BE91A877C58833DBF46968BEBF70441C35_gshared (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___oldArray0, int32_t ___newLength1, const RuntimeMethod* method)
{
	{
		// if (newLength <= 0)
		int32_t L_0 = ___newLength1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)NULL;
	}

IL_0006:
	{
		// if (oldArray != null && oldArray.Length >= newLength)
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_1 = ___oldArray0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_2 = ___oldArray0;
		int32_t L_3 = ___newLength1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		// return oldArray;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_4 = ___oldArray0;
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_4;
	}

IL_0011:
	{
		// return new T[newLength];
		int32_t L_5 = ___newLength1;
		Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* L_6 = (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_5);
		return (Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4*)L_6;
	}
}
// T[] UMA.SkinnedMeshCombiner::EnsureArrayLength<UnityEngine.Vector4>(T[],System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* SkinnedMeshCombiner_EnsureArrayLength_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mFE6AD76A6E31FB3EC9CC15CB5AAB43B219EADB65_gshared (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* ___oldArray0, int32_t ___newLength1, const RuntimeMethod* method)
{
	{
		// if (newLength <= 0)
		int32_t L_0 = ___newLength1;
		if ((((int32_t)L_0) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}
	{
		// return null;
		return (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)NULL;
	}

IL_0006:
	{
		// if (oldArray != null && oldArray.Length >= newLength)
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_1 = ___oldArray0;
		if (!L_1)
		{
			goto IL_0011;
		}
	}
	{
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_2 = ___oldArray0;
		int32_t L_3 = ___newLength1;
		if ((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) < ((int32_t)L_3)))
		{
			goto IL_0011;
		}
	}
	{
		// return oldArray;
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_4 = ___oldArray0;
		return (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_4;
	}

IL_0011:
	{
		// return new T[newLength];
		int32_t L_5 = ___newLength1;
		Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871* L_6 = (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)(Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)SZArrayNew(IL2CPP_RGCTX_DATA(method->rgctx_data, 0), (uint32_t)L_5);
		return (Vector4U5BU5D_tCE72D928AA6FF1852BAC5E4396F6F0131ED11871*)L_6;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Boolean>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m11A1B226C4A180133FD582A6FBF9810BD1C1C0FA_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_4 = (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *, bool, bool, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (bool)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Int32>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * Task_FromCancellation_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mBBF6712F2EE6633C0A8ADA05DFE63DA1F4B701A5_gshared (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * ___exception0, const RuntimeMethod* method)
{
	{
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mBBF6712F2EE6633C0A8ADA05DFE63DA1F4B701A5_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_2 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_3 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_2;
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_4 = ___exception0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)L_4, /*hidden argument*/NULL);
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_6 = ___exception0;
		bool L_7;
		L_7 = ((  bool (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Int32>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * Task_FromCancellation_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m431EF90E91A74232A187230D471255F3BED2DDE7_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m431EF90E91A74232A187230D471255F3BED2DDE7_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_4 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, bool, int32_t, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (int32_t)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromCancellation_TisRuntimeObject_mB24251454EBBD76760D985A36E68AF30FD28D61A_gshared (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * ___exception0, const RuntimeMethod* method)
{
	{
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_mB24251454EBBD76760D985A36E68AF30FD28D61A_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_2 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_3 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_2;
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_4 = ___exception0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)L_4, /*hidden argument*/NULL);
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_6 = ___exception0;
		bool L_7;
		L_7 = ((  bool (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Object>(System.Threading.CancellationToken)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_gshared (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken0, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_mC0A51CBEAEDE8789A0D04A79B20884ADABEB0D90((CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD *)(&___cancellationToken0), /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_1 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisRuntimeObject_mBC686B1BF5A44330A8793A0AA29F383CF55533C8_RuntimeMethod_var)));
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_2 = V_0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_3 = ___cancellationToken0;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_4 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, bool, RuntimeObject *, int32_t, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_4, (bool)1, (RuntimeObject *)L_2, (int32_t)0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_3, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_4;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromCancellation<System.Threading.Tasks.VoidTaskResult>(System.OperationCanceledException)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * Task_FromCancellation_TisVoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004_mEE6F24685EC9FF937EC935CF9833C888DAE5EF0F_gshared (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * ___exception0, const RuntimeMethod* method)
{
	{
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromCancellation_TisVoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004_mEE6F24685EC9FF937EC935CF9833C888DAE5EF0F_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_2 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_3 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_2;
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_4 = ___exception0;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline((OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB *)L_4, /*hidden argument*/NULL);
		OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * L_6 = ___exception0;
		bool L_7;
		L_7 = ((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_5, (RuntimeObject *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<System.Int32>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * Task_FromException_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6592C11549EE0E5A2F5350E21688708663A17F34_gshared (Exception_t * ___exception0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m6592C11549EE0E5A2F5350E21688708663A17F34_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_2 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_3 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_2;
		Exception_t * L_4 = ___exception0;
		bool L_5;
		L_5 = ((  bool (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<System.Object>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromException_TisRuntimeObject_m5ED6868E2392A9302BF2B641CE72BD3E09C69E0D_gshared (Exception_t * ___exception0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisRuntimeObject_m5ED6868E2392A9302BF2B641CE72BD3E09C69E0D_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_2 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_3 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_2;
		Exception_t * L_4 = ___exception0;
		bool L_5;
		L_5 = ((  bool (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromException<System.Threading.Tasks.VoidTaskResult>(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * Task_FromException_TisVoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004_mD3ADE51D261F2D95FB40083B308AF2E16F2005A9_gshared (Exception_t * ___exception0, const RuntimeMethod* method)
{
	{
		Exception_t * L_0 = ___exception0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Task_FromException_TisVoidTaskResult_t28D1A323545DE024749196472558F49F1AAF0004_mD3ADE51D261F2D95FB40083B308AF2E16F2005A9_RuntimeMethod_var)));
	}

IL_000e:
	{
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_2 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 * L_3 = (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_2;
		Exception_t * L_4 = ___exception0;
		bool L_5;
		L_5 = ((  bool (*) (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_3, (RuntimeObject *)L_4, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (Task_1_t65FD5EE287B61746F015BBC8E90A97D38D258FB3 *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Int32>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * Task_FromResult_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m33A941D59720E7FDF318EFED17717736B57FACFF_gshared (int32_t ___result0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___result0;
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_1 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_1, (int32_t)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::FromResult<System.Object>(TResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_FromResult_TisRuntimeObject_m5FD118CD21188E7E9BC317D50B8AC800C0C0C591_gshared (RuntimeObject * ___result0, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___result0;
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_1 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_1, (RuntimeObject *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_1;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Int32>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * Task_Run_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m3DB1E571D946836A0B26AD69E8B9FDF91F75B774_gshared (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * ___function0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (int32_t)1;
		Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA * L_0 = ___function0;
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_2;
		L_2 = TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_3;
		L_3 = ((  Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * (*) (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)NULL, (Func_1_tCB4CC73D86ED9FF6219A185C0C591F956E5DD1BA *)L_0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (int32_t)8, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_2, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.Task::Run<System.Object>(System.Func`1<TResult>)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * Task_Run_TisRuntimeObject_mAEE714420C7F5AAD768588A76399EB67779E8729_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___function0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		V_0 = (int32_t)1;
		Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * L_0 = ___function0;
		il2cpp_codegen_initobj((&V_1), sizeof(CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD ));
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_1 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_2;
		L_2 = TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_3;
		L_3 = ((  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * (*) (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)NULL, (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 *)L_0, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_1, (int32_t)8, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_2, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_3;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Boolean>(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * TaskFactory_StartNew_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_m488157686BD2E6A804630745DD1EB383F0A7FF75_gshared (TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * __this, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)1;
		int32_t L_0 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_0, /*hidden argument*/NULL);
		Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 * L_2 = ___function0;
		RuntimeObject * L_3 = ___state1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler4;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * L_7;
		L_7 = ((  Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 * (*) (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *, RuntimeObject *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_1, (Func_2_t99409DECFF50F0FA9B427C863AC6C99C66E6F9F8 *)L_2, (RuntimeObject *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Task_1_t9C1FE9F18F52F3409B9E970FA38801A443AE7849 *)L_7;
	}
}
// System.Threading.Tasks.Task`1<TResult> System.Threading.Tasks.TaskFactory::StartNew<System.Object>(System.Func`2<System.Object,TResult>,System.Object,System.Threading.CancellationToken,System.Threading.Tasks.TaskCreationOptions,System.Threading.Tasks.TaskScheduler)
IL2CPP_EXTERN_C IL2CPP_NO_INLINE IL2CPP_METHOD_ATTR Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * TaskFactory_StartNew_TisRuntimeObject_m19F0CC69617003BCAFED726DDAE6686483A9C5C1_gshared (TaskFactory_t22D999A05A967C31A4B5FFBD08864809BF35EA3B * __this, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___function0, RuntimeObject * ___state1, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  ___cancellationToken2, int32_t ___creationOptions3, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * ___scheduler4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		V_0 = (int32_t)1;
		int32_t L_0 = ___creationOptions3;
		IL2CPP_RUNTIME_CLASS_INIT(Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60_il2cpp_TypeInfo_var);
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_1;
		L_1 = Task_InternalCurrentIfAttached_m800D1EA24F27EEB479C1ECC808C82071299834B5((int32_t)L_0, /*hidden argument*/NULL);
		Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * L_2 = ___function0;
		RuntimeObject * L_3 = ___state1;
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_4 = ___cancellationToken2;
		int32_t L_5 = ___creationOptions3;
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_6 = ___scheduler4;
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 1));
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_7;
		L_7 = ((  Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * (*) (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *, RuntimeObject *, CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD , int32_t, int32_t, TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *, int32_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_1, (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 *)L_2, (RuntimeObject *)L_3, (CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD )L_4, (int32_t)L_5, (int32_t)0, (TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D *)L_6, (int32_t*)(int32_t*)(&V_0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_7;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<System.Int32>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m175A2868FCF5F6AACB49377BA82C946DBE7A688C_gshared (RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * V_0 = NULL;
	TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 * V_1 = NULL;
	TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = (TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 *)((TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 *)IsInst((RuntimeObject*)L_0, TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 * L_2 = V_1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2->get_Task_0();
		V_0 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		__Error_WrongAsyncResult_m80DF0BBF083761CBD5A24768964FEF4FD1224BA6(/*hidden argument*/NULL);
	}

IL_0027:
	{
		Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 * L_6 = V_0;
		TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  L_7;
		L_7 = ((  TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887  (*) (Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Task_1_tEF253D967DB628A9F8A389A9F2E4516871FD3725 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 )L_7;
		int32_t L_8;
		L_8 = TaskAwaiter_1_GetResult_m765E3C665961F15E3EEC2471D5837A730DCA3846((TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(TaskAwaiter_1_t0273913A687D34796D1DCFEA29B881E186EDE887 *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (int32_t)L_8;
	}
}
// TResult System.Threading.Tasks.TaskToApm::End<System.Object>(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TaskToApm_End_TisRuntimeObject_m58BE20F688A44E116367F677F1052BC653A2C791_gshared (RuntimeObject* ___asyncResult0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * V_0 = NULL;
	TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 * V_1 = NULL;
	TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___asyncResult0;
		V_1 = (TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 *)((TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 *)IsInst((RuntimeObject*)L_0, TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 * L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_tFF35A8A245817E4C882AAA19F86E6798F7347704 * L_2 = V_1;
		Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 * L_3 = (Task_t804B25CFE3FC13AAEE16C8FA3BF52513F2A8DB60 *)L_2->get_Task_0();
		V_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)IsInst((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___asyncResult0;
		V_0 = (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_5 = V_0;
		if (L_5)
		{
			goto IL_0027;
		}
	}
	{
		__Error_WrongAsyncResult_m80DF0BBF083761CBD5A24768964FEF4FD1224BA6(/*hidden argument*/NULL);
	}

IL_0027:
	{
		Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 * L_6 = V_0;
		TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  L_7;
		L_7 = ((  TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE  (*) (Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((Task_1_tC1805497876E88B78A2B0CB81C6409E0B381AC17 *)L_6, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_2 = (TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE )L_7;
		RuntimeObject * L_8;
		L_8 = TaskAwaiter_1_GetResult_m7703A30E4F4EA17FBA4243DE1BF9412521B2AFDA((TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *)(TaskAwaiter_1_t2631C6B4AF6F87F9DA4817BE4B0962E01B4F47FE *)(&V_2), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		return (RuntimeObject *)L_8;
	}
}
// System.Void UnityEngine.Texture2D::LoadRawTextureData<System.UInt32>(Unity.Collections.NativeArray`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Texture2D_LoadRawTextureData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFCD2DC8FCB465D68BE261A82A1A6EB45CAD476B0_gshared (Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * __this, NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  ___data0, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		bool L_0;
		L_0 = VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean UnityEngine.Texture::get_isReadable() */, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)__this);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0016;
		}
	}
	{
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_2;
		L_2 = Texture_CreateNonReadableException_m5BFE30599C50688EEDE149FB1CEF834BE1633306((Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)__this, (Texture_t9FE0218A1EEDF266E8C85879FE123265CACC95AE *)__this, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_LoadRawTextureData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFCD2DC8FCB465D68BE261A82A1A6EB45CAD476B0_RuntimeMethod_var)));
	}

IL_0016:
	{
		bool L_3;
		L_3 = NativeArray_1_get_IsCreated_m3B37A54D543C525751B889F68FB779C09E0B7FD3((NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(&___data0), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_3)
		{
			goto IL_002b;
		}
	}
	{
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(&___data0))->___m_Length_1);
		G_B5_0 = ((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		goto IL_002c;
	}

IL_002b:
	{
		G_B5_0 = 1;
	}

IL_002c:
	{
		V_1 = (bool)G_B5_0;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_003b;
		}
	}
	{
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_6 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_6, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5A47A1180382F3C4D23BA1B9A5A57E01273B8266)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_LoadRawTextureData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFCD2DC8FCB465D68BE261A82A1A6EB45CAD476B0_RuntimeMethod_var)));
	}

IL_003b:
	{
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_7 = ___data0;
		void* L_8;
		L_8 = ((  void* (*) (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A , const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2)->methodPointer)((NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_7, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		intptr_t L_9;
		L_9 = IntPtr_op_Explicit_mBD40223EE90BDDF40A24C0F321D3398DEA300495((void*)(void*)L_8, /*hidden argument*/NULL);
		int32_t L_10;
		L_10 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A *)(&___data0))->___m_Length_1);
		int32_t L_11;
		L_11 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 3));
		bool L_12;
		L_12 = Texture2D_LoadRawTextureDataImpl_m62693BD5CB00C42253A640095380ED8892278D5D((Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF *)__this, (intptr_t)L_9, (int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_10, (int32_t)L_11)), /*hidden argument*/NULL);
		V_2 = (bool)((((int32_t)L_12) == ((int32_t)0))? 1 : 0);
		bool L_13 = V_2;
		if (!L_13)
		{
			goto IL_006b;
		}
	}
	{
		UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 * L_14 = (UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UnityException_t5BD9575D9E8FC894770E16640BBC9C2A3DF40101_il2cpp_TypeInfo_var)));
		UnityException__ctor_mB8EBFD7A68451D56285E7D51B42FBECFC8A141D8(L_14, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8E421E262D3F4AF84AEBEDBD2408542FE9E06690)), /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_14, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Texture2D_LoadRawTextureData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mFCD2DC8FCB465D68BE261A82A1A6EB45CAD476B0_RuntimeMethod_var)));
	}

IL_006b:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Timeline.IntervalTree`1/Entry<System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisEntry_t7354459F6787FFC973F7672A4A98A04A07EC9C46_mE893D255EA75F86C688371BB604450D40DE937AE_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Entry_t7354459F6787FFC973F7672A4A98A04A07EC9C46  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Entry_t7354459F6787FFC973F7672A4A98A04A07EC9C46 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Collections.Generic.KeyValuePair`2<System.DateTime,System.Object>>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisKeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57_mA4806A887115203276C18C332B40C1DAC07D5497_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(KeyValuePair_2_tB6ECB423D6D4B3D2F916E061DDF9A7C3F0958D57 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BoneWeight1>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisBoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA_m3F2275F03FA343EF9A5C2256ABF049F9A674C3CB_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Byte>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mD3FF229DCBAB38C2923A0DD20744B833969AA61E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	uint8_t V_0 = 0x0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(uint8_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.ClothSphereColliderPair>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisClothSphereColliderPair_t11DDC14104F1854F1FB19988E4AB741362A12C4F_m25CFB69D2D6C2927B6CFFCE6B17A6ACFA568F912_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ClothSphereColliderPair_t11DDC14104F1854F1FB19988E4AB741362A12C4F  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ClothSphereColliderPair_t11DDC14104F1854F1FB19988E4AB741362A12C4F ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Color32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColor32_tDB54A78627878A7D2DE42BB028D64306A18E858D_mB86B8897F2F4044A68F9A3B03DDED5ADB01A7274_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Color32_tDB54A78627878A7D2DE42BB028D64306A18E858D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<ColorDef>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE_mFA2E3603A0073A55CA74A7D6EB8A06B9197CB579_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ColorDef_t0ACF279E6D4709EB54C107B8ACA2A5038F5348BE ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<DnaDef>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C_m21DA5A2C504BA85D24083D7D3AE4D09F71A7C877_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DnaDef_tA72E2F3CE81175787C290AA6752024F9B329418C ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.HumanBone>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisHumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D_m669F8E92A6D249BF7CA62A9B89605CA13F805D1E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(HumanBone_tFEE7CD9B6E62BBB95CC4A6F1AA7FC7A26541D62D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m5865AA873219669B49B7CD22B8F5037B78624444_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Int32Enum>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_t9B63F771913F2B6D586F1173B44A41FBE26F6B5C_m09C495E3282F1EB4D86AFD41E4A1D71D28013202_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Timeline.IntervalTreeNode>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D_m0B8AA1C4D00A889BD8D04CE8CA9BC30337C02335_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	IntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(IntervalTreeNode_t14723E53C7F0CB94A5F64C64519323DD44AAB85D ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Matrix4x4>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461_m6A43883788395C6AFD12012266A320AE1E005436_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDE7FF4F2E2EA284F6EFE00D627789D0E5B8B4461 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Object>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m539AEA437A51B6A554E8ADD3076EDA49258FFF2F_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RuntimeObject * V_0 = NULL;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject *));
		RuntimeObject * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Playables.PlayableBinding>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisPlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2_m8E0514759B32B54F8DCBC090EE9820D91F1C3B81_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(PlayableBinding_t265202500C703254AD9777368C05D1986C8AC7A2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.EventSystems.RaycastResult>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE_m7B6AFD6EC684F98352846D8662E379807D36BFF4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RaycastResult_t9EFDE24B29650BD6DC8A49D954A3769E17146BCE ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Rect>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878_mA1A3CE402E92209E515FEB7C505ED02A96BAE388_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Rect_t7D9187DB6339DBA5741C09B6CCEF2F54F1966878 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<SharedColorDef>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152_mCA3285FC25A2DF92C03D46483DB907E50DB16BA4_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SharedColorDef_t29DFBF99A2ADA133DF5D3840207CE647F5B7F152 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Single>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m725C0271801F3A66BFD397B5C1210DBA009259C8_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(float));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.SkeletonBone>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E_m12B1020293833371A29734E3B60F30A19E9B2F8C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SkeletonBone_t0AD95EAD0BE7D2EC13B2C7505225D340CB456A9E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UICharInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A_m7DF5C6239E156DBE1471885B9B0A2EF4978325C9_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UICharInfo_tDEA65B831FAD06D1E9B10A6088E05C6D615B089A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UILineInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C_mF9A73CFD6E0760C7690ED5253A743B30172980F6_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UILineInfo_tD082FF4894030AD4EBF57ACF6A997135E4B8B67C ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UIVertex>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisUIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A_m50A402D6DF7FC7FCBAE5AF5C0D055FF2C5A2D94E_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(UIVertex_tD94AAC5F0B42DBC441AAA8ADBFCFF9E5C320C03A ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector2>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mC42556DEFBEF6FFAD69BEF457B15E484D2A3855D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector3>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mE2606512887650500549E97A027D886C84CBF61C_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Vector4>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisVector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_mA932D671F9BE87E641DB0FCC8E2DB6C52EA4A76D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<System.Security.Cryptography.X509Certificates.X509ChainStatus>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisX509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB_m7B9C63130AEFA85A8269F524A6956B25D12B71BB_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(X509ChainStatus_tB6C3677955C287CF97042F208630AA0F5ABF77FB ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Timeline.AnimationOutputWeightProcessor/WeightInfo>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA_m9CB15A16792714E801EE66B9C18726E6909FAAA1_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WeightInfo_t251340617EC51F7E375DDE27FD235DBB045434AA ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.BeforeRenderHelper/OrderBlock>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2_m524E3CF7C698B1C70A686928AF4E31E0FB01FD6D_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t0B106828F588BC2F0B9895425E6FD39EDA45C1E2 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Camera/RenderRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94_m8CC8BBE8B343B5710C3AA0F32012D23AC131AFFD_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderRequest_t7DEDFA6AAA1C8D381280183054C328F26BBCCE94 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.Timeline.TimeNotificationBehaviour/NotificationEntry>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisNotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50_mF018FAB977A989E5C36C871D8239778572443F99_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(NotificationEntry_t930D625A1786911197A96C03960EA8D90628FC50 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UMA.Dynamics.UMAPhysicsAvatar/CachedBone>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984_m00A2C966CDC8FA78D7FEF1B6A815BEFE9CA8BE85_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CachedBone_t766E4C0EBC254FA7CF9D945ABAE1502253AB6984 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UMARenderTextureMover/RenderTextureSource>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF_m06979179F12CC90DFA6A9416F03D8FC9774A9CDA_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderTextureSource_t4D3855B719E2673325D5C09AC1FDDDE62DBFF5AF ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UMA.Timeline.UmaDnaBehaviour/DnaTuple>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisDnaTuple_tE339EE2EE4D87D48F1219381C98F86C7E2CA7DAD_mE0BDA934C8AC56A69CADA502BC545B99DA62FBCB_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	DnaTuple_tE339EE2EE4D87D48F1219381C98F86C7E2CA7DAD  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(DnaTuple_tE339EE2EE4D87D48F1219381C98F86C7E2CA7DAD ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// System.Void System.ThrowHelper::IfNullAndNullsAreIllegalThenThrow<UnityEngine.UnitySynchronizationContext/WorkRequest>(System.Object,System.ExceptionArgument)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393_mAA66AF0A6DC5C07BA4B170C83C4E741F47BDED75_gshared (RuntimeObject * ___value0, int32_t ___argName1, const RuntimeMethod* method)
{
	WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject * L_0 = ___value0;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_tA19FD4D1269D8EE2EA886AAF036C4F7F09154393 ));
	}
	{
		int32_t L_2 = ___argName1;
		ThrowHelper_ThrowArgumentNullException_m539081110B94B71D92C9761B273E617B23B4BBA5((int32_t)L_2, /*hidden argument*/NULL);
	}

IL_0019:
	{
		return;
	}
}
// T UnityEngine.Timeline.TimelineAsset::CreateTrack<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TimelineAsset_CreateTrack_TisRuntimeObject_m4425238EDE05046DA400C2289B2DFE34F5B81A89_gshared (TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (T)CreateTrack(typeof(T), null, null);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_2;
		L_2 = TimelineAsset_CreateTrack_m79ACF574FF82BEB5CF4DA965746798301923875B((TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF *)__this, (Type_t *)L_1, (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 *)NULL, (String_t*)NULL, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_2, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T UnityEngine.Timeline.TimelineAsset::CreateTrack<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TimelineAsset_CreateTrack_TisRuntimeObject_m3CEE419C5178EFCBBC0F10653F1875BB0EE0C6AB_gshared (TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * __this, String_t* ___trackName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (T)CreateTrack(typeof(T), null, trackName);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		String_t* L_2 = ___trackName0;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_3;
		L_3 = TimelineAsset_CreateTrack_m79ACF574FF82BEB5CF4DA965746798301923875B((TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF *)__this, (Type_t *)L_1, (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 *)NULL, (String_t*)L_2, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// T UnityEngine.Timeline.TimelineAsset::CreateTrack<System.Object>(UnityEngine.Timeline.TrackAsset,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TimelineAsset_CreateTrack_TisRuntimeObject_mEC04F1960E1EDB4BC97FBA1CD3D24B24008A2583_gshared (TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF * __this, TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * ___parent0, String_t* ___trackName1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (T)CreateTrack(typeof(T), parent, trackName);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_2 = ___parent0;
		String_t* L_3 = ___trackName1;
		TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * L_4;
		L_4 = TimelineAsset_CreateTrack_m79ACF574FF82BEB5CF4DA965746798301923875B((TimelineAsset_t0E56142B4652E23760FD65D2C31685E0332F98EF *)__this, (Type_t *)L_1, (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 *)L_2, (String_t*)L_3, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// UnityEngine.Timeline.TimelineClip UnityEngine.Timeline.TrackAsset::CreateClip<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * TrackAsset_CreateClip_TisRuntimeObject_m289C341327F8FEFC6E76A7A5496325FDD1E61857_gshared (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return CreateClip(typeof(T));
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F * L_2;
		L_2 = TrackAsset_CreateClip_m972CEFDE74B15CD18C7B9C28CBBF1BF687DDCA67((TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 *)__this, (Type_t *)L_1, /*hidden argument*/NULL);
		return (TimelineClip_tA8F63BEBDD4CBCD06D98ECC874F3C73B01D9097F *)L_2;
	}
}
// T UnityEngine.Timeline.TrackAsset::CreateMarker<System.Object>(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * TrackAsset_CreateMarker_TisRuntimeObject_m95CAD98EECB6C377805FE26EF4CC6E7183FC8558_gshared (TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 * __this, double ___time0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return (T)CreateMarker(typeof(T), time);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		double L_2 = ___time0;
		RuntimeObject* L_3;
		L_3 = TrackAsset_CreateMarker_m8B3727B8054147BD7370D85EC2FFB0101F092793((TrackAsset_t423A7B49BA61FF4B7CF88A6DC8F94E0E19CF9628 *)__this, (Type_t *)L_1, (double)L_2, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_3, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}
}
// System.Tuple`2<T1,T2> System.Tuple::Create<System.Object,System.Object>(T1,T2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * Tuple_Create_TisRuntimeObject_TisRuntimeObject_mF386334EA2E5B5781A35A5D57F090EF2A1C6BAD0_gshared (RuntimeObject * ___item10, RuntimeObject * ___item21, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = ___item10;
		RuntimeObject * L_1 = ___item21;
		Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 * L_2 = (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_2, (RuntimeObject *)L_0, (RuntimeObject *)L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		return (Tuple_2_t6E1BB48DA437DE519C0560A93AF96D1E1F3E3EA1 *)L_2;
	}
}
// System.Collections.Generic.List`1<T> UMA.UMAAssetIndexer::GetAllAssets<System.Object>(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * UMAAssetIndexer_GetAllAssets_TisRuntimeObject_m5C461362FA53F207A625DA96D64372E4B5A32CC0_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___foldersToSearch0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m986D7649E362E5CE5965786B7C87076ACEEC1F37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBBE93736E371613263CBBD3497F5ADF1D1A3A63A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7A3E6DA83C4200301CCCE3DCFFA45B211D4CE43C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB48DA06AF575369469BD558A6F0B8D9E34C491C3);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * V_0 = NULL;
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * V_1 = NULL;
	Type_t * V_2 = NULL;
	Type_t * V_3 = NULL;
	Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  V_5;
	memset((&V_5), 0, sizeof(V_5));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// var st = StartTimer();
		IL2CPP_RUNTIME_CLASS_INIT(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_il2cpp_TypeInfo_var);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0;
		L_0 = UMAAssetIndexer_StartTimer_mC4AF49C02BA64E5803FCF550E06E07D95D4C24A0(/*hidden argument*/NULL);
		V_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_0;
		// var ret = new List<T>();
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)il2cpp_codegen_object_new(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(L_1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_1 = (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_1;
		// System.Type ot = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		V_2 = (Type_t *)L_3;
		// System.Type theType = TypeToLookup[ot];
		Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * L_4 = (Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)__this->get_TypeToLookup_10();
		Type_t * L_5 = V_2;
		Type_t * L_6;
		L_6 = Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A((Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)L_4, (Type_t *)L_5, /*hidden argument*/Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		V_3 = (Type_t *)L_6;
		// Dictionary<string, AssetItem> TypeDic = GetAssetDictionary(theType);
		Type_t * L_7 = V_3;
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_8;
		L_8 = UMAAssetIndexer_GetAssetDictionary_mB5130C84D1D562EA07ACD06B5D35C9CD01856742((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (Type_t *)L_7, /*hidden argument*/NULL);
		// foreach (KeyValuePair<string, AssetItem> kp in TypeDic)
		Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3  L_9;
		L_9 = Dictionary_2_GetEnumerator_m986D7649E362E5CE5965786B7C87076ACEEC1F37((Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_8, /*hidden argument*/Dictionary_2_GetEnumerator_m986D7649E362E5CE5965786B7C87076ACEEC1F37_RuntimeMethod_var);
		V_4 = (Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 )L_9;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0069;
		}

IL_0034:
		{
			// foreach (KeyValuePair<string, AssetItem> kp in TypeDic)
			KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  L_10;
			L_10 = Enumerator_get_Current_m7A3E6DA83C4200301CCCE3DCFFA45B211D4CE43C_inline((Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *)(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m7A3E6DA83C4200301CCCE3DCFFA45B211D4CE43C_RuntimeMethod_var);
			V_5 = (KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 )L_10;
			// if (AssetFolderCheck(kp.Value, foldersToSearch))
			AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_11;
			L_11 = KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_inline((KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_RuntimeMethod_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = ___foldersToSearch0;
			bool L_13;
			L_13 = UMAAssetIndexer_AssetFolderCheck_m062CD6395D6B49FB4A2033F02E7F8915887D8501((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_11, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_12, /*hidden argument*/NULL);
			if (!L_13)
			{
				goto IL_0069;
			}
		}

IL_004d:
		{
			// ret.Add((kp.Value.Item as T));
			List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_14 = V_1;
			AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_15;
			L_15 = KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_inline((KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_RuntimeMethod_var);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_16;
			L_16 = AssetItem_get_Item_mA5B06546ACAC8C234DCD56106AAA0693B9BFF5EB_inline((AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_15, /*hidden argument*/NULL);
			((  void (*) (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *, RuntimeObject *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4)->methodPointer)((List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_14, (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_16, IL2CPP_RGCTX_DATA(method->rgctx_data, 3))), IL2CPP_RGCTX_DATA(method->rgctx_data, 3))), /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		}

IL_0069:
		{
			// foreach (KeyValuePair<string, AssetItem> kp in TypeDic)
			bool L_17;
			L_17 = Enumerator_MoveNext_mBBE93736E371613263CBBD3497F5ADF1D1A3A63A((Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *)(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mBBE93736E371613263CBBD3497F5ADF1D1A3A63A_RuntimeMethod_var);
			if (L_17)
			{
				goto IL_0034;
			}
		}

IL_0072:
		{
			IL2CPP_LEAVE(0x82, FINALLY_0074);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0074;
	}

FINALLY_0074:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 > L_18(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3_il2cpp_TypeInfo_var, (&V_4));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__124 = il2cpp_codegen_get_interface_invoke_data(0, (&L_18), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__124.methodPtr)((RuntimeObject*)(&L_18), /*hidden argument*/il2cpp_virtual_invoke_data__124.method);
		V_4 = L_18.m_Value;
		IL2CPP_END_FINALLY(116)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(116)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x82, IL_0082)
	}

IL_0082:
	{
		// StopTimer(st, "GetAllAssets type=" + typeof(T).Name);
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_19 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_20 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_21;
		L_21 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_20, /*hidden argument*/NULL);
		String_t* L_22;
		L_22 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_21);
		String_t* L_23;
		L_23 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B((String_t*)_stringLiteralB48DA06AF575369469BD558A6F0B8D9E34C491C3, (String_t*)L_22, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01_il2cpp_TypeInfo_var);
		UMAAssetIndexer_StopTimer_m63790C352BA608B11C671C7925209D0C6145FDF2((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_19, (String_t*)L_23, /*hidden argument*/NULL);
		// return ret;
		List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * L_24 = V_1;
		return (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 *)L_24;
	}
}
// T UMA.UMAAssetIndexer::GetAsset<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UMAAssetIndexer_GetAsset_TisRuntimeObject_m8F3ADCE9EE871A324105E5C270E40CF72332B8CB_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var thisAssetItem = GetAssetItem<T>(name);
		String_t* L_0 = ___name0;
		AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_1;
		L_1 = ((  AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * (*) (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_1;
		// if (thisAssetItem != null)
		AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// return (thisAssetItem.Item as T);
		AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_3 = V_0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_4;
		L_4 = AssetItem_get_Item_mA5B06546ACAC8C234DCD56106AAA0693B9BFF5EB_inline((AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_3, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_4, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_001c:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_5 = V_1;
		return (RuntimeObject *)L_5;
	}
}
// T UMA.UMAAssetIndexer::GetAsset<System.Object>(System.Int32,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UMAAssetIndexer_GetAsset_TisRuntimeObject_mCEA359D9FFBD9C1F71A59750F321F79B7AFF8995_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, int32_t ___nameHash0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___foldersToSearch1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_GetEnumerator_m986D7649E362E5CE5965786B7C87076ACEEC1F37_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m73F5EB5FC46552CA3C767624580C81B7307FF46F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mBBE93736E371613263CBBD3497F5ADF1D1A3A63A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7A3E6DA83C4200301CCCE3DCFFA45B211D4CE43C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4127313846D6DCEF28BF8D7B94FA57B6D9AF3DE2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D2318B5BDE6D244B9EACC3D7582699E2EEA9707);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCABF394563EE5A406DDC53B5B8B4CD82A39BA23F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCC4A13A2EC33AED24765C09230245B333FDA9EAA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * V_0 = NULL;
	Type_t * V_1 = NULL;
	String_t* V_2 = NULL;
	int32_t V_3 = 0;
	Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3  V_4;
	memset((&V_4), 0, sizeof(V_4));
	KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  V_5;
	memset((&V_5), 0, sizeof(V_5));
	int64_t V_6 = 0;
	RuntimeObject * V_7 = NULL;
	RuntimeObject * V_8 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 3> __leave_targets;
	{
		// System.Diagnostics.Stopwatch st = new System.Diagnostics.Stopwatch();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)il2cpp_codegen_object_new(Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89_il2cpp_TypeInfo_var);
		Stopwatch__ctor_mDE97B28A72294ABF18E6E9769086E202C3586CA7(L_0, /*hidden argument*/NULL);
		V_0 = (Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_0;
		// st.Start();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_1 = V_0;
		Stopwatch_Start_mED237B2178B2075FAED706E2A38111496B28DBDE((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_1, /*hidden argument*/NULL);
		// System.Type ot = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		V_1 = (Type_t *)L_3;
		// Dictionary<string, AssetItem> TypeDic = (Dictionary<string, AssetItem>)TypeLookup[ot];
		Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 * L_4 = (Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 *)__this->get_TypeLookup_13();
		Type_t * L_5 = V_1;
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_6;
		L_6 = Dictionary_2_get_Item_m73F5EB5FC46552CA3C767624580C81B7307FF46F((Dictionary_2_t2D8A8C3EF7644021525BAF18055B8DEDD7C83EB2 *)L_4, (Type_t *)L_5, /*hidden argument*/Dictionary_2_get_Item_m73F5EB5FC46552CA3C767624580C81B7307FF46F_RuntimeMethod_var);
		// string assetName = "";
		V_2 = (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// int assetHash = -1;
		V_3 = (int32_t)(-1);
		// foreach (KeyValuePair<string, AssetItem> kp in TypeDic)
		Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3  L_7;
		L_7 = Dictionary_2_GetEnumerator_m986D7649E362E5CE5965786B7C87076ACEEC1F37((Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_6, /*hidden argument*/Dictionary_2_GetEnumerator_m986D7649E362E5CE5965786B7C87076ACEEC1F37_RuntimeMethod_var);
		V_4 = (Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 )L_7;
	}

IL_0032:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0175;
		}

IL_0037:
		{
			// foreach (KeyValuePair<string, AssetItem> kp in TypeDic)
			KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479  L_8;
			L_8 = Enumerator_get_Current_m7A3E6DA83C4200301CCCE3DCFFA45B211D4CE43C_inline((Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *)(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *)(&V_4), /*hidden argument*/Enumerator_get_Current_m7A3E6DA83C4200301CCCE3DCFFA45B211D4CE43C_RuntimeMethod_var);
			V_5 = (KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 )L_8;
			// assetName = "";
			V_2 = (String_t*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// assetHash = -1;
			V_3 = (int32_t)(-1);
			// GetEvilAssetNameAndHash(typeof(T), kp.Value.Item, ref assetName, assetHash);
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_9 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_10;
			L_10 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_9, /*hidden argument*/NULL);
			AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_11;
			L_11 = KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_inline((KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_RuntimeMethod_var);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_12;
			L_12 = AssetItem_get_Item_mA5B06546ACAC8C234DCD56106AAA0693B9BFF5EB_inline((AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_11, /*hidden argument*/NULL);
			int32_t L_13 = V_3;
			UMAAssetIndexer_GetEvilAssetNameAndHash_m30430074EBB79BD4A3C5A08DA557FE8CB4952D7E((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (Type_t *)L_10, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)L_12, (String_t**)(String_t**)(&V_2), (int32_t)L_13, /*hidden argument*/NULL);
			// if (assetHash == nameHash)
			int32_t L_14 = V_3;
			int32_t L_15 = ___nameHash0;
			if ((!(((uint32_t)L_14) == ((uint32_t)L_15))))
			{
				goto IL_0175;
			}
		}

IL_006e:
		{
			// if (AssetFolderCheck(kp.Value, foldersToSearch))
			AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_16;
			L_16 = KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_inline((KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_RuntimeMethod_var);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = ___foldersToSearch1;
			bool L_18;
			L_18 = UMAAssetIndexer_AssetFolderCheck_m062CD6395D6B49FB4A2033F02E7F8915887D8501((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_16, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_17, /*hidden argument*/NULL);
			if (!L_18)
			{
				goto IL_0101;
			}
		}

IL_0081:
		{
			// st.Stop();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_19 = V_0;
			Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_19, /*hidden argument*/NULL);
			// if (st.ElapsedMilliseconds > 2)
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_20 = V_0;
			int64_t L_21;
			L_21 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_20, /*hidden argument*/NULL);
			if ((((int64_t)L_21) <= ((int64_t)((int64_t)((int64_t)2)))))
			{
				goto IL_00e4;
			}
		}

IL_0091:
		{
			// if (Debug.isDebugBuild)
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			bool L_22;
			L_22 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
			if (!L_22)
			{
				goto IL_00e4;
			}
		}

IL_0098:
		{
			// Debug.Log("GetAsset 0 for type "+typeof(T).Name+" completed in " + st.ElapsedMilliseconds + "ms");
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_24 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_23;
			ArrayElementTypeCheck (L_24, _stringLiteral4D2318B5BDE6D244B9EACC3D7582699E2EEA9707);
			(L_24)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral4D2318B5BDE6D244B9EACC3D7582699E2EEA9707);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_24;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_26 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_27;
			L_27 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_26, /*hidden argument*/NULL);
			String_t* L_28;
			L_28 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_27);
			ArrayElementTypeCheck (L_25, L_28);
			(L_25)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_28);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_25;
			ArrayElementTypeCheck (L_29, _stringLiteral4127313846D6DCEF28BF8D7B94FA57B6D9AF3DE2);
			(L_29)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4127313846D6DCEF28BF8D7B94FA57B6D9AF3DE2);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_29;
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_31 = V_0;
			int64_t L_32;
			L_32 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_31, /*hidden argument*/NULL);
			V_6 = (int64_t)L_32;
			String_t* L_33;
			L_33 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(int64_t*)(&V_6), /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_30, L_33);
			(L_30)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_33);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_30;
			ArrayElementTypeCheck (L_34, _stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
			(L_34)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
			String_t* L_35;
			L_35 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_34, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((RuntimeObject *)L_35, /*hidden argument*/NULL);
		}

IL_00e4:
		{
			// return (kp.Value.Item as T);
			AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_36;
			L_36 = KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_inline((KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(KeyValuePair_2_tF178A4D6A4D3E1FA30B856BA3DCD238469C74479 *)(&V_5), /*hidden argument*/KeyValuePair_2_get_Value_mFC2F3905932E2DC7F34C3AC10A846EEF7C1E303A_RuntimeMethod_var);
			Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_37;
			L_37 = AssetItem_get_Item_mA5B06546ACAC8C234DCD56106AAA0693B9BFF5EB_inline((AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_36, /*hidden argument*/NULL);
			V_7 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_37, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
			IL2CPP_LEAVE(0x1FF, FINALLY_0183);
		}

IL_0101:
		{
			// st.Stop();
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_38 = V_0;
			Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_38, /*hidden argument*/NULL);
			// if (st.ElapsedMilliseconds > 2)
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_39 = V_0;
			int64_t L_40;
			L_40 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_39, /*hidden argument*/NULL);
			if ((((int64_t)L_40) <= ((int64_t)((int64_t)((int64_t)2)))))
			{
				goto IL_0164;
			}
		}

IL_0111:
		{
			// if (Debug.isDebugBuild)
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			bool L_41;
			L_41 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
			if (!L_41)
			{
				goto IL_0164;
			}
		}

IL_0118:
		{
			// Debug.Log("GetAsset 1 for type " + typeof(T).Name + " completed in " + st.ElapsedMilliseconds + "ms");
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_42;
			ArrayElementTypeCheck (L_43, _stringLiteralCC4A13A2EC33AED24765C09230245B333FDA9EAA);
			(L_43)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCC4A13A2EC33AED24765C09230245B333FDA9EAA);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_44 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_43;
			RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_45 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
			IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
			Type_t * L_46;
			L_46 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_45, /*hidden argument*/NULL);
			String_t* L_47;
			L_47 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_46);
			ArrayElementTypeCheck (L_44, L_47);
			(L_44)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_47);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_48 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_44;
			ArrayElementTypeCheck (L_48, _stringLiteral4127313846D6DCEF28BF8D7B94FA57B6D9AF3DE2);
			(L_48)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4127313846D6DCEF28BF8D7B94FA57B6D9AF3DE2);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_49 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_48;
			Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_50 = V_0;
			int64_t L_51;
			L_51 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_50, /*hidden argument*/NULL);
			V_6 = (int64_t)L_51;
			String_t* L_52;
			L_52 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(int64_t*)(&V_6), /*hidden argument*/NULL);
			ArrayElementTypeCheck (L_49, L_52);
			(L_49)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_52);
			StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_53 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_49;
			ArrayElementTypeCheck (L_53, _stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
			(L_53)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
			String_t* L_54;
			L_54 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_53, /*hidden argument*/NULL);
			IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
			Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((RuntimeObject *)L_54, /*hidden argument*/NULL);
		}

IL_0164:
		{
			// return null;
			il2cpp_codegen_initobj((&V_8), sizeof(RuntimeObject *));
			RuntimeObject * L_55 = V_8;
			V_7 = (RuntimeObject *)L_55;
			IL2CPP_LEAVE(0x1FF, FINALLY_0183);
		}

IL_0175:
		{
			// foreach (KeyValuePair<string, AssetItem> kp in TypeDic)
			bool L_56;
			L_56 = Enumerator_MoveNext_mBBE93736E371613263CBBD3497F5ADF1D1A3A63A((Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *)(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 *)(&V_4), /*hidden argument*/Enumerator_MoveNext_mBBE93736E371613263CBBD3497F5ADF1D1A3A63A_RuntimeMethod_var);
			if (L_56)
			{
				goto IL_0037;
			}
		}

IL_0181:
		{
			IL2CPP_LEAVE(0x191, FINALLY_0183);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0183;
	}

FINALLY_0183:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3 > L_57(Enumerator_tCDB8C126FEA3D8F37FCB24762F06815E5D33D2F3_il2cpp_TypeInfo_var, (&V_4));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__395 = il2cpp_codegen_get_interface_invoke_data(0, (&L_57), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__395.methodPtr)((RuntimeObject*)(&L_57), /*hidden argument*/il2cpp_virtual_invoke_data__395.method);
		V_4 = L_57.m_Value;
		IL2CPP_END_FINALLY(387)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(387)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x1FF, IL_01ff)
		IL2CPP_JUMP_TBL(0x191, IL_0191)
	}

IL_0191:
	{
		// st.Stop();
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_58 = V_0;
		Stopwatch_Stop_mF6DEB63574AC382A681D1D8B9FFE56C1C806BE63((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_58, /*hidden argument*/NULL);
		// if (st.ElapsedMilliseconds > 2)
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_59 = V_0;
		int64_t L_60;
		L_60 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_59, /*hidden argument*/NULL);
		if ((((int64_t)L_60) <= ((int64_t)((int64_t)((int64_t)2)))))
		{
			goto IL_01f4;
		}
	}
	{
		// if (Debug.isDebugBuild)
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		bool L_61;
		L_61 = Debug_get_isDebugBuild_mD0384FE4EA71AA14019FF171ADCE2F637C6E541C(/*hidden argument*/NULL);
		if (!L_61)
		{
			goto IL_01f4;
		}
	}
	{
		// Debug.Log("GetAsset 2 for type " + typeof(T).Name + " completed in " + st.ElapsedMilliseconds + "ms");
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_62 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_63 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_62;
		ArrayElementTypeCheck (L_63, _stringLiteralCABF394563EE5A406DDC53B5B8B4CD82A39BA23F);
		(L_63)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCABF394563EE5A406DDC53B5B8B4CD82A39BA23F);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_64 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_63;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_65 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_66;
		L_66 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_65, /*hidden argument*/NULL);
		String_t* L_67;
		L_67 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_66);
		ArrayElementTypeCheck (L_64, L_67);
		(L_64)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(1), (String_t*)L_67);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_68 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_64;
		ArrayElementTypeCheck (L_68, _stringLiteral4127313846D6DCEF28BF8D7B94FA57B6D9AF3DE2);
		(L_68)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral4127313846D6DCEF28BF8D7B94FA57B6D9AF3DE2);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_69 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_68;
		Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 * L_70 = V_0;
		int64_t L_71;
		L_71 = Stopwatch_get_ElapsedMilliseconds_m6A137C9E989F74F61752FA86BB41ABAEC2A11FB5((Stopwatch_t78C5E942A89311381E0D8894576457C33462DF89 *)L_70, /*hidden argument*/NULL);
		V_6 = (int64_t)L_71;
		String_t* L_72;
		L_72 = Int64_ToString_m8AAA883F340993DCDF339C208F3416C3BA82589F((int64_t*)(int64_t*)(&V_6), /*hidden argument*/NULL);
		ArrayElementTypeCheck (L_69, L_72);
		(L_69)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(3), (String_t*)L_72);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_73 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_69;
		ArrayElementTypeCheck (L_73, _stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
		(L_73)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral5BFB046F8A244A5090ECD5F19EF3A6A728E2F5B7);
		String_t* L_74;
		L_74 = String_Concat_mFEA7EFA1A6E75B96B1B7BC4526AAC864BFF83CC9((StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_73, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8((RuntimeObject *)L_74, /*hidden argument*/NULL);
	}

IL_01f4:
	{
		// return null;
		il2cpp_codegen_initobj((&V_8), sizeof(RuntimeObject *));
		RuntimeObject * L_75 = V_8;
		return (RuntimeObject *)L_75;
	}

IL_01ff:
	{
		// }
		RuntimeObject * L_76 = V_7;
		return (RuntimeObject *)L_76;
	}
}
// T UMA.UMAAssetIndexer::GetAsset<System.Object>(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UMAAssetIndexer_GetAsset_TisRuntimeObject_m3773E029B7F7B87C06E729693F215FBDE986A77C_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, String_t* ___name0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___foldersToSearch1, const RuntimeMethod* method)
{
	AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// var thisAssetItem = GetAssetItem<T>(name);
		String_t* L_0 = ___name0;
		AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_1;
		L_1 = ((  AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * (*) (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *, String_t*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (String_t*)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_1;
		// if (thisAssetItem != null)
		AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_2 = V_0;
		if (!L_2)
		{
			goto IL_0030;
		}
	}
	{
		// if (AssetFolderCheck(thisAssetItem, foldersToSearch))
		AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_3 = V_0;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = ___foldersToSearch1;
		bool L_5;
		L_5 = UMAAssetIndexer_AssetFolderCheck_m062CD6395D6B49FB4A2033F02E7F8915887D8501((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_3, (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0026;
		}
	}
	{
		// return (thisAssetItem.Item as T);
		AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_6 = V_0;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_7;
		L_7 = AssetItem_get_Item_mA5B06546ACAC8C234DCD56106AAA0693B9BFF5EB_inline((AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_6, /*hidden argument*/NULL);
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_7, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_0026:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_8 = V_1;
		return (RuntimeObject *)L_8;
	}

IL_0030:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_9 = V_1;
		return (RuntimeObject *)L_9;
	}
}
// UMA.AssetItem UMA.UMAAssetIndexer::GetAssetItem<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * UMAAssetIndexer_GetAssetItem_TisRuntimeObject_mC9DB24D537CA4F76AACBA411B16644CA422768CC_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, String_t* ___Name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5B6027FD49D75402DEA60A2E7D78CFBA98C5BCCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m8D1F51C56CAD4C749EC1CCDB795AD72484320ED2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * V_2 = NULL;
	{
		// System.Type ot = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// System.Type theType = TypeToLookup[ot];
		Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * L_2 = (Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)__this->get_TypeToLookup_10();
		Type_t * L_3 = V_0;
		Type_t * L_4;
		L_4 = Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A((Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)L_2, (Type_t *)L_3, /*hidden argument*/Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		V_1 = (Type_t *)L_4;
		// Dictionary<string, AssetItem> TypeDic = GetAssetDictionary(theType);
		Type_t * L_5 = V_1;
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_6;
		L_6 = UMAAssetIndexer_GetAssetDictionary_mB5130C84D1D562EA07ACD06B5D35C9CD01856742((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (Type_t *)L_5, /*hidden argument*/NULL);
		V_2 = (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_6;
		// if (TypeDic.ContainsKey(Name))
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_7 = V_2;
		String_t* L_8 = ___Name0;
		bool L_9;
		L_9 = Dictionary_2_ContainsKey_m5B6027FD49D75402DEA60A2E7D78CFBA98C5BCCD((Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_7, (String_t*)L_8, /*hidden argument*/Dictionary_2_ContainsKey_m5B6027FD49D75402DEA60A2E7D78CFBA98C5BCCD_RuntimeMethod_var);
		if (!L_9)
		{
			goto IL_0031;
		}
	}
	{
		// return TypeDic[Name];
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_10 = V_2;
		String_t* L_11 = ___Name0;
		AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * L_12;
		L_12 = Dictionary_2_get_Item_m8D1F51C56CAD4C749EC1CCDB795AD72484320ED2((Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_10, (String_t*)L_11, /*hidden argument*/Dictionary_2_get_Item_m8D1F51C56CAD4C749EC1CCDB795AD72484320ED2_RuntimeMethod_var);
		return (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)L_12;
	}

IL_0031:
	{
		// return null;
		return (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 *)NULL;
	}
}
// System.Collections.Generic.List`1<UMA.AssetItem> UMA.UMAAssetIndexer::GetAssetItems<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 * UMAAssetIndexer_GetAssetItems_TisRuntimeObject_m1DAB4FC2CED3FD185CF609A0B790909ABAFAF75F_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Values_m35779C78F6C6ECD998850A2A9CE3C13331940DD5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m056662453E63A6F84D80F70B7DF291DFA6B5B467_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7B5148466AE133C5127B2963B2AE94FA1BDDB8E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * V_2 = NULL;
	{
		// List<AssetItem> Items = new List<AssetItem>();
		List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 * L_0 = (List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 *)il2cpp_codegen_object_new(List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29_il2cpp_TypeInfo_var);
		List_1__ctor_m7B5148466AE133C5127B2963B2AE94FA1BDDB8E4(L_0, /*hidden argument*/List_1__ctor_m7B5148466AE133C5127B2963B2AE94FA1BDDB8E4_RuntimeMethod_var);
		// System.Type ot = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_2;
		// System.Type theType = TypeToLookup[ot];
		Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * L_3 = (Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)__this->get_TypeToLookup_10();
		Type_t * L_4 = V_0;
		Type_t * L_5;
		L_5 = Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A((Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)L_3, (Type_t *)L_4, /*hidden argument*/Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		V_1 = (Type_t *)L_5;
		// Dictionary<string, AssetItem> TypeDic = GetAssetDictionary(theType);
		Type_t * L_6 = V_1;
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_7;
		L_7 = UMAAssetIndexer_GetAssetDictionary_mB5130C84D1D562EA07ACD06B5D35C9CD01856742((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (Type_t *)L_6, /*hidden argument*/NULL);
		V_2 = (Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_7;
		// Items.AddRange(TypeDic.Values);
		List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 * L_8 = (List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 *)L_0;
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_9 = V_2;
		ValueCollection_t4CF8EA1F105EB04EDDB45626259115AE26C9DF7F * L_10;
		L_10 = Dictionary_2_get_Values_m35779C78F6C6ECD998850A2A9CE3C13331940DD5((Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_9, /*hidden argument*/Dictionary_2_get_Values_m35779C78F6C6ECD998850A2A9CE3C13331940DD5_RuntimeMethod_var);
		List_1_AddRange_m056662453E63A6F84D80F70B7DF291DFA6B5B467((List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 *)L_8, (RuntimeObject*)L_10, /*hidden argument*/List_1_AddRange_m056662453E63A6F84D80F70B7DF291DFA6B5B467_RuntimeMethod_var);
		// return Items;
		return (List_1_tFD921E2DBD34284982B511F0E8579D0C23725C29 *)L_8;
	}
}
// System.Boolean UMA.UMAAssetIndexer::HasAsset<System.Object>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UMAAssetIndexer_HasAsset_TisRuntimeObject_mCA5D184C606D8FED430BA94DF6B7EB1873B05FBE_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, int32_t ___NameHash0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Keys_m301F92306CBA5DA60037046138010E7C76C1B774_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m68B8A1D0F62BD1367B04F5F79211FB3C1CFEE220_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m07B09E6B744869CE90CD990555B247FBA70698BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyCollection_GetEnumerator_mC6B62D95B95970C5C4E664638C9D7873EA64E7C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 2> __leave_targets;
	{
		// System.Type ot = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// System.Type theType = TypeToLookup[ot];
		Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * L_2 = (Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)__this->get_TypeToLookup_10();
		Type_t * L_3 = V_0;
		Type_t * L_4;
		L_4 = Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A((Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)L_2, (Type_t *)L_3, /*hidden argument*/Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		V_1 = (Type_t *)L_4;
		// Dictionary<string, AssetItem> TypeDic = GetAssetDictionary(theType);
		Type_t * L_5 = V_1;
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_6;
		L_6 = UMAAssetIndexer_GetAssetDictionary_mB5130C84D1D562EA07ACD06B5D35C9CD01856742((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (Type_t *)L_5, /*hidden argument*/NULL);
		// foreach(string s in TypeDic.Keys)
		KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 * L_7;
		L_7 = Dictionary_2_get_Keys_m301F92306CBA5DA60037046138010E7C76C1B774((Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_6, /*hidden argument*/Dictionary_2_get_Keys_m301F92306CBA5DA60037046138010E7C76C1B774_RuntimeMethod_var);
		Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214  L_8;
		L_8 = KeyCollection_GetEnumerator_mC6B62D95B95970C5C4E664638C9D7873EA64E7C5((KeyCollection_tC5870B7F5A8DF1B8EDD73456F6CF3D0F1CC1C876 *)L_7, /*hidden argument*/KeyCollection_GetEnumerator_mC6B62D95B95970C5C4E664638C9D7873EA64E7C5_RuntimeMethod_var);
		V_2 = (Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 )L_8;
	}

IL_002a:
	try
	{ // begin try (depth: 1)
		{
			goto IL_003f;
		}

IL_002c:
		{
			// foreach(string s in TypeDic.Keys)
			String_t* L_9;
			L_9 = Enumerator_get_Current_m07B09E6B744869CE90CD990555B247FBA70698BF_inline((Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 *)(Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 *)(&V_2), /*hidden argument*/Enumerator_get_Current_m07B09E6B744869CE90CD990555B247FBA70698BF_RuntimeMethod_var);
			// if (UMAUtils.StringToHash(s) == NameHash) return true;
			IL2CPP_RUNTIME_CLASS_INIT(UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
			int32_t L_10;
			L_10 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47((String_t*)L_9, /*hidden argument*/NULL);
			int32_t L_11 = ___NameHash0;
			if ((!(((uint32_t)L_10) == ((uint32_t)L_11))))
			{
				goto IL_003f;
			}
		}

IL_003b:
		{
			// if (UMAUtils.StringToHash(s) == NameHash) return true;
			V_3 = (bool)1;
			IL2CPP_LEAVE(0x5A, FINALLY_004a);
		}

IL_003f:
		{
			// foreach(string s in TypeDic.Keys)
			bool L_12;
			L_12 = Enumerator_MoveNext_m68B8A1D0F62BD1367B04F5F79211FB3C1CFEE220((Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 *)(Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 *)(&V_2), /*hidden argument*/Enumerator_MoveNext_m68B8A1D0F62BD1367B04F5F79211FB3C1CFEE220_RuntimeMethod_var);
			if (L_12)
			{
				goto IL_002c;
			}
		}

IL_0048:
		{
			IL2CPP_LEAVE(0x58, FINALLY_004a);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_004a;
	}

FINALLY_004a:
	{ // begin finally (depth: 1)
		Il2CppFakeBox<Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214 > L_13(Enumerator_tBDEE81B1A7C6063DF635A3ED72793E2A72FE0214_il2cpp_TypeInfo_var, (&V_2));
		const VirtualInvokeData& il2cpp_virtual_invoke_data__82 = il2cpp_codegen_get_interface_invoke_data(0, (&L_13), IDisposable_t099785737FC6A1E3699919A94109383715A8D807_il2cpp_TypeInfo_var);
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_virtual_invoke_data__82.methodPtr)((RuntimeObject*)(&L_13), /*hidden argument*/il2cpp_virtual_invoke_data__82.method);
		V_2 = L_13.m_Value;
		IL2CPP_END_FINALLY(74)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(74)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x5A, IL_005a)
		IL2CPP_JUMP_TBL(0x58, IL_0058)
	}

IL_0058:
	{
		// return false;
		return (bool)0;
	}

IL_005a:
	{
		// }
		bool L_14 = V_3;
		return (bool)L_14;
	}
}
// System.Boolean UMA.UMAAssetIndexer::HasAsset<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UMAAssetIndexer_HasAsset_TisRuntimeObject_m064E3E10B48BF7ED11775B44EA93CAEA45911031_gshared (UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 * __this, String_t* ___Name0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m5B6027FD49D75402DEA60A2E7D78CFBA98C5BCCD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	Type_t * V_1 = NULL;
	{
		// System.Type ot = typeof(T);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		V_0 = (Type_t *)L_1;
		// System.Type theType = TypeToLookup[ot];
		Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 * L_2 = (Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)__this->get_TypeToLookup_10();
		Type_t * L_3 = V_0;
		Type_t * L_4;
		L_4 = Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A((Dictionary_2_tDDE97F4B1F5CCF200FCAA220F329933EA034D506 *)L_2, (Type_t *)L_3, /*hidden argument*/Dictionary_2_get_Item_mDA2B2396D03FE60520D3A9D0E7E81B2A15C5CD6A_RuntimeMethod_var);
		V_1 = (Type_t *)L_4;
		// Dictionary<string, AssetItem> TypeDic = GetAssetDictionary(theType);
		Type_t * L_5 = V_1;
		Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF * L_6;
		L_6 = UMAAssetIndexer_GetAssetDictionary_mB5130C84D1D562EA07ACD06B5D35C9CD01856742((UMAAssetIndexer_t0958426AAFA471048D74A49EC65154FB9F712B01 *)__this, (Type_t *)L_5, /*hidden argument*/NULL);
		// return TypeDic.ContainsKey(Name);
		String_t* L_7 = ___Name0;
		bool L_8;
		L_8 = Dictionary_2_ContainsKey_m5B6027FD49D75402DEA60A2E7D78CFBA98C5BCCD((Dictionary_2_t5E870911C69BECC35EA206F0218FDDB7F6F1D5CF *)L_6, (String_t*)L_7, /*hidden argument*/Dictionary_2_ContainsKey_m5B6027FD49D75402DEA60A2E7D78CFBA98C5BCCD_RuntimeMethod_var);
		return (bool)L_8;
	}
}
// T UMA.UMAData::GetDna<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UMAData_GetDna_TisRuntimeObject_mD07A7F88E5DE035EDDE3957A8197799DA252CC5A_gshared (UMAData_t696E4E970704E7893146E28998A230A9F2947B3C * __this, const RuntimeMethod* method)
{
	{
		// return umaRecipe.GetDna<T>();
		UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * L_0;
		L_0 = UMAData_get_umaRecipe_mA483677FA4299F451DC83305FFC9E39FAB149A35((UMAData_t696E4E970704E7893146E28998A230A9F2947B3C *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_1;
		L_1 = ((  RuntimeObject * (*) (UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		return (RuntimeObject *)L_1;
	}
}
// UMA.UMAProperty UMA.UMAMaterialPropertyBlock::AddProperty<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C * UMAMaterialPropertyBlock_AddProperty_TisRuntimeObject_m89993EE0FED6BC9C3BAD219126B2358C6B4BC0DD_gshared (UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869 * __this, String_t* ___propertyName0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C * V_0 = NULL;
	{
		// UMAProperty prop = Activator.CreateInstance<t>() as UMAProperty;
		RuntimeObject * L_0;
		L_0 = ((  RuntimeObject * (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C *)((UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C *)IsInst((RuntimeObject*)L_0, UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C_il2cpp_TypeInfo_var));
		// prop.name = propertyName;
		UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C * L_1 = V_0;
		String_t* L_2 = ___propertyName0;
		L_1->set_name_4(L_2);
		// AddProperty(prop);
		UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C * L_3 = V_0;
		UMAMaterialPropertyBlock_AddProperty_m61849AE047C9275D77A6E42C61B34D3F81EF5A74((UMAMaterialPropertyBlock_tCBC616C594C9658EFB092E564FC0B8D14531C869 *)__this, (UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C *)L_3, /*hidden argument*/NULL);
		// return prop;
		UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C * L_4 = V_0;
		return (UMAProperty_tA8CBC12C9927A788B28A9029E5A21B3DBED5768C *)L_4;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m64B7496928323FC31813F990FE5AC06057213ABD_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.BoneWeight1>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA_m3E2EF8A4AC846FD20E611EA24E1E5AAB41FDA841_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB20DF48ED17C5C1B91F7B365DA01C9D9883CE22D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m4DA9BD8ABD57EA456BBBF0DB0A9917AE7A67806D_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mD39AE841C76B62A720795E45A9CAB847804CDBD2_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mF71D0A0AD3A01326E5D0D9C4D78FFE82E985A28E_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m09F25FBB56E0C6D47B13ED9CC53D648A87BE56E3_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::AlignOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m37A5C2CAF53990153CF7045B3AFD5E037FE1CFB0_gshared (const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_0 = (int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_0, (int32_t)L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return (int32_t)L_2;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  UnsafeUtility_ReadArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mF1E1FA0E9424F2F320E9B0339FC687ADF10BCBA9_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = (*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.BoneWeight1>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA  UnsafeUtility_ReadArrayElement_TisBoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA_m717117D997EAD23131A679E4BC898D24B794BE2D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA );
		BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA  L_3 = (*(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Byte>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_m3A787297B1A91CA14E1AA3B0034A681D407C2C6F_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint8_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Int32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mB96EA425698FAC912FBF9F171D49A9115BBC6D3B_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (int32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  UnsafeUtility_ReadArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_m4E2C63FA44B1C28449F8F4BB7905B51D78AE236D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = (*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.Object>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UnsafeUtility_ReadArrayElement_TisRuntimeObject_mF01BC97D058E55A4713C93F8CB551700296191ED_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = (*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (RuntimeObject *)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Plane>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  UnsafeUtility_ReadArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mEECC8D753A2ECD36000F48387C6A2D1D4E564F62_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = (*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 )L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<System.UInt32>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t UnsafeUtility_ReadArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mE811E8D32BDD37FAA30D65CCC1FCD5CF752FC61D_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = (*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (uint32_t)L_3;
	}
}
// T Unity.Collections.LowLevel.Unsafe.UnsafeUtility::ReadArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  UnsafeUtility_ReadArrayElement_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m19B2467463C1EB03064DF2F7CDBC81F62901E0E1_gshared (void* ___source0, int32_t ___index1, const RuntimeMethod* method)
{
	{
		void* L_0 = ___source0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = (*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))));
		return (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E )L_3;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Rendering.BatchVisibility>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F_m4F09A05D3DD170DFA1F796E0A8FA0B313C65725B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2FCEDE21F23B91BD30F8918F2014E815BB7A2D1F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.BoneWeight1>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3E1D17534582A89F27440A3334541AAFE36CA608_m57CE454A903AD66ADD4A7FD0FA5E02E72D82F368_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3E1D17534582A89F27440A3334541AAFE36CA608 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Byte>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A_m483AA7FC51E6A112FC0A4D06D38B11D37DFEF879_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t030625109E9AAAF4D093DC2F7FAA2BEC2000FA0A );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.Int32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1_mDA545781E7F1E51EA4B8806FE9681D3A0680C2BF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t2D37A63A0766FF4D4D0AA3CCD8879D66AC006FF1 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Experimental.GlobalIllumination.LightDataGI>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17_m78DEA1E58B4D9D6E271BFF9B14011D45ED34B031_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tB73C2380111688DFF4CDA578F1D646B893208D17 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Plane>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893_m7C04B3AA1BAA024C62459AAFF0C635C222310A16_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844B26E46E7279186C852FA310311C251B480893 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<System.UInt32>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0_m63AA9F73125758E2B2AE66DB1D84431649E73D40_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5566EA2E593CB8248CE5949452A1803A03E3AEE0 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<Unity.Collections.LowLevel.Unsafe.UnsafeUtility/AlignOfHelper`1<UnityEngine.Vector3>>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F_m60083E9F92A736196324FA983CE4F4A61CDC71BC_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tF2F4ACF834CFA6EE379A1392B0983B8E986CC67F );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Rendering.BatchVisibility>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_m59EADA64485304CCC918007EE51D37E128AB411D_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.BoneWeight1>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA_m29D8684580E2354AB395C2FA13E3028CBE846C37_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Byte>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mC38689A53E959AC0D3F9C9BF89F277C4A1D23BBF_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.Int32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_mC154751B6ED1926446C432F482791D0C5D3F663A_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Experimental.GlobalIllumination.LightDataGI>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mBBB6CBF143991B044213D375125D1E6F3352FF81_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Plane>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_m223C8A2842490CA74E75B2180AEE83873D0A4696_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mF52F526110B94ADBF53DDE17836AA18E0295A75B_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
// System.Int32 Unity.Collections.LowLevel.Unsafe.UnsafeUtility::SizeOf<UnityEngine.Vector3>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m8508D752DDCACDDA57921C7B14C2ABAB9E07C134_gshared (const RuntimeMethod* method)
{
	{
		uint32_t L_0 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		return (int32_t)L_0;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Rendering.BatchVisibility>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE_mC2658E4BCDD5CB7B35E546FAE518CF3C4102626E_gshared (void* ___destination0, int32_t ___index1, BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE );
		BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE  L_3 = ___value2;
		*(BatchVisibility_tFA63D052426424FBD58F78E973AAAC52A67B5AFE *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.BoneWeight1>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA_mFC878CBF47A0047ED66104AABADEF9CC4FAB007B_gshared (void* ___destination0, int32_t ___index1, BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA );
		BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA  L_3 = ___value2;
		*(BoneWeight1_t77CEEC838A53B191B12F97F8BD0A97CF7855A3BA *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Byte>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_mB82F9E11B8FEC9E090AEA6C9C2C8A611682E7825_gshared (void* ___destination0, int32_t ___index1, uint8_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___value2;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Int32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m7710B9BDDE46DE6C314C3D8D60C4F93C0BD57392_gshared (void* ___destination0, int32_t ___index1, int32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___value2;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Experimental.GlobalIllumination.LightDataGI>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2_mB7E008D6D4C2008C47D4D71528F6AE7AFCF0B7CB_gshared (void* ___destination0, int32_t ___index1, LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 );
		LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2  L_3 = ___value2;
		*(LightDataGI_t0C34AB69E4E96717FD276B35116C798A641D44F2 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.Object>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisRuntimeObject_mA6478546A0D6B20061E1DAF0862A895CF5D8C044_gshared (void* ___destination0, int32_t ___index1, RuntimeObject * ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(RuntimeObject *);
		RuntimeObject * L_3 = ___value2;
		*(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject **)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))), (void*)L_3);
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Plane>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_t80844BF2332EAFC1DDEDD616A950242031A115C7_mB75E0A57B03F72BC1744169D7F4F8CF73AD98915_gshared (void* ___destination0, int32_t ___index1, Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 );
		Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7  L_3 = ___value2;
		*(Plane_t80844BF2332EAFC1DDEDD616A950242031A115C7 *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<System.UInt32>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_mD0CF58950EF1EBF39DB359EBC77FF0DC6582778F_gshared (void* ___destination0, int32_t ___index1, uint32_t ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(uint32_t);
		uint32_t L_3 = ___value2;
		*(uint32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// System.Void Unity.Collections.LowLevel.Unsafe.UnsafeUtility::WriteArrayElement<UnityEngine.Vector3>(System.Void*,System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_m0236C8B08D58538865ACC8B7EE0340EBD16B4C28_gshared (void* ___destination0, int32_t ___index1, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value2, const RuntimeMethod* method)
{
	{
		void* L_0 = ___destination0;
		int32_t L_1 = ___index1;
		uint32_t L_2 = sizeof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E );
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___value2;
		*(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)((void*)il2cpp_codegen_add((intptr_t)L_0, (intptr_t)((intptr_t)((int64_t)il2cpp_codegen_multiply((int64_t)((int64_t)((int64_t)L_1)), (int64_t)((int64_t)((int64_t)((int32_t)((int32_t)L_2))))))))) = L_3;
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Volatile_Read_TisRuntimeObject_m34EC4B420E3B86C8B06957C02A3FDD87D674E50E_gshared (RuntimeObject ** ___location0, const RuntimeMethod* method)
{
	return VolatileRead(___location0);
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_m3392CE290ADB37963BB566664A63096AF6DABAE4_gshared (RuntimeObject ** ___location0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	VolatileWrite(___location0, ___value1);
}
// T UMA.UMAData/UMARecipe::GetDna<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UMARecipe_GetDna_TisRuntimeObject_mA7CC89E86534C828BB331B9E4C51310DD281ED74_gshared (UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mBFEF5D5AFDDBDD03BE8F36DA871D4A0720C64F73_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 * V_0 = NULL;
	RuntimeObject * V_1 = NULL;
	{
		// if (umaDna.TryGetValue(UMAUtils.StringToHash(typeof(T).Name), out dna))
		Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D * L_0;
		L_0 = UMARecipe_get_umaDna_m13DAA1E998DD50DDE1030F77F107E3CA02B01701((UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A *)__this, /*hidden argument*/NULL);
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_1 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_2;
		L_2 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_1, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = VirtFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, (MemberInfo_t *)L_2);
		IL2CPP_RUNTIME_CLASS_INIT(UMAUtils_t07AD1D3FFC1EC9AC12DDC677831B1CA74BFF02FB_il2cpp_TypeInfo_var);
		int32_t L_4;
		L_4 = UMAUtils_StringToHash_mD0D8D83034D61BE70C101ECCB53A7029756BFC47((String_t*)L_3, /*hidden argument*/NULL);
		bool L_5;
		L_5 = Dictionary_2_TryGetValue_mBFEF5D5AFDDBDD03BE8F36DA871D4A0720C64F73((Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D *)L_0, (int32_t)L_4, (UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 **)(UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 **)(&V_0), /*hidden argument*/Dictionary_2_TryGetValue_mBFEF5D5AFDDBDD03BE8F36DA871D4A0720C64F73_RuntimeMethod_var);
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// return dna as T;
		UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 * L_6 = V_0;
		return (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
	}

IL_002f:
	{
		// return null;
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject *));
		RuntimeObject * L_7 = V_1;
		return (RuntimeObject *)L_7;
	}
}
// T UMA.UMAData/UMARecipe::GetOrCreateDna<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * UMARecipe_GetOrCreateDna_TisRuntimeObject_m2CCE3EFF589139AC09362BD2F626718E5A2C20B5_gshared (UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mC6F2CCF27E10EFFBF702A75D0F7A818FA9451D85_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m2F5DBA9A17813187AD99256B1B4ADA7B5201F4F4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject * V_0 = NULL;
	{
		// T res = GetDna<T>();
		RuntimeObject * L_0;
		L_0 = ((  RuntimeObject * (*) (UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A *)__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_0 = (RuntimeObject *)L_0;
		// if (res == null)
		RuntimeObject * L_1 = V_0;
		if (L_1)
		{
			goto IL_0061;
		}
	}
	{
		// res = typeof(T).GetConstructor(System.Type.EmptyTypes).Invoke(null) as T;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_2 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 2)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_3;
		L_3 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_2, /*hidden argument*/NULL);
		TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* L_4 = ((Type_t_StaticFields*)il2cpp_codegen_static_fields_for(Type_t_il2cpp_TypeInfo_var))->get_EmptyTypes_5();
		ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B * L_5;
		L_5 = Type_GetConstructor_m98D609FCFA8EB6E54A9FF705D77EEE16603B278C((Type_t *)L_3, (TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755*)L_4, /*hidden argument*/NULL);
		RuntimeObject * L_6;
		L_6 = ConstructorInfo_Invoke_m8DF5D6F53038C7B6443EEA82D922724F39CD2906((ConstructorInfo_t449AEC508DCA508EE46784C4F2716545488ACD5B *)L_5, (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)NULL, /*hidden argument*/NULL);
		V_0 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)((RuntimeObject *)IsInst((RuntimeObject*)L_6, IL2CPP_RGCTX_DATA(method->rgctx_data, 1))), IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		// umaDna.Add(res.DNATypeHash, res);
		Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D * L_7;
		L_7 = UMARecipe_get_umaDna_m13DAA1E998DD50DDE1030F77F107E3CA02B01701((UMARecipe_tD2F23FAA5D73F3521F2ECE8BDF2A1A64F2B3C13A *)__this, /*hidden argument*/NULL);
		RuntimeObject * L_8 = V_0;
		int32_t L_9;
		L_9 = VirtFuncInvoker0< int32_t >::Invoke(11 /* System.Int32 UMA.UMADnaBase::get_DNATypeHash() */, (UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 *)L_8);
		RuntimeObject * L_10 = V_0;
		Dictionary_2_Add_mC6F2CCF27E10EFFBF702A75D0F7A818FA9451D85((Dictionary_2_t9FAAD2E42329EB0C3128C7946CC755A2DCFFC60D *)L_7, (int32_t)L_9, (UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 *)L_10, /*hidden argument*/Dictionary_2_Add_mC6F2CCF27E10EFFBF702A75D0F7A818FA9451D85_RuntimeMethod_var);
		// dnaValues.Add(res);
		List_1_t6EB9C928712A968388ECB10159E456120E6DE71D * L_11 = (List_1_t6EB9C928712A968388ECB10159E456120E6DE71D *)__this->get_dnaValues_5();
		RuntimeObject * L_12 = V_0;
		List_1_Add_m2F5DBA9A17813187AD99256B1B4ADA7B5201F4F4((List_1_t6EB9C928712A968388ECB10159E456120E6DE71D *)L_11, (UMADnaBase_t48D53F30EC1A765CED6E25059585A026271E9F40 *)L_12, /*hidden argument*/List_1_Add_m2F5DBA9A17813187AD99256B1B4ADA7B5201F4F4_RuntimeMethod_var);
	}

IL_0061:
	{
		// return res;
		RuntimeObject * L_13 = V_0;
		return (RuntimeObject *)L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  OperationCanceledException_get_CancellationToken_m1755384EF3D1F01B524D2B545723709D5B3487DA_inline (OperationCanceledException_tA90317406FAE39FB4E2C6AA84E12135E1D56B6FB * __this, const RuntimeMethod* method)
{
	{
		CancellationToken_tC9D68381C9164A4BA10397257E87ADC832AF5FFD  L_0 = __this->get__cancellationToken_17();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * TaskScheduler_get_Default_m3FAE18B08A620C75BF0256917EFB236D30AB6BCB_inline (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var);
		TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D * L_0 = ((TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t74FBEEEDBDD5E0088FF0EEC18F45CD866B098D5D_il2cpp_TypeInfo_var))->get_s_defaultTaskScheduler_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * AssetItem_get_Item_mA5B06546ACAC8C234DCD56106AAA0693B9BFF5EB_inline (AssetItem_tA5826EEC12AA80AB15586A661C35F82B29D8A1D6 * __this, const RuntimeMethod* method)
{
	{
		// return _SerializedItem;
		Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * L_0 = __this->get__SerializedItem_4();
		return L_0;
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

// Name: DeadB, Version: 5

#include "../pch.h"

/*!!DEFINE!!*/

/*!!HELPER_DEF!!*/

/*!!HELPER_INC!!*/

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
//---------------------------------------------------------------------------
// Functions
//---------------------------------------------------------------------------

// Function:
//		Offset -> 0x05501FC0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.Start
//		Flags  -> (Native, Public)
// Parameters:
//		bool                                               bRefresh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxMoviePlayer::Start(bool bRefresh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Start");

	UGFxMoviePlayer_Start_Params params {};
	params.bRefresh = bRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05501E50
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVisibility
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetVisibility(const struct FString& MovieClipName, bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVisibility");

	UGFxMoviePlayer_SetVisibility_Params params {};
	params.MovieClipName = MovieClipName;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501C90
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<ScaleformUI_EGFxScaleMode>             ScaleMode                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetViewScaleMode(TEnumAsByte<ScaleformUI_EGFxScaleMode> ScaleMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetViewScaleMode");

	UGFxMoviePlayer_SetViewScaleMode_Params params {};
	params.ScaleMode = ScaleMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501D10
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetViewport
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		int                                                X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Width                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Height                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetViewport(int X, int Y, int Width, int Height)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetViewport");

	UGFxMoviePlayer_SetViewport_Params params {};
	params.X = X;
	params.Y = Y;
	params.Width = Width;
	params.Height = Height;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501BB0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetView3D
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  ViewTransform                                              (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetView3D(const struct FTransform& ViewTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetView3D");

	UGFxMoviePlayer_SetView3D_Params params {};
	params.ViewTransform = ViewTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501A20
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FASValue>                            value                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetVariableValueArray(const struct FString& MovieClipName, const struct FString& MemberName, TArray<struct FASValue> value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVariableValueArray");

	UGFxMoviePlayer_SetVariableValueArray_Params params {};
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x055018A0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetVariableValue
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASValue                                    value                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetVariableValue(const struct FString& MovieClipName, const struct FString& MemberName, const struct FASValue& value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetVariableValue");

	UGFxMoviePlayer_SetVariableValue_Params params {};
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;
	params.value = value;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501820
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetTimingMode
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<ScaleformUI_EGFxTimingMode>            TimingMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetTimingMode(TEnumAsByte<ScaleformUI_EGFxTimingMode> TimingMode)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetTimingMode");

	UGFxMoviePlayer_SetTimingMode_Params params {};
	params.TimingMode = TimingMode;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501640
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetScale
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              XScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              YScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetScale(const struct FString& MovieClipName, float XScale, float YScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetScale");

	UGFxMoviePlayer_SetScale_Params params {};
	params.MovieClipName = MovieClipName;
	params.XScale = XScale;
	params.YScale = YScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501460
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPosition
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetPosition(const struct FString& MovieClipName, float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPosition");

	UGFxMoviePlayer_SetPosition_Params params {};
	params.MovieClipName = MovieClipName;
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x055013B0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPerspective3D
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FASPerspectiveTransform                     PerspectiveTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetPerspective3D(const struct FASPerspectiveTransform& PerspectiveTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPerspective3D");

	UGFxMoviePlayer_SetPerspective3D_Params params {};
	params.PerspectiveTransform = PerspectiveTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501320
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetPause
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bPausePlayback                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetPause(bool bPausePlayback)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetPause");

	UGFxMoviePlayer_SetPause_Params params {};
	params.bPausePlayback = bPausePlayback;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501290
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bCanReceiveInput                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveInput");

	UGFxMoviePlayer_SetMovieCanReceiveInput_Params params {};
	params.bCanReceiveInput = bCanReceiveInput;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501200
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bCanReceiveFocus                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetMovieCanReceiveFocus");

	UGFxMoviePlayer_SetMovieCanReceiveFocus_Params params {};
	params.bCanReceiveFocus = bCanReceiveFocus;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500E50
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FKey>                                Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetFocusIgnoreKeys(TArray<struct FKey> Keys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetFocusIgnoreKeys");

	UGFxMoviePlayer_SetFocusIgnoreKeys_Params params {};
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500D60
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetExternalTexture
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     Resource                                                   (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTexture*                                    Texture                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxMoviePlayer::SetExternalTexture(const struct FString& Resource, class UTexture* Texture)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetExternalTexture");

	UGFxMoviePlayer_SetExternalTexture_Params params {};
	params.Resource = Resource;
	params.Texture = Texture;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05500B50
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform
//		Flags  -> (Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  DisplayTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetDisplayTransform(const struct FString& MovieClipName, const struct FTransform& DisplayTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetDisplayTransform");

	UGFxMoviePlayer_SetDisplayTransform_Params params {};
	params.MovieClipName = MovieClipName;
	params.DisplayTransform = DisplayTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500970
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASDisplayInfo                              Info                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetDisplayInfo(const struct FString& MovieClipName, const struct FASDisplayInfo& Info)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetDisplayInfo");

	UGFxMoviePlayer_SetDisplayInfo_Params params {};
	params.MovieClipName = MovieClipName;
	params.Info = Info;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x055007D0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetColorTransform
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASColorTransform                           UnrealColorTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetColorTransform(const struct FString& MovieClipName, const struct FASColorTransform& UnrealColorTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetColorTransform");

	UGFxMoviePlayer_SetColorTransform_Params params {};
	params.MovieClipName = MovieClipName;
	params.UnrealColorTransform = UnrealColorTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x055006D0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		TArray<struct FKey>                                Keys                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetCaptureKeys(TArray<struct FKey> Keys)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetCaptureKeys");

	UGFxMoviePlayer_SetCaptureKeys_Params params {};
	params.Keys = Keys;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500650
//		Name   -> Function ScaleformUI.GFxMoviePlayer.SetAlignment
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		TEnumAsByte<ScaleformUI_EGFxAlign>                 Align                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::SetAlignment(TEnumAsByte<ScaleformUI_EGFxAlign> Align)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.SetAlignment");

	UGFxMoviePlayer_SetAlignment_Params params {};
	params.Align = Align;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500560
//		Name   -> Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand
//		Flags  -> (Native, Public)
// Parameters:
//		struct FString                                     Command                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Arguments                                                  (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::ReceiveGFxCommand(const struct FString& Command, const struct FString& Arguments)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.ReceiveGFxCommand");

	UGFxMoviePlayer_ReceiveGFxCommand_Params params {};
	params.Command = Command;
	params.Arguments = Arguments;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500200
//		Name   -> Function ScaleformUI.GFxMoviePlayer.OpenMovie
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USwfMovie*                                   SwfMovie                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ExternalScriptInterface                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTextureRenderTarget2D*                      RenderToTexture                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               DisplayWithHudOff                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               StartPaused                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGFxMoviePlayer*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGFxMoviePlayer* UGFxMoviePlayer::STATIC_OpenMovie(class USwfMovie* SwfMovie, class UObject* ExternalScriptInterface, class UTextureRenderTarget2D* RenderToTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OpenMovie");

	UGFxMoviePlayer_OpenMovie_Params params {};
	params.SwfMovie = SwfMovie;
	params.ExternalScriptInterface = ExternalScriptInterface;
	params.RenderToTexture = RenderToTexture;
	params.MoviePlayer = MoviePlayer;
	params.DisplayWithHudOff = DisplayWithHudOff;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x05500180
//		Name   -> Function ScaleformUI.GFxMoviePlayer.OnTick
//		Flags  -> (Native, Public)
// Parameters:
//		float                                              DeltaTime                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::OnTick(float DeltaTime)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnTick");

	UGFxMoviePlayer_OnTick_Params params {};
	params.DeltaTime = DeltaTime;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500160
//		Name   -> Function ScaleformUI.GFxMoviePlayer.OnStart
//		Flags  -> (Native, Public)
void UGFxMoviePlayer::OnStart()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnStart");

	UGFxMoviePlayer_OnStart_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D6B6C0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.OnFocusLost
//		Flags  -> (Native, Public)
// Parameters:
//		int                                                LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::OnFocusLost(int LocalPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnFocusLost");

	UGFxMoviePlayer_OnFocusLost_Params params {};
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x055000D0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.OnFocusGained
//		Flags  -> (Native, Public)
// Parameters:
//		int                                                LocalPlayerIndex                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::OnFocusGained(int LocalPlayerIndex)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnFocusGained");

	UGFxMoviePlayer_OnFocusGained_Params params {};
	params.LocalPlayerIndex = LocalPlayerIndex;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D6FFD0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.OnClose
//		Flags  -> (Native, Public)
void UGFxMoviePlayer::OnClose()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.OnClose");

	UGFxMoviePlayer_OnClose_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FFF90
//		Name   -> Function ScaleformUI.GFxMoviePlayer.LoadAndStart
//		Flags  -> (Native, Public)
// Parameters:
//		struct FString                                     InSwfAssetName                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               bRefresh                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxMoviePlayer::LoadAndStart(const struct FString& InSwfAssetName, bool bRefresh)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.LoadAndStart");

	UGFxMoviePlayer_LoadAndStart_Params params {};
	params.InSwfAssetName = InSwfAssetName;
	params.bRefresh = bRefresh;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FF920
//		Name   -> Function ScaleformUI.GFxMoviePlayer.Invoke
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FASValue UGFxMoviePlayer::Invoke(const struct FString& MovieClipName, const struct FString& FunctionName, TArray<struct FASValue> Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Invoke");

	UGFxMoviePlayer_Invoke_Params params {};
	params.MovieClipName = MovieClipName;
	params.FunctionName = FunctionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FF7C0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndStopI
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::GotoAndStopI(const struct FString& MovieClipName, int Frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndStopI");

	UGFxMoviePlayer_GotoAndStopI_Params params {};
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FF630
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndStop
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::GotoAndStop(const struct FString& MovieClipName, const struct FString& Frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndStop");

	UGFxMoviePlayer_GotoAndStop_Params params {};
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FF4D0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		int                                                Frame                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::GotoAndPlayI(const struct FString& MovieClipName, int Frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndPlayI");

	UGFxMoviePlayer_GotoAndPlayI_Params params {};
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FF340
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GotoAndPlay
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     Frame                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::GotoAndPlay(const struct FString& MovieClipName, const struct FString& Frame)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GotoAndPlay");

	UGFxMoviePlayer_GotoAndPlay_Params params {};
	params.MovieClipName = MovieClipName;
	params.Frame = Frame;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FF260
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVisibility
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxMoviePlayer::GetVisibility(const struct FString& MovieClipName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVisibility");

	UGFxMoviePlayer_GetVisibility_Params params {};
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FF1F0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetView3D
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UGFxMoviePlayer::GetView3D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetView3D");

	UGFxMoviePlayer_GetView3D_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FF0A0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FASValue>                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FASValue> UGFxMoviePlayer::GetVariableValueArray(const struct FString& MovieClipName, const struct FString& MemberName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVariableValueArray");

	UGFxMoviePlayer_GetVariableValueArray_Params params {};
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FEF70
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetVariableValue
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FASValue UGFxMoviePlayer::GetVariableValue(const struct FString& MovieClipName, const struct FString& MemberName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetVariableValue");

	UGFxMoviePlayer_GetVariableValue_Params params {};
	params.MovieClipName = MovieClipName;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FED30
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetScale
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              XScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              YScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxMoviePlayer::GetScale(const struct FString& MovieClipName, float* XScale, float* YScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetScale");

	UGFxMoviePlayer_GetScale_Params params {};
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (XScale != nullptr)
		*XScale = params.XScale;
	if (YScale != nullptr)
		*YScale = params.YScale;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FEAF0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetPosition
//		Flags  -> (Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxMoviePlayer::GetPosition(const struct FString& MovieClipName, float* X, float* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetPosition");

	UGFxMoviePlayer_GetPosition_Params params {};
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FEAA0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetPerspective3D
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FASPerspectiveTransform                     ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FASPerspectiveTransform UGFxMoviePlayer::GetPerspective3D()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetPerspective3D");

	UGFxMoviePlayer_GetPerspective3D_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE9F0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetMovieClip
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGFxObject* UGFxMoviePlayer::GetMovieClip(const struct FString& MovieClipName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetMovieClip");

	UGFxMoviePlayer_GetMovieClip_Params params {};
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE600
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform
//		Flags  -> (Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UGFxMoviePlayer::GetDisplayTransform(const struct FString& MovieClipName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetDisplayTransform");

	UGFxMoviePlayer_GetDisplayTransform_Params params {};
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE4E0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASDisplayInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FASDisplayInfo UGFxMoviePlayer::GetDisplayInfo(const struct FString& MovieClipName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetDisplayInfo");

	UGFxMoviePlayer_GetDisplayInfo_Params params {};
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE3E0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.GetColorTransform
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASColorTransform                           ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FASColorTransform UGFxMoviePlayer::GetColorTransform(const struct FString& MovieClipName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.GetColorTransform");

	UGFxMoviePlayer_GetColorTransform_Params params {};
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE2E0
//		Name   -> Function ScaleformUI.GFxMoviePlayer.Close
//		Flags  -> (Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               Unload                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxMoviePlayer::Close(bool Unload)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxMoviePlayer.Close");

	UGFxMoviePlayer_Close_Params params {};
	params.Unload = Unload;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501F30
//		Name   -> Function ScaleformUI.GFxObject.SetVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               bVisible                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxObject::SetVisible(bool bVisible)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetVisible");

	UGFxObject_SetVisible_Params params {};
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501760
//		Name   -> Function ScaleformUI.GFxObject.SetScale
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              XScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              YScale                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxObject::SetScale(float XScale, float YScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetScale");

	UGFxObject_SetScale_Params params {};
	params.XScale = XScale;
	params.YScale = YScale;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501580
//		Name   -> Function ScaleformUI.GFxObject.SetPosition
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		float                                              X                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxObject::SetPosition(float X, float Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetPosition");

	UGFxObject_SetPosition_Params params {};
	params.X = X;
	params.Y = Y;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05501080
//		Name   -> Function ScaleformUI.GFxObject.SetMemberValueArray
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FASValue>                            Input                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxObject::SetMemberValueArray(class UGFxMoviePlayer* MoviePlayer, const struct FString& MemberName, TArray<struct FASValue> Input)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetMemberValueArray");

	UGFxObject_SetMemberValueArray_Params params {};
	params.MoviePlayer = MoviePlayer;
	params.MemberName = MemberName;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500F50
//		Name   -> Function ScaleformUI.GFxObject.SetMemberValue
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASValue                                    Input                                                      (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
void UGFxObject::SetMemberValue(const struct FString& MemberName, const struct FASValue& Input)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetMemberValue");

	UGFxObject_SetMemberValue_Params params {};
	params.MemberName = MemberName;
	params.Input = Input;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500C80
//		Name   -> Function ScaleformUI.GFxObject.SetDisplayTransform
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  DisplayTransform                                           (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
void UGFxObject::SetDisplayTransform(const struct FTransform& DisplayTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetDisplayTransform");

	UGFxObject_SetDisplayTransform_Params params {};
	params.DisplayTransform = DisplayTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x05500A90
//		Name   -> Function ScaleformUI.GFxObject.SetDisplayInfo
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FASDisplayInfo                              UnrealDisplayInfo                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGFxObject::SetDisplayInfo(const struct FASDisplayInfo& UnrealDisplayInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetDisplayInfo");

	UGFxObject_SetDisplayInfo_Params params {};
	params.UnrealDisplayInfo = UnrealDisplayInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x055008D0
//		Name   -> Function ScaleformUI.GFxObject.SetColorTransform
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FASColorTransform                           UnrealColorTransform                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
void UGFxObject::SetColorTransform(const struct FASColorTransform& UnrealColorTransform)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.SetColorTransform");

	UGFxObject_SetColorTransform_Params params {};
	params.UnrealColorTransform = UnrealColorTransform;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FFAE0
//		Name   -> Function ScaleformUI.GFxObject.Invoke
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		struct FString                                     FunctionName                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FASValue UGFxObject::Invoke(const struct FString& FunctionName, TArray<struct FASValue> Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.Invoke");

	UGFxObject_Invoke_Params params {};
	params.FunctionName = FunctionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FF8A0
//		Name   -> Function ScaleformUI.GFxObject.GotoAndStopI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxObject::GotoAndStopI(int FrameNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndStopI");

	UGFxObject_GotoAndStopI_Params params {};
	params.FrameNumber = FrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FF720
//		Name   -> Function ScaleformUI.GFxObject.GotoAndStop
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FrameString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxObject::GotoAndStop(const struct FString& FrameString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndStop");

	UGFxObject_GotoAndStop_Params params {};
	params.FrameString = FrameString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FF5B0
//		Name   -> Function ScaleformUI.GFxObject.GotoAndPlayI
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                FrameNumber                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxObject::GotoAndPlayI(int FrameNumber)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndPlayI");

	UGFxObject_GotoAndPlayI_Params params {};
	params.FrameNumber = FrameNumber;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FF430
//		Name   -> Function ScaleformUI.GFxObject.GotoAndPlay
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     FrameString                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UGFxObject::GotoAndPlay(const struct FString& FrameString)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GotoAndPlay");

	UGFxObject_GotoAndPlay_Params params {};
	params.FrameString = FrameString;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x054FF310
//		Name   -> Function ScaleformUI.GFxObject.GetVisible
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxObject::GetVisible()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetVisible");

	UGFxObject_GetVisible_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FEE80
//		Name   -> Function ScaleformUI.GFxObject.GetScale
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              XScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              YScale                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxObject::GetScale(float* XScale, float* YScale)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetScale");

	UGFxObject_GetScale_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (XScale != nullptr)
		*XScale = params.XScale;
	if (YScale != nullptr)
		*YScale = params.YScale;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FEC40
//		Name   -> Function ScaleformUI.GFxObject.GetPosition
//		Flags  -> (Final, Native, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		float                                              X                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              Y                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UGFxObject::GetPosition(float* X, float* Y)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetPosition");

	UGFxObject_GetPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (X != nullptr)
		*X = params.X;
	if (Y != nullptr)
		*Y = params.Y;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE8F0
//		Name   -> Function ScaleformUI.GFxObject.GetMemberValueArray
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FASValue>                            ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
TArray<struct FASValue> UGFxObject::GetMemberValueArray(const struct FString& MemberName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetMemberValueArray");

	UGFxObject_GetMemberValueArray_Params params {};
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE820
//		Name   -> Function ScaleformUI.GFxObject.GetMemberValue
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FASValue UGFxObject::GetMemberValue(const struct FString& MemberName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetMemberValue");

	UGFxObject_GetMemberValue_Params params {};
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE6E0
//		Name   -> Function ScaleformUI.GFxObject.GetDisplayTransform
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FTransform                                  ReturnValue                                                (Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
struct FTransform UGFxObject::GetDisplayTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetDisplayTransform");

	UGFxObject_GetDisplayTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE5B0
//		Name   -> Function ScaleformUI.GFxObject.GetDisplayInfo
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FASDisplayInfo                              ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FASDisplayInfo UGFxObject::GetDisplayInfo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetDisplayInfo");

	UGFxObject_GetDisplayInfo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE4A0
//		Name   -> Function ScaleformUI.GFxObject.GetColorTransform
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FASColorTransform                           ReturnValue                                                (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
struct FASColorTransform UGFxObject::GetColorTransform()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.GFxObject.GetColorTransform");

	UGFxObject_GetColorTransform_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x055003B0
//		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class USwfMovie*                                   Movie                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UObject*                                     ExternalInterface                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UTextureRenderTarget2D*                      RenderTexture                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               DisplayWithHudOff                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               StartPaused                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGFxMoviePlayer*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGFxMoviePlayer* UScaleformBlueprintLibrary::STATIC_OpenMovie(class USwfMovie* Movie, class UObject* ExternalInterface, class UTextureRenderTarget2D* RenderTexture, class UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.OpenMovie");

	UScaleformBlueprintLibrary_OpenMovie_Params params {};
	params.Movie = Movie;
	params.ExternalInterface = ExternalInterface;
	params.RenderTexture = RenderTexture;
	params.MoviePlayer = MoviePlayer;
	params.DisplayWithHudOff = DisplayWithHudOff;
	params.StartPaused = StartPaused;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FFE30
//		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FunctionName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FASValue UScaleformBlueprintLibrary::STATIC_InvokeNoParams(class UGFxMoviePlayer* MoviePlayer, const struct FString& FunctionName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.InvokeNoParams");

	UScaleformBlueprintLibrary_InvokeNoParams_Params params {};
	params.MoviePlayer = MoviePlayer;
	params.FunctionName = FunctionName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FFC50
//		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.Invoke
//		Flags  -> (Final, Native, Static, Public, HasOutParms, BlueprintCallable)
// Parameters:
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     FunctionName                                               (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		TArray<struct FASValue>                            Params                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FASValue                                    ReturnValue                                                (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
struct FASValue UScaleformBlueprintLibrary::STATIC_Invoke(class UGFxMoviePlayer* MoviePlayer, const struct FString& FunctionName, TArray<struct FASValue> Params)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.Invoke");

	UScaleformBlueprintLibrary_Invoke_Params params {};
	params.MoviePlayer = MoviePlayer;
	params.FunctionName = FunctionName;
	params.Params = Params;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE740
//		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     VariablePath                                               (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetVariable(class UGFxMoviePlayer* MoviePlayer, const struct FString& VariablePath)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetVariable");

	UScaleformBlueprintLibrary_GetVariable_Params params {};
	params.MoviePlayer = MoviePlayer;
	params.VariablePath = VariablePath;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE740
//		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MovieClipName                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetMovieClip(class UGFxMoviePlayer* MoviePlayer, const struct FString& MovieClipName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetMovieClip");

	UScaleformBlueprintLibrary_GetMovieClip_Params params {};
	params.MoviePlayer = MoviePlayer;
	params.MovieClipName = MovieClipName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE740
//		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.GetMember
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FString                                     MemberName                                                 (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class UGFxObject*                                  ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UGFxObject* UScaleformBlueprintLibrary::STATIC_GetMember(class UGFxMoviePlayer* MoviePlayer, const struct FString& MemberName)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.GetMember");

	UScaleformBlueprintLibrary_GetMember_Params params {};
	params.MoviePlayer = MoviePlayer;
	params.MemberName = MemberName;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x054FE370
//		Name   -> Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie
//		Flags  -> (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
//		class UGFxMoviePlayer*                             MoviePlayer                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UScaleformBlueprintLibrary::STATIC_CloseMovie(class UGFxMoviePlayer* MoviePlayer)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function ScaleformUI.ScaleformBlueprintLibrary.CloseMovie");

	UScaleformBlueprintLibrary_CloseMovie_Params params {};
	params.MoviePlayer = MoviePlayer;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

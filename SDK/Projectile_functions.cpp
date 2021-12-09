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
//		Offset -> 0x06340190
//		Name   -> Function Projectile.BaseProjectile.SphereTraceSingle
//		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     Start                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		class USphereComponent*                            Sphere                                                     (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  outHitResult                                               (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseProjectile::SphereTraceSingle(const struct FVector& Start, const struct FVector& End, class USphereComponent* Sphere, struct FHitResult* outHitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.SphereTraceSingle");

	ABaseProjectile_SphereTraceSingle_Params params {};
	params.Start = Start;
	params.End = End;
	params.Sphere = Sphere;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (outHitResult != nullptr)
		*outHitResult = params.outHitResult;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Projectile.BaseProjectile.OnSetActive
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		bool                                               Active                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseProjectile::OnSetActive(bool Active)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.OnSetActive");

	ABaseProjectile_OnSetActive_Params params {};
	params.Active = Active;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Projectile.BaseProjectile.OnLaunch
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FLaunchInfo                                 LaunchInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		bool                                               hasImpactOnLaunch                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void ABaseProjectile::OnLaunch(const struct FLaunchInfo& LaunchInfo, bool hasImpactOnLaunch)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.OnLaunch");

	ABaseProjectile_OnLaunch_Params params {};
	params.LaunchInfo = LaunchInfo;
	params.hasImpactOnLaunch = hasImpactOnLaunch;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Projectile.BaseProjectile.OnDetectPlayer
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ABaseProjectile::OnDetectPlayer(const struct FImpactInfo& ImpactInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.OnDetectPlayer");

	ABaseProjectile_OnDetectPlayer_Params params {};
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Projectile.BaseProjectile.OnDetectCollision
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void ABaseProjectile::OnDetectCollision(const struct FImpactInfo& ImpactInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.OnDetectCollision");

	ABaseProjectile_OnDetectCollision_Params params {};
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06340060
//		Name   -> Function Projectile.BaseProjectile.Local_TryDetectCollision
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseProjectile::Local_TryDetectCollision(const struct FImpactInfo& ImpactInfo, bool force)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.Local_TryDetectCollision");

	ABaseProjectile_Local_TryDetectCollision_Params params {};
	params.ImpactInfo = ImpactInfo;
	params.force = force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633FE70
//		Name   -> Function Projectile.BaseProjectile.Local_SweepImpactCollision
//		Flags  -> (Final, Native, Public, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FVector                                     Start                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     End                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FRotator                                    colliderRotation                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		struct FHitResult                                  OutHit                                                     (Parm, OutParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseProjectile::Local_SweepImpactCollision(const struct FVector& Start, const struct FVector& End, const struct FRotator& colliderRotation, struct FHitResult* OutHit)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.Local_SweepImpactCollision");

	ABaseProjectile_Local_SweepImpactCollision_Params params {};
	params.Start = Start;
	params.End = End;
	params.colliderRotation = colliderRotation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

	if (OutHit != nullptr)
		*OutHit = params.OutHit;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633FD40
//		Name   -> Function Projectile.BaseProjectile.Local_OnPlayerDetected
//		Flags  -> (Final, Native, Protected, HasOutParms, HasDefaults, BlueprintCallable)
// Parameters:
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		struct FVector                                     projectileLocation                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseProjectile::Local_OnPlayerDetected(const struct FImpactInfo& ImpactInfo, const struct FVector& projectileLocation)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.Local_OnPlayerDetected");

	ABaseProjectile_Local_OnPlayerDetected_Params params {};
	params.ImpactInfo = ImpactInfo;
	params.projectileLocation = projectileLocation;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633FC60
//		Name   -> Function Projectile.BaseProjectile.IsValidPlayerDetection
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
// Parameters:
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseProjectile::IsValidPlayerDetection(const struct FImpactInfo& ImpactInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.IsValidPlayerDetection");

	ABaseProjectile_IsValidPlayerDetection_Params params {};
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633FB80
//		Name   -> Function Projectile.BaseProjectile.IsValidImpactDetection
//		Flags  -> (Native, Event, Protected, BlueprintEvent)
// Parameters:
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseProjectile::IsValidImpactDetection(const struct FImpactInfo& ImpactInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.IsValidImpactDetection");

	ABaseProjectile_IsValidImpactDetection_Params params {};
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633FB50
//		Name   -> Function Projectile.BaseProjectile.IsOwningPawnLocallyControlled
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseProjectile::IsOwningPawnLocallyControlled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.IsOwningPawnLocallyControlled");

	ABaseProjectile_IsOwningPawnLocallyControlled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633FB20
//		Name   -> Function Projectile.BaseProjectile.GetLauncher
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class UBaseProjectileLauncher*                     ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UBaseProjectileLauncher* ABaseProjectile::GetLauncher()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.GetLauncher");

	ABaseProjectile_GetLauncher_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633FAF0
//		Name   -> Function Projectile.BaseProjectile.GetImpactPrimitiveComponent
//		Flags  -> (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
//		class UPrimitiveComponent*                         ReturnValue                                                (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class UPrimitiveComponent* ABaseProjectile::GetImpactPrimitiveComponent()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.GetImpactPrimitiveComponent");

	ABaseProjectile_GetImpactPrimitiveComponent_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633FAB0
//		Name   -> Function Projectile.BaseProjectile.GetAddLauncherVeloctyFactor
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float ABaseProjectile::GetAddLauncherVeloctyFactor()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.GetAddLauncherVeloctyFactor");

	ABaseProjectile_GetAddLauncherVeloctyFactor_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x0633F980
//		Name   -> Function Projectile.BaseProjectile.Authority_TryDetectCollision
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		bool                                               force                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool ABaseProjectile::Authority_TryDetectCollision(const struct FImpactInfo& ImpactInfo, bool force)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectile.Authority_TryDetectCollision");

	ABaseProjectile_Authority_TryDetectCollision_Params params {};
	params.ImpactInfo = ImpactInfo;
	params.force = force;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Projectile.BaseProjectileLauncher.SetProjectileVar
//		Flags  -> (Event, Public, BlueprintEvent)
// Parameters:
//		struct FName                                       VarName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              value                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::SetProjectileVar(const struct FName& VarName, float value)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.SetProjectileVar");

	UBaseProjectileLauncher_SetProjectileVar_Params params {};
	params.VarName = VarName;
	params.value = value;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06341740
//		Name   -> Function Projectile.BaseProjectileLauncher.SetProjectileProvider
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UBaseProjectileLauncher::SetProjectileProvider()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.SetProjectileProvider");

	UBaseProjectileLauncher_SetProjectileProvider_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x063415C0
//		Name   -> Function Projectile.BaseProjectileLauncher.Server_LaunchWithImpact
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		struct FLaunchInfo                                 LaunchInfo                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FImpactInfo                                 ImpactInfo                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Server_LaunchWithImpact(const struct FLaunchInfo& LaunchInfo, const struct FImpactInfo& ImpactInfo, class ABaseProjectile* Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Server_LaunchWithImpact");

	UBaseProjectileLauncher_Server_LaunchWithImpact_Params params {};
	params.LaunchInfo = LaunchInfo;
	params.ImpactInfo = ImpactInfo;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x063414A0
//		Name   -> Function Projectile.BaseProjectileLauncher.Server_Launch
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		struct FLaunchInfo                                 LaunchInfo                                                 (ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Server_Launch(const struct FLaunchInfo& LaunchInfo, class ABaseProjectile* Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Server_Launch");

	UBaseProjectileLauncher_Server_Launch_Params params {};
	params.LaunchInfo = LaunchInfo;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D2FE80
//		Name   -> Function Projectile.BaseProjectileLauncher.OnRep_MaxAmmo
//		Flags  -> (Native, Protected)
// Parameters:
//		int                                                oldMaxAmmo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::OnRep_MaxAmmo(int oldMaxAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.OnRep_MaxAmmo");

	UBaseProjectileLauncher_OnRep_MaxAmmo_Params params {};
	params.oldMaxAmmo = oldMaxAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03D30040
//		Name   -> Function Projectile.BaseProjectileLauncher.OnRep_Ammo
//		Flags  -> (Native, Protected)
// Parameters:
//		int                                                oldAmmo                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::OnRep_Ammo(int oldAmmo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.OnRep_Ammo");

	UBaseProjectileLauncher_OnRep_Ammo_Params params {};
	params.oldAmmo = oldAmmo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Projectile.BaseProjectileLauncher.OnLaunch
//		Flags  -> (Event, Protected, BlueprintEvent)
// Parameters:
//		struct FLaunchInfo                                 LaunchInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::OnLaunch(const struct FLaunchInfo& LaunchInfo, class ABaseProjectile* Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.OnLaunch");

	UBaseProjectileLauncher_OnLaunch_Params params {};
	params.LaunchInfo = LaunchInfo;
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06341480
//		Name   -> Function Projectile.BaseProjectileLauncher.Local_Launch
//		Flags  -> (Final, Native, Public, BlueprintCallable)
void UBaseProjectileLauncher::Local_Launch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Local_Launch");

	UBaseProjectileLauncher_Local_Launch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06341450
//		Name   -> Function Projectile.BaseProjectileLauncher.IsLocallyControlled
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectileLauncher::IsLocallyControlled()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.IsLocallyControlled");

	UBaseProjectileLauncher_IsLocallyControlled_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x06341420
//		Name   -> Function Projectile.BaseProjectileLauncher.IsAmmoFull
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectileLauncher::IsAmmoFull()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.IsAmmoFull");

	UBaseProjectileLauncher_IsAmmoFull_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x03CEFD00
//		Name   -> Function Projectile.BaseProjectileLauncher.HasProjectile
//		Flags  -> (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectileLauncher::HasProjectile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.HasProjectile");

	UBaseProjectileLauncher_HasProjectile_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x063413F0
//		Name   -> Function Projectile.BaseProjectileLauncher.HasAuthority
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		bool                                               ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
bool UBaseProjectileLauncher::HasAuthority()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.HasAuthority");

	UBaseProjectileLauncher_HasAuthority_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x063413C0
//		Name   -> Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch
//		Flags  -> (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
//		class ABaseProjectile*                             ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class ABaseProjectile* UBaseProjectileLauncher::GetProjectileToLaunch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetProjectileToLaunch");

	UBaseProjectileLauncher_GetProjectileToLaunch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x06341390
//		Name   -> Function Projectile.BaseProjectileLauncher.GetOwningPawn
//		Flags  -> (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		class APawn*                                       ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
class APawn* UBaseProjectileLauncher::GetOwningPawn()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetOwningPawn");

	UBaseProjectileLauncher_GetOwningPawn_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x06341300
//		Name   -> Function Projectile.BaseProjectileLauncher.GetLaunchSpeedAtThrowPowerRatio
//		Flags  -> (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              throwPowerRatio                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBaseProjectileLauncher::GetLaunchSpeedAtThrowPowerRatio(float throwPowerRatio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchSpeedAtThrowPowerRatio");

	UBaseProjectileLauncher_GetLaunchSpeedAtThrowPowerRatio_Params params {};
	params.throwPowerRatio = throwPowerRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x063412C0
//		Name   -> Function Projectile.BaseProjectileLauncher.GetLaunchSpeed
//		Flags  -> (Native, Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		float                                              ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
float UBaseProjectileLauncher::GetLaunchSpeed()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchSpeed");

	UBaseProjectileLauncher_GetLaunchSpeed_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x06341280
//		Name   -> Function Projectile.BaseProjectileLauncher.GetLaunchPosition
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBaseProjectileLauncher::GetLaunchPosition()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchPosition");

	UBaseProjectileLauncher_GetLaunchPosition_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x06341190
//		Name   -> Function Projectile.BaseProjectileLauncher.GetLaunchDirectionAtViewAndThrowPowerRatio
//		Flags  -> (Native, Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FRotator                                    ViewRotation                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
//		float                                              throwPowerRatio                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBaseProjectileLauncher::GetLaunchDirectionAtViewAndThrowPowerRatio(const struct FRotator& ViewRotation, float throwPowerRatio)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchDirectionAtViewAndThrowPowerRatio");

	UBaseProjectileLauncher_GetLaunchDirectionAtViewAndThrowPowerRatio_Params params {};
	params.ViewRotation = ViewRotation;
	params.throwPowerRatio = throwPowerRatio;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x06341150
//		Name   -> Function Projectile.BaseProjectileLauncher.GetLaunchDirection
//		Flags  -> (Native, Event, Protected, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UBaseProjectileLauncher::GetLaunchDirection()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetLaunchDirection");

	UBaseProjectileLauncher_GetLaunchDirection_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x06341120
//		Name   -> Function Projectile.BaseProjectileLauncher.GetAmmo
//		Flags  -> (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		int                                                ReturnValue                                                (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
int UBaseProjectileLauncher::GetAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.GetAmmo");

	UBaseProjectileLauncher_GetAmmo_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x04330860
//		Name   -> Function Projectile.BaseProjectileLauncher.Cosmetic_OnOutOfAmmo
//		Flags  -> (BlueprintCosmetic, Event, Protected, BlueprintEvent)
void UBaseProjectileLauncher::Cosmetic_OnOutOfAmmo()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Cosmetic_OnOutOfAmmo");

	UBaseProjectileLauncher_Cosmetic_OnOutOfAmmo_Params params {};

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06341060
//		Name   -> Function Projectile.BaseProjectileLauncher.Authority_SetMaxAmmo
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                newMaxAmmo                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               isMaxAmmoImmutable                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Authority_SetMaxAmmo(int newMaxAmmo, bool isMaxAmmoImmutable)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_SetMaxAmmo");

	UBaseProjectileLauncher_Authority_SetMaxAmmo_Params params {};
	params.newMaxAmmo = newMaxAmmo;
	params.isMaxAmmoImmutable = isMaxAmmoImmutable;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06340FE0
//		Name   -> Function Projectile.BaseProjectileLauncher.Authority_ReturnAmmoUnits
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                amountOfAmmoUnitsReturned                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Authority_ReturnAmmoUnits(int amountOfAmmoUnitsReturned)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_ReturnAmmoUnits");

	UBaseProjectileLauncher_Authority_ReturnAmmoUnits_Params params {};
	params.amountOfAmmoUnitsReturned = amountOfAmmoUnitsReturned;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06340FC0
//		Name   -> Function Projectile.BaseProjectileLauncher.Authority_Reload
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UBaseProjectileLauncher::Authority_Reload()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_Reload");

	UBaseProjectileLauncher_Authority_Reload_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06340FA0
//		Name   -> Function Projectile.BaseProjectileLauncher.Authority_Launch
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
void UBaseProjectileLauncher::Authority_Launch()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_Launch");

	UBaseProjectileLauncher_Authority_Launch_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06340F20
//		Name   -> Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo
//		Flags  -> (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
//		int                                                ammoToAdd                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileLauncher::Authority_AddMaxAmmo(int ammoToAdd)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileLauncher.Authority_AddMaxAmmo");

	UBaseProjectileLauncher_Authority_AddMaxAmmo_Params params {};
	params.ammoToAdd = ammoToAdd;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x04330860
//		Name   -> DelegateFunction Projectile.DBDProjectileMovementComponent.OnComponentToSweepCollisionBP__DelegateSignature
//		Flags  -> (MulticastDelegate, Public, Delegate, HasOutParms)
// Parameters:
//		class UPrimitiveComponent*                         PrimitiveComponent                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FHitResult                                  HitResult                                                  (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UDBDProjectileMovementComponent::OnComponentToSweepCollisionBP__DelegateSignature(class UPrimitiveComponent* PrimitiveComponent, const struct FHitResult& HitResult)
{
	static UFunction* fn = UObject::FindObject<UFunction>("DelegateFunction Projectile.DBDProjectileMovementComponent.OnComponentToSweepCollisionBP__DelegateSignature");

	UDBDProjectileMovementComponent_OnComponentToSweepCollisionBP__DelegateSignature_Params params {};
	params.PrimitiveComponent = PrimitiveComponent;
	params.HitResult = HitResult;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06342BC0
//		Name   -> Function Projectile.DBDProjectileMovementComponent.GetPreviousLocation
//		Flags  -> (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
//		struct FVector                                     ReturnValue                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
struct FVector UDBDProjectileMovementComponent::GetPreviousLocation()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.DBDProjectileMovementComponent.GetPreviousLocation");

	UDBDProjectileMovementComponent_GetPreviousLocation_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;


	return params.ReturnValue;
}


// Function:
//		Offset -> 0x06342B40
//		Name   -> Function Projectile.DBDProjectileMovementComponent.AddComponentToSweep
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UPrimitiveComponent*                         Component                                                  (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UDBDProjectileMovementComponent::AddComponentToSweep(class UPrimitiveComponent* Component)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.DBDProjectileMovementComponent.AddComponentToSweep");

	UDBDProjectileMovementComponent_AddComponentToSweep_Params params {};
	params.Component = Component;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06343470
//		Name   -> Function Projectile.SingleProjectileProviderComponent.OnRep_Projectile
//		Flags  -> (Final, Native, Private)
void USingleProjectileProviderComponent::OnRep_Projectile()
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.SingleProjectileProviderComponent.OnRep_Projectile");

	USingleProjectileProviderComponent_OnRep_Projectile_Params params {};

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06342540
//		Name   -> Function Projectile.BaseProjectileReplicationComponent.Server_TryDetectPlayer
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
//		struct FVector_NetQuantize100                      projectileLocation                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FVector_NetQuantize10                       projectileRotation                                         (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		float                                              TargetLocationTimestamp                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Server_TryDetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo, const struct FVector_NetQuantize100& projectileLocation, const struct FVector_NetQuantize10& projectileRotation, float TargetLocationTimestamp)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Server_TryDetectPlayer");

	UBaseProjectileReplicationComponent_Server_TryDetectPlayer_Params params {};
	params.Projectile = Projectile;
	params.ImpactInfo = ImpactInfo;
	params.projectileLocation = projectileLocation;
	params.projectileRotation = projectileRotation;
	params.TargetLocationTimestamp = TargetLocationTimestamp;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06342420
//		Name   -> Function Projectile.BaseProjectileReplicationComponent.Multicast_SendAuthorityDetectPlayer
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_SendAuthorityDetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_SendAuthorityDetectPlayer");

	UBaseProjectileReplicationComponent_Multicast_SendAuthorityDetectPlayer_Params params {};
	params.Projectile = Projectile;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06342290
//		Name   -> Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunchWithImpact
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLaunchInfo                                 LaunchInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_OnLaunchWithImpact(class ABaseProjectile* Projectile, const struct FLaunchInfo& LaunchInfo, const struct FImpactInfo& ImpactInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunchWithImpact");

	UBaseProjectileReplicationComponent_Multicast_OnLaunchWithImpact_Params params {};
	params.Projectile = Projectile;
	params.LaunchInfo = LaunchInfo;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06342180
//		Name   -> Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunch
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FLaunchInfo                                 LaunchInfo                                                 (Parm, NoDestructor, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_OnLaunch(class ABaseProjectile* Projectile, const struct FLaunchInfo& LaunchInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_OnLaunch");

	UBaseProjectileReplicationComponent_Multicast_OnLaunch_Params params {};
	params.Projectile = Projectile;
	params.LaunchInfo = LaunchInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06342060
//		Name   -> Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectPlayer
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_DetectPlayer(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectPlayer");

	UBaseProjectileReplicationComponent_Multicast_DetectPlayer_Params params {};
	params.Projectile = Projectile;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06341F40
//		Name   -> Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectImpact
//		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		struct FImpactInfo                                 ImpactInfo                                                 (Parm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Multicast_DetectImpact(class ABaseProjectile* Projectile, const struct FImpactInfo& ImpactInfo)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Multicast_DetectImpact");

	UBaseProjectileReplicationComponent_Multicast_DetectImpact_Params params {};
	params.Projectile = Projectile;
	params.ImpactInfo = ImpactInfo;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x03CF4E90
//		Name   -> Function Projectile.BaseProjectileReplicationComponent.Client_ReceiveDetectPlayerValidation
//		Flags  -> (Final, Net, NetReliable, Native, Event, Private, NetClient)
// Parameters:
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
//		bool                                               success                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Client_ReceiveDetectPlayerValidation(class ABaseProjectile* Projectile, bool success)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Client_ReceiveDetectPlayerValidation");

	UBaseProjectileReplicationComponent_Client_ReceiveDetectPlayerValidation_Params params {};
	params.Projectile = Projectile;
	params.success = success;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x06341EB0
//		Name   -> Function Projectile.BaseProjectileReplicationComponent.Client_LaunchRefusedByServer
//		Flags  -> (Net, NetReliable, Native, Event, Public, NetClient)
// Parameters:
//		class ABaseProjectile*                             Projectile                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UBaseProjectileReplicationComponent::Client_LaunchRefusedByServer(class ABaseProjectile* Projectile)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.BaseProjectileReplicationComponent.Client_LaunchRefusedByServer");

	UBaseProjectileReplicationComponent_Client_LaunchRefusedByServer_Params params {};
	params.Projectile = Projectile;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


// Function:
//		Offset -> 0x0633F1D0
//		Name   -> Function Projectile.AuthoritativePoolProjectileProviderAdapter.Init
//		Flags  -> (Final, Native, Public, BlueprintCallable)
// Parameters:
//		class UAuthoritativeActorPoolComponent*            pool                                                       (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
void UAuthoritativePoolProjectileProviderAdapter::Init(class UAuthoritativeActorPoolComponent* pool)
{
	static UFunction* fn = UObject::FindObject<UFunction>("Function Projectile.AuthoritativePoolProjectileProviderAdapter.Init");

	UAuthoritativePoolProjectileProviderAdapter_Init_Params params {};
	params.pool = pool;

	auto flags = fn->FunctionFlags;
	fn->FunctionFlags |= 0x00000400;

	UObject::ProcessEvent(fn, &params);
	fn->FunctionFlags = flags;

}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

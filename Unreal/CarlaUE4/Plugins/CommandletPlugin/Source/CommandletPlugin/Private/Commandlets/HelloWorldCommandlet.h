// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Commandlets/Commandlet.h"
#include "Commandlets/ResavePackagesCommandlet.h"
#include <Engine/World.h>
#include <UObject/Package.h>
#include <Misc/PackageName.h>
#include "CoreMinimal.h"
#include "UObject/ObjectMacros.h"
#include "Engine/EngineTypes.h"
#include <Editor/UnrealEd/Public/ObjectTools.h>
#include <AssetRegistry/Public/AssetRegistryModule.h>
#include <Runtime/Engine/Classes/Kismet/GameplayStatics.h>
#include <Runtime/Engine/Classes/Engine/ObjectLibrary.h>
#include <Developer/AssetTools/Public/IAssetTools.h>
#include <Developer/AssetTools/Public/AssetToolsModule.h>
#include <Runtime/Core/Public/Modules/ModuleManager.h>
#include <Editor/UnrealEd/Public/FileHelpers.h>
#include <Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h>
#include <Runtime/Engine/Classes/Engine/StaticMeshActor.h>

#include "HelloWorldCommandlet.generated.h"

UCLASS()
class UHelloWorldCommandlet
  : public UCommandlet
{
  GENERATED_BODY()

public:

  /** Default constructor. */
  UHelloWorldCommandlet();

  void CreateMapFromBaseMap();

	void ImportFBX();

public:

  // ~ UCommandlet interface

  virtual int32 Main(const FString &Params) override;

};
// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
// Created by Axtel Sturnclaw

#pragma once

#include "Components/InstancedStaticMeshComponent.h"
#include "ISMActor.generated.h"

UCLASS()
class AISMActor : public AActor
{
  GENERATED_BODY()

  AISMActor();

public:

  UPROPERTY(EditDefaultsOnly)
  UInstancedStaticMeshComponent* ISMComp;
};

// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "DeubgFunctionLibrary.generated.h"

/**
 * 
 */
UCLASS()
class LEARNPLUGIN_API UDeubgFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
		static FString SayHello(FString UserName);
};

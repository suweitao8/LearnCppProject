// Fill out your copyright notice in the Description page of Project Settings.


#include "DeubgFunctionLibrary.h"


FString UDeubgFunctionLibrary::SayHello(FString UserName)
{
	// "Unreal" => "Hello, Unreal"
	FString HelloString = TEXT("Hello, ");
	// FString Result = FString::Printf(TEXT("Hello, %s"), *UserName);
	FString Result = HelloString + UserName;
	return Result;
}
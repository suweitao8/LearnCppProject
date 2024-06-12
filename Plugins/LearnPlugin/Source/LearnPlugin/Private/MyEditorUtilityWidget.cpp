// Fill out your copyright notice in the Description page of Project Settings.


#include "MyEditorUtilityWidget.h"

DEFINE_LOG_CATEGORY_STATIC(LEARNPLUGIN, Log, All);

void UMyEditorUtilityWidget::PrintString(FString Message)
{
	// Output Log
	// FString::Printf
	UE_LOG(LEARNPLUGIN, Log, TEXT("Log - %s"), *Message);
	// 黄色
	UE_LOG(LEARNPLUGIN, Warning, TEXT("Warning - %s"), *Message);
	UE_LOG(LEARNPLUGIN, Error, TEXT("Error - %s"), *Message);
}

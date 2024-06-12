// Fill out your copyright notice in the Description page of Project Settings.


#include "MyStyle.h"

#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"
#include "Styling/SlateStyleRegistry.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FMyStyle::StyleInstance = nullptr;

void FMyStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FMyStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

void FMyStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FMyStyle::Get()
{
	return *StyleInstance;
}

FName FMyStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("MyStyle"));
	return StyleSetName;
}

const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);
const FVector2D Icon32x32(32.0f, 32.0f);

TSharedRef<FSlateStyleSet> FMyStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("MyStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("LearnPlugin")->GetBaseDir() / TEXT("Resources"));
	
	Style->Set("LearnPlugin.PluginAction", new IMAGE_BRUSH(TEXT("KeterLogo"), Icon32x32));
	return Style;
}

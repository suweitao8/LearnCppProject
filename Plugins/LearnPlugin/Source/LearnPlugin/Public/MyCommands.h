// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MyStyle.h"

class LEARNPLUGIN_API FMyCommands : public TCommands<FMyCommands>
{
public:
	// 构造函数
	FMyCommands() : TCommands<FMyCommands>(TEXT("LearnPlugin"), NSLOCTEXT("Contexts", "LearnPlugin", "LearnPlugin Plugin"), NAME_None,  FMyStyle::GetStyleSetName())
	{
	}
	
	virtual void RegisterCommands() override;

public:
	TSharedPtr<FUICommandInfo> PluginAction;
};

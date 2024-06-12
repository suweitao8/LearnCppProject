// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCommands.h"

#define LOCTEXT_NAMESPACE "FLearnPluginModule"

void FMyCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "显示我的工具", "显示我的工具的快捷键", EUserInterfaceActionType::Button, FInputChord(EKeys::W, EModifierKey::Control | EModifierKey::Alt));
}

#undef LOCTEXT_NAMESPACE
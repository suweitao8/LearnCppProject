// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearnPlugin.h"

#include "LevelEditor.h"
#include "MyCommands.h"

#define LOCTEXT_NAMESPACE "FLearnPluginModule"

void FLearnPluginModule::StartupModule()
{
	// 样式
	FMyStyle::Initialize();
	FMyStyle::ReloadTextures();

	// 注册命令
	FMyCommands::Register();

	// 创建 FUICommandList
	PluginCommands = MakeShareable(new FUICommandList);
	
	PluginCommands->MapAction(
		FMyCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FLearnPluginModule::PluginButtonClicked),
		FCanExecuteAction());
	
	FLevelEditorModule& LevelEditorModule = FModuleManager::LoadModuleChecked<FLevelEditorModule>(TEXT("LevelEditor"));
	
	TSharedRef<FUICommandList> ExistingLevelCommands = LevelEditorModule.GetGlobalLevelEditorActions();
	ExistingLevelCommands->Append(PluginCommands.ToSharedRef());
}

void FLearnPluginModule::ShutdownModule()
{
	FMyCommands::Unregister();

	FMyStyle::Shutdown();
}

void FLearnPluginModule::PluginButtonClicked()
{
	// 快捷键的功能
	UE_LOG(LogTemp, Log, TEXT("PluginButtonClicked"));
	FUnrealEdMisc::Get().RestartEditor(true);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FLearnPluginModule, LearnPlugin)
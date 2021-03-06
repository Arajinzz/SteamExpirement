// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "OnlineSubsystem.h"
#include "OnlineSessionSettings.h"
#include "Interfaces/OnlineSessionInterface.h"

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "SteamExpirementGameInstance.generated.h"



/**
 * 
 */
UCLASS()
class STEAMEXPIREMENT_API USteamExpirementGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	USteamExpirementGameInstance();

protected:
	TSharedPtr<FOnlineSessionSearch> SessionSearch;

	IOnlineSessionPtr SessionInterface;

	virtual void Init() override;
	
	virtual void OnCreateSessionComplete(FName SessionName, bool Succeeded);
	virtual void OnFindSessionComplete(bool Succeeded);
	virtual void OnJoinSessionComplete(FName SessionName, EOnJoinSessionCompleteResult::Type Result);

	UFUNCTION(BlueprintCallable)
	void CreateServer();
	
	UFUNCTION(BlueprintCallable)
	void JoinServer();

};

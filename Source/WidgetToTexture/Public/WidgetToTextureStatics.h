#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Runtime/UMG/Public/Blueprint/UserWidget.h"
#include "Runtime/Engine/Classes/Engine/TextureRenderTarget2D.h"
#include "WidgetToTexture.generated.h"

/**
*
*/
UCLASS()
class PLAYGROUND_API UWidgetToTextureStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable)
		static UTexture2D* WidgetToTexture(UUserWidget* Widget, FVector2D DrawSize, bool bUseGameCorrection);



};
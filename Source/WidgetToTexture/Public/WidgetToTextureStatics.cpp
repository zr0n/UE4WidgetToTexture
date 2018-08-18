// Fill out your copyright notice in the Description page of Project Settings.

#include "WidgetToTextureStatics.h"
#include "WidgetRenderer.h"
#include "SWidget.h"
#include "Slate.h"
#include "SlateCore.h"
#include "SlateBasics.h"
#include "UMG.h"


UTexture2D* UWidgetToTextureStatics::WidgetToTexture(UUserWidget* Widget, FVector2D DrawSize, bool bUseGameCorrection) {
	if (!Widget) return nullptr;
	if (DrawSize == FVector2D(0, 0)) return nullptr;

	if (FSlateApplication::IsInitialized()
		&& Widget != NULL && Widget->IsValidLowLevel()
		&& DrawSize.X >= 1 && DrawSize.Y >= 1)
	{
		TSharedPtr<SWidget> SlateWidget(Widget->TakeWidget());
		if (!SlateWidget.IsValid()) return NULL;
		TSharedPtr<FWidgetRenderer> WidgetRenderer = MakeShareable(new FWidgetRenderer(bUseGameCorrection));
		if (!WidgetRenderer.IsValid()) return NULL;

		UTextureRenderTarget2D *TextureRenderTarget = WidgetRenderer->DrawWidget(SlateWidget.ToSharedRef(), DrawSize);
		// Creates Texture2D to store RenderTexture content
		UTexture2D *Texture = UTexture2D::CreateTransient(DrawSize.X, DrawSize.Y, PF_B8G8R8A8);
#if WITH_EDITORONLY_DATA
		Texture->MipGenSettings = TMGS_NoMipmaps;
#endif

		// Lock and copies the data between the textures
		TArray<FColor> SurfData;
		FRenderTarget *RenderTarget = static_cast<FTextureRenderTargetResource*>(TextureRenderTarget->Resource);
		RenderTarget->ReadPixels(SurfData);

		void* TextureData = Texture->PlatformData->Mips[0].BulkData.Lock(LOCK_READ_WRITE);
		const int32 TextureDataSize = SurfData.Num() * 4;
		FMemory::Memcpy(TextureData, SurfData.GetData(), TextureDataSize);
		Texture->PlatformData->Mips[0].BulkData.Unlock();
		Texture->UpdateResource();

		// Free resources
		SurfData.Empty();
		TextureRenderTarget->ConditionalBeginDestroy();
		SlateWidget.Reset();
		WidgetRenderer.Reset();

		return Texture;
	}
	return NULL;

}
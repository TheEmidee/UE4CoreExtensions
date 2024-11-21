#pragma once

#include "CoreExtTypeBlueprintLibrary.generated.h"

UCLASS()
class COREEXTENSIONS_API UCoreExtTypeBlueprintLibrary final : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION( BlueprintPure )
    static int LowestIntValue();
    UFUNCTION( BlueprintPure )
    static int MaxIntValue();
    UFUNCTION( BlueprintPure )
    static float LowestFloatValue();
    UFUNCTION( BlueprintPure )
    static float MaxFloatValue();
};

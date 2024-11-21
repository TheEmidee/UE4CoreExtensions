#pragma once

#include "CoreExtTypeBlueprintLibrary.generated.h"

UCLASS()
class COREEXTENSIONS_API UCoreExtTypeBlueprintLibrary final : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()
public:
    UFUNCTION( BlueprintPure )
    static int MinIntValue();

    UFUNCTION( BlueprintPure )
    static int MaxIntValue();

    UFUNCTION( BlueprintPure )
    static float MinFloatValue();

    UFUNCTION( BlueprintPure )
    static float MaxFloatValue();
};

FORCEINLINE int UCoreExtTypeBlueprintLibrary::MinIntValue()
{
    return TNumericLimits< int >().Min();
}

FORCEINLINE int UCoreExtTypeBlueprintLibrary::MaxIntValue()
{
    return TNumericLimits< int >().Max();
}

FORCEINLINE float UCoreExtTypeBlueprintLibrary::MinFloatValue()
{
    return TNumericLimits< float >().Lowest();
}

FORCEINLINE float UCoreExtTypeBlueprintLibrary::MaxFloatValue()
{
    return TNumericLimits< float >().Max();
}
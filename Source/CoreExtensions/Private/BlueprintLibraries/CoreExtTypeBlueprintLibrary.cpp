#include "BlueprintLibraries/CoreExtTypeBlueprintLibrary.h"

float UCoreExtTypeBlueprintLibrary::LowestFloatValue()
{
    return TNumericLimits< float >().Lowest();
}

float UCoreExtTypeBlueprintLibrary::MaxFloatValue()
{
    return TNumericLimits< float >().Max();
}
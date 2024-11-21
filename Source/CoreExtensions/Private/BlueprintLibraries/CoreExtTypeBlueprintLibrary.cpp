#include "BlueprintLibraries/CoreExtTypeBlueprintLibrary.h"

int UCoreExtTypeBlueprintLibrary::LowestIntValue()
{
    return TNumericLimits< int >().Lowest();
}

int UCoreExtTypeBlueprintLibrary::MaxIntValue()
{
    return TNumericLimits< int >().Max();
}

float UCoreExtTypeBlueprintLibrary::LowestFloatValue()
{
    return TNumericLimits< float >().Lowest();
}

float UCoreExtTypeBlueprintLibrary::MaxFloatValue()
{
    return TNumericLimits< float >().Max();
}
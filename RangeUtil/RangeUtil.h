#pragma once
#include "RangeValue.h"
#include "WeightedRangeValue.h"

extern "C" __declspec(dllexport) void GetRange(const RangeValue range, const float seed, float& result);
extern "C" __declspec(dllexport) void GetRange_W(const WeightedRangeValue * values, const unsigned int size, const unsigned int seed, float& result);

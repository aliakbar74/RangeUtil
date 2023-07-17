#pragma once
#include "RangeValue.h";
#include "WeightedRangeValue.h";

extern "C" __declspec(dllexport) void GetRange(RangeValue range, const float  seed, float& result);
extern "C" __declspec(dllexport) void GetRange_W(WeightedRangevalue * values, int size, const float seed, float& result);

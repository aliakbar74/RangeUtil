#pragma once
#include "RangeValue.h"
#include "WeightedRangeValue.h"

#ifdef __cplusplus
extern "C" {
#endif
 __declspec(dllexport) void GetRange(const RangeValue range, const float seed, float& result);
#ifdef __cplusplus
}
#endif


#ifdef __cplusplus
extern "C" {
#endif
 __declspec(dllexport) float GetRange(const RangeValue range, const float seed);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
 __declspec(dllexport) void GetRange_W(const WeightedRangeValue * values, const unsigned int size, const unsigned int seed, float& result);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif
 __declspec(dllexport) float GetRange_W(const WeightedRangeValue * values, const unsigned int size, const unsigned int seed);
#ifdef __cplusplus
}
#endif
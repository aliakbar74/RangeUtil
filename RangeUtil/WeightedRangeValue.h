#pragma once
#include "RangeValue.h"
struct WeightedRangeValue {
	RangeValue base;
	float& min = base.min;
	float& max = base.max;
	int weight;

	WeightedRangeValue(const float& min, const float& max, const int& weight) :base(min, max), weight(weight) {}
};
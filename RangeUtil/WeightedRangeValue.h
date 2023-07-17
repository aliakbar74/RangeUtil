#pragma once
#include "RangeValue.h"
struct WeightedRangevalue {
	RangeValue base;
	float& min = base.min;
	float& max = base.max;
	int weight;

	WeightedRangevalue(const float& min, const float& max, const int& weight) :base(min, max), weight(weight) {}
};
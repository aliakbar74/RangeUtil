#include "pch.h"
#include <random>

void GetRange(RangeValue range, const float seed, float& result)
{
	std::mt19937 gen(seed);
	std::uniform_real_distribution<float> dis(range.min, range.max);
	result = dis(gen);
}

void GetRange_W(WeightedRangevalue* values, const int size, const float seed, float& result)
{
	int totalWeight = 0;

	for (auto i = 0; i < size; i++)
	{
		totalWeight += values[i].weight;
	}

	std::mt19937 gen(seed);
	std::uniform_int_distribution<int> dis(0, totalWeight);
	int rndWeight = dis(gen);
	int selectedId = 0;
	int passedWeight = 0;
	for (auto i = 0; i < size; i++)
	{
		passedWeight += values[i].weight;
		if (rndWeight <= passedWeight) {
			selectedId = i;
			break;
		}
	}

	std::uniform_real_distribution<float> floatDis(values[selectedId].min, values[selectedId].max);
	result = floatDis(gen);
}
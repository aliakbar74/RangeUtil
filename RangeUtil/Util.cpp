#include "pch.h"
#include <random>

void GetRange(const RangeValue range, const float seed, float& result)
{
	std::mt19937 gen(seed);
	std::uniform_real_distribution<float> dis(range.min, range.max);
	result = dis(gen);
}

float GetRange_R(const RangeValue range, const float seed)
{
	std::mt19937 gen(seed);
	std::uniform_real_distribution<float> dis(range.min, range.max);
	return dis(gen);
}

void GetRange_W(const WeightedRangeValue* values, const unsigned int size, const unsigned int seed, float& result)
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
float GetRange_W_R(const WeightedRangeValue* values, const unsigned int size, const unsigned int seed)
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
	return floatDis(gen);
}
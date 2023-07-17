#pragma once
#pragma once
struct RangeValue {
	float min;
	float max;

	RangeValue(const float& min, const float& max) {
		this->min = min;
		this->max = max;
	}
};
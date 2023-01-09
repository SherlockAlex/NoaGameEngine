#include "NoaMath.h"

float NoaSqrt(float x) {
	float xhalf = 0.5f * x;
	int i = *(int*)&x;
	i = 0x5f375a86 - (i >> 1);
	x = *(float*)&i;
	return 1 / (x * (1.5f - xhalf * x * x));
}
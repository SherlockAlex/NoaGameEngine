#include "Physics.h"
#include "SDL2/SDL.h"

float grivaty = 10;//重力

int fallTime=0;

void ApplyGrivaty(float* x, bool on)
{
	//还要有一个设置掉落时间的，进来前开始掐秒表
	float value = *x;
	fallTime = on ? (fallTime + 3) : 0;
	value += 0.0025 * fallTime * fallTime;
	*x = value;
	//还要有一个时间的观念
	//当不下落，下落时间重置
}

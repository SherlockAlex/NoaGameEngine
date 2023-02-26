#include <iostream>

#include "NoaMath.h"
#include "GameSetting.h"

inline Vector2::Vector2()
{
	this->x = 0;
	this->y = 0;
}

inline Vector2::Vector2(float x = 0, float y = 0) {
	this->x = x;
	this->y = y;
}

float Vector2::GetLength()
{
	//获取向量长度
	return n_sqrt(this->x * this->x +
		this->y * this->y);
}

Vector2 Vector2::GetDirection()
{
	//返回向量的方向
	if (this->GetLength() == 0) {
		return *(new Vector2(0, 0));
	}

	float dx = (this->x) * n_InvSqrt(x * x + y * y);
	float dy = (this->x) * n_InvSqrt(x * x + y * y);
	Vector2* dir = new Vector2(dx, dy);
	return *dir;
}

float n_InvSqrt(float x)
{
	float y = x;
	int i = *(int*)&y;
	i = 0x5f375a86 - (i >> 1);
	y = *(float*)&i;
	y = 1.5 * y - 0.5 * y * y * y * x;
	y = 1.5 * y - 0.5 * y * y * y * x;
	return y;
}

float n_sqrt(float x)
{
	float y = x;
	int i = *(int*)&y;
	i = 0x1fc00000 + (i >> 1);
	y = *(float*)&i;
	y = 0.5 * (y + x / y);
	y = 0.5 * (y + x / y);
	return y;
}

float Lerp(float a, float b) {
	float y = (b - a)*0.08 + a;
	return y;
}
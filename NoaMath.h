#ifndef NOAGAMEENGINE_NOAMATH_H
#define NOAGAMEENGINE_NOAMATH_H

#include <math.h>

typedef struct Vector2 {
	//定义一种结构体,是二维向量
public:
	Vector2(float x=0,float y=0);

public:
	float x;
	float y;

public:
	float GetLength();
	Vector2 GetDirection();//返回的是一个方向

}Vector2;

Vector2::Vector2(float x=0,float y=0) {
	this->x = x;
	this->y = y;
}

float Vector2:: GetLength()
{
	//获取向量长度
	return sqrtf(x * x + y * y);
}

Vector2 Vector2::GetDirection()
{
	//返回向量的方向
	if (this->GetLength()==0) {
		return *(new Vector2(0, 0));
	}

	float dx = (this->x) / this->GetLength();
	float dy = (this->x) / this->GetLength();
	Vector2* dir = new Vector2(dx,dy);
	return *dir;
}

#endif

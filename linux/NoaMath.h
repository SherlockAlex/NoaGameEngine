#ifndef NOAGAMEENGINE_NOAMATH_H
#define NOAGAMEENGINE_NOAMATH_H

#include <math.h>

typedef struct Vector2 {
	//定义一种结构体,是二维向量
public:
	Vector2();
	Vector2(float x,float y);

public:
	float x;
	float y;

public:
	float GetLength();
	Vector2 GetDirection();			//返回的是一个方向

}Vector2;



#endif

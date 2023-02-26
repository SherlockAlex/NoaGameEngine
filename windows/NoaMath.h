#ifndef NOAGAMEENGINE_NOAMATH_H
#define NOAGAMEENGINE_NOAMATH_H

/*这个模块主要负责游戏的数学的部分*/

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

/* 快速倒数开根号，如果机器没有硬件算数指令的话
* 速度比计算机系统自带的快，精度对于游戏来说足够用
*/
extern float n_InvSqrt(float x);

/* 快速开根号，如果机器没有硬件算数指令的话
* 速度比计算机系统自带的快，精度对于游戏来说足够用
*/
extern float n_sqrt(float x);

extern float Lerp(float a,float b);

#endif

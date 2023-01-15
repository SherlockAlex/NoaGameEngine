#ifndef NOAGAMEENGINE_NOAMATH_H
#define NOAGAMEENGINE_NOAMATH_H

#include <math.h>

typedef struct Vector2 {
	//����һ�ֽṹ��,�Ƕ�ά����
public:
	Vector2();
	Vector2(float x,float y);

public:
	float x;
	float y;

public:
	float GetLength();
	Vector2 GetDirection();			//���ص���һ������

}Vector2;



#endif

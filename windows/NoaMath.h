#ifndef NOAGAMEENGINE_NOAMATH_H
#define NOAGAMEENGINE_NOAMATH_H

/*���ģ����Ҫ������Ϸ����ѧ�Ĳ���*/

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

/* ���ٵ��������ţ��������û��Ӳ������ָ��Ļ�
* �ٶȱȼ����ϵͳ�Դ��Ŀ죬���ȶ�����Ϸ��˵�㹻��
*/
extern float n_InvSqrt(float x);

/* ���ٿ����ţ��������û��Ӳ������ָ��Ļ�
* �ٶȱȼ����ϵͳ�Դ��Ŀ죬���ȶ�����Ϸ��˵�㹻��
*/
extern float n_sqrt(float x);

extern float Lerp(float a,float b);

#endif

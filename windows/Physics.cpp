#include "Physics.h"
#include "SDL2/SDL.h"

float grivaty = 10;//����

int fallTime=0;

void ApplyGrivaty(float* x, bool on)
{
	//��Ҫ��һ�����õ���ʱ��ģ�����ǰ��ʼ�����
	float value = *x;
	fallTime = on ? (fallTime + 3) : 0;
	value += 0.0025 * fallTime * fallTime;
	*x = value;
	//��Ҫ��һ��ʱ��Ĺ���
	//�������䣬����ʱ������
}

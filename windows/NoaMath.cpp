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
	//��ȡ��������
	return sqrtf(this->x * this->x +
		this->y * this->y);
}

Vector2 Vector2::GetDirection()
{
	//���������ķ���
	if (this->GetLength() == 0) {
		return *(new Vector2(0, 0));
	}

	float dx = (this->x) / this->GetLength();
	float dy = (this->x) / this->GetLength();
	Vector2* dir = new Vector2(dx, dy);
	return *dir;
}

float Lerp(float a, float b) {
	if (SDL_GetTicks() - frameStart <(1000 / 60))
	{
		SDL_Delay(16-(SDL_GetTicks() - frameStart));
	}
	float y = (b - a) * (float)(SDL_GetTicks() - frameStart) / 32 + a;
	std::cout << y << std::endl;
	return y;
}
#pragma once

#ifndef NOAGAMEENGINE_PLAYER_H
#define NOAGAMEENGINE_PLAYER_H

#include <iostream>

#include "GameObject.h"
#include "Application.h"
#include "InputSystem.h"

using namespace std;

class Player :public GameObject
{
private:
	char image = 'O';//��Ļ����������ʾ�ַ�

	bool PlayerControl();
	void Move();

public:
	Player();
	~Player();

public:
	void OnStart() override {
		transform = new Vector2(5, 5);
	}

	void OnUpdate() override {
		Move();
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




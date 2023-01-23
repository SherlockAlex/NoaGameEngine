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
	string image = "$";//屏幕中用我来显示字符

	bool PlayerControl();
	void Move();

public:
	Player();
	~Player();

public:
	void OnStart() override {
		transform = new Vector2(5, 5);//初始化玩家位置在5，5
	}

	void OnUpdate() override {
		//实时显示
		Move();
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




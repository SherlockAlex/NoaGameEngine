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

	/*处理玩家键盘控制*/
	void PlayerControl();
	/*处理玩家移动事件*/
	void Move();

public:
	Player();
	~Player();

public:

	void OnStart() override {
		//DrawTexture(fileName, w, h, &rect, renderer);
		SetScreenTransform(20,200);
		DrawSprite(sprite);
		//SetTransform(10,10);			//初始化玩家位置在5，5
		cout << "玩家初始化成功" << endl;
	}

	void OnUpdate() override {
		//实时显示
		DrawSprite(sprite);
		Move();
		return;
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




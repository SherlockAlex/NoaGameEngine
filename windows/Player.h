#pragma once

#ifndef NOAGAMEENGINE_PLAYER_H
#define NOAGAMEENGINE_PLAYER_H

#include <iostream>
#include "GameObject.h"

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
		SetScreenTransform(20,200);
		cout << "玩家初始化成功" << endl;
	}

	void OnUpdate() override {
		Move();
		return;
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




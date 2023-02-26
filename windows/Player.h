#pragma once

#ifndef NOAGAMEENGINE_PLAYER_H
#define NOAGAMEENGINE_PLAYER_H

#include <iostream>
#include "GameObject.h"

using namespace std;

class Player :public GameObject
{
public:

	/*处理玩家键盘控制*/
	bool PlayerControl();

	/*处理玩家移动事件*/
	void Move();


public:
	Player();
	~Player();

public:

	void OnStart() override {
		
		//cout << "玩家初始化成功" << endl;
	}

	void OnUpdate() override {
		PlayerControl();
		//更新角色动画
		Move();
		return;
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




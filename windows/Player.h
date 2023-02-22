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

	bool PlayerControl();
	void Move();

public:
	Player();
	~Player();

public:
	void OnStart() override {
		
		
		DrawTexture(fileName, w, h, &rect, renderer);
		SetTransform(10,10);			//初始化玩家位置在5，5
		cout << "玩家初始化成功" << endl;
	}

	void OnUpdate() override {
		//实时显示
		//cout << endl << "Position:" << this->GetTransform()->x << "," << this->GetTransform()->y;
		DrawTexture(fileName, w, h, &rect, renderer);//渲染图片
		//cout <<"rect 宽：" << rect.w << endl;
		//cout << "rect 高：" << rect.h << endl;
		Move();
		return;
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




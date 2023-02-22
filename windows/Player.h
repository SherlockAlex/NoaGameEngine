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

	/*������Ҽ��̿���*/
	void PlayerControl();
	/*��������ƶ��¼�*/
	void Move();

public:
	Player();
	~Player();

public:

	void OnStart() override {
		//DrawTexture(fileName, w, h, &rect, renderer);
		SetScreenTransform(20,200);
		DrawSprite(sprite);
		//SetTransform(10,10);			//��ʼ�����λ����5��5
		cout << "��ҳ�ʼ���ɹ�" << endl;
	}

	void OnUpdate() override {
		//ʵʱ��ʾ
		DrawSprite(sprite);
		Move();
		return;
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




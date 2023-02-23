#pragma once

#ifndef NOAGAMEENGINE_PLAYER_H
#define NOAGAMEENGINE_PLAYER_H

#include <iostream>
#include "GameObject.h"

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
		SetScreenTransform(20,200);
		cout << "��ҳ�ʼ���ɹ�" << endl;
	}

	void OnUpdate() override {
		Move();
		return;
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




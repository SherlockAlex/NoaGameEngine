#pragma once

#ifndef NOAGAMEENGINE_PLAYER_H
#define NOAGAMEENGINE_PLAYER_H

#include <iostream>
#include "GameObject.h"

using namespace std;

class Player :public GameObject
{
public:

	/*������Ҽ��̿���*/
	bool PlayerControl();

	/*��������ƶ��¼�*/
	void Move();

public:
	Player();
	~Player();

public:

	void OnStart() override {
		
		//cout << "��ҳ�ʼ���ɹ�" << endl;
	}

	int start;
	void OnUpdate() override {
		start = SDL_GetTicks();
		PlayerControl();
		//���½�ɫ����
		Move();
		if (SDL_GetTicks()-start>1) {
			return;
		}
		return;
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




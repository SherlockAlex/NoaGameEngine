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
		SetTransform(-5,-5);			//��ʼ�����λ����5��5
		cout << "��ҳ�ʼ���ɹ�" << endl;
	}

	void OnUpdate() override {
		//ʵʱ��ʾ
		//cout << endl << "Position:" << this->GetTransform()->x << "," << this->GetTransform()->y;
		DrawTexture(fileName, w, h, &rect, renderer);//��ȾͼƬ
		//Move();
		return;
	}

};

#endif // !NOAGAMEENGINE_PLAYER_H




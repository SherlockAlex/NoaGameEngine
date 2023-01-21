#pragma once


#ifndef NOAGAMEENGINE_TESTSCENE_H
#define NOAGAMEENGINE_TESTSCENE_H

//ϵͳ��
#include <iostream>
//�Զ����
#include "Scene.h"
#include "Player.h"

using namespace std;

class TestScene :public Scene
{
	//���Գ���

private:
	char world[25][50];
	GameObject* player = nullptr;//����
	//char player = '��';//����

private:
	void BuildWorld(char world[][50]);

public:
	TestScene();
	~TestScene();

public:
	void Start() override
	{
		//������ʼ��
		
		player->OnStart();
	}

	void Update() override
	{
		//��ʾUI��Ϣ
		cout << "HP:" << "100" << endl;
		BuildWorld(world);
		player->OnUpdate();
		
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H


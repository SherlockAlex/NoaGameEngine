#pragma once


#ifndef NOAGAMEENGINE_TESTSCENE_H
#define NOAGAMEENGINE_TESTSCENE_H

//ϵͳ��
#include <iostream>
//�Զ����
#include "Graphic.h"
#include "Scene.h"
#include "Player.h"

using namespace std;

class TestScene :public Scene
{
	//���Գ���

private:
	int world[MAXHEIGHT][MAXWIGHT] = {
		{1,1,1,1,1,1,1,1,1,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,1,1,1,1,0,0,0,0,1 },
		{1,1,1,1,1,0,0,0,0,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,0,0,0,0,0,1,1,1,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,0,0,0,0,0,0,0,0,1 },
		{1,1,1,1,1,1,1,1,1,1 },
	};
	GameObject* player = nullptr;//����

private:
	void BuildWorld(int world[][MAXWIGHT], int x, int y);

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
		cout << "HP:" << "100" << endl;
		BuildWorld(world, 10, 10);
		cout << endl << "Position:" << player->transform->x << "," << player->transform->y;
		player->OnUpdate();
		
		
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H



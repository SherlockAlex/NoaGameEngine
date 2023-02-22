#pragma once


#ifndef NOAGAMEENGINE_TESTSCENE_H
#define NOAGAMEENGINE_TESTSCENE_H

//ϵͳ��
#include <iostream>
//�Զ����
#include "Graphic.h"
#include "Scene.h"
#include "Player.h"
#include "SceneManager.h"

using namespace std;

class TestScene :public Scene
{
	//���Գ���

private:
	byte world[MAXHEIGHT][MAXWIGHT] = {
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
	};//����ͼƬ��Ϣ


	GameObject* player = nullptr;//����

public:
	SceneManager* sceneManager = nullptr;

private:
	void BuildWorld(byte world[][MAXWIGHT], int x, int y);


public:
	TestScene(SceneManager* sceneManager);
	~TestScene();

public:
	void Start() override
	{
		//������ʼ��
		//surface = sceneManager->GetSurface();
		this->renderer = gameRenderer;
		player->OnStart();
	}

	void Update(NoaEvenet event) override
	{
		cout << "HP:" << "100" << endl;
		BuildWorld(world, 10, 10);
		cout << endl << "Position:" << player->GetTransform()->x << "," << player->GetTransform()->y;
		player->OnUpdate();
		
		
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H



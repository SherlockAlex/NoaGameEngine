#pragma once


#ifndef NOAGAMEENGINE_TESTSCENE_H
#define NOAGAMEENGINE_TESTSCENE_H

//ϵͳ��
#include <iostream>
//�Զ����
#include "Graphic.h"
#include "Player.h"

#include "GameScene.h"

using namespace std;

class TestScene :public Scene
{
	//���Գ���

private:

	GameObject* player = nullptr;//����

public:
	SceneManager* sceneManager = nullptr;


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

	void Update() override
	{
		cout << "HP:" << "100" << endl;
		cout << endl << "Position:" << player->GetTransform()->x << "," << player->GetTransform()->y;
		player->OnUpdate();
	}

};


#endif // !NOAGAMEENGINE_TESTSCENE_H



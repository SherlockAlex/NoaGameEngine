#pragma once
#ifndef NOAGAMEENGIN_TESTMENU_H
#define NOAGAMEENGIN_TESTMENU_H

#include <iostream>

#include "Scene.h"
#include "SceneManager.h"
#include "InputSystem.h"
#include "TestScene.h"

using namespace std;

class TestMenu:public Scene
{
	//����һ����ʼ���˵�


public:						//�����Ա����
	int buttonIndex = 0;
	SceneManager * sceneManager = nullptr;

public:						//�����ʼ������
	TestMenu(SceneManager * _sceneManager);
	~TestMenu();



public:						//�����Ա����
	void Display();
	void SetButton();
	void InvokeButtonEvent();

public:
	void Start() override
	{
		Display();
	}

	void Update() override
	{
		SetButton();
		Display();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H


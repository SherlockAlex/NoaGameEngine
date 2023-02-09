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
	//他是一个初始化菜单


public:						//定义成员属性
	int buttonIndex = 0;
	SceneManager * sceneManager = nullptr;

public:						//定义初始化函数
	TestMenu(SceneManager * _sceneManager);
	~TestMenu();



public:						//定义成员方法
	void Display();
	void SetButton();
	void InvokeButtonEvent();

public:
	void Start() override {
		Display();
	}

	void Update() override {
		SetButton();
		Display();
	}

};

#endif // !NOAGAMEENGIN_TESTMENU_H


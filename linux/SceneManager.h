#pragma once

#ifndef NOAGAMEENGINE_SCENEMANAGER
#define NOAGAMEENGINE_SCENEMANAGER

//ϵͳ��
#include <iostream>

//�Զ����
#include "Scene.h"

using namespace std;

class SceneManager
{
//��������һ���б�������ų���
public:
	Scene* currentScene = nullptr;				//��ǰ����

public:
	SceneManager();
	~SceneManager();

public:
	void Run();
};

#endif											// !NOAGAMEENGINE_SCENEMANAGER



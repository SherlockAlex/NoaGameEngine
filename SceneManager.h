#pragma once

#ifndef NOAGAMEENGINE_SCENEMANAGER
#define NOAGAMEENGINE_SCENEMANAGER

#include "Scene.h"

class SceneManager
{
//��������һ���б�������ų���
public:
	Scene* currentScene = nullptr;//��ǰ����

public:
	SceneManager();
	~SceneManager();

public:
	void Run();
};

#endif // !NOAGAMEENGINE_SCENEMANAGER



#pragma once
#ifndef _NOAGAMEENGINE_SCENE_H
#define _NOAGAMEENGINE_SCENE_H

//�û��Զ����
#include "Game.h"
#include "GameMenu.h"
#include "Screen.h"

class Scene
{
public:
	Scene();
	~Scene();

public:
	void Run();//ִ��currentGame��GameMain()

public:
	Game* currentGame;//��������ǵ�ǰ����ִ�еĴ���

private:

};



#endif // !_NOAGAMEENGINE_SCENE_H



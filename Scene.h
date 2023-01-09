#pragma once
#ifndef _NOAGAMEENGINE_SCENE_H
#define _NOAGAMEENGINE_SCENE_H

//用户自定义库
#include "Game.h"
#include "GameMenu.h"
#include "Screen.h"

class Scene
{
public:
	Scene();
	~Scene();

public:
	void Run();//执行currentGame的GameMain()

public:
	Game* currentGame;//这个变量是当前正在执行的窗口

private:

};



#endif // !_NOAGAMEENGINE_SCENE_H



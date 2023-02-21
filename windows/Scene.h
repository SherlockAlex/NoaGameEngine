//布景类，每个场景都是他的子类
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"
#include "SDL2/SDL.h"

class Scene {
	//规定每个Scene都要有Scene Manager
protected:
	int id;
	SDL_Surface * surface = NULL;//获取当前游戏的窗口，以便获取绘制窗口
	SDL_Renderer* renderer = NULL;
public:
	
	void GameMain();
	int GetID();			//场景执行入口函数
	virtual void Start();	//在子类中实现
	virtual void Update();	//在子类中实现
};

#endif							// !NOAGAMEENGINE_SCENE_H




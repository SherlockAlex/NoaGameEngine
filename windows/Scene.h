//布景类，每个场景都是他的子类
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

#include "Application.h"
#include "GameSetting.h"
#include "Graphic.h"
#include "Assets.h"

class Scene {
	//规定每个Scene都要有Scene Manager
protected:
	int id;
	//游戏场景的渲染器
	SDL_Renderer* renderer=NULL;
	//场景的rect
	SDL_Rect rect;

public:
	
	void GameMain();
	int GetID();			//场景执行入口函数
	virtual void Start();	//在子类中实现

	/*子类实现Update方法，需要每时每刻调用*/
	virtual void Update(NoaEvenet _event);	//在子类中实现
	
};

#endif							// !NOAGAMEENGINE_SCENE_H




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
	
	/*游戏的主函数，一个游戏场景的入口，场景管理器选择不同的场景，并让程序进入到对应场景的主函数，实行不同场景的内容*/
	void GameMain();

	/*场景的ID，每个场景独一份*/
	int GetID();

	//场景的初始化部分，在update之前调用，主要为进入update做准备，一个程序只调用一次
	virtual void Start();	//在子类中实现

	/*子类实现Update方法，需要每时每刻调用*/
	virtual void Update();	//在子类中实现
	
};

#endif							// !NOAGAMEENGINE_SCENE_H




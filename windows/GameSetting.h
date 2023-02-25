#ifndef NOAGAMEENGINE_GAMESETTING_H
#define NOAGAMEENGINE_GAMESETTING_H
//关于游戏的一些基本参数问题

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

#include "GameScene.h"

typedef SDL_Event * NoaEvent;

//游戏是否在运行
extern bool run;

//游戏进入主程序的时间
extern int startTime;
extern const char* gameName;
extern unsigned int frameStart;
extern float deltaTime;

/*
* 添加游戏的主要场景对象
* 开发者需要在GameSetting.cpp的LoadScenes()方法中添加自己游戏的关卡
* 这个函数会在Game()函数的入口程序中调用
* 这个函数可以认为是自定义游戏场景的列表，只要是游戏的场景，就必须要在开发阶段在这个列表注册自己将会使用到的场景
*/
extern void LoadScenes(SceneManager * sceneManager);

#endif


#ifndef NOAGAMEENGINE_GAMESETTING_H
#define NOAGAMEENGINE_GAMESETTING_H
//关于游戏的一些基本参数问题

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

typedef SDL_Event * NoaEvent;

//游戏是否在运行
extern bool run;

//游戏进入主程序的时间
extern int startTime;
extern const char* gameName;
extern unsigned int frameStart;
extern float deltaTime;

#endif


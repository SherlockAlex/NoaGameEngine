#ifndef NOAGAMEENGINE_GAMESETTING_H
#define NOAGAMEENGINE_GAMESETTING_H
//关于游戏的一些基本参数问题

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

typedef SDL_Event * NoaEvenet;

//游戏是否在运行
extern bool run;

extern const char* gameName;
extern unsigned int currentTime;

#endif


#ifndef _NOAGAMEENGINE_INPUTSYSTEM_H
#define _NOAGAMEENGINE_INPUTSYSTEM_H

//这个模块负责玩家控制的部分，对键盘上面的按键进行一个事件的绑定
#include "SDL2/SDL.h"
#include "GameSetting.h"

//用来存放输入事件
extern NoaEvent gameEvent;

extern void OnInput();

#endif

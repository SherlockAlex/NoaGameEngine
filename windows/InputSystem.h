#ifndef _NOAGAMEENGINE_INPUTSYSTEM_H
#define _NOAGAMEENGINE_INPUTSYSTEM_H


//这个模块负责玩家控制的部分，对键盘上面的按键进行一个事件的绑定
#include "SDL2/SDL.h"
#include "GameSetting.h"
#include "Player.h"
#include <functional>

//用来存放输入事件
extern NoaEvent gameEvent;

/*键盘输入事件*/
extern void(*KeyboardEvent[100])(void);

extern void (Player::*PlayerKeyboardEvent[100])(void);

extern void AddKeyboardEvent(void (*keyEvent)(void),int index);
extern void AddPlayerKeyboardEvent(void (Player::*keyEvent)(void),void* context, int index);

extern void InvokeKeyboardEven();

extern void OnInput();

#endif

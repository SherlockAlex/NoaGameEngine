#ifndef _NOAGAMEENGINE_INPUTSYSTEM_H
#define _NOAGAMEENGINE_INPUTSYSTEM_H


//���ģ�鸺����ҿ��ƵĲ��֣��Լ�������İ�������һ���¼��İ�
#include "SDL2/SDL.h"
#include "GameSetting.h"
#include "Player.h"
#include <functional>

//������������¼�
extern NoaEvent gameEvent;

/*���������¼�*/
extern void(*KeyboardEvent[100])(void);

extern void (Player::*PlayerKeyboardEvent[100])(void);

extern void AddKeyboardEvent(void (*keyEvent)(void),int index);
extern void AddPlayerKeyboardEvent(void (Player::*keyEvent)(void),void* context, int index);

extern void InvokeKeyboardEven();

extern void OnInput();

#endif

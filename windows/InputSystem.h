#ifndef _NOAGAMEENGINE_INPUTSYSTEM_H
#define _NOAGAMEENGINE_INPUTSYSTEM_H

//���ģ�鸺����ҿ��ƵĲ��֣��Լ�������İ�������һ���¼��İ�
#include "SDL2/SDL.h"
#include "GameSetting.h"

//������������¼�
extern NoaEvent gameEvent;

/*���������¼�*/
extern void(*KeyboardEvent[100])(void);

extern void AddKeyboardEvent(void (*keyEvent)(void));

extern void InvokeKeyboardEven();

extern void OnInput();

#endif

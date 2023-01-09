#ifndef _NOAGAMEENGINE_INPUTSYSTEM_H
#define _NOAGAMEENGINE_INPUTSYSTEM_H

#include<windows.h>
#include <conio.h>
//定义一种宏
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 

bool GetKeyDown(char key);

#endif
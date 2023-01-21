#ifndef _NOAGAMEENGINE_INPUTSYSTEM_H
#define _NOAGAMEENGINE_INPUTSYSTEM_H

#include<termio.h>
#include <unistd.h>
//¶šÒåÒ»ÖÖºê
#define KEY_DOWN(VK_NONAME) ((GetAsyncKeyState(VK_NONAME) & 0x8000) ? 1:0) 

enum  KeyCode
{
	A = 'a', B = 'b', C = 'c', D = 'd', F = 'f', G = 'g',
	H = 'h', I = 'i', J = 'j', K = 'k', L = 'l', M = 'm', N = 'n',
	O = 'o', P = 'p', Q = 'q', R = 'r', S = 's', T = 't',
	U = 'u', V = 'v', W = 'w', X = 'x', Y = 'y', Z = 'z',
	Space=' '
};

extern int _getch();
extern char GetKeyCode();

extern bool GetKeyDown(KeyCode key);

#endif

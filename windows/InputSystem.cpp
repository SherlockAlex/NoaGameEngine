#include <iostream>
#include "SDL2/SDL.h"
#include "InputSystem.h"
#include "Application.h"

using namespace std;

static int keyboardCount=0;

void AddKeyboardEvent(void(*keyEvent)(void))
{
	/*添加keyEvent到事件KeyboardEvent列表中*/
	
}

void InvokeKeyboardEven()
{
	//执行事件
	for (int i = 0; KeyboardEvent[i] != NULL;i++) {
		KeyboardEvent[i]();
	}
}

void OnInput() 
{
	if (SDL_PollEvent(gameEvent)) {
		switch (gameEvent->type)
		{
		case SDLK_ESCAPE:
		case SDL_QUIT:
			Quit();
			break;
		case SDL_KEYDOWN:
			InvokeKeyboardEven();
			break;
		default:
			break;
		}
	}
}
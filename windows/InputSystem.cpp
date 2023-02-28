#include <iostream>
#include "SDL2/SDL.h"
#include "InputSystem.h"

#include "Application.h"

using namespace std;

void AddKeyboardEvent(void(*keyEvent)(void),int index)
{
	/*���keyEvent���¼�KeyboardEvent�б���*/
	KeyboardEvent[index] = keyEvent;
}



void AddPlayerKeyboardEvent(void (Player::* keyEvent)(void),void * context, int index)
{

	/*��װ�¼�*/

	//((Player*)context->*keyEvent)();
	PlayerKeyboardEvent[index] = keyEvent;

}

void InvokeKeyboardEven()
{
	//ִ���¼�
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
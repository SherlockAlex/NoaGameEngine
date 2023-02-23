#include "Scene.h"
#include "InputSystem.h"

unsigned int currentTime = 0;
float deltaTime = 0;
NoaEvent gameEvent=NULL;

void Scene::GameMain() {
	//在这里面执行所有物件的操作

	int oldTime = 0;
	this->Start();
	while (run)
	{
		SDL_Event _event;
		gameEvent = &_event;

		currentTime = SDL_GetTicks();
		deltaTime = (currentTime+1.0 - oldTime) /1000;
		oldTime = currentTime;

		while (SDL_PollEvent(gameEvent)) {
			switch (gameEvent->type)
			{
			case SDL_QUIT:

				cout << "Quit Game" << endl;
				SDL_Quit();
				run = false;
				break;
			default:
				break;
			}
		}
		
		//主循环内容
		this->Update();
	}

}

int Scene::GetID()
{
	return id;
}

void Scene::Start() {
}

void Scene::Update() {
}

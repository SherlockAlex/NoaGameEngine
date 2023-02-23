#include "Scene.h"
#include "InputSystem.h"

const int FPS = 60;
const int frameDelay = 1000 / FPS;
unsigned int frameStart = 0;
float deltaTime = 0;
NoaEvent gameEvent=NULL;

void Scene::GameMain() {
	frameStart = 0;
	deltaTime = 0;
	//在这里面执行所有物件的操作
	SDL_Event _event;
	this->Start();
	while (run)
	{
		
		gameEvent = &_event;

		frameStart = SDL_GetTicks();

		this->Update();

		//currentTime = SDL_GetTicks();
		deltaTime = SDL_GetTicks() - frameStart;
		
		if (frameDelay>deltaTime) {
			SDL_Delay(frameDelay-deltaTime);
		}
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

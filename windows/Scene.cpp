#include "GameScene.h"
#include "InputSystem.h"


const int FPS = 60;
unsigned int frameStart = 0;
float deltaTime = 0;
NoaEvent gameEvent=NULL;
int startTime;

void Scene::GameMain() {
	const int frameDelay = 1000 / FPS;
	frameStart = 0;
	deltaTime = 0;
	cout << "frameDelay: " << frameDelay << endl;
	//在这里面执行所有物件的操作
	SDL_Event _event;
	startTime= SDL_GetTicks();
	this->Start();
	while (run)
	{
		frameStart = SDL_GetTicks();

		gameEvent = &_event;
		/*绘制场景图形*/
		DrawScene(this->sprites);
		this->Update();
		deltaTime = SDL_GetTicks() - frameStart;

		SDL_Delay(frameDelay > deltaTime ? (frameDelay - deltaTime) : 0);

	}

}

int Scene::GetID()
{
	return id;
}

Scene::Scene()
{

}

Scene::Scene(int id,SceneManager * sceneManager)
{
	this->id = id;
	this->sceneManager = sceneManager;
	this->sceneManager->AddLevel(this);
}

Scene::~Scene()
{
	delete this;
	SDL_FreeSurface(this->sprite->surface);
	SDL_DestroyTexture(this->sprite->texture);
}

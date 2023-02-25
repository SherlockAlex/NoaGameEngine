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
	//��������ִ����������Ĳ���
	SDL_Event _event;
	gameEvent = &_event;
	startTime= SDL_GetTicks();
	this->Start();
	while (run)
	{
		frameStart = SDL_GetTicks();
		/*���Ƴ���ͼ��*/
		DrawScene(this->sprites);
		this->Update();
		deltaTime = SDL_GetTicks() - frameStart;
		if (!run) {
			break;
		}
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

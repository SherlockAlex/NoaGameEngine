#include "GameScene.h"
#include "NoaMath.h"
#include "time.h"
#include "InputSystem.h"


const int FPS = 60;
unsigned int frameStart = 0;
float deltaTime = 0;
NoaEvent gameEvent=NULL;
int startTime;

/*测试数学函数效率*/
void TestMath();

void Scene::GameMain() {
	const int frameDelay = 1000 / FPS;
	frameStart = 0;
	deltaTime = 0;
	cout << "frameDelay: " << frameDelay << endl;
	//在这里面执行所有物件的操作
	SDL_Event _event;
	gameEvent = &_event;
	startTime= SDL_GetTicks();
	this->Start();

	//TestMath();

	while (run)
	{
		frameStart = SDL_GetTicks();
		/*绘制场景图形*/
		DrawScene(this->sprites);
		this->Update();
		deltaTime = SDL_GetTicks() - frameStart;
		if (16>deltaTime) {
			SDL_Delay(16 - SDL_GetTicks() + frameStart);
		}

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

void TestMath() {
	int time = clock();
	cout << "system result:" << 1/(float)sqrt(131) << endl;
	cout << "System speed:" << (clock() - time) << endl;

	time = clock();
	cout << "noa result:" << n_InvSqrt(131) << endl;
	cout << "noa speed:" << (clock() - time) << endl;
}

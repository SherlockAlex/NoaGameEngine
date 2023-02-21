#include "InitGame.h"
#include "TestScene.h"
#include "TestMenu.h"
#include "SceneManager.h"

const int width = 960;
const int height = 540;

const char* gameName = "NoaGameEngine";

void InitGame()
{

	//��Ϸ��ʼ��

//	SceneManager* sceneManager = new SceneManager();
//	{
//		//�û���������ע���Լ��ĳ���
//		new TestMenu(sceneManager);
//		new TestScene(sceneManager);
//	}
//	sceneManager->Run();

	SDL_Init(SDL_INIT_EVERYTHING);//��ʼ��

	SDL_Window* window = NULL;
	SDL_Surface* surface = NULL;
	SDL_Renderer* renderer = NULL;//������Ⱦ��

	window = SDL_CreateWindow(gameName,200,200,width,height,SDL_WINDOW_SHOWN);
	surface = SDL_GetWindowSurface(window);
	renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_ACCELERATED|SDL_RENDERER_TARGETTEXTURE);//��Ⱦ������Ӳ������

	SceneManager* sceneManager = new SceneManager();
	{
		//�û���������ע���Լ��ĳ���
		new TestMenu(sceneManager);
		new TestScene(sceneManager);
	}
	//sceneManager->SetWindow(window);
	sceneManager->SetSurface(surface);
	sceneManager->SetRenderer(renderer);
	sceneManager->Run();//����Ϸ���ڵĿ���Ȩ�޽���sceneManager


}

#include "InitGame.h"
#include "TestScene.h"
#include "TestMenu.h"
#include "SceneManager.h"

const int width = 960;
const int height = 480;

const char* gameName = "NoaGameEngine";

SDL_Window* gameWindow = NULL;
SDL_Renderer * gameRenderer = NULL;

void InitGame()
{

	SDL_Init(SDL_INIT_EVERYTHING);//��ʼ��

	gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height, SDL_WINDOW_SHOWN);//ȫ����ʾ;

	gameRenderer= SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);//��Ⱦ������Ӳ������;
	SceneManager* sceneManager = new SceneManager();
	{
		//�û���������ע���Լ��ĳ���
		new TestMenu(sceneManager);
		new TestScene(sceneManager);
	}


	sceneManager->Run();//����Ϸ���ڵĿ���Ȩ�޽���sceneManager

}

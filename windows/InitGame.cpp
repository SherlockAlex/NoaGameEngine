#include "InitGame.h"
#include "TestScene.h"
#include "TestMenu.h"
#include "GameScene.h"
/*���ڴ�С*/
const int width = 960;
const int height = 480;

const char* gameName = "NoaGameEngine";

SDL_Window* gameWindow = NULL;
SDL_Renderer * gameRenderer = NULL;
bool run = true;

int Game()
{

	//��ʼ��ͼ�λ����ڣ�Ϊ��Ϸ����׼��

	if (SDL_Init(SDL_INIT_EVERYTHING)) {
		cout << "Game init failed" << endl;
		return -1;
	}
	run = true;
	gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height, SDL_WINDOW_SHOWN);
	if (!gameWindow) {
		cout << "Create game window failed" << endl;
		return -1;
	}
	//gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height, SDL_WINDOW_FULLSCREEN);//ȫ����ʾ;
	gameRenderer= SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);//��Ⱦ������Ӳ������;

	if (!gameRenderer) {
		cout << "Create renderer failed" << endl;
		return -1;
	}

	//������Ϸ������
	SceneManager * sceneManager = new SceneManager();
	
	LoadScenes(sceneManager);

	sceneManager->Run();//����Ϸ���ڵĿ���Ȩ�޽���sceneManager

	cout << "start to free game resource" << endl;
	//�ͷ��ڴ���Դ
	
	SDL_DestroyRenderer(gameRenderer);
	SDL_DestroyWindow(gameWindow);
	SDL_Quit();

	cout << "free game resource complect" << endl;

	return 0;

}

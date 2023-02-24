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

void InitGame()
{

	//��ʼ��ͼ�λ����ڣ�Ϊ��Ϸ����׼��
	SDL_Init(SDL_INIT_EVERYTHING);//��ʼ��
	run = true;
	gameWindow = SDL_CreateWindow(gameName, 200, 200, width, height, SDL_WINDOW_FULLSCREEN);//ȫ����ʾ;
	gameRenderer= SDL_CreateRenderer(gameWindow, -1, SDL_RENDERER_ACCELERATED | SDL_RENDERER_TARGETTEXTURE);//��Ⱦ������Ӳ������;


	//������Ϸ������
	SceneManager* sceneManager = new SceneManager();
	{
		//�û���������ע���Լ��ĳ���
		new TestMenu(sceneManager);
		new TestScene(sceneManager);
	}

	sceneManager->Run();//����Ϸ���ڵĿ���Ȩ�޽���sceneManager

	//�ͷ��ڴ���Դ
	SDL_DestroyWindow(gameWindow);
	SDL_DestroyRenderer(gameRenderer);
	SDL_Quit();

	cout << "�ͷ���Ϸ��Դ" << endl;

	return;

}

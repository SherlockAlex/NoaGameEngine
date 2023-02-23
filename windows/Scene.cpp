#include "Scene.h"

unsigned int currentTime = 0;
float deltaTime = 0;

void Scene::GameMain() {
	//��������ִ����������Ĳ���

	int oldTime = 0;
	this->Start();
	while (run)
	{

		SDL_Event _event;

		currentTime = SDL_GetTicks();
		deltaTime = (currentTime - oldTime)/1000.0;
		oldTime = currentTime;
		cout << "DeltaTime= " << deltaTime << endl;
		//�¼�ѭ��
		//���Ƴ�����Ϣ
		//ResetConsole();		//ˢ����Ļ
		while (SDL_PollEvent(&_event)) {
			switch (_event.type)
			{
			case SDL_QUIT:
				
				cout << "Quit Game"<<endl;
				SDL_Quit();
				run = false;
				break;
			default:
				
				break;
			}
		}
		//��ѭ������
		this->Update(&_event);
	}

}

int Scene::GetID()
{
	return id;
}

void Scene::Start() {
	//ִ���ڳ���������ʱ��ʼִ��ʱִ��
	//this->renderer = gameRenderer;
}

void Scene::Update(NoaEvenet _event) {
	//����ʵʱ�����õ�
}

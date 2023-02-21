//�Զ����
#include "SceneManager.h"

//��Щ�����ǻ���
SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::SetSurface(SDL_Surface* surface)
{
	this->surface = surface;
}

SDL_Surface* SceneManager::GetSurface()
{
	return surface;
}

void SceneManager::SetRender(SDL_Renderer* renderer)
{
	this->renderer = renderer;
}

SDL_Renderer* SceneManager::GetRenderer()
{
	return renderer;
}

void SceneManager::Run()
{
	//������Ϸ
	if (!canRun) {
		return;
	}
	if (this->currentScene!=nullptr) {
		//�����ǰ������Ϊ�գ���ֱ��ִ�г�������ں���,��Ȼ�������ǰ�������ڳ�ʼ����ʱ�򱻴���
		this->currentScene->GameMain();//�������Ҫ����
	}
	else
	{
		cout << "��ǰ��Ϸû���κ����ݿ���ִ��" << endl;
	}
	
}

void SceneManager::AddLevel(Scene* level)
{
	list.append(level);
	if (currentScene == nullptr) {
		currentScene = list.at(0);
	}
}

void SceneManager::LoadLevel(int index) {
	canRun = false;
	currentScene = list.at(index);
	canRun = true;
	system("cls");
	Run();//����ִ��Run
}

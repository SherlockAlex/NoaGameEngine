//�Զ����
#include "GameScene.h"

//��Щ�����ǻ���
SceneManager::SceneManager()
{
}

SceneManager::~SceneManager()
{
}

void SceneManager::Run()
{
	//������Ϸ
	if (!canRun) {
		return;
	}
	if (this->currentScene==nullptr) {
		//�����ǰ������Ϊ�գ���ֱ��ִ�г�������ں���,��Ȼ�������ǰ�������ڳ�ʼ����ʱ�򱻴���
		cout << "There is noting to run" << endl;
	}
	this->currentScene->GameMain();//�������Ҫ����
	
}

void SceneManager::AddLevel(Scene* level)
{
	list.append(level);
	if (currentScene == nullptr) {
		currentScene = list.at(0);
	}
}

void SceneManager::LoadLevel(int index) {

	cout << "Loading scene: " << index << endl;
	canRun = false;
	currentScene = list.at(index);
	canRun = true;
	cout << "Scene: " << index << "is loaded" << endl;
	Run();//����ִ��Run
}

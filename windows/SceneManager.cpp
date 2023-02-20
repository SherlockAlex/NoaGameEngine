//�Զ����
#include "SceneManager.h"

#include "TestScene.h"
#include "TestMenu.h"

//��Щ�����ǻ���
SceneManager::SceneManager()
{
	//currentScene = new TestMenu(this);
	new TestMenu(this);
	new TestScene(this);
}

SceneManager::~SceneManager()
{
}

void SceneManager::Run()
{
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
	list.appendByIndex(level->GetID(), level);
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

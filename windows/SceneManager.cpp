//�Զ����
#include "SceneManager.h"
#include "TestScene.h"
#include "TestMenu.h"

//��Щ�����ǻ���
SceneManager::SceneManager()
{
	//currentScene = new TestScene();//ע���ʼ���������������ôȡ��ȡ����������ǿ����޸ĵ�
	currentScene = new TestMenu(this);
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

void SceneManager::LoadLevel(Scene * nextScene) {
	canRun = false;
	currentScene = nextScene;
	canRun = true;
	system("cls");
	Run();//����ִ��Run
}

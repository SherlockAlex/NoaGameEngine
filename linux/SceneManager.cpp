//�Զ����
#include "SceneManager.h"
#include "TestScene.h"

SceneManager::SceneManager()
{
	//currentScene = new TestScene();//ע���ʼ����
}

SceneManager::~SceneManager()
{
}

void SceneManager::Run()
{
	if (this->currentScene!=nullptr) {
		//�����ǰ������Ϊ�գ���ֱ��ִ�г�������ں���,��Ȼ�������ǰ�������ڳ�ʼ����ʱ�򱻴���
		this->currentScene->GameMain();
	}
	else
	{
		cout << "��ǰ��Ϸû���κ����ݿ���ִ��" << endl;
	}
	
}

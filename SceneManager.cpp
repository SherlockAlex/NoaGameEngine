//ϵͳ��
#include <iostream>

//�Զ����
#include "SceneManager.h"

using namespace std;

SceneManager::SceneManager()
{
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

#include "Scene.h"

void Scene::GameMain() {
	//��������ִ����������Ĳ���

	this->Start();
	while (1)
	{
		ResetConsole();		//ˢ����Ļ
		this->Update();
	}
}

void Scene::Start() {
	//ִ���ڳ���������ʱ��ʼִ��ʱִ��
}

void Scene::Update() {
	//����ʵʱ�����õ�
}

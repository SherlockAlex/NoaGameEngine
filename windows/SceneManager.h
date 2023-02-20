#ifndef NOAGAMEENGINE_SCENEMANAGER
#define NOAGAMEENGINE_SCENEMANAGER

//ϵͳ��(����ģ���ͷ�ļ������໥����)
#include <iostream>

//�Զ����
#include "Scene.h"
#include "SceneList.h"

using namespace std;

class SceneManager
{
//��������һ���б�������ų���
public:
	sceneList list;
	bool canRun = true;
	Scene * currentScene=nullptr;				//��ǰ����

public:
	SceneManager();
	~SceneManager();

public:
	void Run();
	void AddLevel(Scene * level);
	void LoadLevel(int index);							//�л�����
};



#endif											// !NOAGAMEENGINE_SCENEMANAGER



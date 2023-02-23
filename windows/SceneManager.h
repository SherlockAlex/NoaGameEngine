#ifndef NOAGAMEENGINE_SCENEMANAGER
#define NOAGAMEENGINE_SCENEMANAGER

//ϵͳ��(����ģ���ͷ�ļ������໥����)
#include <iostream>
//#include "SDL2/SDL.h"

//�Զ����
#include "Scene.h"
#include "SceneList.h"

using namespace std;

/*�������볡����֮����л��¼�*/
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



//��������ģ��
#include "Scene.h"

Scene::Scene()
{
	//if (currentGame==nullptr)
	{
		MainMenu * mainMenu=new MainMenu();//��ʹ��new�����������ڶ���
		currentGame = mainMenu;
	}
}

Scene::~Scene()
{
}

void Scene::Run() {
    //Run��ִ��currentGame��GameMain������Ȼ������ļ̳нű���Ȼ���дGameMain()����
    while (true)
    {
        GotoXY(0, 0);//ˢ����Ļ
        HideCursor();//���ù������
        if (currentGame != nullptr) {
            currentGame->GameMain();
        }
        else {
            break;
        }
    }
}
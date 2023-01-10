//场景管理
#include "Scene.h"

Scene::Scene()
{
	//if (currentGame==nullptr)
	{
		MainMenu * mainMenu=new MainMenu(this);//不使用new，将类声明在堆上
		currentGame = mainMenu;
	}
}

Scene::~Scene()
{
}

void Scene::Run() {

    while (true)
    {
        GotoXY(0, 0);//刷新屏幕
        HideCursor();//设置光标隐藏
        if (currentGame != nullptr) {
            currentGame->GameMain();
        }
        else {
            break;
        }
    }
}
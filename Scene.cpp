//场景管理模块
#include "Scene.h"

Scene::Scene()
{
	//if (currentGame==nullptr)
	{
		MainMenu * mainMenu=new MainMenu();//不使用new，将类声明在堆上
		currentGame = mainMenu;
	}
}

Scene::~Scene()
{
}

void Scene::Run() {
    //Run是执行currentGame的GameMain函数，然后后来的继承脚本，然后编写GameMain()函数
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
#include "TestScene.h"

void TestScene::BuildWorld(string world[])
{

	//构建世界
	world->append("********************************\n");
	world->append("*                              *\n");
	world->append("*     **************         ***\n");
	world->append("**        **********************\n");
	world->append("***                *************\n");
	world->append("*                          *****\n");
	world->append("*        *********             *\n");
	world->append("*                              *\n");
	world->append("*                              *\n");
	world->append("*         ********    ****     *\n");
	world->append("*                              *\n");
	world->append("********************************\n");

	for (int i = 0; i < world->length();i++) {
		cout << world[i] << endl;						//打印世界
	}
	cout << endl;
	
}

TestScene::TestScene()
{
	if (player==nullptr) {
		player = new Player();
	}
}

TestScene::~TestScene()
{
}

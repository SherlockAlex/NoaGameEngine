#include "TestScene.h"

void TestScene::BuildWorld(string world[])
{

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
		cout << world[i] << endl;						//´òÓ¡ÊÀ½ç
	}
	
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

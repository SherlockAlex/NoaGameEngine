#include "TestScene.h"

void TestScene::BuildWorld(char world[][50])
{

	//构建世界

	for (int i = 0; i < 25; i++)
	{
		world[i][0] = '#';
		world[i][49] = '#';
	}

	for (int i = 0; i < 50; i++) {
		
		world[0][i] = '#';
		world[24][i] = '#';
	}

	for (int i = 1; i < 24; i++) {
		for (int j = 1; j < 49; j++) {
			world[i][j] = ' ';
		}
	}

	for (int i = 0; i < 25; i++) {
		for (int j = 0; j < 50; j++) {
			cout << world[i][j];
		}
		cout << endl;
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

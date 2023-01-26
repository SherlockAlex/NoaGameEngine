#include "TestScene.h"

void TestScene::BuildWorld(int world[][MAXWIGHT], int x, int y)
{

	//构建世界,世界和玩家的矩阵相加，然后绘制出来

	

	int background[10][10];

	for (int i = 0; i < x; i++) {
		for (int j = 0; j < y;j++) {
			background[i][j] = world[i][j];//01-1，00-0
		}
	}

	//先限制玩家的活动区域，检测玩家的碰撞

	int px = (int)player->transform->x;
	int py = (int)player->transform->y;

	/*想办法实现两个图像之间的碰撞检测
	最简单的方式是，首先玩家输入后，先对transform检测，如果transform不允许，则不返回计算结果，否则就返回计算结果
	*/

	if (background[px][py]==0) {
		background[px][py] = 2;
	}

	//一个场景是多个图像相加的结果

	Draw(background, 10, 10);

	
	
	
}

TestScene::TestScene() {

	//sceneManager = manager;
	if (player == nullptr) {
		player = new Player();
	}

}

TestScene::~TestScene()
{
	delete this;
}

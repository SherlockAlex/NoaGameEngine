#include "TestScene.h"

void TestScene::BuildWorld(string * world)
{

	//build the game world
	world->append("*****************************\n");
	world->append("*                           *\n");
	world->append("*        **********         *\n");
	world->append("*        **********         *\n");
	world->append("*        ********************\n");
	world->append("***      ********************\n");
	world->append("***        ******************\n");
	world->append("***               ***********\n");
	world->append("***      **       ***********\n");
	world->append("*************     ***********\n");
	world->append("*************     ***********\n");
	world->append("*                           *\n");
	world->append("*                           *\n");
	world->append("*****************************\n");

	for(int i=0;i<world->length();i++){
		cout<<world[i]<<endl;
		//displayer positon
		//get player's position
		//if(x,y!='*') display player
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

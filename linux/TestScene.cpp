#include "TestScene.h"

void TestScene::BuildWorld(string * world)
{

	

	for(int i=0;i<world->length();i++){
		//cout<<world[i]<<endl;
		for (int j = 0; j < world[i].length(); j++)
		{
			if(world[i].c_str()[j]=='*'){
				cout<<pixe;
			}else{
				cout<<world[i].c_str()[j];
			}
		}
		
		
	}

	//
	
}

TestScene::TestScene()
{
	//cout << "????" << endl;
	world->append("**************************************\n");
	world->append("****                              ****\n");
	world->append("****     ****         ****************\n");
	world->append("****        **************************\n");
	world->append("******             *******************\n");
	world->append("****                          ********\n");
	world->append("****        ***********             **\n");
	world->append("****                              ****\n");
	world->append("****                              ****\n");
	world->append("****        *******   *******     ****\n");
	world->append("****                              ****\n");
	world->append("**************************************\n");
	if (player==nullptr) {
		player = new Player();
	}
	if (player==nullptr) {
		player = new Player();
	}
}

TestScene::~TestScene()
{
}

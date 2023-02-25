#include "GameSetting.h"

/*自定义场景*/
#include "TestMenu.h"
#include "TestScene.h"

//int currentTime = SDL_GetTicks();

void LoadScenes(SceneManager * sceneManager)
{
	new TestMenu(sceneManager);
	new TestScene(sceneManager);
}

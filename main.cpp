//自定义库
#include "SceneManager.h"

int main() 
{

	SceneManager* sceneManager = new SceneManager();
	sceneManager->Run();

	///下面的代码是用来测试的

	/*int i = 0;
	while(1)
	{
		ResetConsole();
		cout << "Hello: " << i << endl;
		i++;
		if (i>=65535) {
			Quit();
		}
	}*/

	return 0;
}
//³¡¾°¹ÜÀí
#include "Scene.h"

void Scene::Run() {
	if (currentGame!=nullptr) {
		currentGame->GameMain();
	}return;
}
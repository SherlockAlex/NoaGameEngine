#ifndef NOAGAMEENGINE_SCENELIST_H
#define NOAGAMEENGINE_SCENELIST_H

#include "Scene.h"
#define MAXSIZE 100

typedef struct sceneList {
	Scene * items[MAXSIZE]= { nullptr };;

	sceneList();

	int count;//返回的是数值元素的个数

	void append(Scene * item);

	//void appendByIndex(int index,Scene * item);
	
	void removeAt(int index);

	void sortList();

	void remove(Scene * item);

	bool contain(Scene * item);

	Scene* at(int index);//查找

};
#endif


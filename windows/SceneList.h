#ifndef NOAGAMEENGINE_SCENELIST_H
#define NOAGAMEENGINE_SCENELIST_H

#include "Scene.h"
#define MAXSIZE 100

typedef struct sceneList {
	Scene * items[MAXSIZE]= { nullptr };;

	sceneList();

	int count;//���ص�����ֵԪ�صĸ���

	void append(Scene * item);

	//void appendByIndex(int index,Scene * item);
	
	void removeAt(int index);

	void sortList();

	void remove(Scene * item);

	bool contain(Scene * item);

	Scene* at(int index);//����

};
#endif


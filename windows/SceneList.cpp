#include "SceneList.h"

sceneList::sceneList()
{
	items[0] = nullptr;
	count = 0;
}

void sceneList::append(Scene * item)
{
	//插入元素到列表中
	if (count>=MAXSIZE-1)
	{
		return;
	}

	items[count] = item;
	count++;

}

void sceneList::appendByIndex(int index,Scene* item)
{
	if (index < 0 || index >= MAXSIZE - 1) {
		return;
	}
	items[index] = item;
	if (count<index) {
		count=index;
	}
}

void sceneList::removeAt(int index)
{
	//移除列表该位置上的元素
	if (index<0||index>=MAXSIZE-1) {
		return;
	}
	for (int i = index; i <count;i++) {
		items[i] = items[i + 1];
	}
	count--;
}

void sceneList::remove(Scene* item)
{
	//先判断元素在不在列表中
	//移除上面的元素

	if (!contain(item)) {
		return;
	}

	int index=0;
	while (items[index]!=item) {
		index = index + 1;
	}
	removeAt(index);

}

bool sceneList::contain(Scene* item)
{
	//判断元素是否在列表中
	for (int i = 0; i <= count;i++) {
		if (item==items[i]) {
			return true;
		}
	}
	return false;
}

Scene* sceneList::at(int index)
{
	//返回列表该位置上的函数
	if (index < 0 || index >= MAXSIZE - 1) {
		return nullptr;
	}
	return items[index];
}

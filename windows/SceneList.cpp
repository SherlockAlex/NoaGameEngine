#include "GameScene.h"

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
	if (contain(item)) {
		return;
	}

	items[count] = item;
	count++;
	sortList();

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

void sceneList::sortList()
{
	//对列表进行排序（根据编号进行排序）,每次插入一个元素后自动执行
	for (int i = 1; i <= count;i++) {
		Scene* key=items[i];
		int j = i - 1;
		if (key==nullptr) {
			continue;
		}
		while (j >= 0&&items[j]->GetID()>=key->GetID()) {
			items[j + 1] = items[j];
			j--;
		}
		items[j + 1] = key;

	}
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
	sortList();
}

bool sceneList::contain(Scene* item)
{
	//判断元素是否在列表中
	if(items[item->GetID()]!=nullptr){
		return true;
	}

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

#include "SceneList.h"

sceneList::sceneList()
{
	items[0] = nullptr;
	count = 0;
}

void sceneList::append(Scene * item)
{
	//����Ԫ�ص��б���
	if (count>=MAXSIZE-1)
	{
		return;
	}

	items[count] = item;
	count++;
	sortList();

}

void sceneList::removeAt(int index)
{
	//�Ƴ��б��λ���ϵ�Ԫ��
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
	//���б�������򣨸��ݱ�Ž�������,ÿ�β���һ��Ԫ�غ��Զ�ִ��
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
	//���ж�Ԫ���ڲ����б���
	//�Ƴ������Ԫ��

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
	//�ж�Ԫ���Ƿ����б���
	for (int i = 0; i <= count;i++) {
		if (item==items[i]) {
			return true;
		}
	}
	return false;
}

Scene* sceneList::at(int index)
{
	//�����б��λ���ϵĺ���
	if (index < 0 || index >= MAXSIZE - 1) {
		return nullptr;
	}
	return items[index];
}

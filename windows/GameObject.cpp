#include "GameObject.h"

Vector2* GameObject::GetTransform()
{
	//������������ϵ������
	trans->x = transform->y;
	trans->y = -transform->x;
	return trans;
}

Vector2* GameObject::GetScreenTransform()
{
	//��Ļ����ϵ������
	return transform;
}

void GameObject::SetTransform(float x, float y)
{
	transform -> x = -y;
	transform -> y = x;
}

GameObject::GameObject()
{
	if (this->transform==nullptr) {
		this->transform = new Vector2(0,0);
	}

}

GameObject::~GameObject()
{
}

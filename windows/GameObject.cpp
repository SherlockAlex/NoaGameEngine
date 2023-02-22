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

void GameObject::SetScreenTransform(float x, float y)
{
	transform->x = x;
	transform->y = y;
}

GameObject::GameObject()
{
	rect.w = w;
	rect.h = h;
	if (this->transform==nullptr) {
		this->transform = new Vector2(0,0);
	}

}

GameObject::~GameObject()
{
}

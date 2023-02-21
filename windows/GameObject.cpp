#include "GameObject.h"

Vector2* GameObject::GetTransform()
{
	//返回世界坐标系的坐标
	trans->x = transform->y;
	trans->y = -transform->x;
	return trans;
}

Vector2* GameObject::GetScreenTransform()
{
	//屏幕坐标系的坐标
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

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

void GameObject::SetScreenTransform(float x, float y)
{
	transform->x = x;
	transform->y = y;
}

void GameObject::UpdateColiderInfo()
{
	//检测周围碰撞点的信息
	float up = rect.y - rect.h*0.5;
	float down = rect.y + rect.h*0.5;
	float right = rect.x + rect.w *0.5;
	float left = rect.x - rect.w *0.5;
}

Sprite* GameObject::GetSprite()
{
	return sprite;
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

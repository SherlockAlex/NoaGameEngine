#include "GameObject.h"

GameObject::GameObject()
{
	if (this->transform==nullptr) {
		this->transform = new Vector2(0,0);
	}
}

GameObject::~GameObject()
{
}

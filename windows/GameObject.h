#ifndef NOAGAMEENGINE_GAMEOBJECT_H
#define NOAGAMEENGINE_GAMEOBJECT_H

#include "NoaMath.h"
#include "GameSetting.h"
#include "Graphic.h"
#include "SDL2/SDL.h"

class GameObject
{
private:
	Vector2* transform = nullptr;//默认位置
	Vector2* trans = new Vector2(0,0);

protected:
	SDL_Renderer * renderer = gameRenderer;

	const char* fileName;
	int w;
	int h;
	SDL_Rect rect;

public:

	bool coliderInfo[4] = { false,false,false,false };	//物体的碰撞信息，0123分别是上左下右

	Vector2 * GetTransform();			//配置信息用的
	/*屏幕坐标系，和transform一致*/
	Vector2 * GetScreenTransform();
	void SetTransform(float x,float y);
	void SetScreenTransform(float x, float y);

	
	float bx = 0;				//缓存上一帧坐标
	float by = 0;

public:

	GameObject();
	~GameObject();

	//下面两个方法会执行

	virtual void OnStart() = 0;
	virtual void OnUpdate() = 0;

};

#endif


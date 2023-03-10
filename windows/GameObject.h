#ifndef NOAGAMEENGINE_GAMEOBJECT_H
#define NOAGAMEENGINE_GAMEOBJECT_H

#include "NoaMath.h"
#include "GameSetting.h"
#include "Graphic.h"
#include "SDL2/SDL.h"
#include "Assets.h"

class GameObject
{
private:
	/*游戏物品的坐标位置*/
	//Vector2* transform = nullptr;
	Vector2* trans = new Vector2(0,0);

protected:
	Vector2* transform = nullptr;
	SDL_Renderer * renderer = gameRenderer;

	Sprite* sprite = nullptr;

	const char* fileName;
	int w;
	int h;
	SDL_FRect rect;

	SDL_Rect orect;


public:

	bool coliderInfo[4] = { false,false,false,false };	//物体的碰撞信息，0123分别是上左下右

	Vector2 * GetTransform();			//配置信息用的
	/*屏幕坐标系，和transform一致*/
	Vector2 * GetScreenTransform();
	void SetTransform(float x,float y);
	void SetScreenTransform(float x, float y);
	/*更新碰撞信息*/
	void UpdateColiderInfo();
	Sprite* GetSprite();
	
	float bx = 0;				//缓存上一帧坐标
	float by = 0;

public:

	GameObject();
	~GameObject();

	//下面两个方法会执行

	/*在对象被创建后执行的第一段代码，只执行一次*/
	virtual void OnStart() = 0;
	/*游戏每一帧执行一次*/
	virtual void OnUpdate() = 0;

};

#endif


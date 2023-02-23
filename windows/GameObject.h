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
	/*��Ϸ��Ʒ������λ��*/
	//Vector2* transform = nullptr;
	Vector2* trans = new Vector2(0,0);

protected:
	Vector2* transform = nullptr;
	SDL_Renderer * renderer = gameRenderer;

	Sprite* sprite = nullptr;

	const char* fileName;
	int w;
	int h;
	SDL_Rect rect;

	SDL_Rect orect;


public:

	bool coliderInfo[4] = { false,false,false,false };	//�������ײ��Ϣ��0123�ֱ�����������

	Vector2 * GetTransform();			//������Ϣ�õ�
	/*��Ļ����ϵ����transformһ��*/
	Vector2 * GetScreenTransform();
	void SetTransform(float x,float y);
	void SetScreenTransform(float x, float y);
	/*������ײ��Ϣ*/
	void UpdateColiderInfo();
	Sprite* GetSprite();
	
	float bx = 0;				//������һ֡����
	float by = 0;

public:

	GameObject();
	~GameObject();

	//��������������ִ��

	/*�ڶ��󱻴�����ִ�еĵ�һ�δ��룬ִֻ��һ��*/
	virtual void OnStart() = 0;
	/*��Ϸÿһִ֡��һ��*/
	virtual void OnUpdate() = 0;

};

#endif


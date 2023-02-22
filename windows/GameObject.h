#ifndef NOAGAMEENGINE_GAMEOBJECT_H
#define NOAGAMEENGINE_GAMEOBJECT_H

#include "NoaMath.h"
#include "GameSetting.h"
#include "Graphic.h"
#include "SDL2/SDL.h"

class GameObject
{
private:
	Vector2* transform = nullptr;//Ĭ��λ��
	Vector2* trans = new Vector2(0,0);

protected:
	SDL_Renderer * renderer = gameRenderer;

	const char* fileName;
	int w;
	int h;
	SDL_Rect rect;

public:

	bool coliderInfo[4] = { false,false,false,false };	//�������ײ��Ϣ��0123�ֱ�����������

	Vector2 * GetTransform();			//������Ϣ�õ�
	Vector2 * GetScreenTransform();		//����ͼ���õ�
	void SetTransform(float x,float y);

	
	float bx = 0;				//������һ֡����
	float by = 0;

public:

	GameObject();
	~GameObject();

	//��������������ִ��

	virtual void OnStart() = 0;
	virtual void OnUpdate() = 0;

};

#endif


#pragma once
#ifndef NOAGAMEENGINE_GRAPHIC_H
#define NOAGAMEENGINE_GRAPHIC_H

#include <iostream>
#include <string>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

#include "Sprite.h"
/*���еĹ���ͼ�εĳ�������Ʒ����Ҫ���ɸ�ͷ�ļ�*/

using namespace std;

/*��Ϸ���ڿ��*/
extern const int width;

/*��Ϸ���ڸ߶�*/
extern const int height;

/*��Ϸ���ڣ������һ�ݣ���InitGame�ж���*/
extern SDL_Window * gameWindow;

/*��Ϸ��Ⱦ���������һ��*/
extern SDL_Renderer * gameRenderer;

/*����ͼƬ*/
//extern Sprite* LoadTexture(const char * filename);

/*�����Ѿ����غõ�ͼƬ
* ��ҪͼƬ���ļ�������ȣ��߶ȣ�����rect��������Ⱦ��
*/
extern void DrawTexture(const char* filename, int width, int height, SDL_Rect* rect, SDL_Renderer* renderer);

/*���ƾ���*/
extern void DrawSprite(Sprite * sprite);

#endif // !NOAGAMEENGINE_GRAPHIC_H



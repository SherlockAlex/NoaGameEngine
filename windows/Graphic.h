#pragma once
#ifndef NOAGAMEENGINE_GRAPHIC_H
#define NOAGAMEENGINE_GRAPHIC_H

#include <iostream>
#include <string>

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
/*���еĹ���ͼ�εĳ�������Ʒ����Ҫ���ɸ�ͷ�ļ�*/

#define MAXHEIGHT 10
#define MAXWIGHT 10

#define MINHEIGHT 0
#define MINWIGHT 0

using namespace std;

extern string pixe_white;
extern string pixe_black;
extern string pixe_player;

/*��Ϸ���ڿ��*/
extern const int width;

/*��Ϸ���ڸ߶�*/
extern const int height;

/*��Ϸ���ڣ������һ�ݣ���InitGame�ж���*/
extern SDL_Window * gameWindow;

/*��Ϸ��Ⱦ���������һ��*/
extern SDL_Renderer * gameRenderer;

/*����ͼƬ
* ��ҪͼƬ���ļ�������ȣ��߶ȣ�����rect��������Ⱦ��
*/
extern void DrawTexture(const char* filename, int width, int height, SDL_Rect* rect, SDL_Renderer* renderer);

/*���Ʒ���ͼ��*/
extern void Draw(int texture[MAXHEIGHT][MAXWIGHT], int wight, int height);//�����ǻ���ͼ���

#endif // !NOAGAMEENGINE_GRAPHIC_H



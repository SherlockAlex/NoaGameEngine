#pragma once
#ifndef NOAGAMEENGINE_GRAPHIC_H
#define NOAGAMEENGINE_GRAPHIC_H

#include <iostream>
#include <string>

#include "SDL2/SDL.h"
//描述和所有图形相关的内容

#define MAXHEIGHT 10
#define MAXWIGHT 10

#define MINHEIGHT 0
#define MINWIGHT 0

using namespace std;

extern string pixe_white;
extern string pixe_black;
extern string pixe_player;

extern void Draw(int texture[MAXHEIGHT][MAXWIGHT], int wight, int height);//函数是绘制图像的

#endif // !NOAGAMEENGINE_GRAPHIC_H



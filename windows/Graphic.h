#pragma once
#ifndef NOAGAMEENGINE_GRAPHIC_H
#define NOAGAMEENGINE_GRAPHIC_H

#include <iostream>
#include <string>

#define MAXHEIGHT 100
#define MAXHWIGHT 100

#define MINHEIGHT 0
#define MINHWIGHT 0



using namespace std;

extern string pixe_white;
extern string pixe_black;

extern void Draw(int texture[MAXHWIGHT][MAXHEIGHT],int wight,int height);//�����ǻ���ͼ���

#endif // !NOAGAMEENGINE_GRAPHIC_H



#pragma once
#ifndef NOAGAMEENGINE_GRAPHIC_H
#define NOAGAMEENGINE_GRAPHIC_H

#include <iostream>
#include <string>

#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"
/*所有的关于图形的场景，物品，都要是由该头文件*/

#define MAXHEIGHT 10
#define MAXWIGHT 10

#define MINHEIGHT 0
#define MINWIGHT 0

using namespace std;

extern string pixe_white;
extern string pixe_black;
extern string pixe_player;

/*游戏窗口宽度*/
extern const int width;

/*游戏窗口高度*/
extern const int height;

/*游戏窗口，软件独一份，在InitGame中定义*/
extern SDL_Window * gameWindow;

/*游戏渲染器，软件独一份*/
extern SDL_Renderer * gameRenderer;

/*绘制图片
* 需要图片的文件名，宽度，高度，还有rect，还有渲染器
*/
extern void DrawTexture(const char* filename, int width, int height, SDL_Rect* rect, SDL_Renderer* renderer);

/*绘制符号图形*/
extern void Draw(int texture[MAXHEIGHT][MAXWIGHT], int wight, int height);//函数是绘制图像的

#endif // !NOAGAMEENGINE_GRAPHIC_H



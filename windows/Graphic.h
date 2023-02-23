#pragma once
#ifndef NOAGAMEENGINE_GRAPHIC_H
#define NOAGAMEENGINE_GRAPHIC_H

/*这个作为图像处理的模块，游戏所有的图形操作都要在这个下面进行*/

#include <iostream>
#include "SDL2/SDL.h"
#include "SDL2/SDL_image.h"

#include "Sprite.h"
/*所有的关于图形的场景，物品，都要是由该头文件*/

using namespace std;

/*游戏窗口宽度*/
extern const int width;

/*游戏窗口高度*/
extern const int height;

/*游戏窗口，软件独一份，在InitGame中定义*/
extern SDL_Window * gameWindow;

/*游戏渲染器，软件独一份*/
extern SDL_Renderer * gameRenderer;

/*加载图片*/
//extern Sprite* LoadTexture(const char * filename);

/*绘制已经加载好的图片
* 需要图片的文件名，宽度，高度，还有rect，还有渲染器
*/
extern void DrawTexture(const char* filename, int width, int height, SDL_Rect* rect, SDL_Renderer* renderer);

/*绘制精灵*/
extern void DrawSprite(Sprite * sprite);

/*绘制场景
一个场景有许多的图片组成，将每一帧的图片先相加，然后在一起绘制
一个图像的数组，一个是数组的长度
*/
extern void DrawScene(Sprite * sprites[],int count);

#endif // !NOAGAMEENGINE_GRAPHIC_H



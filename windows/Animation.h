#ifndef NOAGAMEENGINE_ANIMATION_H
#define NOAGAMEENGINE_ANIMATION_H

#include "Sprite.h"
#include "Graphic.h"

/*
实现和动画相关的
通过不断的替换sprite里面的图片，来实现动画效果
*/
extern void Play(Sprite * image,Sprite * animation[],int frameCount);

#endif
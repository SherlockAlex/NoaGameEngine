#pragma once
#ifndef NOAGAMEENGINE_APPLICATION_H
#define NOAGAMEENGIEN_APPLICATION_H

//系统库
#include <windows.h>
#include <cstdio>

void FreshScreen();						//刷屏
void HideCursor();						//隐藏鼠标
void SetCursorPos(float x, float y);	//设置鼠标坐标
void SetColor(int color);				//设置颜色
void ResetConsole();					//重置
void Quit();							//退出程序
void DelaySecond();						//延时

#endif

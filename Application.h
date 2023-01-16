#pragma once
#ifndef NOAGAMEENGINE_APPLICATION_H
#define NOAGAMEENGIEN_APPLICATION_H

//系统库
#include <windows.h>

void FreshScreen();						//刷新屏幕
void HideCursor();						//隐藏鼠标
void SetCursorPos(float x, float y);	//设置光标位置
void SetColor(int color);				//设置文字颜色
void ResetConsole();					//控制台初始化
void Quit();							//关闭应用
void DelaySecond();						//延时几秒

#endif

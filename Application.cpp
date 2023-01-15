#include "Application.h"

void FreshScreen() {
	COORD pos = { 0,0 };							//光标从屏幕坐标（0，0）开始
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorPosition(hOut, pos);
}

void HideCursor()
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO CursorInfo;
	GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
	CursorInfo.bVisible = false; //隐藏控制台光标
	SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
}

void ResetConsole()
{
	//重置控制台
	HideCursor();
	FreshScreen();
}

void Quit()
{
	//关闭程序
	exit(0);
}


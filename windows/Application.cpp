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

void SetCursorPos(float x, float y)
{
	//通过浮点数设置光标位置
	COORD coord;
	coord.X = (int)x;
	coord.Y = (int)y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

	
}

//自定义的文字颜色函数
void SetColor(int color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
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

void DelaySecond()
{
}


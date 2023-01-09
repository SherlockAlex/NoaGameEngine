#include "Screen.h"

void GotoXY(int x,int y) {
	COORD pos = { x,y };
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleCursorPosition(handle,pos);
}

void HideCursor() {
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursorInfo;
	GetConsoleCursorInfo(handle,&cursorInfo);
	cursorInfo.bVisible = false;//��겻�ɼ�
	SetConsoleCursorInfo(handle, &cursorInfo);
}
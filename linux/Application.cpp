#include "Application.h"
#include <iostream>

void FreshScreen() {
	//
	system("clear");
	//printf("\33[0;0H");
}

void HideCursor()
{
	printf("\33[?25l");
}

void SetCursorPos(float x, float y)
{
	printf("\33[0;0H");
}

//×Ô¶šÒåµÄÎÄ×ÖÑÕÉ«º¯Êý
void SetColor(int color) {
	
}

void ResetConsole()
{
	//ÖØÖÃ¿ØÖÆÌš
	//HideCursor();
	FreshScreen();
}

void Quit()
{
	//¹Ø±Õ³ÌÐò
	//exit(0);
}

void DelaySecond()
{
}


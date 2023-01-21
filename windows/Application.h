#pragma once
#ifndef NOAGAMEENGINE_APPLICATION_H
#define NOAGAMEENGIEN_APPLICATION_H

//ÏµÍ³¿â
//#include <windows.h>
#include <cstdio>

void FreshScreen();						//Ë¢ÐÂÆÁÄ»
void HideCursor();						//Òþ²ØÊó±ê
void SetCursorPos(float x, float y);	//ÉèÖÃ¹â±êÎ»ÖÃ
void SetColor(int color);				//ÉèÖÃÎÄ×ÖÑÕÉ«
void ResetConsole();					//¿ØÖÆÌš³õÊŒ»¯
void Quit();							//¹Ø±ÕÓŠÓÃ
void DelaySecond();						//ÑÓÊ±ŒžÃë

#endif

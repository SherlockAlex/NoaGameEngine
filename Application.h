#pragma once
#ifndef NOAGAMEENGINE_APPLICATION_H
#define NOAGAMEENGIEN_APPLICATION_H

//ϵͳ��
#include <windows.h>

void FreshScreen();						//ˢ����Ļ
void HideCursor();						//�������
void SetCursorPos(float x, float y);	//���ù��λ��
void SetColor(int color);				//����������ɫ
void ResetConsole();					//����̨��ʼ��
void Quit();							//�ر�Ӧ��
void DelaySecond();						//��ʱ����

#endif

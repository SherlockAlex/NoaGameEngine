#include "GameMenu.h"

MainMenu::MainMenu() {
    //��ʼ��
    buttonIndex = 0;
}

MainMenu::~MainMenu() {

}

void MainMenu::GameMain()
{
    //��Ҫ�ķ�����
    
    Display();
    Input();
}

void MainMenu::Display() {
    
    switch (buttonIndex) {
        //��Ϸ�˵��������
        case 0:
            //system("cls");
            cout << "--> " << "[��ʼ��Ϸ]" << endl;
            cout << "    " << "[�˳���Ϸ]" << endl;
            break;
        case 1:
            //system("cls");
            cout << "    " << "[��ʼ��Ϸ]" << endl;
            cout << "--> " << "[�˳���Ϸ]" << endl;
            break;
    }
}

void MainMenu::Input() {
    //����ǻ�ȡ�����Ƿ���
    //�������һ��w/s������Ӧ�ļ�ͷ���ƶ�
    if (GetKeyDown('w'))
    {
        buttonIndex++;
        if (buttonIndex >1) {
            buttonIndex = 0;
        }
    }
    if (GetKeyDown('s'))
    {
        buttonIndex--;
        if (buttonIndex < 0) {
            buttonIndex = 1;
        }
    }
    if (GetKeyDown(' ')) {
        //������µ��˿ո񣬱�ʾ���뵱ǰ������Ȼ��ж�����������������һ������
    }
}

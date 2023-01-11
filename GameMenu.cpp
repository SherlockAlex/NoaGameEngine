#include "GameMenu.h"

//�����ʵ�ּ򵥲˵�������

MainMenu::MainMenu() {
    //��ʼ��
    buttonIndex = 0;
    //sceneManager = scene;
    nextScene = nullptr;                //�����һ������
    //sceneManager->currentGame = this;
    
}

MainMenu::~MainMenu() {
    //��ж�ص�ǰ������ʱ�򣬰���һ����������Դ����������
    //sceneManager->currentGame = nextScene;
}

void MainMenu::GameMain() {
        //��Ҫ�ķ�����
        Display();
        Input();
}

void MainMenu::Display() {
    
    switch (buttonIndex) {
            //��Ϸ�˵��������
        case 0:
            //system("cls");
            cout << "Name of New Game" << endl;
            cout << "--> " << "[��ʼ��Ϸ]" << endl;
            cout << "    " << "[�˳���Ϸ]" << endl;
            break;
        case 1:
            //system("cls");
            cout << "Name of New Game" << endl;
            cout << "    " << "[��ʼ��Ϸ]" << endl;
            cout << "--> " << "[�˳���Ϸ]" << endl;
            break;
    }
}

void MainMenu::Input() {
    //����ǻ�ȡ�����Ƿ���
    //�������һ��w/s������Ӧ�ļ�ͷ���ƶ�
    switch (GetKeyCode()) {
        //����ѡ��
        case W:
            buttonIndex++;
            if (buttonIndex >1) {
                buttonIndex = 0;
            }
            break;
        case S:
            buttonIndex--;
            if (buttonIndex < 0) {
                buttonIndex = 1;
            }
            break;
        case Space:
            //ʵ�ֵ�ǰ���ܣ�ִ��һ��������Enter()
            cout << "Enter:" << buttonIndex << endl;
            Enter(buttonIndex);                     //0�Ǽ�����һ����1���˳���Ϸ
            break;
    }

}

void MainMenu::Enter(int index) {
    switch (index)
    {
    case 0:
        cout << "������һ������" << endl;
        if (nextScene!=nullptr)          //�����һ��������Ϊ�գ��ͼ�����һ��������Ȼ��ж���������
        {
             system("cls");
             //nextScene->GameMain();    //����һ����������scene��currentScene
             delete(this);
        }
        break;
    case 1:
        exit(100);                       //��ֹ����ִ��
        break;
    }
}
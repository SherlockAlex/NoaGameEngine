#ifndef _NOAGAMEENGINE_GAME_H
#define _NOAGAMEENGINE_GAME_H

//游戏类，所有的场景都是基于这个类

class Game {
    public://公共方法
        virtual void GameMain()=0;//菜单的显示,含虚方法的类是抽象类
};

void GameMain(){

}



#endif // !_NOAGAMEENGINE_GAME_H

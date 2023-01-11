#ifndef _NOAGAMEENGINE_GAME_H
#define _NOAGAMEENGINE_GAME_H

//游戏类，所有的场景都是基于这个类

//每个画面中的脚本都要继承这个类？

class Game {
    public://公共方法
        virtual void GameMain()=0;//菜单的显示,含虚方法的类是抽象类
};

#endif // !_NOAGAMEENGINE_GAME_H

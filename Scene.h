//布景类，每个场景都是他的子类
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

class Scene {
	//有一个对象链表

public:
	void GameMain();//场景执行入口函数
	void Start();
	void Update();


};

#endif // !NOAGAMEENGINE_SCENE_H




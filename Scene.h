//�����࣬ÿ������������������
#ifndef NOAGAMEENGINE_SCENE_H
#define NOAGAMEENGINE_SCENE_H

class Scene {
	//��һ����������

public:
	void GameMain();			//����ִ����ں���

	virtual void Start()=0;		//��������ʵ��
	virtual void Update()=0;	//��������ʵ��


};

#endif							// !NOAGAMEENGINE_SCENE_H




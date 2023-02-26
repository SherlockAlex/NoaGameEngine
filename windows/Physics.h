#ifndef NOAGAMEENGINE_PHYSICS_H
#define NOAGAMEENGINE_PHYSICS_H
/*这个是关于物理的模块，包块一些类的定义*/


extern float grivaty;


//两个参数，x表示要修改的值的地址，on表示启动重力下落的条件
extern void ApplyGrivaty(float * x,bool on);	//重力运算

#endif // !NOAGAMEENGINE_PHYSICS_H

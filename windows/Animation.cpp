#include "SDL2/SDL.h"
#include "Animation.h"
/*动画的本质就是不断的更新显示的图片*/

int i=0;

void Play(Sprite * image,Sprite * animation[],int frameCount)
{
    /*播放动画
    本质是一个sprite里面的图片在不断替换的过程
    */
    if(SDL_GetTicks()%5==0){
        image->texture=animation[SDL_GetTicks()%5]->texture;
    }
    //image->texture=animation[frameCount];
    

}
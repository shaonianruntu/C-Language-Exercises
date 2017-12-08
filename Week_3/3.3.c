/*
 * 输入某个点A的平面坐标（x,y)，判断（输出） A点是在圆内、圆外还是在圆周上，其中
 * 圆心坐标为(2,2)，半径为1 。
 */

#include<stdio.h>
int main(void)
{
    int x,y,c;
    printf("请输入A点平面坐标（x,y）:（注意用默认的中文的括号）");
    scanf("（%d,%d）",&x,&y);
    c=(x-2)*(x-2)+(y-2)*(y-2);//得出A点与圆心的距离
    if(c<1)
    {
        printf("A点在圆内");
    }
    if(c==1)
    {
        printf("A点在圆上");
    }
    if(c>1)
    {
        printf("A点在圆外");
    }
    return 0;
}
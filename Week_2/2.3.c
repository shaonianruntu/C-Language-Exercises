/*
 * 已有变量定义和函数调用语句： int a=1,b=-5,c; c=fun(a,b);fun 函数的作用是计
 * 算两个数之差的绝对值，并将差值返回调用函数，请编写程序。
 */

#include<stdio.h>
int fun(int x,int y);
int main()
{
    int a=1,b=-5,c;
    c=fun(a,b);
    printf("%d和%d之差为%d",a,b,c);
    return 0;
}

int fun(int x,int y)
{
    int temp,abs;
    if(y>x)//将大的数记为x，小数记为y，便于后续做差
    {
        temp=x;
        x=y;
        y=temp;
    }
    abs=x-y;
    return abs;
}
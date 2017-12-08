/*
 * 用条件编译的方式，实现用同一个函数指针对求最大值和最小值函数的调用。
 * 如#define max，则调用最大值函数， #define min，则调用求最小值函数。
 */

#include <stdio.h>
#define max//如果要输出最大值就保留这一行，要最小值就删去

int imax(int a,int b)
    {return a>b?a:b;}
int imin(int a,int b)
    {return a<b?a:b;}

int main(void)
{
    int a,b;
    printf("请输入两个数字：");
    scanf("%d%d",&a,&b);
    int (*p)(int ,int );//指针函数
    #ifdef max//如果max有定义则将指针P指向计算最大值的函数
        p=imax;
    #else
        p=imin;//否则p指向计算最小值的函数
    #endif
    printf("%d",p(a,b));
    return 0;
}

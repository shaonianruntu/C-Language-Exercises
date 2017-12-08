/*
 * 输入整数a和b，如果a 能被b整除，就输出算式和商，否则输出算式、整数商和余数。
 * 如5/2，输出5/2=2…1
 */

#include<stdio.h>
int main(void)
{
    int a,b;
    printf("请由大到小输入两个整数：");
    scanf("%d %d",&a,&b);
    if(a%b==0)
    {
        printf("%d/%d=%d",a,b,a/b);
    }
    else
    {
        printf("%d/%d=%d……%d",a,b,a/b,a%b);
    }
    return 0;
}

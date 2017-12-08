/*
 * 计算自然数1到n的平方和。
 */

#include<stdio.h>
int main(void)
{
    int n,i,sum=0;
    printf("请输入要计算的1到n的平方和中的n：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       sum=sum+i*i;
    }
    printf("从1到%d的平方和为%d",n,sum);
    return 0;
}

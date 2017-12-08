/*
 * 编写一个函数，输入 n 为偶数时，调用函数求 1/2+1/4+...+1/n,当
 * 输入 n 为奇数时，调用函数 1/1+1/3+...+1/n(利用指针函数)
 */

#include <stdio.h>
int main(void)
{
    int n,i,j=1;
    float sum=0;
    int a[10000],*b[10000];
    printf("请输入一个数：");
    scanf("%d",&n);
    /*用a数组记录1到n的数值*/
    for(i=0;i<=n;i++)
    {
       a[i]=i;
    }
    /*判断输入为奇数还是偶数*/
    if (n<1)
    {
         printf("输入整数不在范围。");
    }
        else if(n%2==1)
        {
             for(i=1;i<=n;i++)
             {
                 if(i%2==1)
                 {
                     /*让b数值由1开始依次指向a数组中的奇数项的位置*/
                     b[j]=a+i;
                     j++;
                 }
             }
        }
            else if(n%2==0)
            {
                 for(i=2;i<=n;i++)
                 {
                     /*让b数值由1开始依次指向a数组中的偶数项的位置*/
                     if(i%2==0)
                     {
                         b[j]=a+i;
                         j++;
                     }
                 }
            }
    /*按要求计算这些分数的和*/
    for(i=1;i<j;i++)
    {
        sum+=1.0/(*b[i]);
    }
    printf("%f",sum);
    return 0;
}
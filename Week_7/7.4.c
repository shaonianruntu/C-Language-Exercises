/*
 * 编写一个函数，实现对一个整数的低 8 位翻转。
 */

#include<stdio.h>
int main(void)
{
    char a[100];
    int i,j,n,temp;
    do
    {
        printf("请输入一个大于或等于8位整数：");
        scanf("%s",a);
        /*得出这个整数的长度*/
        for(i=0;a[i]!='\0';i++)
            n=i;
    }while(n<7);//do while语句容错处理

    /*对这个整数的后八位进行翻转操作*/
    for(j=i-8;j<=n;j++,n--)
    {
        temp=a[j];
        a[j]=a[n];
        a[n]=temp;
    }
    /*输出*/
    printf("后8位翻转后的新数为：");
    puts(a);
    return 0;
}

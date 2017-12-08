/*
 * 定义一个数组，通过指针方式输出这个数组的所有元素。
 */

#include "stdio.h"
int i,*p;
void main()
{
    char a[100];
    int b[100]={0};//初始化b数组为0
    int i,j;
    printf("请输入一个数组：");
    gets(a);
    for(i=0,j=0;a[i]!='\0';i++)//将char转化为int
    {
        if(a[i]!=' ')
        {
            b[j]=b[j]*10+a[i]-'0';
        }
        else j++;
    }
    for(p=b;p<b+j+1;p++)//将指针指向b数组的第一个值
        printf("%d ",*p);
    return 0;
}

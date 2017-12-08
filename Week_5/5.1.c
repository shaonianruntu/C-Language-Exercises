/*
 * 编写一个程序计算一个字符串的长度。
 */

#include "stdio.h"
int main(void)
{
    int n=0;//n作为一个数组位置的计步器
    char a[100],*p=a;

    printf("请输入一个字符串：");
    gets(a);

    /*随着所指字符串的指针的位置的挪动，计步器n随之一起移动*/
    while(*(p++)!='\0')
    {
        n++;
    }
    
    printf("这个字符串的长度为%d。\n",n);
    return 0;
}

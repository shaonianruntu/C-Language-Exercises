/*
 * 编写函数atoi，实现将一个整数字符串转换成整数，转换后的整数能进行数
 * 学运算。在主函数中通过字符串方式输入2个数，然后把它们的和输出。
 */

#include <stdio.h>
void atoi(char *a ,int *b)
{
    int i,j=0;
    for (i=0; *(a+i)!='\0'; i++)
    {
        if (*(a+i)!=' ')
            *(b+j)=*(b+j)*10+*(a+i)-'0';//基于ASCII码的转化
        else j++;
    }
}

int main(void)
{
    char a[100];
    int b[2]={0};
    printf("Input two numbers:");
    gets(a);//将这两个数字储存在字符型数组中
    atoi(a,b);
    printf("%d",b[0]+b[1]);
    return 0;
}

/*
 * 用宏实现输出实数的格式设计，包括：
 * （1）一行输出一个实数；
 * （2）一行内输出两个实数；
 * （3）一行内输出三个实数。
 * 实数用“ 6.2f”格式输出。
 */

#include<stdio.h>
#define N 1
int main(void)
{
    char s[100];
    int i,j,m;
    double a[100]={0};
    printf("请输入：");
    gets(s);

    /*把char转化为int函数*/
    for(i=0,j=0,m=0;s[i]!='\0';i++)
    {
        if (s[i]>='0'&&s[i]<='9')
        {
            a[j]=a[j]*10+s[i]-'0';
        }
        else
        {
            j++;
        }
    }

    /*输出*/
    for (i=0; i<=j; i++)
    {
        printf("%6.2lf",a[i]);
        if((i+1)%N==0)//输入N个数后换行
            printf("\n");

    }
    return 0;
}

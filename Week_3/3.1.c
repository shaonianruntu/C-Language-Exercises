/*
 * 输入两个整型变量a,b的值，输出a+b,a-b,a*b,a/b,(float)a/b,a%b的结果，要求连同算式一
 * 起输出，每个算式占一行。
 * 例： a等于10， b等于5,a+b的结果输出
 * 10+5=15
 */

#include<stdio.h>
int main(void)
{
    int a,b;
    printf("请由大到小输入两个整数：");
    scanf("%d %d",&a,&b);
    printf("a+b=%d\n",a+b);
    printf("a-b=%d\n",a-b);
    printf("a*b=%d\n",a*b);
    printf("a/b=%d\n",a/b);
    printf("(float)a/b=%f\n",(float)a/b);
    printf("a%%b=%d\n",a%b);
    return 0;
}

/*
 * 输入 m 和 n（ m≥ n≥ 0）后，计算下列表达式的值并输出。
 * {m!}/{n!*(m-n)!}
 * 要求将计算阶乘的运算写成函数fact(n)，函数返回值的类型为float。
 */

#include<stdio.h>
float fact(float m,float n);
float factorial(float a);
int main(void)
{
    float m,n,answer;
    printf("请按照由大到小的顺序输入两个正数：");
    scanf("%f %f",&m,&n);
    answer=fact(m,n);//将运算结果存储在answer中
    printf("%f",answer);
    return 0;
}

float fact(float m,float n)
{
    float im,in,iq,q,t;
    q=m-n;
    im=factorial(m);//得到m的阶乘值
    in=factorial(n);//得到n的阶乘值
    iq=factorial(q);//得到(m-n)的阶乘值
    t=(im)/(in*iq);
    return t;
}

float factorial(float a)//完成阶乘任务
{
    float x=1,i;
    for(i=1;i<=a;i++)
    {
      x=x*i;
    }
    return x;
}

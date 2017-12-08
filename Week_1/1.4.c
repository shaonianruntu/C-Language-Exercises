/*
 * 编写程序，求一个数列中的最大值或最小值，要求由用户输入。
 */

#include <stdio.h>
double Max(double int_a[]);
double Min(double int_b[]);
int main(void)
{
    double array_i[10];
    int i;
    puts("请输入一个含有10个数值的数组：");
    for (i=0; i<10; i++)
    {
        scanf("%lf",&array_i[i]);
    }
    printf("最大值是%lf,最小值是%lf",Max(array_i),Min(array_i));
    return 0;
}

double Max(double int_a[])
{
    int j;
    double max=int_a[0];
    for (j=0; j<10; j++)
    {
        if (int_a[j]>max)
        {
            max=int_a[j];//通过将数组内的各个数与先前的最大值比较得出整个数组的最大值
        }
    }
    return max;
}


double Min(double int_b[])
{
    int j;
    double min=int_b[0];
    for (j=0; j<10; j++)
    {
        if (int_b[j]<min)
        {
            min=int_b[j];//通过将数组内的各个数与先前的最小值比较得出整个数组的最小值
        }
    }
    return min;
}
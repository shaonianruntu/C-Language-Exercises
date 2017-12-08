/*
 * 编写一个程序，实现矩阵的转置，要求打印出原来的矩阵和转置后的矩阵。
 */

#define N 4
#include <stdio.h>
int main(void)
{
    double a[N][N],t;
    int i,j;
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            scanf("%lf”,&a[i][j]);//获取二维数组
        }
    }
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            if (j<i)
            {
                t=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=t;//将数组的行与列的位置对换
            }
        }
    }
    printf("置换后的新矩阵：\n");
    for (i=0; i<N; i++)
    {
        for (j=0; j<N; j++)
        {
            printf("%4.0f”,a[i][j]);//打印新的二维数组
        }
        printf("\n");
    }
    return 0;
}
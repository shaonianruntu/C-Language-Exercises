/*
 * 使用for循环输出如下图形：
 *          *
 *         * *
 *        * * *
 *       * * * *
 *        * * *
 *         * *
 *          *
 */

#include<stdio.h>
int main()
{
    int n,i,j;
    n=15;//n随意设的，留点大的空挡
    printf("\n");
    for(j=1;j<=4;j++)//上方的正三角形输出
    {
        for(i=1;i<n-j;i++)//打印空格
            printf(" ");
        for(i=1;i<=j;i++)//打印星号
            printf("* ");
        printf("\n");
    }
    for(j=3;j>=1;j--)//下发的倒三角形输出
    {
        for(i=1;i<n-j;i++)//打印空格
            printf(" ");
        for(i=1;i<=j;i++)//打印星号
            printf("* ");
        printf("\n");
    }
    printf("\n");
    return 0;
}

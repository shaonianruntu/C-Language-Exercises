/*
 * 用位运算把一个 32 位数的 4 到 8 位设置为 10101。
 */

#include<stdio.h>
int main(void)
{
    long long x,y;
    printf("请输入一个数：");
    scanf("%ld",&x);
    y=x&8589934343;//将第四到第八位的二进制数设为0，其他保持原样
    y=y|168;//将第四到第八位的二进制数设为10101，其他保持原样
    printf("新的数为：%ld",y);
    return 0;
}

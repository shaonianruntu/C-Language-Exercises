/*
 * 定义一个带参数的宏，使两个参数的值互换。在主函数中输入两个数作为使用
 * 宏的实参，输出已交换后的两个值。说明：在程序主函数使用宏时只能用两个实
 * 参，如 SWAP(a,b)，不能用三个实参。
 */

#include <stdio.h>
#define SWAP(a,b)t=a;a=b;b=t//设置宏，使a与b通过t这个桥梁进行交换
int main(void)
{
    double a,b,t;//设置a,b,t三个变量
    printf("请输入两个数:\n");
    scanf("%lf %lf",&a,&b);
    SWAP(a,b);//运行宏运算交换a与b
    printf("交换后的 a=%lf , b=%lf\n",a,b);
    return 0;
}

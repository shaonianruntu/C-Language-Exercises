/*
 * 编写一个程序，用 12 个月份的英文名称初始化一个字符指针数组，
 * 当键盘输入整数为 1 到 12 时，显示相应的月份名，键入其它整数
 * 时显示错误信息。
 */

#include <stdio.h>
int main(void)
{
    int n;
    char *a[]={"January","February","March","April","May","June","July","August","September","October","November","December"};/*设一个指针数组，其中每一个元素都相当于一个指针变量，指向字符串的首字母。*/
    printf("请输入月份(1~12）：");
    scanf("%d",&n);

    if(n<1||n>12)
    {
        printf("输入错误。");
    }
    else
    {
        printf("该月份对应的月份名为：%s",*(a+n-1));//输出a[n-1]
    }
    return 0;
}
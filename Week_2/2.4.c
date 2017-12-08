/*
 * 写一函数，使输入的一个字符串按反序存放，在主函数中输入和输出字符串。
 */

#include<stdio.h>
#include<string.h>
int main(void)
{
    char array_a[100];
    char temp;
    int n,i;
    printf("请输入一个字符串：");
    gets(array_a);
    n=strlen(array_a);
    for(i=0;i<(n-1)/2;i++)//通过通过一个中间值（临时变量）作为桥梁，交换前后两值
    {
        temp=array_a[n-1-i];
        array_a[n-1-i]=array_a[i];
        array_a[i]=temp;
    }
    printf("%s",array_a);
    return 0;
}

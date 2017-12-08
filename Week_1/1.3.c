/*
 * 将一个数组的值按逆序重新存放，例如，原来顺序为： 8， 6， 5， 4， 1。要求
 * 改为： 1， 4， 5， 6， 8。 (将数组的第一个元素和最后一个元素值交换，第二
 * 和倒数第二个，以此类推) 
 */

#include <stdio.h>
#include <string.h>
char a[100];
int main(void)
{
    char m;
    int n,i,j;
    puts("请输入一个数组：");
    gets(a);
    n=strlen(a);
    for (i=0,j=n; i<j; i++,j—)//将数组的首位调换位置
    {
        m=a[i];
        a[i]=a[j];
        a[j]=m;
    }
    for (i=0; i<=n; i++)
    {
        printf("%c",a[i]);
    }
    return 0;
}

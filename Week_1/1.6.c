/*
 * 请编写程序实现以下功能：在字符串中所有数字字符前加一个$字符。例如，
 * 输入：A1B23CD45，则输出为：A$1B$2$3CD$4$5，不能在打印语句中直接加$。
 */

#include <stdio.h>
int main(void)
{
    int i,j;
    char a[100],b[100];
    scanf("%s",a);
    for (i=0,j=0;j<100&&a[i]!=‘\0’ ; i++,j++)//得到数组的最末项
    {
        if (a[i]>='0'&&a[i]<=‘9’)//识别出数字
        {
            b[j]=‘$’;//在数字前加上符号，并储存在新的数列b[]中
            j++;
        }
        b[j]=a[i];
    }
    b[j]=‘\0’;//结束b[]
    puts(b);//输出新数组b
    return 0;
}
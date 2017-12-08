/*
 * 从键盘输入若干个字符串（数目不超过10个）， 以输入STOP作为结束。然后
 * 输出输入字符串中长度最长的字符串。
 */

#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100][100];
    int i=0,j,max=0,length,temp;
    printf("Input the string,end by string 'STOP':\n");
    do
    {
        scanf("%s",a[i]);
        i++;
    }while(strcmp(a[i-1],"STOP")!=0);//先获取这个字符串，如果它为STOP就推出这个循环
    if(1==i)//1==i说明没有输入任何字符串，直接结束啦
    {
        printf("Error,please input string!\n");
        return 0;
    }
    for (j=0; j<i; j++)
    {
        length=strlen(a[j]);//获取当前字符串的长度
        if (length>max)
        {
            max=length;
            temp=j;
        }//将该字符串与之前最长的那个字符串比较的纪录新的最长字符串的长度和编号
    }
    printf("The longest string is:");
    printf("%s\n",a[temp]);
    return 0;
}

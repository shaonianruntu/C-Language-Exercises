/*
 * 编写 2 个函数，一个实现字符串加密，一个实现字符串解密，加密的方法为
 * 字符的 ASCII 码加 5，如果超过 Z，则返回到 A 继续，即 W+5 为 B。解密则
 * 反过来运算。输入一个字符串输出加密和解密后的结果。
 */

#include<stdio.h>
#include<string.h>
char a[100];
int main(void)
{
    int n,i;
    printf("请输入一串大写的英文字母");
    gets(a);//先得到一串字符串，并储存在数组a中
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+5;//对每一个字符的ASCII码进行加5处理来加密
        if(a[i]>'Z')
        {
            a[i]=a[i]-26;//如果大于Z就回到A循环
        }
    }
    printf("加密后的字符串为：%s\n",a);
    for(i=0;i<n;i++)
    {
        a[i]=a[i]-5;//对每一个字符的ASCII码进行减5处理来解密
        if(a[i]<'A')
        {
            a[i]=a[i]+26;//如果小于A就回到Z循环
        }
    }
    printf("解密后的字符串为：%s\n",a);
    return 0;
}

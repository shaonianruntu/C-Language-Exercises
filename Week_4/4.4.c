/*
 * 通过指针在一个长度不超过 80 的整型数组中查找最大值和最小值，输出最大
 * 和最小值及位置信息。
 */

#include <stdio.h>
int main(void)
{
    int *n,*end,*max,*min;//n指针用于寄存当前的位置，end用于寄存数值函数的末位位置，max,min分别用于寄存最大和最小值得位置
    char b[80];
    int a[80]={0};//对数值数组a进行初始化，防止对数组进行转换时出现问题
    int i,j;
    printf("请输入一段长度不超过80的整形数组：\n");
    gets(b);

    /*将数组由char转化为int*/
    for(i=0,j=0;b[i]!='\0';i++)
    {
        if(b[i]!=' ')
        {
            a[j]=a[j]*10+b[i]-'0';
        }
        else j++;
    }

    end=a+j;//得到数组a的末位位置
    max=a;//初始化max和min的位置
    min=a;

    /*通过逐个比较得出最大和最小值得位置*/
    for(n=a;n<=end;n++)
    {
        if (*n>*max)
            max=n;
        if (*n<*min)
            min=n;
    }

    printf("最大值为%d，位于数组中的第%d个。\n最小值为%d，位于数组中的第%d个。",*max,max-a+1,*min,min-a+1);
    return 0;
}

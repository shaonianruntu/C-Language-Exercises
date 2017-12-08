/*
 * 已有一个已排好的数组今输入一个数要求按原来排序的规律将它插入数组中。
 */

#include <stdio.h>
int array_a[6];
int array_b[7];
int main(void)
{
    int i,j,m,n=0;
    puts("请输入一个含有5个数字的数组，并按由小到大的顺序输入：");//得到一个有序数组
    for(i=0;i<5;i++)
        scanf("%d",&array_a[i]);
    puts("请再输入一个任意的数字");//得到一个后期任意输入的数字m
    scanf("%d",&m);
    for (i=0,j=0; i<5; i++,j++)
    {
        if (m<array_a[i]&& n<1)//将m与数组中的每个字进行比较，将这个数插入到切合原规律的空位中
        {
            array_b[j]=m;
            array_b[j+1]=array_a[i];
            j++;
            n=1;
        }
        else
            array_b[j]=array_a[i];
    }
    if(array_a[4]!=array_b[5])//为了防止上面遗漏的将m放在最后的现象
    {
        array_b[5]=m;
    }
    for (i=0; i<6; i++)
    {
        printf("%d\t",array_b[i]);
    }
    return 0;
}
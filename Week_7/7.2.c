/*
 * 输入 15 个数存放在一个数组中。输入一个数，用二分（折半）查找法判断
 * 该数是否在数组中，若是则输出是数组中的第几个元素。
 */

#include<stdio.h>
void main()
{
    int a[15],x,i,start,end;//a数组寄存这15个数字，x记录要查找的那个数，i作为计步器，start和end作为查找区间的首尾界限
    /*获取这15个数*/
    printf("请按升序或者降序输入15个数字:\n");
    for(i=0;i<15;i++)
    {
        scanf("%d",&a[i]);
    }
    /*获取要查找的数*/
    printf("请输入你要查找的那个数:");
    scanf("%d",&x);
    /*二分法查找*/
    for(start=0,end=14;start<=end;)
    {
        i=(start+end)/2;
        if (x==a[i])
        {
        printf("\n这个数是第%d个数。\n",i+1);
        return;
        }
        else
        {
            if(a[0]<a[14])//判断数组中的数是降序还是升序
            {
                /*与中间值比较大小来更改区间*/
                if(x>a[i])
                    start=i+1;
                    else end=i-1;
            }
            else
            {
                if(x<a[i])
                    start=i+1;
                    else end=i-1;
            }
        }
    }
    /*找不到时输出*/
    printf("没有找到你要找的数！");
    return 0;
}


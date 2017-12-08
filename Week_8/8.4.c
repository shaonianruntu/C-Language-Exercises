/*
 * 编写一个函数，实现对10个整数的升序排列。
 */

#include <stdio.h>
#include <string.h>
int main(void)
{
    char a[100][100];
#include <stdio.h>
int main(void)
{
    int arr[10];
    int i,j,temp;
    printf("Please input a string(including 10 integers):\n");
    for (i=0; i<10; i++)
        scanf("%d",&arr[i]);
    /*冒泡排序法*/
    for (i=0; i<=9; i++)
    {
        for (j=0; j<10-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("原数组按升序排列为：\n");
    for (i=0; i<10; i++)
        printf("%d\t",arr[i]);
    return 0;
}


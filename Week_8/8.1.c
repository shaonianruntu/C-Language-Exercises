/*
 * 用指针数组方式定义3个字符串,然后遍历每个字符串,把里面的小写字母改
 * 大写,大些字母改小写。
 */

#include <stdio.h>
int main(void)
{
    char *arr[3];//建立一个二维的指针数组，含有有3个一维数组
    char array[3][100];
    int i,j;

    for(i=1;i<=3;i++)
    {
        printf(" 请输入第%d个字符串：",i);
        gets(array[i-1]);
        arr[i-1]=array[i-1];//将指针数组指向该行的字符串
    }

    printf("\n修改后的字符串为：\n");
    for (i=0; i<3; i++)
    {
        printf("第%d个字符串：",i+1);
        for (j=0; *(arr[i]+j)!='\0'; j++)//遍历数组，*(arr[i]+j)==array[i][j]
        {
            if(*(arr[i]+j)>='a'&&*(arr[i]+j)<='z')
                *(arr[i]+j)=*(arr[i]+j)-'a'+'A';//大小写替换
            printf("%c",*(arr[i]+j));
        }
        printf("\n");
    }

    return 0;
}

/*
 * 使用结构体数据类型试编一个同学间的通讯录程序，结构体变量的成员有学号（ number）、
 * 姓名（ name）、 电话（ telphone）、 地址（ address）， 输入部分数据，再打印出来。
 */

#include <stdio.h>
/*建立一个通讯录结构体*/
struct tongxunlu
{
    int number;
    char name[20];
    char telephone[15];
    char address[200];
}classmate[100];

int main(void)
{
    int n=1,i=0;//n用于判断是否新增同学和最为计数，i用于记录通讯录的人数
    /*do while语句来让用户自定义添加同学*/
    do
    {
        /*要求用户输入要添加的这个同学的个人信息*/
        printf("请输入你所要添加的第%d个同学的学号：",i+1);
        scanf("%d",&classmate[i].number);
        printf("请输入这个同学的姓名：");
        scanf("%s",&classmate[i].name);
        printf("请输入这个同学的电话：");
        scanf("%s",&classmate[i].telephone);
        printf("请输入这个同学的家庭地址：");
        scanf("%s",&classmate[i].address);

        /*询问用户是否还要添加同学到通讯录*/
        printf("\n是否需要再增加同学到通讯录(是就输入1，否就输入0)？");
        scanf("%d",&n);
        i++;
        printf("\n");
    }while(n==1);

    /*分割输入与输出*/
    printf("\n");
    for(n=0;n<80;n++)
        printf("*");
    printf("\n");

    /*输出这些同学的个人信息*/
    printf("学号  姓名       电话           家庭地址\n");
    for(n=0;n<i;n++)
    {
        printf("%02d    %-8s   %-15s%s\n",classmate[n].number,classmate[n].name,classmate[n].telephone,classmate[n].address);
    }

    /*分割输出*/
    printf("\n");
    for(n=0;n<80;n++)
        printf("*");
    printf("\n");

    return 0;
}
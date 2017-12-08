/*
 * 定义一个结构体并输入 5 个学生信息。然后写一个函数，实现对输入的学生信
 * 息进行查找，找到平均分最高的学生，返回该学生的学号。然后在主函数中根据返回的学号
 * 把该学生的信息输出。
 */

#include<stdio.h>
struct student
{
    char name[20];
    char number[20];
}stu[1000];

int main(void)
{
    int i=-1,n=-1,j;
    char a[20];

    printf("提示输入语句如下：\n新建联系人：New\n查询上一个：Pre\n查询下一个：Next\n查询指定联系人：Query\n\n");

    printf("请按照提示语句输入你要执行的指令：");
    scanf("%s",&a);

    while(strcmp(a,"No")!=0)
    {
    if(strcmp(a,"New")==0)
    {
        i++;
        n=i;
        printf("输入联系人姓名：");
        scanf("%s",stu[i].name);
        printf("输入联系人号码：");
        scanf("%s",stu[i].number);
    }

    if(strcmp(a,"Pre")==0)
    {
        if(n==-1)
            printf("没有联系人记录");
        else
        {
            if(n==0)
                n=i;
            else n=n-1;
            printf("%-8s%s\n",stu[n].name,stu[n].number);
        }
    }


    if(strcmp(a,"Next")==0)
    {
        if(n==-1)
            printf("没有联系人记录");
        else
        {
            if(n==i)
                n=0;
            else n=n+1;
            printf("%-8s%s\n",stu[n].name,stu[n].number);
        }
    }

    if(strcmp(a,"Query")==0)
    {
        printf("输入查询的联系人姓名：");
        scanf("%s",&a);
        for(n=0;n<=i;n++)
        {
            if((strcmp(a),stu[n].name)==0)
            {
                printf("%s的电话号码是：%s\n",stu[n].name,stu[n].number);
                break;
            }
            if(n>i)
            {
                printf("没有此联系人，是否新建,请输入Yes或no:");
                scanf("%s",&a);
                if(strcmp(a,"No")==0)
                    return;
                else continue;
            }
        }
    }

    for(j=0;j<80;j++)
        printf("*");
    printf("\n请按照提示语句输入你要执行的下一步指令：");
    scanf("%s",&a);
    }
    return 0;
}
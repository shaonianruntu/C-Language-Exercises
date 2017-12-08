/*
 * 定义一个结构体数组，包括学生学号、姓名、年龄和 3 门课的成绩。然后输入 5 个学生
 * 信息，把平均分高于 5 个学生平均分的学生信息输出。
 */

#include<stdio.h>
/*学生信息结构体*/
struct student
{
    int number;
    char name[20];
    int age;
    float yuwen,shuxue,yingyu;
    float sum;
}stu[5];

int main(void)
{
    int i;
    float sum=0,average;
    /*要求用户输入这五个同学的信息*/
    for(i=0;i<5;i++)
    {
        printf("请输入第%d个同学的学号：",i+1);
        scanf("%d",&stu[i].number);
        printf("请输入他的姓名：");
        scanf("%s",stu[i].name);
        printf("请输入他的年龄：");
        scanf("%d",&stu[i].age);
        printf("请输入他的语文成绩：");
        scanf("%f",&stu[i].yuwen);
        printf("请输入他的数学成绩：");
        scanf("%f",&stu[i].shuxue);
        printf("请输入他的英语成绩：");
        scanf("%f",&stu[i].yingyu);
        printf("\n");
        /*计算三门成绩的总和*/
        stu[i].sum=stu[i].yuwen+stu[i].shuxue+stu[i].yingyu;
    }
    /*计算这几个人总成绩的平均分*/
    for(i=0;i<5;i++)
    {
        sum+=stu[i].sum;
    }
    average=sum/5;
    /*绘制输入与输出的分隔符*/
    for(i=0;i<80;i++)
    {
        printf("*");
    }
    printf("\n本次考试总成绩在平均分以上的同学为：\n\n");
    /*输出符合要求的同学的信息*/
    printf("学号  姓名      年龄  语文成绩  数学成绩  英语成绩\n");
    for(i=0;i<5;i++)
    {
        if(stu[i].sum>average)
        {
            printf("%02d    %-10s%-6d%-10.1f%-10.1f%-10.1f\n",stu[i].number,stu[i].name,stu[i].age,stu[i].yuwen,stu[i].shuxue,stu[i].yingyu);
        }
    }
    /*分割输出*/
    for(i=0;i<80;i++)
    {
        printf("*");
    }

    return 0;
}
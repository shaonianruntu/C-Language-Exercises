/*
 * 班级每个学生的数据包括学号，姓名，性别，年龄和三门课的成绩。输入 n 个
 * 学生的数据，要求打印三门课的总平均成绩，以及最高分的学生的所有数据。
 * 用结构体数组，数组遍历用指针方式。求平均分和最高分用函数。
 */

#include<stdio.h>
/*学生信息结构体*/
struct student
{
    int number;
    char name[20];
    char sex;
    int age;
    float yuwen,shuxue,yingyu;
    float sum;
}stu[100];
/*子函数max用来计较各个结构体中sum成员的大小(将个人平均分的比较转化为个人总成绩的比较)*/
int max(struct student *a,int n)
{
    int j,m=0;
    for(j=1;j<n;j++)
    {
        if((a+j)->sum>(a+m)->sum)
        {
            m=j;
        }
    }
    return m;
}
/*计算每门科目的平均分*/
void yuwen(struct student*a,int n)
{
    int i;
    a->yuwen=0;
    for (i=1; i<=n; i++)
    {
        a->yuwen+=((a+i)->yuwen);
    }
}
void shuxue(struct student*a,int n)
{
    int i;
    a->shuxue=0;
    for (i=1; i<=n; i++)
    {
        a->shuxue+=((a+i)->shuxue);
    }
}
void yingyu(struct student*a,int n)
{
    int i;
    a->yingyu=0;
    for (i=1; i<=n; i++)
    {
        a->yingyu+=((a+i)->yingyu);
    }
}


int main(void)
{
    int i=0,n=1,k;
    /*要求用户输入这五个同学的信息*/
    do
    {
        i++;

        printf("请输入第%d个同学的学号：",i);
        scanf("%d",&stu[i].number);
        printf("请输入他的姓名：");
        scanf("%s",stu[i].name);
        printf("请输入他的性别(M/W)：");
        scanf("%s",&stu[i].sex);
        printf("请输入他的年龄：");
        scanf("%d",&stu[i].age);
        printf("请输入他的语文成绩：");
        scanf("%f",&stu[i].yuwen);
        printf("请输入他的数学成绩：");
        scanf("%f",&stu[i].shuxue);
        printf("请输入他的英语成绩：");
        scanf("%f",&stu[i].yingyu);
        printf("\n");
        printf("请问您是否还要添加学生（是请输入1，否请输入0）:");
        scanf("%d",&n);

        /*计算三门成绩的总和*/
        stu[i].sum=stu[i].yuwen+stu[i].shuxue+stu[i].yingyu;
    }while (n==1);

    /*计算每门功课的总分*/
    yuwen(stu,i);
    shuxue(stu,i);
    yingyu(stu,i);


    /*得出总成绩最大的那个人的编号*/
    k=max(stu,5);

    /*绘制输入与输出的分隔符*/
    for(n=0;n<80;n++)
    {
        printf("*");
    }
    printf("\n本次考试各门功课的平均分为：语文%.2f，数学%.2f，英语%.2f。\n",stu[0].yuwen/i,stu[0].shuxue/i,stu[0].yingyu/i);
    printf("\n本次考试个人平均分最高的同学为：\n");

    /*输出符合要求的同学的信息*/
    printf("学号  姓名      性别  年龄  语文成绩  数学成绩  英语成绩\n");
    printf("%02d    %-10s%c     %-6d%-10.1f%-10.1f%-10.1f\n\n",stu[k].number,stu[k].name,stu[k].sex,stu[k].age,stu[k].yuwen,stu[k].shuxue,stu[k].yingyu);

    /*分割输出*/
    for(n=0;n<80;n++)
    {
        printf("*");
    }

    return 0;
}

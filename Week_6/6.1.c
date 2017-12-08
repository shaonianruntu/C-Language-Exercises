/*
 * 编一个程序，输入 3 名职工的姓名、基本工资和职务工资，统计并输出工资总和最高和
 * 最低的职工姓名、基本工资、职务工资及其工资总和。
 */

#include<stdio.h>
/*用people[0~2]来记录这三个人的信息*/
struct people
{
    char name[20];
    double jibengongzi;
    double zhiwugongzi;
    double sum;
}people[3];

int main()
{
    int i,k;//i用于计数，k用于记录总工资最多和最少的那个人是第几个

    /*提示用户输入三个人的基本信息*/
    for(i=0;i<3;i++)
    {
        printf("请输入第%d个人的姓名：",i+1);
        scanf("%s",people[i].name);
        printf("请输入他的基本工资：");
        scanf("%lf",&people[i].jibengongzi);
        printf("请输入他的职务工资：");
        scanf("%lf",&people[i].zhiwugongzi);

        people[i].sum=people[i].jibengongzi+people[i].zhiwugongzi;

        printf("\n");
    }

    /*分割输入与输出，方面判断哪些才是输出的内容*/
    for(i=0;i<30;i++)
        printf("*");

    printf("\n\n");

    /*求总工资最多的那个人*/
    for(i=1,k=0;i<3;i++)
    {
        if(people[i].sum>people[0].sum)
            k=i;//记录总工资最多的那个人的号码
    }
    printf("获得最高工资的人是：");
    puts(people[k].name);
    printf("他的基本工资为：%.2lf\n职务工资为：%.2lf\n总工资为：%.2lf\n",people[k].jibengongzi,people[k].zhiwugongzi,people[k].sum);
    printf("\n");

    /*求总工资最少的那个人*/
    for(i=0,k=0;i<3;i++)
    {
        if(people[i].sum<people[0].sum)
            k=i;//记录总工资最少的那个人的号码
    }
    printf("获得最低工资的人是：");
    puts(people[0].name);
    printf("他的基本工资为：%.2lf\n职务工资为：%.2lf\n总工资为：%.2lf\n",people[k].jibengongzi,people[0].zhiwugongzi,people[0].sum);
    printf("\n");

    /*结束输出*/
    for(i=0;i<30;i++)
        printf("*");

    printf("\n");

    return 0;
}
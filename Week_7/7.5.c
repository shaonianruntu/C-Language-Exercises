/*
 * 建立一个链表，每个节点包括职工号和工资。用 malloc 函数开辟新节点，链
 * 表包括 3 个节点，节点数据从键盘输入。用 create 函数创建节点， list 函数遍历
 * 节点并输出。
 */

#include<stdio.h>
#include<stdlib.h>
/*创建一个记录职工信息的链表*/
struct staff
{
    char number[20];
    float salary;
    struct staff *next;
};
/*create函数用来创建新的节点*/
struct staff *create(struct staff *head);
/*list函数用来遍历链表和输出*/
void list(struct staff *head);

/*主函数*/
int main(void)
{
    struct staff *head;//定义链表头
    head=(struct staff *)malloc(sizeof(struct staff));
    int i;
    printf("请输入这三个员工的职工号和工资:\n");
    scanf("%s%f",head->number,&head->salary);//获取第一个员工的信息
    head->next=NULL;//定义链表尾
    
    /*为另外两个员工建立节点*/
    for(i=1;i<3;i++)
        head=create(head);

    printf("输出:\n");
    /*遍历链表并输出*/
    list(head);
    return 0;
}

struct staff *create(struct staff *head)
{
    struct staff *p,*pnew,*pold;
    pnew=(struct staff *)malloc(sizeof(struct staff));//建立新的节点
    scanf("%s%f",pnew->number,&pnew->salary);
    p=head;//p指向链表的头
    pold=p;//初始化pold指向链表头
    p=p->next;//p指向下一个数字
    pnew->next=p;//pnew用于记录这个数的位置
    pold->next=pnew;//pold用于记录上一个数的位置
    return head;
}

void list(struct staff *head)
{
    struct staff *p=head;//p指向链表的头
    while(p!=NULL)//从链表头开始遍历链表
    {
        printf("%-10s￥%.2f\n",p->number,p->salary);
        p=p->next;//p指向下一个节点
    }
}

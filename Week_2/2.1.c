/*
 * 编程：写两个函数，分别求两个整数的最大公约数和最小公倍数，用主函数
 * 调用这两个函数并输出结果。两个整数由键盘输入。
 */

#include<stdio.h>
#include<stdio.h>
int max(int a,int b);
int main(void)
{
    int a,b,Max,Min,t;
    printf("请输入两个数：");
    scanf("%d %d",&a,&b);
    if(a<b)//将这两书中的最大数设为a,便于运行max函数
    {
        t=a;
        a=b;
        b=t;
    }
    Max=max(a,b);
    Min=(a*b)/Max;//最小公倍数等于两数之积除与最大公约数
    printf("最大公约数是%d\n",Max);
    printf("最小公倍数是%d\n",Min);
	return 0;
}


int max(int a,int b)
{
	int m;
	while(a%b!=0)//辗除法
	{
	m=a%b;
	a=b;
	b=m;
	}
	return(b);
}


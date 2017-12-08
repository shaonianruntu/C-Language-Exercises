/*
 * 写一个判断素数的函数，在主函数输入一个整数，输出是否是素数的信息。
 */

#include<stdio.h>
int main(void)
{
	int a,i;
	printf("请输入一个整数：");
	scanf("%d",&a);//获取一个数，记为a
	if(a<2)
		printf("%d不是素数\n",a);
	else
	{
		for(i=2;i<=a/2;i++)//将a依次除以从2开始的数，直至它本身大小的一半，判断是否有整除数
		{
            if(a%i==0)
			{
				printf("%d不是素数\n",a);//如果可以整除，则a不是素数
				return;//结束整个函数
			}
		}
        printf("%d是素数\n",a);//如果不能整除，则a为素数
	}
	return 0;
}
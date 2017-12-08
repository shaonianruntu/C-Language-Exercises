/*
 * 编程序计算一个一维数组中所有元素的和。
 */

#include <stdio.h>
#include <string.h>
char array_c[100];
int array_i[100];
int i, j, n;
int sum = 0;
int main(void)
{
	puts("请输入一个一维数组：");
	gets(array_c);//将输入的数组存储在char类型的数组中
	n = strlen(array_c);//获取数组长度
	for (i = 0; i < n; i++)//将字符转化为数字，并将这写数字储存在新数组array_i中
	{
		if (array_c[i] != ' ')
		{
			array_i[j] = array_i[j] * 10 + array_c[i] - '0';
		}
		else j++;
	}
	for (i = 0; i < j + 1; i++)//对array_c中的各个数据进行求和，存储在sum中
	{
		sum += array_i[i];
	}
	printf("这个数组的和是：%d", sum);
	return 0;
}
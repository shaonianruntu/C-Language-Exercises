/*
 * 编写函数，对一个字符串提取其中的英文字母，去掉其他的字符。然后全部
 * 改成小写后按照a-z的顺序排序，排序结果返回主函数输出。
 */

#include<stdio.h>
#include<string.h>
/*提取a数组中的英文字母，去掉其他的字符*/
void change(char *a, char *b)
{
	int i, j = 0;
	for (i = 0; *(a + i) != '\0'; i++)
	{
		if ((*(a + i) >= 'a'&&*(a + i) <= 'z') || (*(a + i) >= 'A'&&*(a + i) <= 'Z'))//只识别英文字母
		{
			*(b + j) = *(a + i);//把a中的英文字母复制到b中
			j++;
		}
	}
	*(b + j) = '\0';//结束b数组
}
/*将大写字母转化为小写字母*/
void xiaoxie(char *b)
{
	int i;
	for (i = 0; *(b + i) != '\0'; i++)
	{
		if (*(b + i) >= 'A'&&*(b + i) <= 'Z')//识别大写字母
			*(b + i) = *(b + i) + 32;//通过ASCII码转化为小写
	}
}
/*将b数组按照a-z的顺序排序*/
void paixu(char *b)
{
	int n = 0, i, j;
	char temp;
	for (i = 0; *(b + i) != '\0'; i++)
		n++;//得到b数组的长度
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n - i-1; j++)//冒泡排序
		{
			if (*(b + j) > *(b + j + 1))//交换不符合顺序的字母
			{
				temp = *(b + j);
				*(b + j) = *(b + j + 1);
				*(b + j + 1) = temp;
			}
		}
	}
}

int main(void)
{
	char a[100], b[100];
	int i;
	printf("Please input an string:");
	gets(a);
	change(a, b);
	xiaoxie(b);
	paixu(b);
	printf("变换后的新数组为：");
	puts(b);
	return 0;
}
/*
 * 编写一个函数判断一个字符串是否为回文。字符串在主函数中输入，然后调
 * 用子函数进行判断。然后在主函数中将结果输出给用户。
 */

#include<stdio.h>
int panduan(char a[])
{
	int i, j,n;
	n=strlen(a);
	for (i = 0, j = n - 1; i <= j; i++, j--)//首尾互相开进比较此时的首尾是否相应
	{
		if (a[i] != a[j])
			return 0;//如果存在一个首尾不相应就返回0
	}
	return 1;//如果一直相应就返回1
}

int main(void)
{
	int  shifou;
	char arr[100];
	printf("请输入一个字符串：");
	gets(arr);
	shifou=panduan(arr);
	if (0 == shifou) printf("该字符串不是回文串\n");
	else printf("该字符串是回文串\n");
	return 0;
}

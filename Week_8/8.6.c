/*
 * 对字符串进行模式匹配，即查找一个字符串是否是另一个字符串的子串，如
 * S:aaaaabababcaaa， T:ababc，那么 T 是 S 的子串。如果找到，那么输出子串
 * 的起始位置，如例子中是 6（可以使用 KMP 算法）。
 */

#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100], b[100];
	int x;
	printf("Please input a string:\n");
	gets(a);
	printf("Please input the string you want to find:\n");
	gets(b);
	if (strstr(a, b))//调用strstr函数，如果在字符串a中存在字符串b，则有返回值，否则返回值为NULL
	{
		x = strstr(a, b)-&a;//strstr函数的返回值为b在a中第一次出现时的地址，减去a的起始地址就为b在a中的a[几]开始
		printf("你所找的字符串从原字符串的第%d位开始！", x + 1);
	}
	else
		printf("在原字符串中没有找到你要寻找的字符串！\n");
	return 0;
}
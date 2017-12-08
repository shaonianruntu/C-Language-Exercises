/*
 * 把s字符串中的所有字母改写成该字母的下一个字符，字母z改写成字母a。要
 * 求大写字母仍为大写字母，小写字母仍为小写字母，其他字符不做改变。请
 * 编写函数chg(char *s)实现程序的要求。
 */

#include<stdio.h>
void chg(char *s)
{
	int i;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a'&&s[i] < 'z')//将小写字母的ASCII码加1
			s[i] = s[i] + 1;
		else
		{
			if (s[i] == 'z') s[i] = 'a';//z加1变成a
			else
			{
				if (s[i] >= 'A'&&s[i] < 'Z')//将大写字母的ASCII码加1
					s[i] = s[i] + 1;
				else
					if (s[i] == 'Z') s[i] = 'A';//Z加1变成A
			}
		}
	}
}

int main(void)
{
	char s[100];
	printf("请输入字符串s：");
	gets(s);
	chg(s);
	printf("变换后的新数组为：");
	puts(s);
	return 0;
}
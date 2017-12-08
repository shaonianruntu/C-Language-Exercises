/*
 * 从键盘输入一个字符串，将小写字母全部转换成大写字母，然后输出到一个
 * 磁盘文件“test.txt”中保存。输入的字符串以！结束。
 */

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;//文件结构类指针
	char ch; 
	if (!(fp = fopen("e:\\text.txt", "w")))//创建text.txt文档，并将文件指针指向该文件
	{
		printf("Error");
		exit(1);
	}
	printf("请输入一段字符串:");
	ch = getchar();
	while (ch != '!')
	{
		if (ch >= 'a'&&ch <= 'z')
			ch = ch - 32;
		fputc(ch, fp);
		ch = getchar();
	}
	fclose(fp);
	return 0;
}
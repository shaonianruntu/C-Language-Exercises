/*
 * 有两个磁盘文件 A.txt 和 B.txt,各存放一行字母，要求把这两个文件中的信息
 * 合并，输出到一个新文件 C 中。
 */ 

#include<stdio.h>
#include<stdlib.h>

int main()
{
	FILE *fp,*intention;
	int ch;
	intention = fopen("e:\\c.txt", "a");
	fp=fopen("e:\\a.txt", "r");
	while(!feof(fp))
	{
		ch = fgetc(fp);
		fputc(ch, intention);
	}
	fclose(fp);
	fp = fopen("e:\\b.txt", "r");
	while (!feof(fp))
	{
		ch = getc(fp);
		fputc(ch, intention);
	}
	fclose(fp);
	fclose(intention);
	return 0;
}
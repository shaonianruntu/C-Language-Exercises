/*
 * 编写程序实现拷贝一个文件的内容到另一个文件，源文件名和目标文件名由
 * 键盘输入。
 */

#include<stdio.h>
#include<stdlib.h>
static void copyFile(FILE *source, FILE *intention);
static FILE *openFile(char *prompt, char *mode);
int main()
{
	FILE *source, *intention;
	printf("This progrom copies one file to anther.\n");
	source = openFile("source:", "r");
	intention = openFile("intention:", "w");
	copyFile(source, intention);
	fclose(source);
	fclose(intention);
	return 0;
}

static void copyFile(FILE *source, FILE *intention)
{
	int ch;
	while ((ch = getc(source)) != EOF) putc(ch, intention);
}

static FILE *openFile(char *prompt,char *mode)
{
	char tmpFile[20];
	FILE *reval = NULL;
	while (1)
	{
		printf("%s", prompt);
		gets(tmpFile);
		reval = fopen(tmpFile, mode);
		if (reval != NULL) break;
		printf("Can't open the file\"%s\"\n", tmpFile);
		exit(1);
	}
	return reval;
}
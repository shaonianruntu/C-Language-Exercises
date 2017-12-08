/*
 * 用指针实现两个字符串连接函数，参数为需要连接的 2 个字符串，如“ abc”，
 * “ edf”，则返回“ abcedf”。
 */

#include <stdio.h>
#include <stdlib.h>
int main(void)
{
      char a[100],b[100],c[200];
      char *p1,*p2,*p3;
      printf("请输入一个字符串:");
      gets(a);
      printf("请再输入一个字符串:");
      gets(b);

      /*获得各个数组被计算机自动分配后的起始位置*/
      p1=a;
      p2=b;
      p3=c;

      while(*p1!='\0')
      {
          *p3++=*p1++;//将数组a逐一复制到数组c中
      }
      while(*p2!='\0')
      {
         *p3++=*p2++;//将数组b逐一复制到数组c中
      }
      printf("新数组为：");
      puts(c);//输出数组c
      return 0;
}
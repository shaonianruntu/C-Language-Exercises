/*
 * 求出5000以下符合条件的自然数。条件是：千位数字与百位数字之和等于十
 * 位数字与个位数字之和，且千位数字与百位数字之和等于个位数字与千位数
 * 字之差的10倍。计算并输出这些四位自然数的个数cnt以及这些数的和sum。
 */

#include<stdio.h>
#include<math.h>
int main(void)
{
	int i,cnt=0,sum=0;
	int qian, bai, shi, ge;
	for (i = 1000; i < 5000; i++)
	{
		/*分离出个千位百位十位个位的数字*/
		qian = i / 1000;
		bai = i / 100 - qian * 10;
		shi = i / 10 - i / 100 * 10;
		ge = i % 10;

		if ((qian + bai == shi + ge) && (qian + bai == fabs(ge - qian) * 10))
		{
			cnt++;
			sum += i;
		}
	}
	printf("这些数字的个数是%d,和为%d。\n",cnt,sum);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c

////打印100-200间的素数
//int main()
//{
//
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;//1
//			}
//		}//1
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////优化后
//int main()
//{
//
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//改为跳过偶数
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//开平方根方法更为简便
//		{
//			if (i % j == 0)
//			{
//				break;//1
//			}
//		}//1
//		if (j > sqrt(i))//确保是整数大于
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//求1-100出现的数字9的个数
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)//不加else执行两次if，避免忽略99
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

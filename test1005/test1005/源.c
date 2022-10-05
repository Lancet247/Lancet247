#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>//c

//求出1-100分数之和，其中偶数分数为负数
//int main()
//{
//	double sum = 0;
//	int n = 0;
//	int m = 0;
//	for (n = 2; n <= 102; n +=2)
//	{
//		//sum = sum + 1 / m - 1 / n;//此处/表示了余数，导致sum一直为0
//		m = n - 1;
//		sum = sum + 1.0 / m - 1.0 / n;
//	}
//	printf("%lf", sum);//打印double需要用lf
//	return 0;
//}

//十个数中的最大值
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d \n", max);
//	return 0;
//}

//输出乘法口诀表
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			ret = a * b;
//			printf("%d*%d=%d ", a, b, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//猜数字游戏
void menu()
{
	printf("*****1.play    2.quit*****");
}

void game()
{
	int a = 0;
	int guess = 0;
	a = rand() % 100 + 1;//生成随机数
	
	while (1)
	{
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > a)
		{
		printf("猜大了\n");
		}
		else if (guess < a)
		{
		printf("猜小了\n");
		}
		else
		{
		printf("对了\n");
		break;
		}
	}
	//srand(1);//凭时间戳设置随机数起点
	//int ret = rand();//生成随机数，不包括srand函数时该函数系统每次结果相同
}

int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("请选择：");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();//程序 主体
				break;
			case 2:
				printf("结束");
				break;
			default:
				printf("选择错误");
				break;


		}
	} while (input != 2);
	return 0;
}
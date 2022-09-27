#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>//c


////do while循环
//int main()
//{//打印1-10
//	int i = 1;
//	do
//	{//需要大括号，不可省略
//		printf("%d ", i);
//		i++;
//	} 
//	while (i <= 10);
//	return 0;
//}

////n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int jie = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		jie = jie * i;
//	}
//	printf("%d", jie);//不考虑溢出情况
//	return 0;
//}

//求1!+2!+...10!
int main()
{
	int i = 0;
	int n = 0;
	int jie = 1;
	int sum = 0;
	for (n = 1; n <= 3; n++)
	{
		jie = 1;//需重新赋值jie
		for (i = 1; i <= n; i++)
		{
			jie = jie * i;
		}
		sum = sum + jie;
	}
	printf("%d", sum);
	return 0;
}
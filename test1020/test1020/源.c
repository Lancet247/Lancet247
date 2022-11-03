#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//描述第n个斐波那契数
//int count = 0;
//int Fib(int n)
//{
//	;
//	if (n == 3)
//	{
//		count++;
//	}
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//测试驱动开发TDD（先考虑函数用法再编写函数）
//	ret = Fib(n);
//	printf("ret = %d\n", ret);
//	printf("count = %d\n", count);
//
//	return 0;
//}

//嵌套方式会导致运算量太大
//循环方式求斐波那契
int Fib(int n)
{
	int a = 1;
	int b = 1;
	int c = 0;
	while (n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	//测试驱动开发TDD（先考虑函数用法再编写函数）
	ret = Fib(n);
	printf("ret = %d\n", ret);
	return 0;
}
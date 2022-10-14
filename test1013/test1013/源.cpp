#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

#include"add.h"//引用该文件内部的函数头文件

int main()
{
	int a = 9;
	int b = 82;
	int sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

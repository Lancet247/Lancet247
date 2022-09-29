#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	int a = 10;//申请了四个字节的空间
//	printf("%p\n", &a);
//
//	return 0;
////}
//int main()
//{
//	double d = 3.14;
//	double* pd = &d;
//	*pd = 5.5;
//	printf("%d\n", sizeof(pd));
//	printf("% lf\n", d);
//	printf("% lf\n", *pd);
//	return 0;
//}

struct book
{
	char name[20];//设计
	short price;//55
};//分号结束定义

int main()
{
	struct book b = {"程序设计",55};
	printf("书名：%s\n", b.name);
	printf("价格：%s\n", b.price);
	return 0;
}
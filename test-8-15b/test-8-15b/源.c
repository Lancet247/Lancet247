#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

struct book
{
	char name[20];//设计
	short price;//55
};

int main()
{
	struct book b1 = { "程序设计",55 };
	struct book* pb = &b1;
	//printf("%s\n", (*pb).name);//*为指针标记
	//printf("%d\n", (*pb).price);
	printf("%s\n", pb->name);//*为指针标记
	printf("%d\n", pb->price);

	/*printf("书名：%s\n", b1.name);
	printf("价格：%d\n", b1.price);
	b1.price = 50;
	printf("修改后的价格：%d\n", b1.price);*/
	return 0;
}
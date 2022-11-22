#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	int a = (int)3.14;
//	return 0;
//}



//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("a = %d\n", a);//过于复杂，需避免该种写法
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}



//指针类型决定了解引用操作时能够访问空间的大小
//char* p只能改变一位字节 int四位，double八位
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//58
//	printf("%p\n", pa + 1);//5c(+4)
//	printf("%p\n", pc);//58
//	printf("%p\n", pc + 1);//59(+1)
//	//double类型(+8)
//	return 0;
//}



int main()
{
	int arr[10] = { 0 };
	int* p = arr;//数组名-首元素地址
	//当int为char时，只能改前十个字节的内容
	//将数组元素全改成1
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}


	return 0;
}

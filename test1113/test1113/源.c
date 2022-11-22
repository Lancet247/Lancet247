#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//首元素的地址
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	//1.&arr-不是首元素地址，数组名表示整个数组，取地址数组名取出的是整个数组的地址。
//	//2.sizeof(arr)-数组名表示整个数组，计算的是整个数组的大小，单位为字节。
//
//	return 0;
//}



//int main()
//{
//	int arr[10];
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		//printf("%p ------ %p\n", p + i, &arr[i]);
//		*(p + i) = i;
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}



int main()
{
	int a = 0;
	int* pa = a;
	int** ppa = pa;


	return 0;
}
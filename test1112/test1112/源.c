#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	int a = 10;
//	int* pa = &a;//指针变量初始化
//	int* p = NULL;//先声明位置，null为空值
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//置成空指针，指针不指向其他
//	if (pa != NULL)//判断是否为空指针
//	{
//
//	}
//	return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[1]);
//	int* p = arr;
//	//for (i = 0; i < sz; i++)
//	//{
//	//	printf("%d ", *p);
//	//	p = p + 1;
//	//}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *p);
//		p = p + 2;
//	}
//		return 0;
//}



//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%d\n", &arr[9] - &arr[0]);//指针减去指针结果为指针之间的元素个数
//	return 0;
//}



//求字符串长度
int strl(char* str)
{
	char* start = str;
	char* end = str;
	while (*end != '\0')
	{
		end++;
	}
	return end - start;
}
int main()
{
	char arr[] = "bit";
	int len = strl(arr);
	printf("%d", len);
	return 0;
}
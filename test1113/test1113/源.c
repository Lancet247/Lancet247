#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	int arr[10];
//	printf("%p\n", arr);//��Ԫ�صĵ�ַ
//	printf("%p\n", arr + 1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0] + 1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr + 1);
//
//	//1.&arr-������Ԫ�ص�ַ����������ʾ�������飬ȡ��ַ������ȡ��������������ĵ�ַ��
//	//2.sizeof(arr)-��������ʾ�������飬���������������Ĵ�С����λΪ�ֽڡ�
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
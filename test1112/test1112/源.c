#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//int main()
//{
//	int a = 10;
//	int* pa = &a;//ָ�������ʼ��
//	int* p = NULL;//������λ�ã�nullΪ��ֵ
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	pa = NULL;//�óɿ�ָ�룬ָ�벻ָ������
//	if (pa != NULL)//�ж��Ƿ�Ϊ��ָ��
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
//	printf("%d\n", &arr[9] - &arr[0]);//ָ���ȥָ����Ϊָ��֮���Ԫ�ظ���
//	return 0;
//}



//���ַ�������
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
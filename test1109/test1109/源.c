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
//	printf("a = %d\n", a);//���ڸ��ӣ���������д��
//	return 0;
//}



//int main()
//{
//	int a = 10;
//	int* p = &a;
//	return 0;
//}



//ָ�����;����˽����ò���ʱ�ܹ����ʿռ�Ĵ�С
//char* pֻ�ܸı�һλ�ֽ� int��λ��double��λ
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n", pa);//58
//	printf("%p\n", pa + 1);//5c(+4)
//	printf("%p\n", pc);//58
//	printf("%p\n", pc + 1);//59(+1)
//	//double����(+8)
//	return 0;
//}



int main()
{
	int arr[10] = { 0 };
	int* p = arr;//������-��Ԫ�ص�ַ
	//��intΪcharʱ��ֻ�ܸ�ǰʮ���ֽڵ�����
	//������Ԫ��ȫ�ĳ�1
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		*(p + i) = 1;
	}


	return 0;
}

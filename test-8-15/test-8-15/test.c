#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//
//int main()
//{
//	int a = 10;//�������ĸ��ֽڵĿռ�
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
	char name[20];//���
	short price;//55
};//�ֺŽ�������

int main()
{
	struct book b = {"�������",55};
	printf("������%s\n", b.name);
	printf("�۸�%s\n", b.price);
	return 0;
}
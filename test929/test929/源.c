#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include <string.h>//c

////����С��������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//����scanf��%d֮�䲻��Ҫ�Ӷ��������˶�����Ҫ��֤�����ʽ�͡����ڸ�ʽ��ͬ
//
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}//����ifʹ��aӵ�����ֵ
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d,%d,%d", a, b, c);
//	return 0;
//}

//����С��Լ��
int main()
{
	int m = 0;
	int n = 0;
	int r = 0;
	scanf("%d%d", &m, &n);
	while (m % n)
	{
		r = m % n;
		m = n;
		n=r;
	}
	printf("%d\n", n);
	return 0;
}
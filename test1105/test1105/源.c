#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//int a = 5 / 2;//��2��1 a=2
//	//int a = 5 % 2;//a=1
//	double a = 5 / 2.0;//������
//	printf("%d\n", a);
//	printf("%lf\n", a);//��ӡ������lf
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	int b = a >> 1;//��λ������
//	//�������ƣ����Ϊ�ұ߶�������߲���ԭ����λ��Ĭ��Ϊ�������ơ�
//	//�߼����ƣ��ұ߶�������߲��㡣
//	//����һλ�г�����Ч��
//	printf("%d\n", b);
//	return 0;
//}



//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//��λ��
//	//011
//	//101
//	//001
//	printf("%d", c);
//	return 0;
//}



//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a | b;//��λ��
//	//011
//	//101
//	//111
//	printf("%d", c);
//	return 0;
//}



//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;//��λ���
//	//011
//	//101
//	//110
//	printf("%d", c);
//	return 0;
//}



//�������ʱ��������������ֵ
int main()
{
	int a = 8;
	int b = 7;
	//�Ӽ������--���ܻ����
	//a = a + b;
	//b = a - b;
	//a = a - b;

	//�����
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d", a, b);
	return 0;
}
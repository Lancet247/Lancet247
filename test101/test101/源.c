#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c

////��ӡ100-200�������
//int main()
//{
//
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;//1
//			}
//		}//1
//		if (i == j)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}

////�Ż���
//int main()
//{
//
//	int i = 0;
//	for (i = 101; i <= 200; i+=2)//��Ϊ����ż��
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)//��ƽ����������Ϊ���
//		{
//			if (i % j == 0)
//			{
//				break;//1
//			}
//		}//1
//		if (j > sqrt(i))//ȷ������������
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//��1-100���ֵ�����9�ĸ���
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
		{
			count++;
		}
		if (i / 10 == 9)//����elseִ������if���������99
		{
			count++;
		}
	}
	printf("%d", count);
	return 0;
}

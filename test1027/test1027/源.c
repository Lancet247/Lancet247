#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


////������ӡ��������
//int main()
//{
//	char arr[] = "abcdef";
//	int i = 0;
//	for (i = 0; i < 7; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}


////ʵ�ַ���2
//int main()
//{
//	int test[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(test) / sizeof(test[0]);//test[0]ָ���ǵ���Ԫ�ش�С
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", test[i]);
//	}
//	
//	return 0;
//}


////��ά���鶨�巽��
//int main()
//{
//	int arr[3][5] = { {1,2,3},{4,5,6} };//ǰһ��������������һ����������
//	return 0;
//}



//��ά�����ӡ
int main()
{
	int arr[3][3] = { {1,2,3},{5,6,7},{8,5,2} };
	int i = 0;
	int j = 0;
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			int k = arr[i][j];
			printf("%d ", k);
		}
		printf("\n");
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


//����
//int main()
//{
//	//int arr[10] = {1,2,3};//����ȫ��ʼ����ʣ��Ĭ��Ϊ0
//	//char arr2[5] = {'a','b'};//Ҳ��ֱ�ӷ��ζ�Ӧ��ĸ��ascii��
//	//char arr3[5] = "ab";//���ֳ�ʼ����ʽ��������ص�\0����������ֲ���
//	char arr4[] = "abcd";
//	printf("%d \n", sizeof(arr4));
//	//sizeof��õ�������Ԫ�ظ������������а������ص�\0
//	printf("%d \n", strlen(arr4));
//	//strlenֱ�����ַ�������
//	//int n = 5;
//	//char arr[n];//err���鶨����Ҫ����
//	return 0;
//}

int main()
{
	char arr[] = "abcd";
	printf("%c", arr[3]);
	return 0;
}
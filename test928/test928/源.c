#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <string.h>//c

////���ӽ׳��Ż�
//int main()
//{
//	int n = 1;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 3; n++)
//	{
//		ret = ret * n;
//		sum = sum + ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


////�������������ҵ�7
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (k == arr[i])
//		{
//			printf("�ҵ��ˣ��±�Ϊ%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("��Ŀ��");
//	return 0;
//}

////���ַ���������
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//����Ԫ�ظ���
//	int k = 7;//������k
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("���Ϊ%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}

//˫�߽����ַ������
int main()
{
	char arr1[] = { "welcome here" };
	char arr2[] = { "            " };
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//������ԭ��Ϊ����������/0Ԫ�أ�Ҳ����λ��
	int right = strlen(arr1) - 1;//ֱ������ַ����ȼ�һ��Ϊ�ַ�����λ
	
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//ͣ��
		system("cls");//�����Ļ
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}






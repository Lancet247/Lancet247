#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


//�����ڲ���ѯ��
//int numsearch(int arr[], int k, int sz)
//{
//	//�㷨��ʵ��
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//			return mid;
//	}
//	return -1;
//}
//
//int main()
//{
//	//���ֲ���
//	//�������漰���鳤�ȼ��㣨sz��ʱ������ֱ�Ӵ���arr��Ӧ�����������м���õ����鳤��sz�ٴ��ݵ�������
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	char input[20] = { 0 };
//	scanf("%d", &k);
//	printf("ȷ������%d��\n��",k);
//	scanf("%s", input);
//	if (strcmp(input, "ȷ��") == 0)
//	{
//		int ret = numsearch(arr, k, sz);
//		if (ret == -1)
//		{
//			printf("�Ҳ���");
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���%d\n", ret);
//		}
//	}
//	else
//	{
//		printf("��ȡ��");
//	}
//
//
//	return 0;
//}



//��������
//void add(int* p)
//{
//	(* p)++;//����ӣ����ᵼ������ִ��p++
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);//��Ҫ�ı�num��ֵ����Ҫ���õ�ַ����ֱ�Ӵ���num
//	printf("%d\n", num);
//	add(&num);//2
//	printf("%d\n", num); 
//	add(&num);//3
//	printf("%d\n", num);
//	
//	return 0;
//}

//Ƕ�׵��ã�����֧�ֻ������
//��ʽ����
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//��ʽ����Ϊ���print��ӡǰһ��print��ӡ�������ָ���
	return 0;
}
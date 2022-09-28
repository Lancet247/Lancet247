#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include <string.h>//c

////连加阶乘优化
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


////在有序数组中找到7
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
//			printf("找到了，下标为%d", i);
//			break;
//		}
//	}
//	if (i == sz)
//		printf("无目标");
//	return 0;
//}

////二分法查找数据
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算元素个数
//	int k = 7;//假设找k
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
//			printf("序号为%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}

//双边渐进字符串输出
int main()
{
	char arr1[] = { "welcome here" };
	char arr2[] = { "            " };
	int left = 0;
	//int right = sizeof(arr1) / sizeof(arr1[0]) - 2;//减二的原因为数组最后包含/0元素，也计入位数
	int right = strlen(arr1) - 1;//直接求得字符长度减一即为字符串的位
	
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		Sleep(500);//停顿
		system("cls");//清空屏幕
		left++;
		right--;
	}
	printf("%s", arr2);
	return 0;
}






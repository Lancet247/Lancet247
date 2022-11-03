#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


void bubble_sort(int arr[],int sz)//直接用主函数传递sz
{
	int i = 0;
	//int sz = sizeof(arr) / sizeof(arr[0]);//无法在函数内部通过此种方式得到字符串大小
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		int flag = 1;//引入flag判断有序情况，减少运算量
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
				flag = 0;//不有序
			}
		}
		if (flag == 1)
		{
			break;
		}
	}
}


int main()
{
	int i = 0;
	int arr[] = { 9,8,7,6,5,4,3,2,1 };//对arr排序 升序
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);//冒泡排序函数
	//冒泡的次数由元素个数决定，n个元素冒泡排序n-1次
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
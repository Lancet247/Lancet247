#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


////单独打印数组内容
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


////实现方法2
//int main()
//{
//	int test[] = {1,2,3,4,5,6,7,8,9,0};
//	int sz = sizeof(test) / sizeof(test[0]);//test[0]指的是单个元素大小
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", test[i]);
//	}
//	
//	return 0;
//}


////二维数组定义方法
//int main()
//{
//	int arr[3][5] = { {1,2,3},{4,5,6} };//前一个代表行数，后一个代表列数
//	return 0;
//}



//二维数组打印
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
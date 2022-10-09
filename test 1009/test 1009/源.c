#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


//数组内部查询数
//int numsearch(int arr[], int k, int sz)
//{
//	//算法的实现
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
//	//二分查找
//	//函数中涉及数组长度计算（sz）时，不能直接传递arr，应先在主函数中计算得到数组长度sz再传递到函数中
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	char input[20] = { 0 };
//	scanf("%d", &k);
//	printf("确定查找%d？\n：",k);
//	scanf("%s", input);
//	if (strcmp(input, "确定") == 0)
//	{
//		int ret = numsearch(arr, k, sz);
//		if (ret == -1)
//		{
//			printf("找不到");
//		}
//		else
//		{
//			printf("找到了，下标是%d\n", ret);
//		}
//	}
//	else
//	{
//		printf("已取消");
//	}
//
//
//	return 0;
//}



//计数程序
//void add(int* p)
//{
//	(* p)++;//不添加（）会导致优先执行p++
//}
//
//int main()
//{
//	int num = 0;
//	add(&num);//需要改变num的值，需要调用地址而非直接传递num
//	printf("%d\n", num);
//	add(&num);//2
//	printf("%d\n", num); 
//	add(&num);//3
//	printf("%d\n", num);
//	
//	return 0;
//}

//嵌套调用：函数支持互相调用
//链式访问
int main()
{
	printf("%d", printf("%d", printf("%d", 43)));//链式作用为外层print打印前一个print打印出的数字个数
	return 0;
}
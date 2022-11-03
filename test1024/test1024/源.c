#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


//数组
//int main()
//{
//	//int arr[10] = {1,2,3};//不完全初始化，剩下默认为0
//	//char arr2[5] = {'a','b'};//也可直接防治对应字母的ascii码
//	//char arr3[5] = "ab";//此种初始化方式会添加隐藏的\0，上面的那种不会
//	char arr4[] = "abcd";
//	printf("%d \n", sizeof(arr4));
//	//sizeof求得的是数组元素个数决定，其中包含隐藏的\0
//	printf("%d \n", strlen(arr4));
//	//strlen直接求字符串长度
//	//int n = 5;
//	//char arr[n];//err数组定义需要常量
//	return 0;
//}

int main()
{
	char arr[] = "abcd";
	printf("%c", arr[3]);
	return 0;
}
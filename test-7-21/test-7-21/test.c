#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	while (i < 10)
//	{
//	printf("%d\n", arr[i]);
//	i++;
//	}
//	return 0;
//}

int Add(int x, int y)
{
	int z = x + y;
		return z;
}
int main()
{
	int sum = 0;
	int num1 = 30;
	int num2 = 90;
	int num3 = 70;
	sum = num1 + num2;
	printf("sum = %d", sum);
	return 0;
}
// 
// 
// 
//int main()
//{
//	int line = 0; 
//	printf("start\n");
//	while (line < 20000)
//	{
//		printf("%d",line);
//		line++;
//	}
//	printf("complete");
//	return 0; 
//}

//int main()
//{
//	int input = 0;
//	printf("start\n");
//	printf("test question?(0/1)>:");
//	scanf("%d", &input);
//	if (input == 1)
//	printf("good");
//	else
//	printf("bad");
//	return 0;
//}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	scanf("%d%d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
//int main()
//{
//	int num = 1;
//	printf("num = %d\n", num);
//	num = 8;
//	printf("num = %d\n", num);
//	return 0;
//}
//enum Sex
//{
//	male,
//	female
//};
//int main()
//{
//	enum Sex s = male;
//	return 0;
//	}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
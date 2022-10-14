#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//递归
//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//}
//stack overflow 栈溢出（递归中常见错误）

//依次打印输入数字的每一位数字

//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);////////注意scanf需要加&！！！！！！！！！！！！！！！！
//	//递归
//	print(num);
//	return 0;
//}


//void print(unsigned int n)//123
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
//
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);//123
//	//递归 - 函数自己调用自己
//	print(num);//print函数可以打印参数部分数字的每一位
//
//	return 0;
//}



int my_strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[] = "bit";
	//['b']['i']['t']['\0']
	//
	//模拟实现一个strlen函数
	printf("%d\n", my_strlen(arr));

	return 0;
}


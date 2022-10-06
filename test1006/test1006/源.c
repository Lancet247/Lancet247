#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c

//int main()
//{
//again:
//	printf("huanyin ");//goto用法，可能会打乱逻辑顺序，尽量少用。主要用于多层嵌套循环语句的退出
//	goto again;
//	return 0;
//}

////关机程序设计
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown-s-t 60
//	//system用于执行系统命令
//	system("shutdown -s -t 60");
//	again:
//	printf("将在一分钟中内关机，请输入“取消”以取消关机:\n");
//	scanf("%s", input);
//	if (strcmp(input, "取消"))//strcmp专用于比较两个字符串区别
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}

////函数举例
//int add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);//注意不要忘记添加地址符号&
//	int sum = add(a, b);
//	printf("%d", sum);
//	return 0;
//}

////strcpy
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "asdkjlaksj";
//	strcpy(arr2, arr1);//复制字符串操作，前者为目标字符串，将会变化，注意不要溢出
//	printf("%s\n", arr2);
//	return 0;
//}


////memset
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//改写字符串前几位的操作
//	printf("%s\n", arr);
//	return 0;
//}


////自定义函数
//ret_type返回类型 fun_name函数名(para1, *)
//{
//	statement;//语句项
//}

////获取最大值
//int getmax(int x, int y)//定义代码
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
此处x、y为形式参数（形参），主函数中ab为实际参数（实参）
当实际参数传递给形式参数时，形参是实参的一份临时拷贝，对形参的修改不会影响实参。
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int max = getmax(a, b);//使用代码
//	printf("max = %d ", max);
//	return 0;

//交换变量值
void swit1(int x, int y)//void表示没有返回值
{
	int tmp = 0;
	tmp = x;
	x = y;
	y = tmp;//此方法只替换函数内xy，不替换ab，无法达到希望效果
}

void swit2(int* pa, int* pb)
{
	int tmp = 0;
	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	int* pa = &a;
	int* pb = &b;
	//*pa = 20;//解引用
	printf("a = %d\nb = %d\n", a, b);
	//swit1(a, b);
	swit2(&a, &b);
	printf("a = %d\nb = %d\n", a, b);
	return 0;
}
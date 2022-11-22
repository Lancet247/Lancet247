#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	//int a = 5 / 2;//商2余1 a=2
//	//int a = 5 % 2;//a=1
//	double a = 5 / 2.0;//浮点数
//	printf("%d\n", a);
//	printf("%lf\n", a);//打印浮点数lf
//	return 0;
//}

//int main()
//{
//	int a = 16;
//	int b = a >> 1;//移位操作符
//	//算数右移，结果为右边丢弃，左边补上原符号位，默认为算数右移。
//	//逻辑右移，右边丢弃，左边补零。
//	//右移一位有除二的效果
//	printf("%d\n", b);
//	return 0;
//}



//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a & b;//按位与
//	//011
//	//101
//	//001
//	printf("%d", c);
//	return 0;
//}



//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a | b;//按位或
//	//011
//	//101
//	//111
//	printf("%d", c);
//	return 0;
//}



//int main()
//{
//	int a = 3;//011
//	int b = 5;//101
//	int c = a ^ b;//按位异或
//	//011
//	//101
//	//110
//	printf("%d", c);
//	return 0;
//}



//不添加临时变量交换两个数值
int main()
{
	int a = 8;
	int b = 7;
	//加减法解决--可能会溢出
	//a = a + b;
	//b = a - b;
	//a = a - b;

	//异或处理
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d, b = %d", a, b);
	return 0;
}
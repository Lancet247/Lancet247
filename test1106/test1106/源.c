#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>



//求二进制数中一的个数
//int main()
//{
//	int num = 0;
//	int cnt = 0;
//	scanf("%d", &num);
//	while (num != 0)//不可以计算负数的1的数量
//	{
//		if (num % 2 == 1)
//		{
//			cnt++;
//			
//		}
//		num = num / 2;
//	}
//	printf("%d", cnt);
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int cnt = 0;
//	scanf("%d", &num);
//	//通过不断右移位数并于1异或得到1的个数
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (1 == ((num >> i) & 1))
//		{
//			cnt++;
//		}
//	}
//	printf("%d", cnt);
//	return 0;
//}



//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n", sizeof(s = a + 5));
//	//sizeof中不执行运算，输出仍然为s的类型。short只能存放两个字节，第一条输出结果为2
//	printf("%d\n", sizeof s);
//	//sizeof中不执行运算，s的值仍然没变。
//	return 0;
//}



//int main()
//{
//	int a = 0;
//	//按位取反
//	//00000000000000000000000000000000
//	//11111111111111111111111111111111--补码
//	//11111111111111111111111111111110--反码
//	//10000000000000000000000000000001--原码
//	//结果为-1
//	printf("%d\n", ~a);
//	return 0;
//}



int main()
{
	int a = 11;
	//00000000000000000000000000001011
	//要使得第三位变为1，利用或
	a = a | (1 << 2);//1左移两位
	printf("%d\n", a);
	return 0;
}
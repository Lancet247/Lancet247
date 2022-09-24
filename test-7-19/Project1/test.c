#include<stdio.h>

//int main()
//{
//	printf("%d\n", sizeof(char));
//	printf("%d\n", sizeof(short));
//	printf("%d\n", sizeof(int));
//	printf("%d\n", sizeof(long));
//	printf("%d\n", sizeof(long long));
//	printf("%d\n", sizeof(float));
//	printf("%d\n", sizeof(double));
//	return 0;
//}
//int main()
//{
//	float f = 5.0;
//	printf("%f\n", f);
//	return 0;
//}
//
//int global = 2019;//全局变量
//int main()
//{
//    int local = 2018;//局部变量
//    //下面定义的global会不会有问题？
//    int global = 2020;//局部变量
//    printf("global = %d\n", global);
//    return 0;
//}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf_s("%d%d", &num1, &num2);
	int sum = 0;
	sum = num1 + num2;
	printf("sum = %d\n",sum);
	return 0;
}
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	printf("输入两个操作数:>");
//	scanf_s("%d %d", &num1, &num2);
//	sum = num1 + num2;
//	printf("sum = %d\n", sum);
//	return 0;
//}
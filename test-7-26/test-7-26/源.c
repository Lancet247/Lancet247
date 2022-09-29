#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main()
{
	int a = 10;
	int* p = &a;
	printf("%p\n", &a);
	printf("%p\n", p);
	*p = 20;
	printf("a = % d", a);
	return 0;
}





//#define MAX(x,y)(x>y?x:y)
//int main()
//{
//	int a = 0;
//	int b = 3;
//	int max = 0;
//	max = MAX(a, b);
//	printf("max = %d", max);
//	return 0; 
//}




//extern int Add(int, int);
//int main()
//{
//	int a = 9;
//	int b = 0;
//	int sum = Add(a, b);
//	printf("sum=%d", sum);
//	return 0;
//}



//int main()
//{
//	extern int g_val;
//	printf("%d", g_val);
//	
//	return 0;
//
//}


//void test()
//{	
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}



//int main()
//{
//	int a = 80;
//	int b = 29;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("max =%d", max);
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>//c


int isprime(int n)
{
	int x = 0;
	for (x = 2; x < n; x ++)
	{
		if (n % x == 0)
			return 0;
	}
	return 1;
}

int main()
{
	//´òÓ¡100-200¼äËØÊý
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		if (isprime(i) == 1)
			printf("%d  ", i);
	}	
	return 0;
}

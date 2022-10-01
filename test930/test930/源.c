#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include <string.h>//c

int main()
{
	int y = 0;
	int count = 0;
	for (y = 1000; y <= 2000; y++)//È·¶¨·¶Î§
	{
		//if (y%4 == 0 && y%100 != 0)
		//{
		//	printf("%d ", y);
		//	count++;
		//}
		//else if (y%400 == 0)
		//{
		//	printf("%d ", y);
		//	count++;
		//}


		if (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0))
		{
			printf("%d ", y);
			count++;
		}
	}
	printf("\n%d", count);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<windows.h>
#include<math.h>
#include<stdlib.h>
#include <string.h>//c

//���1-100����֮�ͣ�����ż������Ϊ����
//int main()
//{
//	double sum = 0;
//	int n = 0;
//	int m = 0;
//	for (n = 2; n <= 102; n +=2)
//	{
//		//sum = sum + 1 / m - 1 / n;//�˴�/��ʾ������������sumһֱΪ0
//		m = n - 1;
//		sum = sum + 1.0 / m - 1.0 / n;
//	}
//	printf("%lf", sum);//��ӡdouble��Ҫ��lf
//	return 0;
//}

//ʮ�����е����ֵ
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max=%d \n", max);
//	return 0;
//}

//����˷��ھ���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int ret = 0;
//	for (a = 1; a <= 9; a++)
//	{
//		for (b = 1; b <= a; b++)
//		{
//			ret = a * b;
//			printf("%d*%d=%d ", a, b, ret);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//��������Ϸ
void menu()
{
	printf("*****1.play    2.quit*****");
}

void game()
{
	int a = 0;
	int guess = 0;
	a = rand() % 100 + 1;//���������
	
	while (1)
	{
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > a)
		{
		printf("�´���\n");
		}
		else if (guess < a)
		{
		printf("��С��\n");
		}
		else
		{
		printf("����\n");
		break;
		}
	}
	//srand(1);//ƾʱ���������������
	//int ret = rand();//�����������������srand����ʱ�ú���ϵͳÿ�ν����ͬ
}

int main()
{
	int input = 0;
	do 
	{
		menu();
		printf("��ѡ��");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();//���� ����
				break;
			case 2:
				printf("����");
				break;
			default:
				printf("ѡ�����");
				break;


		}
	} while (input != 2);
	return 0;
}
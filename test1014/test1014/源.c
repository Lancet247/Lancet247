#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//�ݹ�
//int main()
//{
//	printf("hehe");
//	main();
//	return 0;
//}
//stack overflow ջ������ݹ��г�������

//���δ�ӡ�������ֵ�ÿһλ����

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
//	scanf("%u", &num);////////ע��scanf��Ҫ��&��������������������������������
//	//�ݹ�
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
//	//�ݹ� - �����Լ������Լ�
//	print(num);//print�������Դ�ӡ�����������ֵ�ÿһλ
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
	//ģ��ʵ��һ��strlen����
	printf("%d\n", my_strlen(arr));

	return 0;
}

